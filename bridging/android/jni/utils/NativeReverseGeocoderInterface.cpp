// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from reverse_geocoder.djinni

#include "NativeReverseGeocoderInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeCoord.h"
#include "NativeLoaderInterface.h"
#include "NativeVectorLayerFeatureCoordInfo.h"

namespace djinni_generated {

NativeReverseGeocoderInterface::NativeReverseGeocoderInterface() : ::djinni::JniInterface<::ReverseGeocoderInterface, NativeReverseGeocoderInterface>("io/openmobilemaps/mapscore/shared/utils/ReverseGeocoderInterface$CppProxy") {}

NativeReverseGeocoderInterface::~NativeReverseGeocoderInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_utils_ReverseGeocoderInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::ReverseGeocoderInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_utils_ReverseGeocoderInterface_create(JNIEnv* jniEnv, jobject /*this*/, ::djinni_generated::NativeLoaderInterface::JniType j_loader, jstring j_tileUrlTemplate, jint j_zoomLevel)
{
    try {
        auto r = ::ReverseGeocoderInterface::create(::djinni_generated::NativeLoaderInterface::toCpp(jniEnv, j_loader),
                                                    ::djinni::String::toCpp(jniEnv, j_tileUrlTemplate),
                                                    ::djinni::I32::toCpp(jniEnv, j_zoomLevel));
        return ::djinni::release(::djinni_generated::NativeReverseGeocoderInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_utils_ReverseGeocoderInterface_00024CppProxy_native_1reverseGeocode(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeCoord::JniType j_coord, jlong j_thresholdMeters)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::ReverseGeocoderInterface>(nativeRef);
        auto r = ref->reverseGeocode(::djinni_generated::NativeCoord::toCpp(jniEnv, j_coord),
                                     ::djinni::I64::toCpp(jniEnv, j_thresholdMeters));
        return ::djinni::release(::djinni::List<::djinni_generated::NativeVectorLayerFeatureCoordInfo>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
