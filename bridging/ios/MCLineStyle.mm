// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from line.djinni

#import "MCLineStyle.h"


@implementation MCLineStyle

- (nonnull instancetype)initWithColor:(nonnull MCColorStateList *)color
                             gapColor:(nonnull MCColorStateList *)gapColor
                              opacity:(float)opacity
                                 blur:(float)blur
                            widthType:(MCSizeType)widthType
                                width:(float)width
                            dashArray:(nonnull NSArray<NSNumber *> *)dashArray
                              lineCap:(MCLineCapType)lineCap
                               offset:(float)offset
                               dotted:(BOOL)dotted
{
    if (self = [super init]) {
        _color = color;
        _gapColor = gapColor;
        _opacity = opacity;
        _blur = blur;
        _widthType = widthType;
        _width = width;
        _dashArray = [dashArray copy];
        _lineCap = lineCap;
        _offset = offset;
        _dotted = dotted;
    }
    return self;
}

+ (nonnull instancetype)lineStyleWithColor:(nonnull MCColorStateList *)color
                                  gapColor:(nonnull MCColorStateList *)gapColor
                                   opacity:(float)opacity
                                      blur:(float)blur
                                 widthType:(MCSizeType)widthType
                                     width:(float)width
                                 dashArray:(nonnull NSArray<NSNumber *> *)dashArray
                                   lineCap:(MCLineCapType)lineCap
                                    offset:(float)offset
                                    dotted:(BOOL)dotted
{
    return [[self alloc] initWithColor:color
                              gapColor:gapColor
                               opacity:opacity
                                  blur:blur
                             widthType:widthType
                                 width:width
                             dashArray:dashArray
                               lineCap:lineCap
                                offset:offset
                                dotted:dotted];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p color:%@ gapColor:%@ opacity:%@ blur:%@ widthType:%@ width:%@ dashArray:%@ lineCap:%@ offset:%@ dotted:%@>", self.class, (void *)self, self.color, self.gapColor, @(self.opacity), @(self.blur), @(self.widthType), @(self.width), self.dashArray, @(self.lineCap), @(self.offset), @(self.dotted)];
}

#endif
@end
