// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "PolygonGroup2dInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativePolygonGroup2dInterface final : ::djinni::JniInterface<::PolygonGroup2dInterface, NativePolygonGroup2dInterface> {
public:
    using CppType = std::shared_ptr<::PolygonGroup2dInterface>;
    using CppOptType = std::shared_ptr<::PolygonGroup2dInterface>;
    using JniType = jobject;

    using Boxed = NativePolygonGroup2dInterface;

    ~NativePolygonGroup2dInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativePolygonGroup2dInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativePolygonGroup2dInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativePolygonGroup2dInterface();
    friend ::djinni::JniClass<NativePolygonGroup2dInterface>;
    friend ::djinni::JniInterface<::PolygonGroup2dInterface, NativePolygonGroup2dInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::PolygonGroup2dInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void setVertices(const ::SharedBytes & vertices, const ::SharedBytes & indices, const ::Vec3F & origin) override;
        /*not-null*/ std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override;

    private:
        friend ::djinni::JniInterface<::PolygonGroup2dInterface, ::djinni_generated::NativePolygonGroup2dInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/objects/PolygonGroup2dInterface") };
    const jmethodID method_setVertices { ::djinni::jniGetMethodID(clazz.get(), "setVertices", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;Lio/openmobilemaps/mapscore/shared/graphics/common/Vec3F;)V") };
    const jmethodID method_asGraphicsObject { ::djinni::jniGetMethodID(clazz.get(), "asGraphicsObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface;") };
};

} // namespace djinni_generated
