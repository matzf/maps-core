// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#import "MCVec3D.h"


@implementation MCVec3D

- (nonnull instancetype)initWithX:(double)x
                                y:(double)y
                                z:(double)z
{
    if (self = [super init]) {
        _x = x;
        _y = y;
        _z = z;
    }
    return self;
}

+ (nonnull instancetype)vec3DWithX:(double)x
                                 y:(double)y
                                 z:(double)z
{
    return [[self alloc] initWithX:x
                                 y:y
                                 z:z];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[MCVec3D class]]) {
        return NO;
    }
    MCVec3D *typedOther = (MCVec3D *)other;
    return self.x == typedOther.x &&
            self.y == typedOther.y &&
            self.z == typedOther.z;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            (NSUInteger)self.x ^
            (NSUInteger)self.y ^
            (NSUInteger)self.z;
}

- (NSComparisonResult)compare:(MCVec3D *)other
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
    if (self.z < other.z) {
        tempResult = NSOrderedAscending;
    } else if (self.z > other.z) {
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
    return [NSString stringWithFormat:@"<%@ %p x:%@ y:%@ z:%@>", self.class, (void *)self, @(self.x), @(self.y), @(self.z)];
}

#endif
@end
