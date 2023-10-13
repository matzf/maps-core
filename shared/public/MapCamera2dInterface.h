// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "CameraInterface.h"
#include "Coord.h"
#include "MapCamera2dListenerInterface.h"
#include "RectCoord.h"
#include "Vec2F.h"
#include <memory>
#include <optional>
#include <vector>

class MapInterface;

class MapCamera2dInterface {
public:
    virtual ~MapCamera2dInterface() = default;

    static /*not-null*/ std::shared_ptr<MapCamera2dInterface> create(const /*not-null*/ std::shared_ptr<MapInterface> & mapInterface, float screenDensityPpi);

    virtual void freeze(bool freeze) = 0;

    virtual void moveToCenterPositionZoom(const ::Coord & centerPosition, double zoom, bool animated) = 0;

    virtual void moveToCenterPosition(const ::Coord & centerPosition, bool animated) = 0;

    virtual void moveToBoundingBox(const ::RectCoord & boundingBox, float paddingPc, bool animated, std::optional<double> minZoom, std::optional<double> maxZoom) = 0;

    virtual ::Coord getCenterPosition() = 0;

    virtual void setZoom(double zoom, bool animated) = 0;

    virtual double getZoom() = 0;

    virtual void setRotation(float angle, bool animated) = 0;

    virtual float getRotation() = 0;

    virtual void setMinZoom(double minZoom) = 0;

    virtual void setMaxZoom(double maxZoom) = 0;

    virtual double getMinZoom() = 0;

    virtual double getMaxZoom() = 0;

    virtual void setBounds(const ::RectCoord & bounds) = 0;

    virtual ::RectCoord getBounds() = 0;

    virtual bool isInBounds(const ::Coord & coords) = 0;

    virtual void setPaddingLeft(float padding) = 0;

    virtual void setPaddingRight(float padding) = 0;

    virtual void setPaddingTop(float padding) = 0;

    virtual void setPaddingBottom(float padding) = 0;

    virtual ::RectCoord getVisibleRect() = 0;

    virtual ::RectCoord getPaddingAdjustedVisibleRect() = 0;

    virtual float getScreenDensityPpi() = 0;

    /** this method is called just before the update methods on all layers */
    virtual void update() = 0;

    virtual std::vector<float> getInvariantModelMatrix(const ::Coord & coordinate, bool scaleInvariant, bool rotationInvariant) = 0;

    virtual void addListener(const /*not-null*/ std::shared_ptr<::MapCamera2dListenerInterface> & listener) = 0;

    virtual void removeListener(const /*not-null*/ std::shared_ptr<::MapCamera2dListenerInterface> & listener) = 0;

    virtual ::Coord coordFromScreenPosition(const ::Vec2F & posScreen) = 0;

    virtual double mapUnitsFromPixels(double distancePx) = 0;

    virtual void setRotationEnabled(bool enabled) = 0;

    virtual void setSnapToNorthEnabled(bool enabled) = 0;

    virtual /*not-null*/ std::shared_ptr<::CameraInterface> asCameraInterface() = 0;

    virtual std::optional<std::vector<float>> getLastVpMatrix() = 0;

    virtual std::optional<::RectCoord> getLastVpMatrixViewBounds() = 0;

    virtual std::optional<float> getLastVpMatrixRotation() = 0;

    virtual std::optional<float> getLastVpMatrixZoom() = 0;
};
