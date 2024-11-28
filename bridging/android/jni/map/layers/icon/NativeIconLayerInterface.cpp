// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#include "NativeIconLayerInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeIconInfoInterface.h"
#include "NativeIconLayerCallbackInterface.h"
#include "NativeLayerInterface.h"

namespace djinni_generated {

NativeIconLayerInterface::NativeIconLayerInterface() : ::djinni::JniInterface<::IconLayerInterface, NativeIconLayerInterface>("io/openmobilemaps/mapscore/shared/map/layers/icon/IconLayerInterface$CppProxy") {}

NativeIconLayerInterface::~NativeIconLayerInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::IconLayerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::IconLayerInterface::create();
        return ::djinni::release(::djinni_generated::NativeIconLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1setIcons(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_icons)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->setIcons(::djinni::List<::djinni_generated::NativeIconInfoInterface>::toCpp(jniEnv, j_icons));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1getIcons(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        auto r = ref->getIcons();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeIconInfoInterface>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1remove(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_icon)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->remove(::djinni_generated::NativeIconInfoInterface::toCpp(jniEnv, j_icon));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1removeList(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_icons)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->removeList(::djinni::List<::djinni_generated::NativeIconInfoInterface>::toCpp(jniEnv, j_icons));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1removeIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_identifier)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->removeIdentifier(::djinni::String::toCpp(jniEnv, j_identifier));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1removeIdentifierList(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_identifiers)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->removeIdentifierList(::djinni::List<::djinni::String>::toCpp(jniEnv, j_identifiers));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1add(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_icon)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->add(::djinni_generated::NativeIconInfoInterface::toCpp(jniEnv, j_icon));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1addList(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_icons)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->addList(::djinni::List<::djinni_generated::NativeIconInfoInterface>::toCpp(jniEnv, j_icons));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1clear(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->clear();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1setCallbackHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_handler)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->setCallbackHandler(::djinni_generated::NativeIconLayerCallbackInterface::toCpp(jniEnv, j_handler));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeLayerInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1asLayerInterface(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        auto r = ref->asLayerInterface();
        return ::djinni::release(::djinni_generated::NativeLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1invalidate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->invalidate();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1setLayerClickable(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_isLayerClickable)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->setLayerClickable(::djinni::Bool::toCpp(jniEnv, j_isLayerClickable));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1setRenderPassIndex(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_index)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->setRenderPassIndex(::djinni::I32::toCpp(jniEnv, j_index));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconLayerInterface_00024CppProxy_native_1animateIconScale(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_identifier, jfloat j_from, jfloat j_to, jfloat j_duration, jint j_repetitions)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::IconLayerInterface>(nativeRef);
        ref->animateIconScale(::djinni::String::toCpp(jniEnv, j_identifier),
                              ::djinni::F32::toCpp(jniEnv, j_from),
                              ::djinni::F32::toCpp(jniEnv, j_to),
                              ::djinni::F32::toCpp(jniEnv, j_duration),
                              ::djinni::I32::toCpp(jniEnv, j_repetitions));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

} // namespace djinni_generated
