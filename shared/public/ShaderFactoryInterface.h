// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include <memory>

class AlphaInstancedShaderInterface;
class AlphaShaderInterface;
class ColorCircleShaderInterface;
class ColorLineShaderInterface;
class ColorShaderInterface;
class LineGroupShaderInterface;
class PolygonGroupShaderInterface;
class RasterShaderInterface;
class StretchShaderInterface;
class TextShaderInterface;

class ShaderFactoryInterface {
public:
    virtual ~ShaderFactoryInterface() = default;

    virtual /*not-null*/ std::shared_ptr<AlphaShaderInterface> createAlphaShader() = 0;

    virtual /*not-null*/ std::shared_ptr<AlphaInstancedShaderInterface> createAlphaInstancedShader() = 0;

    virtual /*not-null*/ std::shared_ptr<ColorLineShaderInterface> createColorLineShader() = 0;

    virtual /*not-null*/ std::shared_ptr<LineGroupShaderInterface> createLineGroupShader() = 0;

    virtual /*not-null*/ std::shared_ptr<ColorShaderInterface> createColorShader() = 0;

    virtual /*not-null*/ std::shared_ptr<ColorCircleShaderInterface> createColorCircleShader() = 0;

    virtual /*not-null*/ std::shared_ptr<PolygonGroupShaderInterface> createPolygonGroupShader() = 0;

    virtual /*not-null*/ std::shared_ptr<TextShaderInterface> createTextShader() = 0;

    virtual /*not-null*/ std::shared_ptr<RasterShaderInterface> createRasterShader() = 0;

    virtual /*not-null*/ std::shared_ptr<StretchShaderInterface> createStretchShader() = 0;
};
