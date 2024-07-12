// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#include "NativeSceneInterface.h"  // my header
#include "NativeCameraInterface.h"
#include "NativeGraphicsObjectFactoryInterface.h"
#include "NativeRendererInterface.h"
#include "NativeRenderingContextInterface.h"
#include "NativeSceneCallbackInterface.h"
#include "NativeShaderFactoryInterface.h"

namespace djinni_generated {

NativeSceneInterface::NativeSceneInterface() : ::djinni::JniInterface<::SceneInterface, NativeSceneInterface>("io/openmobilemaps/mapscore/shared/graphics/SceneInterface$CppProxy") {}

NativeSceneInterface::~NativeSceneInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::SceneInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_create(JNIEnv* jniEnv, jobject /*this*/, ::djinni_generated::NativeGraphicsObjectFactoryInterface::JniType j_graphicsFactory, ::djinni_generated::NativeShaderFactoryInterface::JniType j_shaderFactory, jobject j_renderingContext)
{
    try {
        auto r = ::SceneInterface::create(::djinni_generated::NativeGraphicsObjectFactoryInterface::toCpp(jniEnv, j_graphicsFactory),
                                          ::djinni_generated::NativeShaderFactoryInterface::toCpp(jniEnv, j_shaderFactory),
                                          ::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_renderingContext));
        return ::djinni::release(::djinni_generated::NativeSceneInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_createWithOpenGl(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::SceneInterface::createWithOpenGl();
        return ::djinni::release(::djinni_generated::NativeSceneInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1setCallbackHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callbackInterface)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        ref->setCallbackHandler(::djinni_generated::NativeSceneCallbackInterface::toCpp(jniEnv, j_callbackInterface));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1setCamera(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_camera)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        ref->setCamera(::djinni_generated::NativeCameraInterface::toCpp(jniEnv, j_camera));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1getCamera(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        auto r = ref->getCamera();
        return ::djinni::release(::djinni_generated::NativeCameraInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1getRenderer(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        auto r = ref->getRenderer();
        return ::djinni::release(::djinni_generated::NativeRendererInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1getRenderingContext(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        auto r = ref->getRenderingContext();
        return ::djinni::release(::djinni_generated::NativeRenderingContextInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeGraphicsObjectFactoryInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1getGraphicsFactory(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        auto r = ref->getGraphicsFactory();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectFactoryInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeShaderFactoryInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1getShaderFactory(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        auto r = ref->getShaderFactory();
        return ::djinni::release(::djinni_generated::NativeShaderFactoryInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1prepare(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        ref->prepare();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1drawFrame(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        ref->drawFrame();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1compute(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        ref->compute();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1clear(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        ref->clear();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_SceneInterface_00024CppProxy_native_1invalidate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::SceneInterface>(nativeRef);
        ref->invalidate();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

} // namespace djinni_generated
