// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#include "NativeCamera3dConfig.h"  // my header
#include "Marshal.hpp"
#include "NativeCameraInterpolation.h"

namespace djinni_generated {

NativeCamera3dConfig::NativeCamera3dConfig() = default;

NativeCamera3dConfig::~NativeCamera3dConfig() = default;

auto NativeCamera3dConfig::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeCamera3dConfig>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.key)),
                                                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c.allowUserInteraction)),
                                                           ::djinni::get(::djinni::Optional<std::optional, ::djinni::F32>::fromCpp(jniEnv, c.rotationSpeed)),
                                                           ::djinni::get(::djinni::F32::fromCpp(jniEnv, c.minZoom)),
                                                           ::djinni::get(::djinni::F32::fromCpp(jniEnv, c.maxZoom)),
                                                           ::djinni::get(::djinni_generated::NativeCameraInterpolation::fromCpp(jniEnv, c.pitchInterpolationValues)),
                                                           ::djinni::get(::djinni_generated::NativeCameraInterpolation::fromCpp(jniEnv, c.verticalDisplacementInterpolationValues)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeCamera3dConfig::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 8);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeCamera3dConfig>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_key)),
            ::djinni::Bool::toCpp(jniEnv, jniEnv->GetBooleanField(j, data.field_allowUserInteraction)),
            ::djinni::Optional<std::optional, ::djinni::F32>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_rotationSpeed)),
            ::djinni::F32::toCpp(jniEnv, jniEnv->GetFloatField(j, data.field_minZoom)),
            ::djinni::F32::toCpp(jniEnv, jniEnv->GetFloatField(j, data.field_maxZoom)),
            ::djinni_generated::NativeCameraInterpolation::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_pitchInterpolationValues)),
            ::djinni_generated::NativeCameraInterpolation::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_verticalDisplacementInterpolationValues))};
}

} // namespace djinni_generated
