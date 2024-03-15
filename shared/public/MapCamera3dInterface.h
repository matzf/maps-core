// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "Coord.h"

enum class CameraMode3d;

class MapCamera3dInterface {
public:
    virtual ~MapCamera3dInterface() = default;

    virtual void setCameraMode(CameraMode3d mode) = 0;

    virtual double pixelToMapUnitFactor(const ::Coord & coord) = 0;
};
