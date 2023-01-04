// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from task_scheduler.djinni

#pragma once

#include "TaskConfig.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTaskConfig final {
public:
    using CppType = ::TaskConfig;
    using JniType = jobject;

    using Boxed = NativeTaskConfig;

    ~NativeTaskConfig();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeTaskConfig();
    friend ::djinni::JniClass<NativeTaskConfig>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/scheduling/TaskConfig") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;JLio/openmobilemaps/mapscore/shared/map/scheduling/TaskPriority;Lio/openmobilemaps/mapscore/shared/map/scheduling/ExecutionEnvironment;)V") };
    const jfieldID field_id { ::djinni::jniGetFieldID(clazz.get(), "id", "Ljava/lang/String;") };
    const jfieldID field_delay { ::djinni::jniGetFieldID(clazz.get(), "delay", "J") };
    const jfieldID field_priority { ::djinni::jniGetFieldID(clazz.get(), "priority", "Lio/openmobilemaps/mapscore/shared/map/scheduling/TaskPriority;") };
    const jfieldID field_executionEnvironment { ::djinni::jniGetFieldID(clazz.get(), "executionEnvironment", "Lio/openmobilemaps/mapscore/shared/map/scheduling/ExecutionEnvironment;") };
};

} // namespace djinni_generated
