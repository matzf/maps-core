// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#import "MCCoordinateConversionHelperInterface+Private.h"
#import "MCCoordinateConversionHelperInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCCoord+Private.h"
#import "MCCoordinateConverterInterface+Private.h"
#import "MCQuadCoord+Private.h"
#import "MCRectCoord+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCCoordinateConversionHelperInterface ()

- (id)initWithCpp:(const std::shared_ptr<::CoordinateConversionHelperInterface>&)cppRef;

@end

@implementation MCCoordinateConversionHelperInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::CoordinateConversionHelperInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::CoordinateConversionHelperInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCCoordinateConversionHelperInterface *)independentInstance {
    try {
        auto objcpp_result_ = ::CoordinateConversionHelperInterface::independentInstance();
        return ::djinni_generated::CoordinateConversionHelperInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)registerConverter:(nullable id<MCCoordinateConverterInterface>)converter {
    try {
        _cppRefHandle.get()->registerConverter(::djinni_generated::CoordinateConverterInterface::toCpp(converter));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCCoord *)convert:(int32_t)to
                  coordinate:(nonnull MCCoord *)coordinate {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->convert(::djinni::I32::toCpp(to),
                                                           ::djinni_generated::Coord::toCpp(coordinate));
        return ::djinni_generated::Coord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCRectCoord *)convertRect:(int32_t)to
                                rect:(nonnull MCRectCoord *)rect {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->convertRect(::djinni::I32::toCpp(to),
                                                               ::djinni_generated::RectCoord::toCpp(rect));
        return ::djinni_generated::RectCoord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCRectCoord *)convertRectToRenderSystem:(nonnull MCRectCoord *)rect {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->convertRectToRenderSystem(::djinni_generated::RectCoord::toCpp(rect));
        return ::djinni_generated::RectCoord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCQuadCoord *)convertQuad:(int32_t)to
                                quad:(nonnull MCQuadCoord *)quad {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->convertQuad(::djinni::I32::toCpp(to),
                                                               ::djinni_generated::QuadCoord::toCpp(quad));
        return ::djinni_generated::QuadCoord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCQuadCoord *)convertQuadToRenderSystem:(nonnull MCQuadCoord *)quad {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->convertQuadToRenderSystem(::djinni_generated::QuadCoord::toCpp(quad));
        return ::djinni_generated::QuadCoord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCCoord *)convertToRenderSystem:(nonnull MCCoord *)coordinate {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->convertToRenderSystem(::djinni_generated::Coord::toCpp(coordinate));
        return ::djinni_generated::Coord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto CoordinateConversionHelperInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto CoordinateConversionHelperInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCCoordinateConversionHelperInterface>(cpp);
}

} // namespace djinni_generated

@end
