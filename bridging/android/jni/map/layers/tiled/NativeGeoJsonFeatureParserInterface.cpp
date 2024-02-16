// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from geo_json_parser.djinni

#include "NativeGeoJsonFeatureParserInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeGeoJsonPoint.h"
#include "NativeVectorLayerFeatureInfo.h"

namespace djinni_generated {

NativeGeoJsonFeatureParserInterface::NativeGeoJsonFeatureParserInterface() : ::djinni::JniInterface<::GeoJsonFeatureParserInterface, NativeGeoJsonFeatureParserInterface>("io/openmobilemaps/mapscore/shared/map/layers/tiled/GeoJsonFeatureParserInterface$CppProxy") {}

NativeGeoJsonFeatureParserInterface::~NativeGeoJsonFeatureParserInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_GeoJsonFeatureParserInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::GeoJsonFeatureParserInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_GeoJsonFeatureParserInterface_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::GeoJsonFeatureParserInterface::create();
        return ::djinni::release(::djinni_generated::NativeGeoJsonFeatureParserInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_GeoJsonFeatureParserInterface_00024CppProxy_native_1parse(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_geoJson)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::GeoJsonFeatureParserInterface>(nativeRef);
        auto r = ref->parse(::djinni::String::toCpp(jniEnv, j_geoJson));
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::List<::djinni_generated::NativeVectorLayerFeatureInfo>>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_GeoJsonFeatureParserInterface_00024CppProxy_native_1parseWithPointGeometry(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_geoJson)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::GeoJsonFeatureParserInterface>(nativeRef);
        auto r = ref->parseWithPointGeometry(::djinni::String::toCpp(jniEnv, j_geoJson));
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::List<::djinni_generated::NativeGeoJsonPoint>>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
