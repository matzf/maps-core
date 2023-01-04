// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from error_manager.djinni

#include "NativeErrorManager.h"  // my header
#include "Marshal.hpp"
#include "NativeErrorManagerListener.h"
#include "NativeTiledLayerError.h"

namespace djinni_generated {

NativeErrorManager::NativeErrorManager() : ::djinni::JniInterface<::ErrorManager, NativeErrorManager>("io/openmobilemaps/mapscore/shared/map/ErrorManager$CppProxy") {}

NativeErrorManager::~NativeErrorManager() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_ErrorManager_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::ErrorManager>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_ErrorManager_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::ErrorManager::create();
        return ::djinni::release(::djinni_generated::NativeErrorManager::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_ErrorManager_00024CppProxy_native_1addTiledLayerError(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_error)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ErrorManager>(nativeRef);
        ref->addTiledLayerError(::djinni_generated::NativeTiledLayerError::toCpp(jniEnv, j_error));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_ErrorManager_00024CppProxy_native_1removeError(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_url)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ErrorManager>(nativeRef);
        ref->removeError(::djinni::String::toCpp(jniEnv, j_url));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_ErrorManager_00024CppProxy_native_1removeAllErrorsForLayer(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_layerName)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ErrorManager>(nativeRef);
        ref->removeAllErrorsForLayer(::djinni::String::toCpp(jniEnv, j_layerName));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_ErrorManager_00024CppProxy_native_1clearAllErrors(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ErrorManager>(nativeRef);
        ref->clearAllErrors();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_ErrorManager_00024CppProxy_native_1addErrorListener(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_listener)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ErrorManager>(nativeRef);
        ref->addErrorListener(::djinni_generated::NativeErrorManagerListener::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_ErrorManager_00024CppProxy_native_1removeErrorListener(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_listener)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ErrorManager>(nativeRef);
        ref->removeErrorListener(::djinni_generated::NativeErrorManagerListener::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

} // namespace djinni_generated
