// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "MCCameraInterface.h"
#import "MCCoord.h"
#import "MCMapCamera2dListenerInterface.h"
#import "MCRectCoord.h"
#import "MCVec2F.h"
#import <Foundation/Foundation.h>
@class MCMapCamera2dInterface;
@class MCMapInterface;


@interface MCMapCamera2dInterface : NSObject

+ (nullable MCMapCamera2dInterface *)create:(nullable MCMapInterface *)mapInterface
                           screenDensityPpi:(float)screenDensityPpi;

- (void)moveToCenterPositionZoom:(nonnull MCCoord *)centerPosition
                            zoom:(double)zoom
                        animated:(BOOL)animated;

- (void)moveToCenterPosition:(nonnull MCCoord *)centerPosition
                    animated:(BOOL)animated;

- (nonnull MCCoord *)getCenterPosition;

- (void)setZoom:(double)zoom
       animated:(BOOL)animated;

- (double)getZoom;

- (void)setMinZoom:(double)minZoom;

- (void)setMaxZoom:(double)maxZoom;

- (void)setPaddingLeft:(float)padding
              animated:(BOOL)animated;

- (void)setPaddingRight:(float)padding
               animated:(BOOL)animated;

- (void)setPaddingTop:(float)padding
             animated:(BOOL)animated;

- (void)setPaddingBottom:(float)padding
                animated:(BOOL)animated;

- (nonnull MCRectCoord *)getVisibleRect;

- (void)addListener:(nullable id<MCMapCamera2dListenerInterface>)listener;

- (void)removeListener:(nullable id<MCMapCamera2dListenerInterface>)listener;

- (nonnull MCCoord *)coordFromScreenPosition:(nonnull MCVec2F *)posScreen;

- (nullable id<MCCameraInterface>)asCameraInterface;

@end
