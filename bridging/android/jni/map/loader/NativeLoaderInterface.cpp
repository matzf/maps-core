// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#include "NativeLoaderInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeDataLoaderResult.h"
#include "NativeTextureLoaderResult.h"

namespace djinni_generated {

NativeLoaderInterface::NativeLoaderInterface() : ::djinni::JniInterface<::LoaderInterface, NativeLoaderInterface>("io/openmobilemaps/mapscore/shared/map/loader/LoaderInterface$CppProxy") {}

NativeLoaderInterface::~NativeLoaderInterface() = default;

NativeLoaderInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeLoaderInterface::JavaProxy::~JavaProxy() = default;

::TextureLoaderResult NativeLoaderInterface::JavaProxy::loadTexture(const std::string & c_url, const std::optional<std::string> & c_etag) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLoaderInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_loadTexture,
                                         ::djinni::get(::djinni::String::fromCpp(jniEnv, c_url)),
                                         ::djinni::get(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(jniEnv, c_etag)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeTextureLoaderResult::toCpp(jniEnv, jret);
}
::DataLoaderResult NativeLoaderInterface::JavaProxy::loadData(const std::string & c_url, const std::optional<std::string> & c_etag) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeLoaderInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_loadData,
                                         ::djinni::get(::djinni::String::fromCpp(jniEnv, c_url)),
                                         ::djinni::get(::djinni::Optional<std::optional, ::djinni::String>::fromCpp(jniEnv, c_etag)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeDataLoaderResult::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_loader_LoaderInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::LoaderInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_loader_LoaderInterface_00024CppProxy_native_1loadTexture(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_url, jstring j_etag)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LoaderInterface>(nativeRef);
        auto r = ref->loadTexture(::djinni::String::toCpp(jniEnv, j_url),
                                  ::djinni::Optional<std::optional, ::djinni::String>::toCpp(jniEnv, j_etag));
        return ::djinni::release(::djinni_generated::NativeTextureLoaderResult::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_loader_LoaderInterface_00024CppProxy_native_1loadData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_url, jstring j_etag)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LoaderInterface>(nativeRef);
        auto r = ref->loadData(::djinni::String::toCpp(jniEnv, j_url),
                               ::djinni::Optional<std::optional, ::djinni::String>::toCpp(jniEnv, j_etag));
        return ::djinni::release(::djinni_generated::NativeDataLoaderResult::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
