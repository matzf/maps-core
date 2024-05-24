// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from sphere_effect.djinni

#import "MCSphereEffectLayerInterface+Private.h"
#import "MCSphereEffectLayerInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCLayerInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCSphereEffectLayerInterface ()

- (id)initWithCpp:(const std::shared_ptr<::SphereEffectLayerInterface>&)cppRef;

@end

@implementation MCSphereEffectLayerInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::SphereEffectLayerInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::SphereEffectLayerInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCSphereEffectLayerInterface *)create {
    try {
        auto objcpp_result_ = ::SphereEffectLayerInterface::create();
        return ::djinni_generated::SphereEffectLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLayerInterface>)asLayerInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asLayerInterface();
        return ::djinni_generated::LayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto SphereEffectLayerInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto SphereEffectLayerInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCSphereEffectLayerInterface>(cpp);
}

} // namespace djinni_generated

@end
