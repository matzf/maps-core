// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from reverse_geocoder.djinni

#pragma once

#include "ReverseGeocoderInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeReverseGeocoderInterface final : ::djinni::JniInterface<::ReverseGeocoderInterface, NativeReverseGeocoderInterface> {
public:
    using CppType = std::shared_ptr<::ReverseGeocoderInterface>;
    using CppOptType = std::shared_ptr<::ReverseGeocoderInterface>;
    using JniType = jobject;

    using Boxed = NativeReverseGeocoderInterface;

    ~NativeReverseGeocoderInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeReverseGeocoderInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeReverseGeocoderInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeReverseGeocoderInterface();
    friend ::djinni::JniClass<NativeReverseGeocoderInterface>;
    friend ::djinni::JniInterface<::ReverseGeocoderInterface, NativeReverseGeocoderInterface>;

};

} // namespace djinni_generated