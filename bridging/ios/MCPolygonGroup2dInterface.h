// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCSharedBytes.h"
#import "MCVec3D.h"
#import <Foundation/Foundation.h>
@protocol MCGraphicsObjectInterface;


@protocol MCPolygonGroup2dInterface

- (void)setVertices:(nonnull MCSharedBytes *)vertices
            indices:(nonnull MCSharedBytes *)indices
             origin:(nonnull MCVec3D *)origin;

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject;

@end
