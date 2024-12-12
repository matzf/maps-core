// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include "RenderingContextInterface.h"
#include <memory>
#include <string>

enum class BlendMode;

class ShaderProgramInterface {
public:
    virtual ~ShaderProgramInterface() = default;

    virtual std::string getProgramName() = 0;

    virtual void setupProgram(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context) = 0;

    virtual void preRender(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context) = 0;

    virtual void setBlendMode(BlendMode blendMode) = 0;

    virtual bool usesModelMatrix() = 0;
};
