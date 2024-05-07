// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCQuad2dD.h"
#import "MCRenderingContextInterface.h"
#import "MCSharedBytes.h"
#import <Foundation/Foundation.h>
@protocol MCGraphicsObjectInterface;
@protocol MCTextureHolderInterface;


@protocol MCTextInstancedInterface

/** set the frame of the root object */
- (void)setFrame:(nonnull MCQuad2dD *)frame;

- (void)setInstanceCount:(int32_t)count;

/** 2 floats (x and y) for each instance */
- (void)setPositions:(nonnull MCSharedBytes *)positions;

/** 2 floats (x and y) for each instance */
- (void)setReferencePositions:(nonnull MCSharedBytes *)positions;

/** 4 floats (x, y, width and height) for each instanced */
- (void)setTextureCoordinates:(nonnull MCSharedBytes *)textureCoordinates;

/** 2 floats for width and height scale for each instance */
- (void)setScales:(nonnull MCSharedBytes *)scales;

/** one float for each instance in degree */
- (void)setRotations:(nonnull MCSharedBytes *)rotations;

/** one uint16 for each instance */
- (void)setStyleIndices:(nonnull MCSharedBytes *)indices;

/**
 * a style contains of:
 * color RGBA
 * halo-color RGBA
 * halo=width
 * so a total of 9 floats for each style
 */
- (void)setStyles:(nonnull MCSharedBytes *)values;

- (void)loadTexture:(nullable id<MCRenderingContextInterface>)context
      textureHolder:(nullable id<MCTextureHolderInterface>)textureHolder;

- (void)removeTexture;

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject;

@end
