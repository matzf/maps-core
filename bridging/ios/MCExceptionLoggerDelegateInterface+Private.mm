// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from exception_logger.djinni

#import "MCExceptionLoggerDelegateInterface+Private.h"
#import "MCExceptionLoggerDelegateInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCExceptionLoggerDelegateInterfaceCppProxy : NSObject<MCExceptionLoggerDelegateInterface>

- (id)initWithCpp:(const std::shared_ptr<::ExceptionLoggerDelegateInterface>&)cppRef;

@end

@implementation MCExceptionLoggerDelegateInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ExceptionLoggerDelegateInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ExceptionLoggerDelegateInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)logMessage:(nonnull NSString *)errorDomain
              code:(int32_t)code
      customValues:(nonnull NSDictionary<NSString *, NSString *> *)customValues
          function:(nonnull NSString *)function
              file:(nonnull NSString *)file
              line:(int32_t)line {
    try {
        _cppRefHandle.get()->logMessage(::djinni::String::toCpp(errorDomain),
                                        ::djinni::I32::toCpp(code),
                                        ::djinni::Map<::djinni::String, ::djinni::String>::toCpp(customValues),
                                        ::djinni::String::toCpp(function),
                                        ::djinni::String::toCpp(file),
                                        ::djinni::I32::toCpp(line));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class ExceptionLoggerDelegateInterface::ObjcProxy final
: public ::ExceptionLoggerDelegateInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::ExceptionLoggerDelegateInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void logMessage(const std::string & c_errorDomain, int32_t c_code, const std::unordered_map<std::string, std::string> & c_customValues, const std::string & c_function, const std::string & c_file, int32_t c_line) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() logMessage:(::djinni::String::fromCpp(c_errorDomain))
                                                            code:(::djinni::I32::fromCpp(c_code))
                                                    customValues:(::djinni::Map<::djinni::String, ::djinni::String>::fromCpp(c_customValues))
                                                        function:(::djinni::String::fromCpp(c_function))
                                                            file:(::djinni::String::fromCpp(c_file))
                                                            line:(::djinni::I32::fromCpp(c_line))];
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto ExceptionLoggerDelegateInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCExceptionLoggerDelegateInterfaceCppProxy class]]) {
        return ((MCExceptionLoggerDelegateInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto ExceptionLoggerDelegateInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCExceptionLoggerDelegateInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
