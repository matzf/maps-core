// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#include "Coord.h"  // my header
#include <cassert>


bool operator==(const Coord& lhs, const Coord& rhs) {
    return lhs.systemIdentifier == rhs.systemIdentifier &&
           lhs.x == rhs.x &&
           lhs.y == rhs.y &&
           lhs.z == rhs.z;
}

bool operator!=(const Coord& lhs, const Coord& rhs) {
    return !(lhs == rhs);
}

bool operator<(const Coord& lhs, const Coord& rhs) {
    if (lhs.systemIdentifier < rhs.systemIdentifier) {
        return true;
    }
    if (rhs.systemIdentifier < lhs.systemIdentifier) {
        return false;
    }
    if (lhs.x < rhs.x) {
        return true;
    }
    if (rhs.x < lhs.x) {
        return false;
    }
    if (lhs.y < rhs.y) {
        return true;
    }
    if (rhs.y < lhs.y) {
        return false;
    }
    if (lhs.z < rhs.z) {
        return true;
    }
    if (rhs.z < lhs.z) {
        return false;
    }
    return false;
}

bool operator>(const Coord& lhs, const Coord& rhs) {
    return rhs < lhs;
}

bool operator<=(const Coord& lhs, const Coord& rhs) {
    return !(rhs < lhs);
}

bool operator>=(const Coord& lhs, const Coord& rhs) {
    return !(lhs < rhs);
}
