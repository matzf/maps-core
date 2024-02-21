// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <string>

class Tiled2dMapLayerConfig;
struct Tiled2dMapZoomInfo;

class DefaultTiled2dMapLayerConfigs {
public:
    virtual ~DefaultTiled2dMapLayerConfigs() = default;

    static /*not-null*/ std::shared_ptr<Tiled2dMapLayerConfig> webMercator(const std::string & layerName, const std::string & urlFormat);

    static /*not-null*/ std::shared_ptr<Tiled2dMapLayerConfig> webMercatorCustom(const std::string & layerName, const std::string & urlFormat, const Tiled2dMapZoomInfo & zoomInfo, int32_t minZoomLevel, int32_t maxZoomLevel);

    static /*not-null*/ std::shared_ptr<Tiled2dMapLayerConfig> epsg4326(const std::string & layerName, const std::string & urlFormat);

    static /*not-null*/ std::shared_ptr<Tiled2dMapLayerConfig> epsg4326Custom(const std::string & layerName, const std::string & urlFormat, const Tiled2dMapZoomInfo & zoomInfo, int32_t minZoomLevel, int32_t maxZoomLevel);
};
