// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "CameraInterpolationValue.h"
#include <utility>
#include <vector>

struct CameraInterpolation final {
    std::vector<CameraInterpolationValue> stops;

    //NOLINTNEXTLINE(google-explicit-constructor)
    CameraInterpolation(std::vector<CameraInterpolationValue> stops_)
    : stops(std::move(stops_))
    {}
};
