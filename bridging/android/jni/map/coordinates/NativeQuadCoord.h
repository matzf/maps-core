// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#pragma once

#include "QuadCoord.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeQuadCoord final {
public:
    using CppType = ::QuadCoord;
    using JniType = jobject;

    using Boxed = NativeQuadCoord;

    ~NativeQuadCoord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeQuadCoord();
    friend ::djinni::JniClass<NativeQuadCoord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/coordinates/QuadCoord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;)V") };
    const jfieldID field_topLeft { ::djinni::jniGetFieldID(clazz.get(), "topLeft", "Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
    const jfieldID field_topRight { ::djinni::jniGetFieldID(clazz.get(), "topRight", "Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
    const jfieldID field_bottomRight { ::djinni::jniGetFieldID(clazz.get(), "bottomRight", "Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
    const jfieldID field_bottomLeft { ::djinni::jniGetFieldID(clazz.get(), "bottomLeft", "Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;") };
};

} // namespace djinni_generated
