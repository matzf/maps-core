// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "SceneCallbackInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeSceneCallbackInterface final : ::djinni::JniInterface<::SceneCallbackInterface, NativeSceneCallbackInterface> {
public:
    using CppType = std::shared_ptr<::SceneCallbackInterface>;
    using CppOptType = std::shared_ptr<::SceneCallbackInterface>;
    using JniType = jobject;

    using Boxed = NativeSceneCallbackInterface;

    ~NativeSceneCallbackInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeSceneCallbackInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeSceneCallbackInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeSceneCallbackInterface();
    friend ::djinni::JniClass<NativeSceneCallbackInterface>;
    friend ::djinni::JniInterface<::SceneCallbackInterface, NativeSceneCallbackInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::SceneCallbackInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void invalidate() override;

    private:
        friend ::djinni::JniInterface<::SceneCallbackInterface, ::djinni_generated::NativeSceneCallbackInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/SceneCallbackInterface") };
    const jmethodID method_invalidate { ::djinni::jniGetMethodID(clazz.get(), "invalidate", "()V") };
};

} // namespace djinni_generated
