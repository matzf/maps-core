// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#import <Foundation/Foundation.h>

@interface MCColor : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithR:(float)r
                                g:(float)g
                                b:(float)b
                                a:(float)a NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)colorWithR:(float)r
                                 g:(float)g
                                 b:(float)b
                                 a:(float)a;

@property (nonatomic, readonly) float r;

@property (nonatomic, readonly) float g;

@property (nonatomic, readonly) float b;

@property (nonatomic, readonly) float a;

- (NSComparisonResult)compare:(nonnull MCColor *)other;

@end
