// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCSharedBytes.h"
#import "MCVec3D.h"
#import <Foundation/Foundation.h>
@protocol MCGraphicsObjectInterface;


@protocol MCLineGroup2dInterface

- (void)setLines:(nonnull MCSharedBytes *)lines
         indices:(nonnull MCSharedBytes *)indices
          origin:(nonnull MCVec3D *)origin
            is3d:(BOOL)is3d;

- (nullable id<MCGraphicsObjectInterface>)asGraphicsObject;

@end
