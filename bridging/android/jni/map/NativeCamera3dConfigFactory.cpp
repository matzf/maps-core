// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#include "NativeCamera3dConfigFactory.h"  // my header
#include "NativeCamera3dConfig.h"

namespace djinni_generated {

NativeCamera3dConfigFactory::NativeCamera3dConfigFactory() : ::djinni::JniInterface<::Camera3dConfigFactory, NativeCamera3dConfigFactory>("io/openmobilemaps/mapscore/shared/map/Camera3dConfigFactory$CppProxy") {}

NativeCamera3dConfigFactory::~NativeCamera3dConfigFactory() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_Camera3dConfigFactory_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::Camera3dConfigFactory>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_Camera3dConfigFactory_getBasicConfig(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::Camera3dConfigFactory::getBasicConfig();
        return ::djinni::release(::djinni_generated::NativeCamera3dConfig::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_Camera3dConfigFactory_getRestorConfig(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::Camera3dConfigFactory::getRestorConfig();
        return ::djinni::release(::djinni_generated::NativeCamera3dConfig::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
