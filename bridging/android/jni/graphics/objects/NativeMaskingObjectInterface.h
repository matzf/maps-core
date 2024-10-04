// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "MaskingObjectInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeMaskingObjectInterface final : ::djinni::JniInterface<::MaskingObjectInterface, NativeMaskingObjectInterface> {
public:
    using CppType = std::shared_ptr<::MaskingObjectInterface>;
    using CppOptType = std::shared_ptr<::MaskingObjectInterface>;
    using JniType = jobject;

    using Boxed = NativeMaskingObjectInterface;

    ~NativeMaskingObjectInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeMaskingObjectInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeMaskingObjectInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeMaskingObjectInterface();
    friend ::djinni::JniClass<NativeMaskingObjectInterface>;
    friend ::djinni::JniInterface<::MaskingObjectInterface, NativeMaskingObjectInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::MaskingObjectInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        /*not-null*/ std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override;
        void renderAsMask(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context, const ::RenderPassConfig & renderPass, int64_t viewMatrix, int64_t projectionMatrix, int64_t mMatrix, const ::Vec3D & origin, double screenPixelAsRealMeterFactor) override;

    private:
        friend ::djinni::JniInterface<::MaskingObjectInterface, ::djinni_generated::NativeMaskingObjectInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/objects/MaskingObjectInterface") };
    const jmethodID method_asGraphicsObject { ::djinni::jniGetMethodID(clazz.get(), "asGraphicsObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface;") };
    const jmethodID method_renderAsMask { ::djinni::jniGetMethodID(clazz.get(), "renderAsMask", "(Lio/openmobilemaps/mapscore/shared/graphics/RenderingContextInterface;Lio/openmobilemaps/mapscore/shared/graphics/RenderPassConfig;JJJLio/openmobilemaps/mapscore/shared/graphics/common/Vec3D;D)V") };
};

} // namespace djinni_generated
