// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCQuad2dD.h"
#import <Foundation/Foundation.h>

@interface MCGlyphDescription : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(nonnull MCQuad2dD *)frame
                   textureCoordinates:(nonnull MCQuad2dD *)textureCoordinates NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)glyphDescriptionWithFrame:(nonnull MCQuad2dD *)frame
                               textureCoordinates:(nonnull MCQuad2dD *)textureCoordinates;

@property (nonatomic, readonly, nonnull) MCQuad2dD * frame;

@property (nonatomic, readonly, nonnull) MCQuad2dD * textureCoordinates;

@end
