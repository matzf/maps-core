// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#import "MCVec2D.h"


@implementation MCVec2D

- (nonnull instancetype)initWithX:(double)x
                                y:(double)y
{
    if (self = [super init]) {
        _x = x;
        _y = y;
    }
    return self;
}

+ (nonnull instancetype)vec2DWithX:(double)x
                                 y:(double)y
{
    return [[self alloc] initWithX:x
                                 y:y];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[MCVec2D class]]) {
        return NO;
    }
    MCVec2D *typedOther = (MCVec2D *)other;
    return self.x == typedOther.x &&
            self.y == typedOther.y;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            (NSUInteger)self.x ^
            (NSUInteger)self.y;
}

- (NSComparisonResult)compare:(MCVec2D *)other
{
    NSComparisonResult tempResult;
    if (self.x < other.x) {
        tempResult = NSOrderedAscending;
    } else if (self.x > other.x) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    if (self.y < other.y) {
        tempResult = NSOrderedAscending;
    } else if (self.y > other.y) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    return NSOrderedSame;
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p x:%@ y:%@>", self.class, (void *)self, @(self.x), @(self.y)];
}

#endif
@end
