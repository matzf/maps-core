// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#include "NativeTiled2dMapLayerConfig.h"  // my header
#include "Marshal.hpp"
#include "NativeTiled2dMapVectorSettings.h"
#include "NativeTiled2dMapZoomInfo.h"
#include "NativeTiled2dMapZoomLevelInfo.h"

namespace djinni_generated {

NativeTiled2dMapLayerConfig::NativeTiled2dMapLayerConfig() : ::djinni::JniInterface<::Tiled2dMapLayerConfig, NativeTiled2dMapLayerConfig>("io/openmobilemaps/mapscore/shared/map/layers/tiled/Tiled2dMapLayerConfig$CppProxy") {}

NativeTiled2dMapLayerConfig::~NativeTiled2dMapLayerConfig() = default;

NativeTiled2dMapLayerConfig::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeTiled2dMapLayerConfig::JavaProxy::~JavaProxy() = default;

int32_t NativeTiled2dMapLayerConfig::JavaProxy::getCoordinateSystemIdentifier() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapLayerConfig>::get();
    auto jret = jniEnv->CallIntMethod(Handle::get().get(), data.method_getCoordinateSystemIdentifier);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::I32::toCpp(jniEnv, jret);
}
std::string NativeTiled2dMapLayerConfig::JavaProxy::getTileUrl(int32_t c_x, int32_t c_y, int32_t c_t, int32_t c_zoom) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapLayerConfig>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_getTileUrl,
                                                  ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_x)),
                                                  ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_y)),
                                                  ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_t)),
                                                  ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_zoom)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
std::vector<::Tiled2dMapZoomLevelInfo> NativeTiled2dMapLayerConfig::JavaProxy::getZoomLevelInfos() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapLayerConfig>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getZoomLevelInfos);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::List<::djinni_generated::NativeTiled2dMapZoomLevelInfo>::toCpp(jniEnv, jret);
}
::Tiled2dMapZoomInfo NativeTiled2dMapLayerConfig::JavaProxy::getZoomInfo() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapLayerConfig>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getZoomInfo);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeTiled2dMapZoomInfo::toCpp(jniEnv, jret);
}
std::string NativeTiled2dMapLayerConfig::JavaProxy::getLayerName() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapLayerConfig>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_getLayerName);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
std::optional<::Tiled2dMapVectorSettings> NativeTiled2dMapLayerConfig::JavaProxy::getVectorSettings() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapLayerConfig>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getVectorSettings);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Optional<std::optional, ::djinni_generated::NativeTiled2dMapVectorSettings>::toCpp(jniEnv, jret);
}
std::optional<std::vector<double>> NativeTiled2dMapLayerConfig::JavaProxy::getExtent() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTiled2dMapLayerConfig>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getExtent);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Optional<std::optional, ::djinni::List<::djinni::F64>>::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_Tiled2dMapLayerConfig_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::Tiled2dMapLayerConfig>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_Tiled2dMapLayerConfig_00024CppProxy_native_1getCoordinateSystemIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapLayerConfig>(nativeRef);
        auto r = ref->getCoordinateSystemIdentifier();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_Tiled2dMapLayerConfig_00024CppProxy_native_1getTileUrl(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_x, jint j_y, jint j_t, jint j_zoom)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapLayerConfig>(nativeRef);
        auto r = ref->getTileUrl(::djinni::I32::toCpp(jniEnv, j_x),
                                 ::djinni::I32::toCpp(jniEnv, j_y),
                                 ::djinni::I32::toCpp(jniEnv, j_t),
                                 ::djinni::I32::toCpp(jniEnv, j_zoom));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_Tiled2dMapLayerConfig_00024CppProxy_native_1getZoomLevelInfos(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapLayerConfig>(nativeRef);
        auto r = ref->getZoomLevelInfos();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeTiled2dMapZoomLevelInfo>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_Tiled2dMapLayerConfig_00024CppProxy_native_1getZoomInfo(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapLayerConfig>(nativeRef);
        auto r = ref->getZoomInfo();
        return ::djinni::release(::djinni_generated::NativeTiled2dMapZoomInfo::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_Tiled2dMapLayerConfig_00024CppProxy_native_1getLayerName(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapLayerConfig>(nativeRef);
        auto r = ref->getLayerName();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_Tiled2dMapLayerConfig_00024CppProxy_native_1getVectorSettings(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapLayerConfig>(nativeRef);
        auto r = ref->getVectorSettings();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni_generated::NativeTiled2dMapVectorSettings>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_Tiled2dMapLayerConfig_00024CppProxy_native_1getExtent(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapLayerConfig>(nativeRef);
        auto r = ref->getExtent();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::List<::djinni::F64>>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
