// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#import "MCCameraInterpolation.h"
#import <Foundation/Foundation.h>

NS_SWIFT_SENDABLE
@interface MCCamera3dConfig : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithAllowUserInteraction:(BOOL)allowUserInteraction
                                       rotationSpeed:(nullable NSNumber *)rotationSpeed
                                             minZoom:(float)minZoom
                                             maxZoom:(float)maxZoom
                            pitchInterpolationValues:(nonnull MCCameraInterpolation *)pitchInterpolationValues
             verticalDisplacementInterpolationValues:(nonnull MCCameraInterpolation *)verticalDisplacementInterpolationValues NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)camera3dConfigWithAllowUserInteraction:(BOOL)allowUserInteraction
                                                 rotationSpeed:(nullable NSNumber *)rotationSpeed
                                                       minZoom:(float)minZoom
                                                       maxZoom:(float)maxZoom
                                      pitchInterpolationValues:(nonnull MCCameraInterpolation *)pitchInterpolationValues
                       verticalDisplacementInterpolationValues:(nonnull MCCameraInterpolation *)verticalDisplacementInterpolationValues;

@property (nonatomic, readonly) BOOL allowUserInteraction;

@property (nonatomic, readonly, nullable) NSNumber * rotationSpeed;

@property (nonatomic, readonly) float minZoom;

@property (nonatomic, readonly) float maxZoom;

@property (nonatomic, readonly, nonnull) MCCameraInterpolation * pitchInterpolationValues;

@property (nonatomic, readonly, nonnull) MCCameraInterpolation * verticalDisplacementInterpolationValues;

@end
