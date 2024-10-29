// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_raster_layer.djinni

#import "MCBlendMode.h"
#import "MCLayerInterface.h"
#import "MCLoaderInterface.h"
#import "MCMaskingObjectInterface.h"
#import "MCRasterShaderStyle.h"
#import "MCShaderProgramInterface.h"
#import "MCTiled2dMapLayerConfig.h"
#import "MCTiled2dMapReadyStateListener.h"
#import <Foundation/Foundation.h>
@class MCTiled2dMapRasterLayerInterface;
@protocol MCTiled2dMapRasterLayerCallbackInterface;


@interface MCTiled2dMapRasterLayerInterface : NSObject

/** the loaders are tried in their respective order, if the first loader returns the error code NOOP the second will be tried and so on */
+ (nullable MCTiled2dMapRasterLayerInterface *)createWithMask:(nullable id<MCTiled2dMapLayerConfig>)layerConfig
                                                      loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                         mask:(nullable id<MCMaskingObjectInterface>)mask;

/** the loaders are tried in their respective order, if the first loader returns the error code NOOP the second will be tried and so on */
+ (nullable MCTiled2dMapRasterLayerInterface *)createWithShader:(nullable id<MCTiled2dMapLayerConfig>)layerConfig
                                                        loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders
                                                         shader:(nullable id<MCShaderProgramInterface>)shader;

/** the loaders are tried in their respective order, if the first loader returns the error code NOOP the second will be tried and so on */
+ (nullable MCTiled2dMapRasterLayerInterface *)create:(nullable id<MCTiled2dMapLayerConfig>)layerConfig
                                              loaders:(nonnull NSArray<id<MCLoaderInterface>> *)loaders;

- (nullable id<MCLayerInterface>)asLayerInterface;

- (void)setCallbackHandler:(nullable id<MCTiled2dMapRasterLayerCallbackInterface>)handler;

- (nullable id<MCTiled2dMapRasterLayerCallbackInterface>)getCallbackHandler;

- (void)removeCallbackHandler;

- (void)setAlpha:(float)alpha;

- (float)getAlpha;

- (void)setStyle:(nonnull MCRasterShaderStyle *)style;

- (nonnull MCRasterShaderStyle *)getStyle;

- (void)setMinZoomLevelIdentifier:(nullable NSNumber *)value;

- (nullable NSNumber *)getMinZoomLevelIdentifier;

- (void)setMaxZoomLevelIdentifier:(nullable NSNumber *)value;

- (nullable NSNumber *)getMaxZoomLevelIdentifier;

- (void)setT:(int32_t)t;

- (void)setReadyStateListener:(nullable id<MCTiled2dMapReadyStateListener>)listener;

- (nullable id<MCTiled2dMapLayerConfig>)getConfig;

- (void)set3dSubdivisionFactor:(int32_t)factor;

- (void)setBlendMode:(MCBlendMode)blendMode;

@end
