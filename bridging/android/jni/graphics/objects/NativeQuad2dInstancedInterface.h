// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "Quad2dInstancedInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeQuad2dInstancedInterface final : ::djinni::JniInterface<::Quad2dInstancedInterface, NativeQuad2dInstancedInterface> {
public:
    using CppType = std::shared_ptr<::Quad2dInstancedInterface>;
    using CppOptType = std::shared_ptr<::Quad2dInstancedInterface>;
    using JniType = jobject;

    using Boxed = NativeQuad2dInstancedInterface;

    ~NativeQuad2dInstancedInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeQuad2dInstancedInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeQuad2dInstancedInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeQuad2dInstancedInterface();
    friend ::djinni::JniClass<NativeQuad2dInstancedInterface>;
    friend ::djinni::JniInterface<::Quad2dInstancedInterface, NativeQuad2dInstancedInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Quad2dInstancedInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void setFrame(const ::Quad2dD & frame) override;
        void setInstanceCount(int32_t count) override;
        void setPositions(const ::SharedBytes & positions) override;
        void setScales(const ::SharedBytes & scales) override;
        void setRotations(const ::SharedBytes & rotations) override;
        void setAlphas(const ::SharedBytes & values) override;
        void setTextureCoordinates(const ::SharedBytes & textureCoordinates) override;
        void loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context, const /*not-null*/ std::shared_ptr<::TextureHolderInterface> & textureHolder) override;
        void removeTexture() override;
        /*not-null*/ std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override;
        /*not-null*/ std::shared_ptr<::MaskingObjectInterface> asMaskingObject() override;

    private:
        friend ::djinni::JniInterface<::Quad2dInstancedInterface, ::djinni_generated::NativeQuad2dInstancedInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/objects/Quad2dInstancedInterface") };
    const jmethodID method_setFrame { ::djinni::jniGetMethodID(clazz.get(), "setFrame", "(Lio/openmobilemaps/mapscore/shared/graphics/common/Quad2dD;)V") };
    const jmethodID method_setInstanceCount { ::djinni::jniGetMethodID(clazz.get(), "setInstanceCount", "(I)V") };
    const jmethodID method_setPositions { ::djinni::jniGetMethodID(clazz.get(), "setPositions", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;)V") };
    const jmethodID method_setScales { ::djinni::jniGetMethodID(clazz.get(), "setScales", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;)V") };
    const jmethodID method_setRotations { ::djinni::jniGetMethodID(clazz.get(), "setRotations", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;)V") };
    const jmethodID method_setAlphas { ::djinni::jniGetMethodID(clazz.get(), "setAlphas", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;)V") };
    const jmethodID method_setTextureCoordinates { ::djinni::jniGetMethodID(clazz.get(), "setTextureCoordinates", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;)V") };
    const jmethodID method_loadTexture { ::djinni::jniGetMethodID(clazz.get(), "loadTexture", "(Lio/openmobilemaps/mapscore/shared/graphics/RenderingContextInterface;Lio/openmobilemaps/mapscore/shared/graphics/objects/TextureHolderInterface;)V") };
    const jmethodID method_removeTexture { ::djinni::jniGetMethodID(clazz.get(), "removeTexture", "()V") };
    const jmethodID method_asGraphicsObject { ::djinni::jniGetMethodID(clazz.get(), "asGraphicsObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface;") };
    const jmethodID method_asMaskingObject { ::djinni::jniGetMethodID(clazz.get(), "asMaskingObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/MaskingObjectInterface;") };
};

} // namespace djinni_generated
