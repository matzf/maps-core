// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#import "MCCoordinateSystemIdentifiers+Private.h"
#import "MCCoordinateSystemIdentifiers.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCCoordinateSystemIdentifiers ()

- (id)initWithCpp:(const std::shared_ptr<::CoordinateSystemIdentifiers>&)cppRef;

@end

@implementation MCCoordinateSystemIdentifiers {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::CoordinateSystemIdentifiers>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::CoordinateSystemIdentifiers>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (int32_t)RENDERSYSTEM {
    try {
        auto objcpp_result_ = ::CoordinateSystemIdentifiers::RENDERSYSTEM();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int32_t)EPSG3857 {
    try {
        auto objcpp_result_ = ::CoordinateSystemIdentifiers::EPSG3857();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int32_t)EPSG4326 {
    try {
        auto objcpp_result_ = ::CoordinateSystemIdentifiers::EPSG4326();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int32_t)EPSG2056 {
    try {
        auto objcpp_result_ = ::CoordinateSystemIdentifiers::EPSG2056();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int32_t)EPSG21781 {
    try {
        auto objcpp_result_ = ::CoordinateSystemIdentifiers::EPSG21781();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int32_t)UnitSphere {
    try {
        auto objcpp_result_ = ::CoordinateSystemIdentifiers::UnitSphere();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (int32_t)fromCrsIdentifier:(nonnull NSString *)identifier {
    try {
        auto objcpp_result_ = ::CoordinateSystemIdentifiers::fromCrsIdentifier(::djinni::String::toCpp(identifier));
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto CoordinateSystemIdentifiers::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto CoordinateSystemIdentifiers::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCCoordinateSystemIdentifiers>(cpp);
}

} // namespace djinni_generated

@end
