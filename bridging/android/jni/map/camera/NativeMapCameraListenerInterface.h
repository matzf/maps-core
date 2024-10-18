// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from camera.djinni

#pragma once

#include "MapCameraListenerInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeMapCameraListenerInterface final : ::djinni::JniInterface<::MapCameraListenerInterface, NativeMapCameraListenerInterface> {
public:
    using CppType = std::shared_ptr<::MapCameraListenerInterface>;
    using CppOptType = std::shared_ptr<::MapCameraListenerInterface>;
    using JniType = jobject;

    using Boxed = NativeMapCameraListenerInterface;

    ~NativeMapCameraListenerInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeMapCameraListenerInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeMapCameraListenerInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeMapCameraListenerInterface();
    friend ::djinni::JniClass<NativeMapCameraListenerInterface>;
    friend ::djinni::JniInterface<::MapCameraListenerInterface, NativeMapCameraListenerInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::MapCameraListenerInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onVisibleBoundsChanged(const ::RectCoord & visibleBounds, double zoom) override;
        void onRotationChanged(float angle) override;
        void onMapInteraction() override;
        void onCameraChange(const std::vector<float> & viewMatrix, const std::vector<float> & projectionMatrix, const ::Vec3D & origin, float verticalFov, float horizontalFov, float width, float height, float focusPointAltitude, const ::Coord & focusPointPosition, float zoom, ::CameraMode3d mode) override;

    private:
        friend ::djinni::JniInterface<::MapCameraListenerInterface, ::djinni_generated::NativeMapCameraListenerInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/camera/MapCameraListenerInterface") };
    const jmethodID method_onVisibleBoundsChanged { ::djinni::jniGetMethodID(clazz.get(), "onVisibleBoundsChanged", "(Lio/openmobilemaps/mapscore/shared/map/coordinates/RectCoord;D)V") };
    const jmethodID method_onRotationChanged { ::djinni::jniGetMethodID(clazz.get(), "onRotationChanged", "(F)V") };
    const jmethodID method_onMapInteraction { ::djinni::jniGetMethodID(clazz.get(), "onMapInteraction", "()V") };
    const jmethodID method_onCameraChange { ::djinni::jniGetMethodID(clazz.get(), "onCameraChange", "(Ljava/util/ArrayList;Ljava/util/ArrayList;Lio/openmobilemaps/mapscore/shared/graphics/common/Vec3D;FFFFFLio/openmobilemaps/mapscore/shared/map/coordinates/Coord;FLio/openmobilemaps/mapscore/shared/map/CameraMode3d;)V") };
};

} // namespace djinni_generated
