/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include "ColorShaderOpenGl.h"
#include "OpenGlContext.h"
#include "OpenGlHelper.h"

ColorShaderOpenGl::ColorShaderOpenGl(bool projectOntoUnitSphere)
        : programName(projectOntoUnitSphere ? "UBMAP_ColorShaderUnitSphereOpenGl" : "UBMAP_ColorShaderOpenGl"),
          projectOntoUnitSphere(projectOntoUnitSphere) {
    LogDebug << "UBCM: color project: " <<= (projectOntoUnitSphere ? "true" : "false");
}

std::string ColorShaderOpenGl::getProgramName() { return programName; }

void ColorShaderOpenGl::setupProgram(const std::shared_ptr<::RenderingContextInterface> &context) {
    std::shared_ptr<OpenGlContext> openGlContext = std::static_pointer_cast<OpenGlContext>(context);
    // prepare shaders and OpenGL program
    int vertexShader = loadShader(GL_VERTEX_SHADER, getVertexShader());
    int fragmentShader = loadShader(GL_FRAGMENT_SHADER, getFragmentShader());

    int program = glCreateProgram();       // create empty OpenGL Program
    glAttachShader(program, vertexShader); // add the vertex shader to program
    glDeleteShader(vertexShader);
    glAttachShader(program, fragmentShader); // add the fragment shader to program
    glDeleteShader(fragmentShader);

    glLinkProgram(program); // create OpenGL program executables

    openGlContext->storeProgram(programName, program);
}

void ColorShaderOpenGl::preRender(const std::shared_ptr<::RenderingContextInterface> &context) {
    BaseShaderProgramOpenGl::preRender(context);
    std::shared_ptr<OpenGlContext> openGlContext = std::static_pointer_cast<OpenGlContext>(context);
    int program = openGlContext->getProgram(programName);

    int mColorHandle = glGetUniformLocation(program, "vColor");
    {
        glUniform4fv(mColorHandle, 1, &color[0]);
        std::lock_guard<std::mutex> lock(dataMutex);
    }
}

void ColorShaderOpenGl::setColor(float red, float green, float blue, float alpha) {
    std::lock_guard<std::mutex> lock(dataMutex);
    color[0] = red;
    color[1] = green;
    color[2] = blue;
    color[3] = alpha;
}

std::string ColorShaderOpenGl::getVertexShader() {
    return projectOntoUnitSphere ?
           // Vertices projected onto unit sphere
           OMMVersionedGlesShaderCode(320 es,
                                      precision highp float;
                                              uniform mat4 uvpMatrix;
                                              uniform mat4 umMatrix;
                                              in vec4 vPosition;

                                              void main() {
                                                  gl_Position = umMatrix * vec4(vPosition.xyz, 1.0);
                                                  gl_Position = gl_Position / gl_Position.w;
                                                  gl_Position = uvpMatrix *
                                                                vec4(gl_Position.z * sin(gl_Position.y) * cos(gl_Position.x),
                                                                     gl_Position.z * cos(gl_Position.y),
                                                                     -gl_Position.z * sin(gl_Position.y) *
                                                                     sin(gl_Position.x),
                                                                     1.0);
                                              }
           )
           // Default Shader
           : OMMVersionedGlesShaderCode(320 es,
                                        precision highp float;
                                                uniform mat4 uvpMatrix;
                                                uniform mat4 umMatrix;
                                                in vec4 vPosition;

                                                void main() {
                                                    gl_Position = uvpMatrix * umMatrix * vPosition;
                                                }
           );
}

std::string ColorShaderOpenGl::getFragmentShader() {
    return OMMVersionedGlesShaderCode(320 es,
                                precision mediump float;
                                uniform vec4 vColor;
                                out vec4 fragmentColor;

                                void main() {
                                    fragmentColor = vColor;
                                    fragmentColor.a = 1.0;
                                    fragmentColor *= vColor.a;
                                });
}

std::shared_ptr<ShaderProgramInterface> ColorShaderOpenGl::asShaderProgramInterface() { return shared_from_this(); }
