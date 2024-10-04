// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "RenderingContextInterface.h"
#include "SharedBytes.h"
#include "Vec2F.h"
#include "Vec3F.h"
#include <memory>

class GraphicsObjectInterface;
class TextureHolderInterface;

class PolygonPatternGroup2dInterface {
public:
    virtual ~PolygonPatternGroup2dInterface() = default;

    virtual void setVertices(const ::SharedBytes & vertices, const ::SharedBytes & indices, const ::Vec3F & origin) = 0;

    virtual void setOpacities(const ::SharedBytes & values) = 0;

    /** 4 floats (x, y, width and height) in uv space and 2 uint_16 values for the pixel with and height for each instanced */
    virtual void setTextureCoordinates(const ::SharedBytes & values) = 0;

    virtual void setScalingFactor(float factor) = 0;

    virtual void setScalingFactors(const ::Vec2F & factor) = 0;

    virtual void loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context, const /*not-null*/ std::shared_ptr<TextureHolderInterface> & textureHolder) = 0;

    virtual void removeTexture() = 0;

    virtual /*not-null*/ std::shared_ptr<GraphicsObjectInterface> asGraphicsObject() = 0;
};
