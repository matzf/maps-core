// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "ShaderProgramInterface.h"
#include <memory>

class LineGroup2dInterface;
class Polygon2dInterface;
class PolygonGroup2dInterface;
class PolygonPatternGroup2dInterface;
class Quad2dInstancedInterface;
class Quad2dInterface;
class Quad2dStretchedInstancedInterface;
class TextInstancedInterface;
class TextInterface;

class GraphicsObjectFactoryInterface {
public:
    virtual ~GraphicsObjectFactoryInterface() = default;

    virtual /*not-null*/ std::shared_ptr<Quad2dInterface> createQuad(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;

    virtual /*not-null*/ std::shared_ptr<Polygon2dInterface> createPolygon(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;

    virtual /*not-null*/ std::shared_ptr<Quad2dInstancedInterface> createQuadInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;

    virtual /*not-null*/ std::shared_ptr<Quad2dStretchedInstancedInterface> createQuadStretchedInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;

    virtual /*not-null*/ std::shared_ptr<LineGroup2dInterface> createLineGroup(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;

    virtual /*not-null*/ std::shared_ptr<PolygonGroup2dInterface> createPolygonGroup(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;

    virtual /*not-null*/ std::shared_ptr<PolygonPatternGroup2dInterface> createPolygonPatternGroup(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;

    virtual /*not-null*/ std::shared_ptr<Quad2dInterface> createQuadMask() = 0;

    virtual /*not-null*/ std::shared_ptr<Polygon2dInterface> createPolygonMask() = 0;

    virtual /*not-null*/ std::shared_ptr<TextInterface> createText(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;

    virtual /*not-null*/ std::shared_ptr<TextInstancedInterface> createTextInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) = 0;
};
