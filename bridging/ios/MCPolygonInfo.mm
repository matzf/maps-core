// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

#import "MCPolygonInfo.h"


@implementation MCPolygonInfo

- (nonnull instancetype)initWithIdentifier:(nonnull NSString *)identifier
                               coordinates:(nonnull MCPolygonCoord *)coordinates
                                     color:(nonnull MCColor *)color
                            highlightColor:(nonnull MCColor *)highlightColor
{
    if (self = [super init]) {
        _identifier = [identifier copy];
        _coordinates = coordinates;
        _color = color;
        _highlightColor = highlightColor;
    }
    return self;
}

+ (nonnull instancetype)polygonInfoWithIdentifier:(nonnull NSString *)identifier
                                      coordinates:(nonnull MCPolygonCoord *)coordinates
                                            color:(nonnull MCColor *)color
                                   highlightColor:(nonnull MCColor *)highlightColor
{
    return [[self alloc] initWithIdentifier:identifier
                                coordinates:coordinates
                                      color:color
                             highlightColor:highlightColor];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p identifier:%@ coordinates:%@ color:%@ highlightColor:%@>", self.class, (void *)self, self.identifier, self.coordinates, self.color, self.highlightColor];
}

#endif
@end
