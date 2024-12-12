// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from line.djinni

#pragma once

#include "ShaderLineStyle.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeShaderLineStyle final {
public:
    using CppType = ::ShaderLineStyle;
    using JniType = jobject;

    using Boxed = NativeShaderLineStyle;

    ~NativeShaderLineStyle();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeShaderLineStyle();
    friend ::djinni::JniClass<NativeShaderLineStyle>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/line/ShaderLineStyle") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(FFFFFFFFFFFFFFFFFFFFFFF)V") };
    const jfieldID field_width { ::djinni::jniGetFieldID(clazz.get(), "width", "F") };
    const jfieldID field_colorR { ::djinni::jniGetFieldID(clazz.get(), "colorR", "F") };
    const jfieldID field_colorG { ::djinni::jniGetFieldID(clazz.get(), "colorG", "F") };
    const jfieldID field_colorB { ::djinni::jniGetFieldID(clazz.get(), "colorB", "F") };
    const jfieldID field_colorA { ::djinni::jniGetFieldID(clazz.get(), "colorA", "F") };
    const jfieldID field_gapColorR { ::djinni::jniGetFieldID(clazz.get(), "gapColorR", "F") };
    const jfieldID field_gapColorG { ::djinni::jniGetFieldID(clazz.get(), "gapColorG", "F") };
    const jfieldID field_gapColorB { ::djinni::jniGetFieldID(clazz.get(), "gapColorB", "F") };
    const jfieldID field_gapColorA { ::djinni::jniGetFieldID(clazz.get(), "gapColorA", "F") };
    const jfieldID field_widthAsPixel { ::djinni::jniGetFieldID(clazz.get(), "widthAsPixel", "F") };
    const jfieldID field_opacity { ::djinni::jniGetFieldID(clazz.get(), "opacity", "F") };
    const jfieldID field_blur { ::djinni::jniGetFieldID(clazz.get(), "blur", "F") };
    const jfieldID field_lineCap { ::djinni::jniGetFieldID(clazz.get(), "lineCap", "F") };
    const jfieldID field_numDashValue { ::djinni::jniGetFieldID(clazz.get(), "numDashValue", "F") };
    const jfieldID field_dashValue0 { ::djinni::jniGetFieldID(clazz.get(), "dashValue0", "F") };
    const jfieldID field_dashValue1 { ::djinni::jniGetFieldID(clazz.get(), "dashValue1", "F") };
    const jfieldID field_dashValue2 { ::djinni::jniGetFieldID(clazz.get(), "dashValue2", "F") };
    const jfieldID field_dashValue3 { ::djinni::jniGetFieldID(clazz.get(), "dashValue3", "F") };
    const jfieldID field_dashFade { ::djinni::jniGetFieldID(clazz.get(), "dashFade", "F") };
    const jfieldID field_dashAnimationSpeed { ::djinni::jniGetFieldID(clazz.get(), "dashAnimationSpeed", "F") };
    const jfieldID field_offset { ::djinni::jniGetFieldID(clazz.get(), "offset", "F") };
    const jfieldID field_dotted { ::djinni::jniGetFieldID(clazz.get(), "dotted", "F") };
    const jfieldID field_dottedSkew { ::djinni::jniGetFieldID(clazz.get(), "dottedSkew", "F") };
};

} // namespace djinni_generated
