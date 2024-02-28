// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_raster_layer.djinni

#import "MCTiled2dMapRasterLayerInterface+Private.h"
#import "MCTiled2dMapRasterLayerInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCLayerInterface+Private.h"
#import "MCLoaderInterface+Private.h"
#import "MCMaskingObjectInterface+Private.h"
#import "MCRasterShaderStyle+Private.h"
#import "MCShaderProgramInterface+Private.h"
#import "MCTiled2dMapLayerConfig+Private.h"
#import "MCTiled2dMapRasterLayerCallbackInterface+Private.h"
#import "MCTiled2dMapReadyStateListener+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTiled2dMapRasterLayerInterface ()

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapRasterLayerInterface>&)cppRef;

@end

@implementation MCTiled2dMapRasterLayerInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Tiled2dMapRasterLayerInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapRasterLayerInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCTiled2dMapRasterLayerInterface *)createWithMask:(nullable id<MCTiled2dMapLayerConfig>)layerConfig
                                                      loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                         mask:(nullable id<MCMaskingObjectInterface>)mask {
    try {
        auto objcpp_result_ = ::Tiled2dMapRasterLayerInterface::createWithMask(::djinni_generated::Tiled2dMapLayerConfig::toCpp(layerConfig),
                                                                               ::djinni::List<::djinni_generated::LoaderInterface>::toCpp(loaders),
                                                                               ::djinni_generated::MaskingObjectInterface::toCpp(mask));
        return ::djinni_generated::Tiled2dMapRasterLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable MCTiled2dMapRasterLayerInterface *)createWithShader:(nullable id<MCTiled2dMapLayerConfig>)layerConfig
                                                        loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                         shader:(nullable id<MCShaderProgramInterface>)shader {
    try {
        auto objcpp_result_ = ::Tiled2dMapRasterLayerInterface::createWithShader(::djinni_generated::Tiled2dMapLayerConfig::toCpp(layerConfig),
                                                                                 ::djinni::List<::djinni_generated::LoaderInterface>::toCpp(loaders),
                                                                                 ::djinni_generated::ShaderProgramInterface::toCpp(shader));
        return ::djinni_generated::Tiled2dMapRasterLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable MCTiled2dMapRasterLayerInterface *)create:(nullable id<MCTiled2dMapLayerConfig>)layerConfig
                                              loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders {
    try {
        auto objcpp_result_ = ::Tiled2dMapRasterLayerInterface::create(::djinni_generated::Tiled2dMapLayerConfig::toCpp(layerConfig),
                                                                       ::djinni::List<::djinni_generated::LoaderInterface>::toCpp(loaders));
        return ::djinni_generated::Tiled2dMapRasterLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLayerInterface>)asLayerInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asLayerInterface();
        return ::djinni_generated::LayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setCallbackHandler:(nullable id<MCTiled2dMapRasterLayerCallbackInterface>)handler {
    try {
        _cppRefHandle.get()->setCallbackHandler(::djinni_generated::Tiled2dMapRasterLayerCallbackInterface::toCpp(handler));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCTiled2dMapRasterLayerCallbackInterface>)getCallbackHandler {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getCallbackHandler();
        return ::djinni::Optional<std::optional, ::djinni_generated::Tiled2dMapRasterLayerCallbackInterface>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeCallbackHandler {
    try {
        _cppRefHandle.get()->removeCallbackHandler();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setAlpha:(float)alpha {
    try {
        _cppRefHandle.get()->setAlpha(::djinni::F32::toCpp(alpha));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (float)getAlpha {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getAlpha();
        return ::djinni::F32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setStyle:(nonnull MCRasterShaderStyle *)style {
    try {
        _cppRefHandle.get()->setStyle(::djinni_generated::RasterShaderStyle::toCpp(style));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCRasterShaderStyle *)getStyle {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getStyle();
        return ::djinni_generated::RasterShaderStyle::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setMinZoomLevelIdentifier:(nullable NSNumber *)value {
    try {
        _cppRefHandle.get()->setMinZoomLevelIdentifier(::djinni::Optional<std::optional, ::djinni::I32>::toCpp(value));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable NSNumber *)getMinZoomLevelIdentifier {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getMinZoomLevelIdentifier();
        return ::djinni::Optional<std::optional, ::djinni::I32>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setMaxZoomLevelIdentifier:(nullable NSNumber *)value {
    try {
        _cppRefHandle.get()->setMaxZoomLevelIdentifier(::djinni::Optional<std::optional, ::djinni::I32>::toCpp(value));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable NSNumber *)getMaxZoomLevelIdentifier {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getMaxZoomLevelIdentifier();
        return ::djinni::Optional<std::optional, ::djinni::I32>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setT:(int32_t)t {
    try {
        _cppRefHandle.get()->setT(::djinni::I32::toCpp(t));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setReadyStateListener:(nullable id<MCTiled2dMapReadyStateListener>)listener {
    try {
        _cppRefHandle.get()->setReadyStateListener(::djinni::Optional<std::optional, ::djinni_generated::Tiled2dMapReadyStateListener>::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCTiled2dMapLayerConfig>)getConfig {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getConfig();
        return ::djinni_generated::Tiled2dMapLayerConfig::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)set3dSubdivisionFactor:(int32_t)factor {
    try {
        _cppRefHandle.get()->set3dSubdivisionFactor(::djinni::I32::toCpp(factor));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Tiled2dMapRasterLayerInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Tiled2dMapRasterLayerInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCTiled2dMapRasterLayerInterface>(cpp);
}

} // namespace djinni_generated

@end
