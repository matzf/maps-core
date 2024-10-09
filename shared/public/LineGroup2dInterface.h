// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "SharedBytes.h"
#include "Vec3D.h"
#include <memory>

class GraphicsObjectInterface;

class LineGroup2dInterface {
public:
    virtual ~LineGroup2dInterface() = default;

    virtual void setLines(const ::SharedBytes & lines, const ::SharedBytes & indices, const ::Vec3D & origin) = 0;

    virtual /*not-null*/ std::shared_ptr<GraphicsObjectInterface> asGraphicsObject() = 0;
};
