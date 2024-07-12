// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

#pragma once

#include "LayerInterface.h"
#include <cstdint>
#include <memory>
#include <vector>

class PolygonLayerCallbackInterface;
struct PolygonInfo;

class PolygonLayerInterface {
public:
    virtual ~PolygonLayerInterface() = default;

    static /*not-null*/ std::shared_ptr<PolygonLayerInterface> create();

    virtual void setPolygons(const std::vector<PolygonInfo> & polygons) = 0;

    virtual std::vector<PolygonInfo> getPolygons() = 0;

    virtual void remove(const PolygonInfo & polygon) = 0;

    virtual void add(const PolygonInfo & polygon) = 0;

    virtual void addAll(const std::vector<PolygonInfo> & polygons) = 0;

    virtual void clear() = 0;

    virtual void setCallbackHandler(const /*not-null*/ std::shared_ptr<PolygonLayerCallbackInterface> & handler) = 0;

    virtual /*not-null*/ std::shared_ptr<::LayerInterface> asLayerInterface() = 0;

    virtual void resetSelection() = 0;

    virtual void setLayerClickable(bool isLayerClickable) = 0;

    virtual void setRenderPassIndex(int32_t index) = 0;
};
