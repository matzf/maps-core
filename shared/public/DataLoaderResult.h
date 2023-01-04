// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from loader.djinni

#pragma once

#include "LoaderStatus.h"
#include <memory>
#include <optional>
#include <string>
#include <utility>

class DataHolderInterface;

struct DataLoaderResult final {
    /*nullable*/ std::shared_ptr<DataHolderInterface> data;
    std::optional<std::string> etag;
    LoaderStatus status;
    std::optional<std::string> errorCode;

    DataLoaderResult(/*nullable*/ std::shared_ptr<DataHolderInterface> data_,
                     std::optional<std::string> etag_,
                     LoaderStatus status_,
                     std::optional<std::string> errorCode_)
    : data(std::move(data_))
    , etag(std::move(etag_))
    , status(std::move(status_))
    , errorCode(std::move(errorCode_))
    {}
};
