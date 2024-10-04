// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "RenderPassConfig.h"
#include "RenderingContextInterface.h"
#include "Vec3F.h"
#include <cstdint>
#include <memory>

class GraphicsObjectInterface;

class MaskingObjectInterface {
public:
    virtual ~MaskingObjectInterface() = default;

    virtual /*not-null*/ std::shared_ptr<GraphicsObjectInterface> asGraphicsObject() = 0;

    virtual void renderAsMask(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context, const ::RenderPassConfig & renderPass, int64_t viewMatrix, int64_t projectionMatrix, int64_t mMatrix, const ::Vec3F & origin, double screenPixelAsRealMeterFactor) = 0;
};
