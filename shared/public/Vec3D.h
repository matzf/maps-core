// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#pragma once

#include <utility>

struct Vec3D final {
    double x;
    double y;
    double z;

    Vec3D(double x_,
          double y_,
          double z_)
    : x(std::move(x_))
    , y(std::move(y_))
    , z(std::move(z_))
    {}
};
