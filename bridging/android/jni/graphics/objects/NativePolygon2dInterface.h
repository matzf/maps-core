// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "Polygon2dInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativePolygon2dInterface final : ::djinni::JniInterface<::Polygon2dInterface, NativePolygon2dInterface> {
public:
    using CppType = std::shared_ptr<::Polygon2dInterface>;
    using CppOptType = std::shared_ptr<::Polygon2dInterface>;
    using JniType = jobject;

    using Boxed = NativePolygon2dInterface;

    ~NativePolygon2dInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativePolygon2dInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativePolygon2dInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativePolygon2dInterface();
    friend ::djinni::JniClass<NativePolygon2dInterface>;
    friend ::djinni::JniInterface<::Polygon2dInterface, NativePolygon2dInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Polygon2dInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void setVertices(const std::vector<::Vec2D> & vertices, const std::vector<int32_t> & indices) override;
        /*not-null*/ std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override;
        /*not-null*/ std::shared_ptr<::MaskingObjectInterface> asMaskingObject() override;

    private:
        friend ::djinni::JniInterface<::Polygon2dInterface, ::djinni_generated::NativePolygon2dInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/objects/Polygon2dInterface") };
    const jmethodID method_setVertices { ::djinni::jniGetMethodID(clazz.get(), "setVertices", "(Ljava/util/ArrayList;Ljava/util/ArrayList;)V") };
    const jmethodID method_asGraphicsObject { ::djinni::jniGetMethodID(clazz.get(), "asGraphicsObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface;") };
    const jmethodID method_asMaskingObject { ::djinni::jniGetMethodID(clazz.get(), "asMaskingObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/MaskingObjectInterface;") };
};

} // namespace djinni_generated
