// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from loader.djinni

#import "MCQuad2dD.h"
#import "MCVec2D.h"
#import <Foundation/Foundation.h>

NS_SWIFT_SENDABLE
@interface MCFontGlyph : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithCharCode:(nonnull NSString *)charCode
                                 advance:(nonnull MCVec2D *)advance
                         boundingBoxSize:(nonnull MCVec2D *)boundingBoxSize
                                 bearing:(nonnull MCVec2D *)bearing
                                      uv:(nonnull MCQuad2dD *)uv NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)fontGlyphWithCharCode:(nonnull NSString *)charCode
                                      advance:(nonnull MCVec2D *)advance
                              boundingBoxSize:(nonnull MCVec2D *)boundingBoxSize
                                      bearing:(nonnull MCVec2D *)bearing
                                           uv:(nonnull MCQuad2dD *)uv;

@property (nonatomic, readonly, nonnull) NSString * charCode;

@property (nonatomic, readonly, nonnull) MCVec2D * advance;

@property (nonatomic, readonly, nonnull) MCVec2D * boundingBoxSize;

@property (nonatomic, readonly, nonnull) MCVec2D * bearing;

/** s0,t0,s1,t1 */
@property (nonatomic, readonly, nonnull) MCQuad2dD * uv;

@end
