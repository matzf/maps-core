// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

#pragma once

#include "PolygonLayerInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativePolygonLayerInterface final : ::djinni::JniInterface<::PolygonLayerInterface, NativePolygonLayerInterface> {
public:
    using CppType = std::shared_ptr<::PolygonLayerInterface>;
    using CppOptType = std::shared_ptr<::PolygonLayerInterface>;
    using JniType = jobject;

    using Boxed = NativePolygonLayerInterface;

    ~NativePolygonLayerInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativePolygonLayerInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativePolygonLayerInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativePolygonLayerInterface();
    friend ::djinni::JniClass<NativePolygonLayerInterface>;
    friend ::djinni::JniInterface<::PolygonLayerInterface, NativePolygonLayerInterface>;

};

} // namespace djinni_generated
