// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "ComputePassInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeComputePassInterface final : ::djinni::JniInterface<::ComputePassInterface, NativeComputePassInterface> {
public:
    using CppType = std::shared_ptr<::ComputePassInterface>;
    using CppOptType = std::shared_ptr<::ComputePassInterface>;
    using JniType = jobject;

    using Boxed = NativeComputePassInterface;

    ~NativeComputePassInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeComputePassInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeComputePassInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeComputePassInterface();
    friend ::djinni::JniClass<NativeComputePassInterface>;
    friend ::djinni::JniInterface<::ComputePassInterface, NativeComputePassInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ComputePassInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::vector</*not-null*/ std::shared_ptr<::ComputeObjectInterface>> getComputeObjects() override;

    private:
        friend ::djinni::JniInterface<::ComputePassInterface, ::djinni_generated::NativeComputePassInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/ComputePassInterface") };
    const jmethodID method_getComputeObjects { ::djinni::jniGetMethodID(clazz.get(), "getComputeObjects", "()Ljava/util/ArrayList;") };
};

} // namespace djinni_generated