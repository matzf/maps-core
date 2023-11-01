// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCTiled2dMapVectorLayerLocalDataProviderInterface+Private.h"
#import "MCTiled2dMapVectorLayerLocalDataProviderInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "Future_objc.hpp"
#import "MCDataLoaderResult+Private.h"
#import "MCTextureLoaderResult+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTiled2dMapVectorLayerLocalDataProviderInterfaceCppProxy : NSObject<MCTiled2dMapVectorLayerLocalDataProviderInterface>

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapVectorLayerLocalDataProviderInterface>&)cppRef;

@end

@implementation MCTiled2dMapVectorLayerLocalDataProviderInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Tiled2dMapVectorLayerLocalDataProviderInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapVectorLayerLocalDataProviderInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSString *)getStyleJson {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getStyleJson();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull DJFuture<MCTextureLoaderResult *> *)loadSpriteAsync:(int32_t)scale {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->loadSpriteAsync(::djinni::I32::toCpp(scale));
        return ::djinni::FutureAdaptor<::djinni_generated::TextureLoaderResult>::fromCpp(std::move(objcpp_result_));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull DJFuture<MCDataLoaderResult *> *)loadSpriteJsonAsync:(int32_t)scale {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->loadSpriteJsonAsync(::djinni::I32::toCpp(scale));
        return ::djinni::FutureAdaptor<::djinni_generated::DataLoaderResult>::fromCpp(std::move(objcpp_result_));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)providesGeojsonData:(nonnull NSString *)url {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->providesGeojsonData(::djinni::String::toCpp(url));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull DJFuture<MCDataLoaderResult *> *)loadGeojson:(nonnull NSString *)url {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->loadGeojson(::djinni::String::toCpp(url));
        return ::djinni::FutureAdaptor<::djinni_generated::DataLoaderResult>::fromCpp(std::move(objcpp_result_));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class Tiled2dMapVectorLayerLocalDataProviderInterface::ObjcProxy final
: public ::Tiled2dMapVectorLayerLocalDataProviderInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::Tiled2dMapVectorLayerLocalDataProviderInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    std::string getStyleJson() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getStyleJson];
            return ::djinni::String::toCpp(objcpp_result_);
        }
    }
    ::djinni::Future<::TextureLoaderResult> loadSpriteAsync(int32_t c_scale) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() loadSpriteAsync:(::djinni::I32::fromCpp(c_scale))];
            return ::djinni::FutureAdaptor<::djinni_generated::TextureLoaderResult>::toCpp(objcpp_result_);
        }
    }
    ::djinni::Future<::DataLoaderResult> loadSpriteJsonAsync(int32_t c_scale) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() loadSpriteJsonAsync:(::djinni::I32::fromCpp(c_scale))];
            return ::djinni::FutureAdaptor<::djinni_generated::DataLoaderResult>::toCpp(objcpp_result_);
        }
    }
    bool providesGeojsonData(const std::string & c_url) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() providesGeojsonData:(::djinni::String::fromCpp(c_url))];
            return ::djinni::Bool::toCpp(objcpp_result_);
        }
    }
    ::djinni::Future<::DataLoaderResult> loadGeojson(const std::string & c_url) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() loadGeojson:(::djinni::String::fromCpp(c_url))];
            return ::djinni::FutureAdaptor<::djinni_generated::DataLoaderResult>::toCpp(objcpp_result_);
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto Tiled2dMapVectorLayerLocalDataProviderInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCTiled2dMapVectorLayerLocalDataProviderInterfaceCppProxy class]]) {
        return ((MCTiled2dMapVectorLayerLocalDataProviderInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto Tiled2dMapVectorLayerLocalDataProviderInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCTiled2dMapVectorLayerLocalDataProviderInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
