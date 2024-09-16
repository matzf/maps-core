// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "Camera3dConfig.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeCamera3dConfig final {
public:
    using CppType = ::Camera3dConfig;
    using JniType = jobject;

    using Boxed = NativeCamera3dConfig;

    ~NativeCamera3dConfig();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeCamera3dConfig();
    friend ::djinni::JniClass<NativeCamera3dConfig>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/Camera3dConfig") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;ZLjava/lang/Float;IFFLio/openmobilemaps/mapscore/shared/map/CameraInterpolation;Lio/openmobilemaps/mapscore/shared/map/CameraInterpolation;)V") };
    const jfieldID field_key { ::djinni::jniGetFieldID(clazz.get(), "key", "Ljava/lang/String;") };
    const jfieldID field_allowUserInteraction { ::djinni::jniGetFieldID(clazz.get(), "allowUserInteraction", "Z") };
    const jfieldID field_rotationSpeed { ::djinni::jniGetFieldID(clazz.get(), "rotationSpeed", "Ljava/lang/Float;") };
    const jfieldID field_animationDurationMs { ::djinni::jniGetFieldID(clazz.get(), "animationDurationMs", "I") };
    const jfieldID field_minZoom { ::djinni::jniGetFieldID(clazz.get(), "minZoom", "F") };
    const jfieldID field_maxZoom { ::djinni::jniGetFieldID(clazz.get(), "maxZoom", "F") };
    const jfieldID field_pitchInterpolationValues { ::djinni::jniGetFieldID(clazz.get(), "pitchInterpolationValues", "Lio/openmobilemaps/mapscore/shared/map/CameraInterpolation;") };
    const jfieldID field_verticalDisplacementInterpolationValues { ::djinni::jniGetFieldID(clazz.get(), "verticalDisplacementInterpolationValues", "Lio/openmobilemaps/mapscore/shared/map/CameraInterpolation;") };
};

} // namespace djinni_generated