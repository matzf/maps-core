// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from text.djinni

#include "NativeTextInfoInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeCoord.h"
#include "NativeFont.h"

namespace djinni_generated {

NativeTextInfoInterface::NativeTextInfoInterface() : ::djinni::JniInterface<::TextInfoInterface, NativeTextInfoInterface>("io/openmobilemaps/mapscore/shared/map/layers/text/TextInfoInterface$CppProxy") {}

NativeTextInfoInterface::~NativeTextInfoInterface() = default;

NativeTextInfoInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeTextInfoInterface::JavaProxy::~JavaProxy() = default;

std::string NativeTextInfoInterface::JavaProxy::getText() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInfoInterface>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_getText);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
::Coord NativeTextInfoInterface::JavaProxy::getCoordinate() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInfoInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getCoordinate);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeCoord::toCpp(jniEnv, jret);
}
::Font NativeTextInfoInterface::JavaProxy::getFont() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInfoInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getFont);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeFont::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_text_TextInfoInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::TextInfoInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_text_TextInfoInterface_00024CppProxy_native_1getText(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInfoInterface>(nativeRef);
        auto r = ref->getText();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeCoord::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_text_TextInfoInterface_00024CppProxy_native_1getCoordinate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInfoInterface>(nativeRef);
        auto r = ref->getCoordinate();
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeFont::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_text_TextInfoInterface_00024CppProxy_native_1getFont(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInfoInterface>(nativeRef);
        auto r = ref->getFont();
        return ::djinni::release(::djinni_generated::NativeFont::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
