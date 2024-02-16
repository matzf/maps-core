// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCTiled2dMapVectorLayerInterface+Private.h"
#import "MCTiled2dMapVectorLayerInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCCoord+Private.h"
#import "MCFontLoaderInterface+Private.h"
#import "MCLayerInterface+Private.h"
#import "MCLoaderInterface+Private.h"
#import "MCTiled2dMapReadyStateListener+Private.h"
#import "MCTiled2dMapVectorLayerLocalDataProviderInterface+Private.h"
#import "MCTiled2dMapVectorLayerSelectionCallbackInterface+Private.h"
#import "MCTiled2dMapVectorLayerSymbolDelegateInterface+Private.h"
#import "MCTiled2dMapZoomInfo+Private.h"
#import "MCVectorLayerFeatureInfoValue+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTiled2dMapVectorLayerInterface ()

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapVectorLayerInterface>&)cppRef;

@end

@implementation MCTiled2dMapVectorLayerInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Tiled2dMapVectorLayerInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapVectorLayerInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCTiled2dMapVectorLayerInterface *)createFromStyleJson:(nonnull NSString *)layerName
                                                      styleJsonUrl:(nonnull NSString *)styleJsonUrl
                                                           loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                        fontLoader:(nullable id<MCFontLoaderInterface>)fontLoader {
    try {
        auto objcpp_result_ = ::Tiled2dMapVectorLayerInterface::createFromStyleJson(::djinni::String::toCpp(layerName),
                                                                                    ::djinni::String::toCpp(styleJsonUrl),
                                                                                    ::djinni::List<::djinni_generated::LoaderInterface>::toCpp(loaders),
                                                                                    ::djinni_generated::FontLoaderInterface::toCpp(fontLoader));
        return ::djinni_generated::Tiled2dMapVectorLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable MCTiled2dMapVectorLayerInterface *)createExplicitly:(nonnull NSString *)layerName
                                                      styleJson:(nullable NSString *)styleJson
                                                 localStyleJson:(nullable NSNumber *)localStyleJson
                                                        loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                     fontLoader:(nullable id<MCFontLoaderInterface>)fontLoader
                                              localDataProvider:(nullable id<MCTiled2dMapVectorLayerLocalDataProviderInterface>)localDataProvider
                                                 customZoomInfo:(nullable MCTiled2dMapZoomInfo *)customZoomInfo
                                                 symbolDelegate:(nullable id<MCTiled2dMapVectorLayerSymbolDelegateInterface>)symbolDelegate
                                                sourceUrlParams:(nullable NSDictionary<NSString *, NSString *> *)sourceUrlParams {
    try {
        auto objcpp_result_ = ::Tiled2dMapVectorLayerInterface::createExplicitly(::djinni::String::toCpp(layerName),
                                                                                 ::djinni::Optional<std::optional, ::djinni::String>::toCpp(styleJson),
                                                                                 ::djinni::Optional<std::optional, ::djinni::Bool>::toCpp(localStyleJson),
                                                                                 ::djinni::List<::djinni_generated::LoaderInterface>::toCpp(loaders),
                                                                                 ::djinni_generated::FontLoaderInterface::toCpp(fontLoader),
                                                                                 ::djinni::Optional<std::optional, ::djinni_generated::Tiled2dMapVectorLayerLocalDataProviderInterface>::toCpp(localDataProvider),
                                                                                 ::djinni::Optional<std::optional, ::djinni_generated::Tiled2dMapZoomInfo>::toCpp(customZoomInfo),
                                                                                 ::djinni::Optional<std::optional, ::djinni_generated::Tiled2dMapVectorLayerSymbolDelegateInterface>::toCpp(symbolDelegate),
                                                                                 ::djinni::Optional<std::optional, ::djinni::Map<::djinni::String, ::djinni::String>>::toCpp(sourceUrlParams));
        return ::djinni_generated::Tiled2dMapVectorLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setSelectionDelegate:(nullable id<MCTiled2dMapVectorLayerSelectionCallbackInterface>)selectionDelegate {
    try {
        _cppRefHandle.get()->setSelectionDelegate(::djinni::Optional<std::optional, ::djinni_generated::Tiled2dMapVectorLayerSelectionCallbackInterface>::toCpp(selectionDelegate));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLayerInterface>)asLayerInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asLayerInterface();
        return ::djinni_generated::LayerInterface::fromCpp(objcpp_result_);
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

- (nullable NSString *)getStyleMetadataJson {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getStyleMetadataJson();
        return ::djinni::Optional<std::optional, ::djinni::String>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setFeatureState:(nonnull NSString *)identifier
             properties:(nonnull NSDictionary<NSString *, MCVectorLayerFeatureInfoValue *> *)properties {
    try {
        _cppRefHandle.get()->setFeatureState(::djinni::String::toCpp(identifier),
                                             ::djinni::Map<::djinni::String, ::djinni_generated::VectorLayerFeatureInfoValue>::toCpp(properties));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setGlobalState:(nonnull NSDictionary<NSString *, MCVectorLayerFeatureInfoValue *> *)properties {
    try {
        _cppRefHandle.get()->setGlobalState(::djinni::Map<::djinni::String, ::djinni_generated::VectorLayerFeatureInfoValue>::toCpp(properties));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setReadyStateListener:(nullable id<MCTiled2dMapReadyStateListener>)listener {
    try {
        _cppRefHandle.get()->setReadyStateListener(::djinni::Optional<std::optional, ::djinni_generated::Tiled2dMapReadyStateListener>::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)reloadDataSource:(nonnull NSString *)sourceName {
    try {
        _cppRefHandle.get()->reloadDataSource(::djinni::String::toCpp(sourceName));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)reloadLocalDataSource:(nonnull NSString *)sourceName
                      geoJson:(nonnull NSString *)geoJson {
    try {
        _cppRefHandle.get()->reloadLocalDataSource(::djinni::String::toCpp(sourceName),
                                                   ::djinni::String::toCpp(geoJson));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)performClick:(nonnull MCCoord *)coord {
    try {
        _cppRefHandle.get()->performClick(::djinni_generated::Coord::toCpp(coord));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Tiled2dMapVectorLayerInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Tiled2dMapVectorLayerInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCTiled2dMapVectorLayerInterface>(cpp);
}

} // namespace djinni_generated

@end
