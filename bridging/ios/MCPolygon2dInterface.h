// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCVec2D.h"
#import <Foundation/Foundation.h>
@protocol MCGraphicsObjectInterface;
@protocol MCMaskingObjectInterface;


@protocol MCPolygon2dInterface

- (void)setVertices:(nonnull NSArray<MCVec2D *> *)vertices
            indices:(nonnull NSArray<NSNumber *> *)indices;

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject;

- (nullable id<MCMaskingObjectInterface>)asMaskingObject;

@end
