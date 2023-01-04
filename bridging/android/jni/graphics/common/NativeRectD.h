// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#pragma once

#include "RectD.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRectD final {
public:
    using CppType = ::RectD;
    using JniType = jobject;

    using Boxed = NativeRectD;

    ~NativeRectD();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeRectD();
    friend ::djinni::JniClass<NativeRectD>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/common/RectD") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(DDDD)V") };
    const jfieldID field_x { ::djinni::jniGetFieldID(clazz.get(), "x", "D") };
    const jfieldID field_y { ::djinni::jniGetFieldID(clazz.get(), "y", "D") };
    const jfieldID field_width { ::djinni::jniGetFieldID(clazz.get(), "width", "D") };
    const jfieldID field_height { ::djinni::jniGetFieldID(clazz.get(), "height", "D") };
};

} // namespace djinni_generated
