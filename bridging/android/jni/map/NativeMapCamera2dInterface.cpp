// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#include "NativeMapCamera2dInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeCameraInterface.h"
#include "NativeCoord.h"
#include "NativeMapCamera2dListenerInterface.h"
#include "NativeMapInterface.h"
#include "NativeRectCoord.h"
#include "NativeVec2F.h"

namespace djinni_generated {

NativeMapCamera2dInterface::NativeMapCamera2dInterface() : ::djinni::JniInterface<::MapCamera2dInterface, NativeMapCamera2dInterface>("io/openmobilemaps/mapscore/shared/map/MapCamera2dInterface$CppProxy") {}

NativeMapCamera2dInterface::~NativeMapCamera2dInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::MapCamera2dInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_create(JNIEnv* jniEnv, jobject /*this*/, jobject j_mapInterface, jfloat j_screenDensityPpi)
{
    try {
        auto r = ::MapCamera2dInterface::create(::djinni_generated::NativeMapInterface::toCpp(jniEnv, j_mapInterface),
                                                ::djinni::F32::toCpp(jniEnv, j_screenDensityPpi));
        return ::djinni::release(::djinni_generated::NativeMapCamera2dInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1freeze(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_freeze)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->freeze(::djinni::Bool::toCpp(jniEnv, j_freeze));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1moveToCenterPositionZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeCoord::JniType j_centerPosition, jdouble j_zoom, jboolean j_animated)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->moveToCenterPositionZoom(::djinni_generated::NativeCoord::toCpp(jniEnv, j_centerPosition),
                                      ::djinni::F64::toCpp(jniEnv, j_zoom),
                                      ::djinni::Bool::toCpp(jniEnv, j_animated));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1moveToCenterPosition(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeCoord::JniType j_centerPosition, jboolean j_animated)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->moveToCenterPosition(::djinni_generated::NativeCoord::toCpp(jniEnv, j_centerPosition),
                                  ::djinni::Bool::toCpp(jniEnv, j_animated));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1moveToBoundingBox(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRectCoord::JniType j_boundingBox, jfloat j_paddingPc, jboolean j_animated, jobject j_minZoom, jobject j_maxZoom)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->moveToBoundingBox(::djinni_generated::NativeRectCoord::toCpp(jniEnv, j_boundingBox),
                               ::djinni::F32::toCpp(jniEnv, j_paddingPc),
                               ::djinni::Bool::toCpp(jniEnv, j_animated),
                               ::djinni::Optional<std::optional, ::djinni::F64>::toCpp(jniEnv, j_minZoom),
                               ::djinni::Optional<std::optional, ::djinni::F64>::toCpp(jniEnv, j_maxZoom));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeCoord::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getCenterPosition(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getCenterPosition();
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jdouble j_zoom, jboolean j_animated)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setZoom(::djinni::F64::toCpp(jniEnv, j_zoom),
                     ::djinni::Bool::toCpp(jniEnv, j_animated));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jdouble JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getZoom();
        return ::djinni::release(::djinni::F64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setRotation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_angle, jboolean j_animated)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setRotation(::djinni::F32::toCpp(jniEnv, j_angle),
                         ::djinni::Bool::toCpp(jniEnv, j_animated));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jfloat JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getRotation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getRotation();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setMinZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jdouble j_minZoom)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setMinZoom(::djinni::F64::toCpp(jniEnv, j_minZoom));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setMaxZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jdouble j_maxZoom)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setMaxZoom(::djinni::F64::toCpp(jniEnv, j_maxZoom));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jdouble JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getMinZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getMinZoom();
        return ::djinni::release(::djinni::F64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jdouble JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getMaxZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getMaxZoom();
        return ::djinni::release(::djinni::F64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setBounds(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRectCoord::JniType j_bounds)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setBounds(::djinni_generated::NativeRectCoord::toCpp(jniEnv, j_bounds));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeRectCoord::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getBounds(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getBounds();
        return ::djinni::release(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1isInBounds(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeCoord::JniType j_coords)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->isInBounds(::djinni_generated::NativeCoord::toCpp(jniEnv, j_coords));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setPaddingLeft(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_padding)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setPaddingLeft(::djinni::F32::toCpp(jniEnv, j_padding));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setPaddingRight(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_padding)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setPaddingRight(::djinni::F32::toCpp(jniEnv, j_padding));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setPaddingTop(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_padding)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setPaddingTop(::djinni::F32::toCpp(jniEnv, j_padding));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setPaddingBottom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_padding)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setPaddingBottom(::djinni::F32::toCpp(jniEnv, j_padding));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeRectCoord::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getVisibleRect(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getVisibleRect();
        return ::djinni::release(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeRectCoord::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getPaddingAdjustedVisibleRect(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getPaddingAdjustedVisibleRect();
        return ::djinni::release(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getScreenDensityPpi(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getScreenDensityPpi();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1update(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->update();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getInvariantModelMatrix(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeCoord::JniType j_coordinate, jboolean j_scaleInvariant, jboolean j_rotationInvariant)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getInvariantModelMatrix(::djinni_generated::NativeCoord::toCpp(jniEnv, j_coordinate),
                                              ::djinni::Bool::toCpp(jniEnv, j_scaleInvariant),
                                              ::djinni::Bool::toCpp(jniEnv, j_rotationInvariant));
        return ::djinni::release(::djinni::List<::djinni::F32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1addListener(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeMapCamera2dListenerInterface::JniType j_listener)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->addListener(::djinni_generated::NativeMapCamera2dListenerInterface::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1removeListener(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeMapCamera2dListenerInterface::JniType j_listener)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->removeListener(::djinni_generated::NativeMapCamera2dListenerInterface::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeCoord::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1coordFromScreenPosition(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_posScreen)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->coordFromScreenPosition(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_posScreen));
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeCoord::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1coordFromScreenPositionZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeVec2F::JniType j_posScreen, jfloat j_zoom)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->coordFromScreenPositionZoom(::djinni_generated::NativeVec2F::toCpp(jniEnv, j_posScreen),
                                                  ::djinni::F32::toCpp(jniEnv, j_zoom));
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeVec2F::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1screenPosFromCoord(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeCoord::JniType j_coord)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->screenPosFromCoord(::djinni_generated::NativeCoord::toCpp(jniEnv, j_coord));
        return ::djinni::release(::djinni_generated::NativeVec2F::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeVec2F::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1screenPosFromCoordZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeCoord::JniType j_coord, jfloat j_zoom)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->screenPosFromCoordZoom(::djinni_generated::NativeCoord::toCpp(jniEnv, j_coord),
                                             ::djinni::F32::toCpp(jniEnv, j_zoom));
        return ::djinni::release(::djinni_generated::NativeVec2F::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jdouble JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1mapUnitsFromPixels(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jdouble j_distancePx)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->mapUnitsFromPixels(::djinni::F64::toCpp(jniEnv, j_distancePx));
        return ::djinni::release(::djinni::F64::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setRotationEnabled(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_enabled)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setRotationEnabled(::djinni::Bool::toCpp(jniEnv, j_enabled));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setSnapToNorthEnabled(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_enabled)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setSnapToNorthEnabled(::djinni::Bool::toCpp(jniEnv, j_enabled));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1setBoundsRestrictWholeVisibleRect(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_enabled)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        ref->setBoundsRestrictWholeVisibleRect(::djinni::Bool::toCpp(jniEnv, j_enabled));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeCameraInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1asCameraInterface(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->asCameraInterface();
        return ::djinni::release(::djinni_generated::NativeCameraInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getLastVpMatrix(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getLastVpMatrix();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::List<::djinni::F32>>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeRectCoord::Boxed::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getLastVpMatrixViewBounds(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getLastVpMatrixViewBounds();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni_generated::NativeRectCoord>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getLastVpMatrixRotation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getLastVpMatrixRotation();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::F32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_MapCamera2dInterface_00024CppProxy_native_1getLastVpMatrixZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::MapCamera2dInterface>(nativeRef);
        auto r = ref->getLastVpMatrixZoom();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::F32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
