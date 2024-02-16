// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from error_manager.djinni

#pragma once

#include "LoaderStatus.h"
#include "RectCoord.h"
#include <optional>
#include <string>
#include <utility>

struct TiledLayerError final {
    ::LoaderStatus status;
    std::optional<std::string> errorCode;
    std::string layerName;
    std::string url;
    bool isRecoverable;
    std::optional<::RectCoord> bounds;

    TiledLayerError(::LoaderStatus status_,
                    std::optional<std::string> errorCode_,
                    std::string layerName_,
                    std::string url_,
                    bool isRecoverable_,
                    std::optional<::RectCoord> bounds_)
    : status(std::move(status_))
    , errorCode(std::move(errorCode_))
    , layerName(std::move(layerName_))
    , url(std::move(url_))
    , isRecoverable(std::move(isRecoverable_))
    , bounds(std::move(bounds_))
    {}
};
