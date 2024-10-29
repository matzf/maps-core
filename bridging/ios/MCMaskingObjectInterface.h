// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCRenderPassConfig.h"
#import "MCRenderingContextInterface.h"
#import "MCVec3D.h"
#import <Foundation/Foundation.h>
@protocol MCGraphicsObjectInterface;


@protocol MCMaskingObjectInterface

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject;

- (void)renderAsMask:(nullable id<MCRenderingContextInterface>)context
          renderPass:(nonnull MCRenderPassConfig *)renderPass
            vpMatrix:(int64_t)vpMatrix
             mMatrix:(int64_t)mMatrix
              origin:(nonnull MCVec3D *)origin
screenPixelAsRealMeterFactor:(double)screenPixelAsRealMeterFactor;

@end
