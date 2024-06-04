// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from camera.djinni

#import "MCCameraMode3d.h"
#import "MCCoord.h"
#import "MCRectCoord.h"
#import <Foundation/Foundation.h>


@protocol MCMapCameraListenerInterface

- (void)onVisibleBoundsChanged:(nonnull MCRectCoord *)visibleBounds
                          zoom:(double)zoom;

- (void)onRotationChanged:(float)angle;

- (void)onMapInteraction;

- (void)onCameraChange:(nonnull NSArray<NSNumber *> *)viewMatrix
      projectionMatrix:(nonnull NSArray<NSNumber *> *)projectionMatrix
           verticalFov:(float)verticalFov
         horizontalFov:(float)horizontalFov
                 width:(float)width
                height:(float)height
    focusPointAltitude:(float)focusPointAltitude
    focusPointPosition:(nonnull MCCoord *)focusPointPosition
                  zoom:(float)zoom
                  mode:(MCCameraMode3d)mode;

@end
