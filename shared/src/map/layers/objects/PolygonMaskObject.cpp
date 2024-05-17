/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include "PolygonMaskObject.h"
#include "EarcutVec2D.h"
#include <unordered_map>

std::shared_ptr<PolygonMaskObjectInterface>
PolygonMaskObjectInterface::create(const std::shared_ptr<::GraphicsObjectFactoryInterface> &graphicsObjectFactory,
                                   const std::shared_ptr<::CoordinateConversionHelperInterface> &conversionHelper) {
    return std::make_shared<PolygonMaskObject>(graphicsObjectFactory, conversionHelper);
}

PolygonMaskObject::PolygonMaskObject(const std::shared_ptr<GraphicsObjectFactoryInterface> &graphicsObjectFactory,
                                     const std::shared_ptr<CoordinateConversionHelperInterface> &conversionHelper)
    : conversionHelper(conversionHelper)
    , polygon(graphicsObjectFactory->createPolygonMask()) {}

void PolygonMaskObject::setPositions(const std::vector<Coord> &positions, const std::vector<std::vector<Coord>> &holes) {
    setPolygon({positions, holes});
}

void PolygonMaskObject::setPolygon(const ::PolygonCoord &polygon) { setPolygons({polygon}); }

struct Edge {
    size_t v1, v2;
    Edge(size_t v1, size_t v2) : v1(v1 < v2 ? v1 : v2), v2(v1 < v2 ? v2 : v1) {}
    bool operator==(const Edge& other) const {
        return v1 == other.v1 && v2 == other.v2;
    }
    struct Hash {
        std::size_t operator()(const Edge& e) const {
            return std::hash<size_t>()(e.v1) ^ std::hash<size_t>()(e.v2);
        }
    };
};

void CatmullClarkSubdivide(std::vector<Vec2D>& vertices, std::vector<uint16_t>& indices) {
    std::vector<uint16_t> newIndices;
    std::unordered_map<Edge, size_t, Edge::Hash> edgeMidpoints;
    std::vector<Vec2D> newVertices = vertices;

    size_t originalVertexCount = vertices.size();

    for (size_t i = 0; i < indices.size(); i += 3) {
        uint16_t v0 = indices[i];
        uint16_t v1 = indices[i + 1];
        uint16_t v2 = indices[i + 2];

        // Calculate face centroid
        Vec2D centroid = {
            (vertices[v0].x + vertices[v1].x + vertices[v2].x) / 3.0f,
            (vertices[v0].y + vertices[v1].y + vertices[v2].y) / 3.0f
        };
        size_t centroidIndex = newVertices.size();
        newVertices.push_back(centroid);

        // Calculate midpoints of each edge
        auto getMidpointIndex = [&](size_t a, size_t b) {
            Edge edge(a, b);
            if (edgeMidpoints.find(edge) == edgeMidpoints.end()) {
                Vec2D midpoint = {
                    (vertices[a].x + vertices[b].x) / 2.0f,
                    (vertices[a].y + vertices[b].y) / 2.0f
                };
                size_t midpointIndex = newVertices.size();
                newVertices.push_back(midpoint);
                edgeMidpoints[edge] = midpointIndex;
            }
            return edgeMidpoints[edge];
        };

        size_t m01 = getMidpointIndex(v0, v1);
        size_t m12 = getMidpointIndex(v1, v2);
        size_t m20 = getMidpointIndex(v2, v0);

        // Create new triangles
        newIndices.push_back(v0);
        newIndices.push_back(m01);
        newIndices.push_back(centroidIndex);

        newIndices.push_back(m01);
        newIndices.push_back(v1);
        newIndices.push_back(centroidIndex);

        newIndices.push_back(v1);
        newIndices.push_back(m12);
        newIndices.push_back(centroidIndex);

        newIndices.push_back(m12);
        newIndices.push_back(v2);
        newIndices.push_back(centroidIndex);

        newIndices.push_back(v2);
        newIndices.push_back(m20);
        newIndices.push_back(centroidIndex);

        newIndices.push_back(m20);
        newIndices.push_back(v0);
        newIndices.push_back(centroidIndex);
    }

    // Replace old vertices and indices with new ones
    vertices = std::move(newVertices);
    indices = std::move(newIndices);
}

void PolygonMaskObject::setPolygons(const std::vector<::PolygonCoord> &polygons) {
    std::vector<uint16_t> indices;
    std::vector<float> vertices;
    int32_t indexOffset = 0;

    std::vector<Vec2D> vecVertices;

    for (auto const &polygon : polygons) {
        std::vector<std::vector<Vec2D>> renderCoords;
        std::vector<Vec2D> polygonCoords;
        for (const Coord &mapCoord : polygon.positions) {
            Coord renderCoord = conversionHelper->convertToRenderSystem(mapCoord);
            polygonCoords.push_back(Vec2D(renderCoord.x, renderCoord.y));
        }
        renderCoords.push_back(polygonCoords);

        for (const auto &hole : polygon.holes) {
            std::vector<::Vec2D> holeCoords;
            for (const Coord &coord : hole) {
                Coord renderCoord = conversionHelper->convertToRenderSystem(coord);
                holeCoords.push_back(Vec2D(renderCoord.x, renderCoord.y));
            }
            renderCoords.push_back(holeCoords);
        }
        std::vector<int32_t> curIndices = mapbox::earcut<int32_t>(renderCoords);

        for (auto const &index : curIndices) {
            indices.push_back(indexOffset + index);
        }

        for (auto const &list : renderCoords) {
            indexOffset += list.size();

            for(auto& i : list) {
                vecVertices.push_back(i);
            }
        }
    }


    CatmullClarkSubdivide(vecVertices, indices);
    CatmullClarkSubdivide(vecVertices, indices);
    CatmullClarkSubdivide(vecVertices, indices);

    vertices.clear();
    for (const auto& v : vecVertices) {
        vertices.push_back(v.x);
        vertices.push_back(v.y);
        vertices.push_back(1.0f);
    #ifdef __APPLE__
        vertices.push_back(0.0f);
        vertices.push_back(0.0f);
        vertices.push_back(0.0f);
        vertices.push_back(0.0f);
        vertices.push_back(0.0f);
    #endif
    }

    auto attr = SharedBytes((int64_t)vertices.data(), (int32_t)vertices.size(), (int32_t)sizeof(float));
    auto ind = SharedBytes((int64_t)indices.data(), (int32_t)indices.size(), (int32_t)sizeof(uint16_t));

    polygon->setVertices(attr, ind);
}

std::shared_ptr<Polygon2dInterface> PolygonMaskObject::getPolygonObject() { return polygon; }
