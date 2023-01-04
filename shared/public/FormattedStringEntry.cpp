// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#include "FormattedStringEntry.h"  // my header


bool operator==(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs) {
    return lhs.text == rhs.text &&
           lhs.scale == rhs.scale;
}

bool operator!=(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs) {
    return !(lhs == rhs);
}

bool operator<(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs) {
    if (lhs.text < rhs.text) {
        return true;
    }
    if (rhs.text < lhs.text) {
        return false;
    }
    if (lhs.scale < rhs.scale) {
        return true;
    }
    if (rhs.scale < lhs.scale) {
        return false;
    }
    return false;
}

bool operator>(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs) {
    return rhs < lhs;
}

bool operator<=(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs) {
    return !(rhs < lhs);
}

bool operator>=(const FormattedStringEntry& lhs, const FormattedStringEntry& rhs) {
    return !(lhs < rhs);
}
