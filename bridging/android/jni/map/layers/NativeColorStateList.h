// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from styling.djinni

#pragma once

#include "ColorStateList.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeColorStateList final {
public:
    using CppType = ::ColorStateList;
    using JniType = jobject;

    using Boxed = NativeColorStateList;

    ~NativeColorStateList();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeColorStateList();
    friend ::djinni::JniClass<NativeColorStateList>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/ColorStateList") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lio/openmobilemaps/mapscore/shared/graphics/common/Color;Lio/openmobilemaps/mapscore/shared/graphics/common/Color;)V") };
    const jfieldID field_normal { ::djinni::jniGetFieldID(clazz.get(), "normal", "Lio/openmobilemaps/mapscore/shared/graphics/common/Color;") };
    const jfieldID field_highlighted { ::djinni::jniGetFieldID(clazz.get(), "highlighted", "Lio/openmobilemaps/mapscore/shared/graphics/common/Color;") };
};

} // namespace djinni_generated
