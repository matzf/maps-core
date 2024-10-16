// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#include "NativeMapCamera3dInterface.h"  // my header
#include "NativeCameraMode3d.h"

namespace djinni_generated {

NativeMapCamera3dInterface::NativeMapCamera3dInterface() : ::djinni::JniInterface<::MapCamera3dInterface, NativeMapCamera3dInterface>("io/openmobilemaps/mapscore/shared/map/MapCamera3dInterface$CppProxy") {}

NativeMapCamera3dInterface::~NativeMapCamera3dInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera3dInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::MapCamera3dInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera3dInterface_00024CppProxy_native_1setCameraMode(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_mode)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera3dInterface>(nativeRef);
        ref->setCameraMode(::djinni_generated::NativeCameraMode3d::toCpp(jniEnv, j_mode));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera3dInterface_00024CppProxy_native_1getCameraMode(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera3dInterface>(nativeRef);
        auto r = ref->getCameraMode();
        return ::djinni::release(::djinni_generated::NativeCameraMode3d::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
