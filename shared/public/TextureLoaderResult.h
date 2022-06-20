// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#pragma once

#include "LoaderStatus.h"
#include "TextureHolderInterface.h"
#include <memory>
#include <optional>
#include <string>
#include <utility>

struct TextureLoaderResult final {
    std::shared_ptr<::TextureHolderInterface> data;
    std::optional<std::string> etag;
    LoaderStatus status;
    std::optional<std::string> errorCode;

    TextureLoaderResult(std::shared_ptr<::TextureHolderInterface> data_,
                        std::optional<std::string> etag_,
                        LoaderStatus status_,
                        std::optional<std::string> errorCode_)
    : data(std::move(data_))
    , etag(std::move(etag_))
    , status(std::move(status_))
    , errorCode(std::move(errorCode_))
    {}
};
