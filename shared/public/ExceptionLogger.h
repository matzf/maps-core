// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception_logger.djinni

#pragma once

#include <memory>

class ExceptionLoggerInterface;

class ExceptionLogger {
public:
    virtual ~ExceptionLogger() {}

    static void setLoggerDelegate(const std::shared_ptr<ExceptionLoggerInterface> & delegate);
};
