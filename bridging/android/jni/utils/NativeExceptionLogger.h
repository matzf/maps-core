// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception_logger.djinni

#pragma once

#include "ExceptionLogger.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeExceptionLogger final : ::djinni::JniInterface<::ExceptionLogger, NativeExceptionLogger> {
public:
    using CppType = std::shared_ptr<::ExceptionLogger>;
    using CppOptType = std::shared_ptr<::ExceptionLogger>;
    using JniType = jobject;

    using Boxed = NativeExceptionLogger;

    ~NativeExceptionLogger();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeExceptionLogger>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeExceptionLogger>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeExceptionLogger();
    friend ::djinni::JniClass<NativeExceptionLogger>;
    friend ::djinni::JniInterface<::ExceptionLogger, NativeExceptionLogger>;

};

}  // namespace djinni_generated
