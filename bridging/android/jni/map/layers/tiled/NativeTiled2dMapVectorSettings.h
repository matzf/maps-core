// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#pragma once

#include "Tiled2dMapVectorSettings.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTiled2dMapVectorSettings final {
public:
    using CppType = ::Tiled2dMapVectorSettings;
    using JniType = jobject;

    using Boxed = NativeTiled2dMapVectorSettings;

    ~NativeTiled2dMapVectorSettings();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeTiled2dMapVectorSettings();
    friend ::djinni::JniClass<NativeTiled2dMapVectorSettings>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/tiled/Tiled2dMapVectorSettings") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lio/openmobilemaps/mapscore/shared/map/layers/tiled/Tiled2dMapVectorTileOrigin;)V") };
    const jfieldID field_tileOrigin { ::djinni::jniGetFieldID(clazz.get(), "tileOrigin", "Lio/openmobilemaps/mapscore/shared/map/layers/tiled/Tiled2dMapVectorTileOrigin;") };
};

} // namespace djinni_generated
