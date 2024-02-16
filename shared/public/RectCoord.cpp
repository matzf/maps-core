// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#include "RectCoord.h"  // my header


bool operator==(const RectCoord& lhs, const RectCoord& rhs) {
    return lhs.topLeft == rhs.topLeft &&
           lhs.bottomRight == rhs.bottomRight;
}

bool operator!=(const RectCoord& lhs, const RectCoord& rhs) {
    return !(lhs == rhs);
}

bool operator<(const RectCoord& lhs, const RectCoord& rhs) {
    if (lhs.topLeft < rhs.topLeft) {
        return true;
    }
    if (rhs.topLeft < lhs.topLeft) {
        return false;
    }
    if (lhs.bottomRight < rhs.bottomRight) {
        return true;
    }
    if (rhs.bottomRight < lhs.bottomRight) {
        return false;
    }
    return false;
}

bool operator>(const RectCoord& lhs, const RectCoord& rhs) {
    return rhs < lhs;
}

bool operator<=(const RectCoord& lhs, const RectCoord& rhs) {
    return !(rhs < lhs);
}

bool operator>=(const RectCoord& lhs, const RectCoord& rhs) {
    return !(lhs < rhs);
}
