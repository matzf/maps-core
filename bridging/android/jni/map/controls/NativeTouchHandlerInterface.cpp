// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from touch_handler.djinni

#include "NativeTouchHandlerInterface.h"  // my header
#include "NativeTouchEvent.h"
#include "NativeTouchInterface.h"

namespace djinni_generated {

NativeTouchHandlerInterface::NativeTouchHandlerInterface() : ::djinni::JniInterface<::TouchHandlerInterface, NativeTouchHandlerInterface>("io/openmobilemaps/mapscore/shared/map/controls/TouchHandlerInterface$CppProxy") {}

NativeTouchHandlerInterface::~NativeTouchHandlerInterface() = default;

NativeTouchHandlerInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeTouchHandlerInterface::JavaProxy::~JavaProxy() = default;

void NativeTouchHandlerInterface::JavaProxy::onTouchEvent(const ::TouchEvent & c_touchEvent) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTouchHandlerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onTouchEvent,
                           ::djinni::get(::djinni_generated::NativeTouchEvent::fromCpp(jniEnv, c_touchEvent)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTouchHandlerInterface::JavaProxy::addListener(const std::shared_ptr<::TouchInterface> & c_listener) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTouchHandlerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_addListener,
                           ::djinni::get(::djinni_generated::NativeTouchInterface::fromCpp(jniEnv, c_listener)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeTouchHandlerInterface::JavaProxy::removeListener(const std::shared_ptr<::TouchInterface> & c_listener) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTouchHandlerInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_removeListener,
                           ::djinni::get(::djinni_generated::NativeTouchInterface::fromCpp(jniEnv, c_listener)));
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_controls_TouchHandlerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::TouchHandlerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_controls_TouchHandlerInterface_00024CppProxy_native_1onTouchEvent(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_touchEvent)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchHandlerInterface>(nativeRef);
        ref->onTouchEvent(::djinni_generated::NativeTouchEvent::toCpp(jniEnv, j_touchEvent));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_controls_TouchHandlerInterface_00024CppProxy_native_1addListener(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_listener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchHandlerInterface>(nativeRef);
        ref->addListener(::djinni_generated::NativeTouchInterface::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_controls_TouchHandlerInterface_00024CppProxy_native_1removeListener(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_listener)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::TouchHandlerInterface>(nativeRef);
        ref->removeListener(::djinni_generated::NativeTouchInterface::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
