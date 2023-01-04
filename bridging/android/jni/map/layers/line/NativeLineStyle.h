// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from line.djinni

#pragma once

#include "LineStyle.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeLineStyle final {
public:
    using CppType = ::LineStyle;
    using JniType = jobject;

    using Boxed = NativeLineStyle;

    ~NativeLineStyle();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeLineStyle();
    friend ::djinni::JniClass<NativeLineStyle>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/line/LineStyle") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lio/openmobilemaps/mapscore/shared/map/layers/ColorStateList;Lio/openmobilemaps/mapscore/shared/map/layers/ColorStateList;FFLio/openmobilemaps/mapscore/shared/map/layers/SizeType;FLjava/util/ArrayList;Lio/openmobilemaps/mapscore/shared/map/layers/line/LineCapType;)V") };
    const jfieldID field_color { ::djinni::jniGetFieldID(clazz.get(), "color", "Lio/openmobilemaps/mapscore/shared/map/layers/ColorStateList;") };
    const jfieldID field_gapColor { ::djinni::jniGetFieldID(clazz.get(), "gapColor", "Lio/openmobilemaps/mapscore/shared/map/layers/ColorStateList;") };
    const jfieldID field_opacity { ::djinni::jniGetFieldID(clazz.get(), "opacity", "F") };
    const jfieldID field_blur { ::djinni::jniGetFieldID(clazz.get(), "blur", "F") };
    const jfieldID field_widthType { ::djinni::jniGetFieldID(clazz.get(), "widthType", "Lio/openmobilemaps/mapscore/shared/map/layers/SizeType;") };
    const jfieldID field_width { ::djinni::jniGetFieldID(clazz.get(), "width", "F") };
    const jfieldID field_dashArray { ::djinni::jniGetFieldID(clazz.get(), "dashArray", "Ljava/util/ArrayList;") };
    const jfieldID field_lineCap { ::djinni::jniGetFieldID(clazz.get(), "lineCap", "Lio/openmobilemaps/mapscore/shared/map/layers/line/LineCapType;") };
};

} // namespace djinni_generated
