// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#pragma once

#include "VectorLayerFeatureCoordInfo.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeVectorLayerFeatureCoordInfo final {
public:
    using CppType = ::VectorLayerFeatureCoordInfo;
    using JniType = jobject;

    using Boxed = NativeVectorLayerFeatureCoordInfo;

    ~NativeVectorLayerFeatureCoordInfo();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeVectorLayerFeatureCoordInfo();
    friend ::djinni::JniClass<NativeVectorLayerFeatureCoordInfo>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/tiled/vector/VectorLayerFeatureCoordInfo") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lio/openmobilemaps/mapscore/shared/map/layers/tiled/vector/VectorLayerFeatureInfo;Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;)V") };
    const jfieldID field_featureInfo { ::djinni::jniGetFieldID(clazz.get(), "featureInfo", "Lio/openmobilemaps/mapscore/shared/map/layers/tiled/vector/VectorLayerFeatureInfo;") };
    const jfieldID field_coordinates { ::djinni::jniGetFieldID(clazz.get(), "coordinates", "Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
};

} // namespace djinni_generated