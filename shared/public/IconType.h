// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from icon.djinni

#pragma once

#include <functional>

enum class IconType : int {
    SCALE_INVARIANT,
    ROTATION_INVARIANT,
    INVARIANT,
    FIXED,
};

namespace std {

template <>
struct hash<::IconType> {
    size_t operator()(::IconType type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
