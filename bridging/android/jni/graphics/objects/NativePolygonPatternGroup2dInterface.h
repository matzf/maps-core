// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "PolygonPatternGroup2dInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativePolygonPatternGroup2dInterface final : ::djinni::JniInterface<::PolygonPatternGroup2dInterface, NativePolygonPatternGroup2dInterface> {
public:
    using CppType = std::shared_ptr<::PolygonPatternGroup2dInterface>;
    using CppOptType = std::shared_ptr<::PolygonPatternGroup2dInterface>;
    using JniType = jobject;

    using Boxed = NativePolygonPatternGroup2dInterface;

    ~NativePolygonPatternGroup2dInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativePolygonPatternGroup2dInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativePolygonPatternGroup2dInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativePolygonPatternGroup2dInterface();
    friend ::djinni::JniClass<NativePolygonPatternGroup2dInterface>;
    friend ::djinni::JniInterface<::PolygonPatternGroup2dInterface, NativePolygonPatternGroup2dInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::PolygonPatternGroup2dInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void setVertices(const ::SharedBytes & vertices, const ::SharedBytes & indices, const ::Vec3D & origin) override;
        void setOpacities(const ::SharedBytes & values) override;
        void setTextureCoordinates(const ::SharedBytes & values) override;
        void setScalingFactor(float factor) override;
        void setScalingFactors(const ::Vec2F & factor) override;
        void loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context, const /*not-null*/ std::shared_ptr<::TextureHolderInterface> & textureHolder) override;
        void removeTexture() override;
        /*not-null*/ std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override;

    private:
        friend ::djinni::JniInterface<::PolygonPatternGroup2dInterface, ::djinni_generated::NativePolygonPatternGroup2dInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/objects/PolygonPatternGroup2dInterface") };
    const jmethodID method_setVertices { ::djinni::jniGetMethodID(clazz.get(), "setVertices", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;Lio/openmobilemaps/mapscore/shared/graphics/common/Vec3D;)V") };
    const jmethodID method_setOpacities { ::djinni::jniGetMethodID(clazz.get(), "setOpacities", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;)V") };
    const jmethodID method_setTextureCoordinates { ::djinni::jniGetMethodID(clazz.get(), "setTextureCoordinates", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;)V") };
    const jmethodID method_setScalingFactor { ::djinni::jniGetMethodID(clazz.get(), "setScalingFactor", "(F)V") };
    const jmethodID method_setScalingFactors { ::djinni::jniGetMethodID(clazz.get(), "setScalingFactors", "(Lio/openmobilemaps/mapscore/shared/graphics/common/Vec2F;)V") };
    const jmethodID method_loadTexture { ::djinni::jniGetMethodID(clazz.get(), "loadTexture", "(Lio/openmobilemaps/mapscore/shared/graphics/RenderingContextInterface;Lio/openmobilemaps/mapscore/shared/graphics/objects/TextureHolderInterface;)V") };
    const jmethodID method_removeTexture { ::djinni::jniGetMethodID(clazz.get(), "removeTexture", "()V") };
    const jmethodID method_asGraphicsObject { ::djinni::jniGetMethodID(clazz.get(), "asGraphicsObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface;") };
};

} // namespace djinni_generated
