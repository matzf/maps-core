// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "MCColor.h"
#import "MCCoordinateConversionHelperInterface.h"
#import "MCGraphicsObjectFactoryInterface.h"
#import "MCMapConfig.h"
#import "MCRectCoord.h"
#import "MCRenderingContextInterface.h"
#import "MCSchedulerInterface.h"
#import "MCShaderFactoryInterface.h"
#import "MCTouchHandlerInterface.h"
#import "MCVec2I.h"
#import <Foundation/Foundation.h>
@class MCMapCamera2dInterface;
@class MCMapInterface;
@protocol MCLayerInterface;
@protocol MCMapCallbackInterface;
@protocol MCMapReadyCallbackInterface;


@interface MCMapInterface : NSObject

+ (nullable MCMapInterface *)create:(nullable id<MCGraphicsObjectFactoryInterface>)graphicsFactory
                      shaderFactory:(nullable id<MCShaderFactoryInterface>)shaderFactory
                   renderingContext:(nullable id<MCRenderingContextInterface>)renderingContext
                          mapConfig:(nonnull MCMapConfig *)mapConfig
                          scheduler:(nullable id<MCSchedulerInterface>)scheduler
                       pixelDensity:(float)pixelDensity;

+ (nullable MCMapInterface *)createWithOpenGl:(nonnull MCMapConfig *)mapConfig
                                    scheduler:(nullable id<MCSchedulerInterface>)scheduler
                                 pixelDensity:(float)pixelDensity;

- (void)setCallbackHandler:(nullable id<MCMapCallbackInterface>)callbackInterface;

- (nullable id<MCGraphicsObjectFactoryInterface>)getGraphicsObjectFactory;

- (nullable id<MCShaderFactoryInterface>)getShaderFactory;

- (nullable id<MCSchedulerInterface>)getScheduler;

- (nullable id<MCRenderingContextInterface>)getRenderingContext;

- (nonnull MCMapConfig *)getMapConfig;

- (nullable MCCoordinateConversionHelperInterface *)getCoordinateConverterHelper;

- (void)setCamera:(nullable MCMapCamera2dInterface *)camera;

- (nullable MCMapCamera2dInterface *)getCamera;

- (void)setTouchHandler:(nullable id<MCTouchHandlerInterface>)touchHandler;

- (nullable id<MCTouchHandlerInterface>)getTouchHandler;

- (nonnull NSArray<id<MCLayerInterface>> *)getLayers;

- (void)addLayer:(nullable id<MCLayerInterface>)layer;

- (void)insertLayerAt:(nullable id<MCLayerInterface>)layer
              atIndex:(int32_t)atIndex;

- (void)insertLayerAbove:(nullable id<MCLayerInterface>)layer
                   above:(nullable id<MCLayerInterface>)above;

- (void)insertLayerBelow:(nullable id<MCLayerInterface>)layer
                   below:(nullable id<MCLayerInterface>)below;

- (void)removeLayer:(nullable id<MCLayerInterface>)layer;

- (void)setViewportSize:(nonnull MCVec2I *)size;

- (void)setBackgroundColor:(nonnull MCColor *)color;

- (void)invalidate;

- (void)drawFrame;

- (void)resume;

- (void)pause;

- (void)destroy;

/**
 * changes bounds to bounds, checks all layers for readiness, and updates callbacks, timeout in
 * seconds, always draw the frame when state is updated in the ready callbacks
 */
- (void)drawReadyFrame:(nonnull MCRectCoord *)bounds
               timeout:(float)timeout
             callbacks:(nullable id<MCMapReadyCallbackInterface>)callbacks;

- (void)forceReload;

@end
