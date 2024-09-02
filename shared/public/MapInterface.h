// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "Color.h"
#include "CoordinateConversionHelperInterface.h"
#include "GraphicsObjectFactoryInterface.h"
#include "RectCoord.h"
#include "RenderingContextInterface.h"
#include "SchedulerInterface.h"
#include "ShaderFactoryInterface.h"
#include "TouchHandlerInterface.h"
#include "Vec2I.h"
#include "ThreadPoolCallbacks.h"
#include <cstdint>
#include <memory>
#include <optional>
#include <vector>

class IndexedLayerInterface;
class LayerInterface;
class MapCallbackInterface;
class MapCamera2dInterface;
class MapReadyCallbackInterface;
struct MapConfig;

class MapInterface {
public:
    virtual ~MapInterface() = default;

    static /*not-null*/ std::shared_ptr<MapInterface> create(const /*not-null*/ std::shared_ptr<::GraphicsObjectFactoryInterface> & graphicsFactory, const /*not-null*/ std::shared_ptr<::ShaderFactoryInterface> & shaderFactory, const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & renderingContext, const MapConfig & mapConfig, const /*not-null*/ std::shared_ptr<::SchedulerInterface> & scheduler, float pixelDensity);

    static /*not-null*/ std::shared_ptr<MapInterface> createWithOpenGl(const MapConfig & mapConfig, float pixelDensity);

    virtual void setCallbackHandler(const /*nullable*/ std::shared_ptr<MapCallbackInterface> & callbackInterface) = 0;

    virtual /*not-null*/ std::shared_ptr<::GraphicsObjectFactoryInterface> getGraphicsObjectFactory() = 0;

    virtual /*not-null*/ std::shared_ptr<::ShaderFactoryInterface> getShaderFactory() = 0;

    virtual /*not-null*/ std::shared_ptr<::SchedulerInterface> getScheduler() = 0;

    virtual /*not-null*/ std::shared_ptr<::RenderingContextInterface> getRenderingContext() = 0;

    virtual MapConfig getMapConfig() = 0;

    virtual /*not-null*/ std::shared_ptr<::CoordinateConversionHelperInterface> getCoordinateConverterHelper() = 0;

    virtual void setCamera(const /*not-null*/ std::shared_ptr<MapCamera2dInterface> & camera) = 0;

    virtual /*not-null*/ std::shared_ptr<MapCamera2dInterface> getCamera() = 0;

    virtual void setTouchHandler(const /*not-null*/ std::shared_ptr<::TouchHandlerInterface> & touchHandler) = 0;

    virtual /*not-null*/ std::shared_ptr<::TouchHandlerInterface> getTouchHandler() = 0;

    virtual std::vector</*not-null*/ std::shared_ptr<LayerInterface>> getLayers() = 0;

    virtual std::vector</*not-null*/ std::shared_ptr<IndexedLayerInterface>> getLayersIndexed() = 0;

    virtual void addLayer(const /*not-null*/ std::shared_ptr<LayerInterface> & layer) = 0;

    virtual void insertLayerAt(const /*not-null*/ std::shared_ptr<LayerInterface> & layer, int32_t atIndex) = 0;

    virtual void insertLayerAbove(const /*not-null*/ std::shared_ptr<LayerInterface> & layer, const /*not-null*/ std::shared_ptr<LayerInterface> & above) = 0;

    virtual void insertLayerBelow(const /*not-null*/ std::shared_ptr<LayerInterface> & layer, const /*not-null*/ std::shared_ptr<LayerInterface> & below) = 0;

    virtual void removeLayer(const /*not-null*/ std::shared_ptr<LayerInterface> & layer) = 0;

    virtual void setViewportSize(const ::Vec2I & size) = 0;

    virtual void setBackgroundColor(const ::Color & color) = 0;

    virtual void invalidate() = 0;

    /** Must be called on the rendering thread! */
    virtual void drawFrame() = 0;

    /** Must be called on the rendering thread! */
    virtual void resume() = 0;

    /** Must be called on the rendering thread! */
    virtual void pause() = 0;

    virtual void destroy() = 0;

    /**
     * changes bounds to bounds, checks all layers for readiness, and updates callbacks, timeout in
     * seconds, always draw the frame when state is updated in the ready callbacks
     */
    virtual void drawReadyFrame(const ::RectCoord & bounds, float timeout, const /*not-null*/ std::shared_ptr<MapReadyCallbackInterface> & callbacks) = 0;

    virtual void forceReload() = 0;
};
