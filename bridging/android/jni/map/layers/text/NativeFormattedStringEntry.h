// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#pragma once

#include "FormattedStringEntry.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeFormattedStringEntry final {
public:
    using CppType = ::FormattedStringEntry;
    using JniType = jobject;

    using Boxed = NativeFormattedStringEntry;

    ~NativeFormattedStringEntry();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeFormattedStringEntry();
    friend ::djinni::JniClass<NativeFormattedStringEntry>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/text/FormattedStringEntry") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;F)V") };
    const jfieldID field_text { ::djinni::jniGetFieldID(clazz.get(), "text", "Ljava/lang/String;") };
    const jfieldID field_scale { ::djinni::jniGetFieldID(clazz.get(), "scale", "F") };
};

} // namespace djinni_generated
