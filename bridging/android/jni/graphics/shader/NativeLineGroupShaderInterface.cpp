// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#include "NativeLineGroupShaderInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeLineStyle.h"
#include "NativeShaderProgramInterface.h"

namespace djinni_generated {

NativeLineGroupShaderInterface::NativeLineGroupShaderInterface() : ::djinni::JniInterface<::LineGroupShaderInterface, NativeLineGroupShaderInterface>("io/openmobilemaps/mapscore/shared/graphics/shader/LineGroupShaderInterface$CppProxy") {}

NativeLineGroupShaderInterface::~NativeLineGroupShaderInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_LineGroupShaderInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::LineGroupShaderInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_LineGroupShaderInterface_00024CppProxy_native_1setStyles(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_lineStyles)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineGroupShaderInterface>(nativeRef);
        ref->setStyles(::djinni::List<::djinni_generated::NativeLineStyle>::toCpp(jniEnv, j_lineStyles));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_shader_LineGroupShaderInterface_00024CppProxy_native_1asShaderProgramInterface(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::LineGroupShaderInterface>(nativeRef);
        auto r = ref->asShaderProgramInterface();
        return ::djinni::release(::djinni_generated::NativeShaderProgramInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
