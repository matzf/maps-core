// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCQuad2dD.h"
#import "MCRenderingContextInterface.h"
#import "MCSharedBytes.h"
#import "MCVec3D.h"
#import <Foundation/Foundation.h>
@protocol MCGraphicsObjectInterface;
@protocol MCMaskingObjectInterface;
@protocol MCTextureHolderInterface;


@protocol MCQuad2dInstancedInterface

- (void)setFrame:(nonnull MCQuad2dD *)frame
          origin:(nonnull MCVec3D *)origin;

- (void)setInstanceCount:(int32_t)count;

- (void)setPositions:(nonnull MCSharedBytes *)positions;

- (void)setScales:(nonnull MCSharedBytes *)scales;

- (void)setRotations:(nonnull MCSharedBytes *)rotations;

- (void)setAlphas:(nonnull MCSharedBytes *)values;

- (void)setTextureCoordinates:(nonnull MCSharedBytes *)textureCoordinates;

/**
 * 2 floats (x and y) for each instance
 * defines the offset applied to the projected position in viewspace coordinates
 */
- (void)setPositionOffset:(nonnull MCSharedBytes *)offsets;

- (void)loadTexture:(nullable id<MCRenderingContextInterface>)context
      textureHolder:(nullable id<MCTextureHolderInterface>)textureHolder;

- (void)removeTexture;

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject;

- (nullable id<MCMaskingObjectInterface>)asMaskingObject;

@end
