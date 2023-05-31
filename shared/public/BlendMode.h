// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include <functional>

enum class BlendMode : int {
    NORMAL = 0,
    MULTIPLY = 1,
};

constexpr const char* toString(BlendMode e) noexcept {
    constexpr const char* names[] = {
        "normal",
        "multiply",
    };
    return names[static_cast<int>(e)];
}

namespace std {

template <>
struct hash<::BlendMode> {
    size_t operator()(::BlendMode type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

} // namespace std
