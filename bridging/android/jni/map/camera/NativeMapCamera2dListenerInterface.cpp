// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from camera.djinni

#include "NativeMapCamera2dListenerInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeRectCoord.h"

namespace djinni_generated {

NativeMapCamera2dListenerInterface::NativeMapCamera2dListenerInterface() : ::djinni::JniInterface<::MapCamera2dListenerInterface, NativeMapCamera2dListenerInterface>("io/openmobilemaps/mapscore/shared/map/camera/MapCamera2dListenerInterface$CppProxy") {}

NativeMapCamera2dListenerInterface::~NativeMapCamera2dListenerInterface() = default;

NativeMapCamera2dListenerInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeMapCamera2dListenerInterface::JavaProxy::~JavaProxy() = default;

void NativeMapCamera2dListenerInterface::JavaProxy::onVisibleBoundsChanged(const ::RectCoord & c_visibleBounds, double c_zoom) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeMapCamera2dListenerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onVisibleBoundsChanged,
                           ::djinni::get(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, c_visibleBounds)),
                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c_zoom)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeMapCamera2dListenerInterface::JavaProxy::onRotationChanged(float c_angle) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeMapCamera2dListenerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onRotationChanged,
                           ::djinni::get(::djinni::F32::fromCpp(jniEnv, c_angle)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeMapCamera2dListenerInterface::JavaProxy::onMapInteraction() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeMapCamera2dListenerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onMapInteraction);
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_camera_MapCamera2dListenerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::MapCamera2dListenerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_camera_MapCamera2dListenerInterface_00024CppProxy_native_1onVisibleBoundsChanged(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRectCoord::JniType j_visibleBounds, jdouble j_zoom)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dListenerInterface>(nativeRef);
        ref->onVisibleBoundsChanged(::djinni_generated::NativeRectCoord::toCpp(jniEnv, j_visibleBounds),
                                    ::djinni::F64::toCpp(jniEnv, j_zoom));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_camera_MapCamera2dListenerInterface_00024CppProxy_native_1onRotationChanged(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_angle)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dListenerInterface>(nativeRef);
        ref->onRotationChanged(::djinni::F32::toCpp(jniEnv, j_angle));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_camera_MapCamera2dListenerInterface_00024CppProxy_native_1onMapInteraction(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dListenerInterface>(nativeRef);
        ref->onMapInteraction();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
