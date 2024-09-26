// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "CameraInterpolationValue.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeCameraInterpolationValue final {
public:
    using CppType = ::CameraInterpolationValue;
    using JniType = jobject;

    using Boxed = NativeCameraInterpolationValue;

    ~NativeCameraInterpolationValue();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeCameraInterpolationValue();
    friend ::djinni::JniClass<NativeCameraInterpolationValue>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/CameraInterpolationValue") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(FF)V") };
    const jfieldID field_stop { ::djinni::jniGetFieldID(clazz.get(), "stop", "F") };
    const jfieldID field_value { ::djinni::jniGetFieldID(clazz.get(), "value", "F") };
};

} // namespace djinni_generated