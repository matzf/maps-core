// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#import "MCCoord.h"
#import "MCErrorManager.h"
#import "MCLayerReadyState.h"
#import "MCRectCoord.h"
#import "MCVec3D.h"
#import <Foundation/Foundation.h>


@interface MCTiled2dMapSourceInterface : NSObject

- (void)onVisibleBoundsChanged:(nonnull MCRectCoord *)visibleBounds
                          curT:(int32_t)curT
                          zoom:(double)zoom;

- (void)onCameraChange:(nonnull NSArray<NSNumber *> *)viewMatrix
      projectionMatrix:(nonnull NSArray<NSNumber *> *)projectionMatrix
                origin:(nonnull MCVec3D *)origin
           verticalFov:(float)verticalFov
         horizontalFov:(float)horizontalFov
                 width:(float)width
                height:(float)height
    focusPointAltitude:(float)focusPointAltitude
    focusPointPosition:(nonnull MCCoord *)focusPointPosition
                  zoom:(float)zoom;

- (void)setMinZoomLevelIdentifier:(nullable NSNumber *)value;

- (nullable NSNumber *)getMinZoomLevelIdentifier;

- (void)setMaxZoomLevelIdentifier:(nullable NSNumber *)value;

- (nullable NSNumber *)getMaxZoomLevelIdentifier;

- (void)pause;

- (void)resume;

- (MCLayerReadyState)isReadyToRenderOffscreen;

- (void)setErrorManager:(nullable MCErrorManager *)errorManager;

- (void)forceReload;

- (void)notifyTilesUpdates;

@end
