// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icosahedron.djinni

#pragma once

#include "DataRef.hpp"
#include "Future.hpp"

class IcosahedronLayerCallbackInterface {
public:
    virtual ~IcosahedronLayerCallbackInterface() = default;

    virtual ::djinni::Future<::djinni::DataRef> getData() = 0;
};