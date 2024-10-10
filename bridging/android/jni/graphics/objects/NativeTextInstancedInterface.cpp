// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#include "NativeTextInstancedInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeGraphicsObjectInterface.h"
#include "NativeQuad2dD.h"
#include "NativeRenderingContextInterface.h"
#include "NativeSharedBytes.h"
#include "NativeTextureHolderInterface.h"
#include "NativeVec3D.h"

namespace djinni_generated {

NativeTextInstancedInterface::NativeTextInstancedInterface() : ::djinni::JniInterface<::TextInstancedInterface, NativeTextInstancedInterface>("io/openmobilemaps/mapscore/shared/graphics/objects/TextInstancedInterface$CppProxy") {}

NativeTextInstancedInterface::~NativeTextInstancedInterface() = default;

NativeTextInstancedInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeTextInstancedInterface::JavaProxy::~JavaProxy() = default;

void NativeTextInstancedInterface::JavaProxy::setFrame(const ::Quad2dD & c_frame, const ::Vec3D & c_origin) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setFrame,
                           ::djinni::get(::djinni_generated::NativeQuad2dD::fromCpp(jniEnv, c_frame)),
                           ::djinni::get(::djinni_generated::NativeVec3D::fromCpp(jniEnv, c_origin)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::setInstanceCount(int32_t c_count) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setInstanceCount,
                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_count)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::setPositions(const ::SharedBytes & c_positions) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setPositions,
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_positions)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::setReferencePositions(const ::SharedBytes & c_positions) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setReferencePositions,
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_positions)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::setTextureCoordinates(const ::SharedBytes & c_textureCoordinates) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setTextureCoordinates,
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_textureCoordinates)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::setScales(const ::SharedBytes & c_scales) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setScales,
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_scales)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::setRotations(const ::SharedBytes & c_rotations) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setRotations,
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_rotations)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::setStyleIndices(const ::SharedBytes & c_indices) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setStyleIndices,
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_indices)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::setStyles(const ::SharedBytes & c_values) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setStyles,
                           ::djinni::get(::djinni_generated::NativeSharedBytes::fromCpp(jniEnv, c_values)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & c_context, const /*not-null*/ std::shared_ptr<::TextureHolderInterface> & c_textureHolder) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_loadTexture,
                           ::djinni::get(::djinni_generated::NativeRenderingContextInterface::fromCpp(jniEnv, c_context)),
                           ::djinni::get(::djinni_generated::NativeTextureHolderInterface::fromCpp(jniEnv, c_textureHolder)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTextInstancedInterface::JavaProxy::removeTexture() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_removeTexture);
    ::djinni::jniExceptionCheck(jniEnv);
}
/*not-null*/ std::shared_ptr<::GraphicsObjectInterface> NativeTextInstancedInterface::JavaProxy::asGraphicsObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTextInstancedInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_asGraphicsObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeGraphicsObjectInterface::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::TextInstancedInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setFrame(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeQuad2dD::JniType j_frame, ::djinni_generated::NativeVec3D::JniType j_origin)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setFrame(::djinni_generated::NativeQuad2dD::toCpp(jniEnv, j_frame),
                      ::djinni_generated::NativeVec3D::toCpp(jniEnv, j_origin));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setInstanceCount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_count)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setInstanceCount(::djinni::I32::toCpp(jniEnv, j_count));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setPositions(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSharedBytes::JniType j_positions)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setPositions(::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_positions));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setReferencePositions(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSharedBytes::JniType j_positions)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setReferencePositions(::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_positions));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setTextureCoordinates(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSharedBytes::JniType j_textureCoordinates)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setTextureCoordinates(::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_textureCoordinates));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setScales(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSharedBytes::JniType j_scales)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setScales(::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_scales));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setRotations(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSharedBytes::JniType j_rotations)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setRotations(::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_rotations));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setStyleIndices(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSharedBytes::JniType j_indices)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setStyleIndices(::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_indices));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1setStyles(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeSharedBytes::JniType j_values)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->setStyles(::djinni_generated::NativeSharedBytes::toCpp(jniEnv, j_values));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1loadTexture(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context, jobject j_textureHolder)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->loadTexture(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context),
                         ::djinni_generated::NativeTextureHolderInterface::toCpp(jniEnv, j_textureHolder));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1removeTexture(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        ref->removeTexture();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_TextInstancedInterface_00024CppProxy_native_1asGraphicsObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::TextInstancedInterface>(nativeRef);
        auto r = ref->asGraphicsObject();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
