// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#import "MCVec3D.h"
#import <Foundation/Foundation.h>


@protocol MCCameraInterface

- (nonnull NSArray<NSNumber *> *)getViewMatrix;

- (nonnull NSArray<NSNumber *> *)getProjectionMatrix;

- (double)getScalingFactor;

- (nonnull MCVec3D *)getOrigin;

- (void)viewportSizeChanged;

@end
