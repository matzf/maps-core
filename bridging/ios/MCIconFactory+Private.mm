// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#import "MCIconFactory+Private.h"
#import "MCIconFactory.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCCoord+Private.h"
#import "MCIconInfoInterface+Private.h"
#import "MCIconType+Private.h"
#import "MCTextureHolderInterface+Private.h"
#import "MCVec2F+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCIconFactory ()

- (id)initWithCpp:(const std::shared_ptr<::IconFactory>&)cppRef;

@end

@implementation MCIconFactory {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::IconFactory>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::IconFactory>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCIconInfoInterface *)createIcon:(nonnull NSString *)identifier
                                  coordinate:(nonnull MCCoord *)coordinate
                                     texture:(nullable id<MCTextureHolderInterface>)texture
                                    iconSize:(nonnull MCVec2F *)iconSize
                                   scaleType:(MCIconType)scaleType {
    try {
        auto objcpp_result_ = ::IconFactory::createIcon(::djinni::String::toCpp(identifier),
                                                        ::djinni_generated::Coord::toCpp(coordinate),
                                                        ::djinni_generated::TextureHolderInterface::toCpp(texture),
                                                        ::djinni_generated::Vec2F::toCpp(iconSize),
                                                        ::djinni::Enum<::IconType, MCIconType>::toCpp(scaleType));
        return ::djinni_generated::IconInfoInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable MCIconInfoInterface *)createIconWithAnchor:(nonnull NSString *)identifier
                                            coordinate:(nonnull MCCoord *)coordinate
                                               texture:(nullable id<MCTextureHolderInterface>)texture
                                              iconSize:(nonnull MCVec2F *)iconSize
                                             scaleType:(MCIconType)scaleType
                                            iconAnchor:(nonnull MCVec2F *)iconAnchor {
    try {
        auto objcpp_result_ = ::IconFactory::createIconWithAnchor(::djinni::String::toCpp(identifier),
                                                                  ::djinni_generated::Coord::toCpp(coordinate),
                                                                  ::djinni_generated::TextureHolderInterface::toCpp(texture),
                                                                  ::djinni_generated::Vec2F::toCpp(iconSize),
                                                                  ::djinni::Enum<::IconType, MCIconType>::toCpp(scaleType),
                                                                  ::djinni_generated::Vec2F::toCpp(iconAnchor));
        return ::djinni_generated::IconInfoInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto IconFactory::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto IconFactory::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCIconFactory>(cpp);
}

} // namespace djinni_generated

@end
