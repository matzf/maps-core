// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#include "NativeQuad2dInterface.h"  // my header
#include "NativeGraphicsObjectInterface.h"
#include "NativeMaskingObjectInterface.h"
#include "NativeQuad2dD.h"
#include "NativeRectD.h"
#include "NativeRenderingContextInterface.h"
#include "NativeTextureHolderInterface.h"

namespace djinni_generated {

NativeQuad2dInterface::NativeQuad2dInterface() : ::djinni::JniInterface<::Quad2dInterface, NativeQuad2dInterface>("io/openmobilemaps/mapscore/shared/graphics/objects/Quad2dInterface$CppProxy") {}

NativeQuad2dInterface::~NativeQuad2dInterface() = default;

NativeQuad2dInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeQuad2dInterface::JavaProxy::~JavaProxy() = default;

void NativeQuad2dInterface::JavaProxy::setFrame(const ::Quad2dD & c_frame, const ::RectD & c_textureCoordinates) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeQuad2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setFrame,
                           ::djinni::get(::djinni_generated::NativeQuad2dD::fromCpp(jniEnv, c_frame)),
                           ::djinni::get(::djinni_generated::NativeRectD::fromCpp(jniEnv, c_textureCoordinates)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeQuad2dInterface::JavaProxy::loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & c_context, const /*not-null*/ std::shared_ptr<::TextureHolderInterface> & c_textureHolder) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeQuad2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_loadTexture,
                           ::djinni::get(::djinni_generated::NativeRenderingContextInterface::fromCpp(jniEnv, c_context)),
                           ::djinni::get(::djinni_generated::NativeTextureHolderInterface::fromCpp(jniEnv, c_textureHolder)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeQuad2dInterface::JavaProxy::removeTexture() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeQuad2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_removeTexture);
    ::djinni::jniExceptionCheck(jniEnv);
}
/*not-null*/ std::shared_ptr<::GraphicsObjectInterface> NativeQuad2dInterface::JavaProxy::asGraphicsObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeQuad2dInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_asGraphicsObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeGraphicsObjectInterface::toCpp(jniEnv, jret);
}
/*not-null*/ std::shared_ptr<::MaskingObjectInterface> NativeQuad2dInterface::JavaProxy::asMaskingObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeQuad2dInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_asMaskingObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeMaskingObjectInterface::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Quad2dInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::Quad2dInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Quad2dInterface_00024CppProxy_native_1setFrame(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeQuad2dD::JniType j_frame, ::djinni_generated::NativeRectD::JniType j_textureCoordinates)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Quad2dInterface>(nativeRef);
        ref->setFrame(::djinni_generated::NativeQuad2dD::toCpp(jniEnv, j_frame),
                      ::djinni_generated::NativeRectD::toCpp(jniEnv, j_textureCoordinates));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Quad2dInterface_00024CppProxy_native_1loadTexture(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context, jobject j_textureHolder)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Quad2dInterface>(nativeRef);
        ref->loadTexture(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context),
                         ::djinni_generated::NativeTextureHolderInterface::toCpp(jniEnv, j_textureHolder));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Quad2dInterface_00024CppProxy_native_1removeTexture(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Quad2dInterface>(nativeRef);
        ref->removeTexture();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Quad2dInterface_00024CppProxy_native_1asGraphicsObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Quad2dInterface>(nativeRef);
        auto r = ref->asGraphicsObject();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_Quad2dInterface_00024CppProxy_native_1asMaskingObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Quad2dInterface>(nativeRef);
        auto r = ref->asMaskingObject();
        return ::djinni::release(::djinni_generated::NativeMaskingObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
