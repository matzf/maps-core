// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from line.djinni

#import "MCShaderLineStyle.h"


@implementation MCShaderLineStyle

- (nonnull instancetype)initWithWidth:(float)width
                               colorR:(float)colorR
                               colorG:(float)colorG
                               colorB:(float)colorB
                               colorA:(float)colorA
                            gapColorR:(float)gapColorR
                            gapColorG:(float)gapColorG
                            gapColorB:(float)gapColorB
                            gapColorA:(float)gapColorA
                         widthAsPixel:(float)widthAsPixel
                              opacity:(float)opacity
                                 blur:(float)blur
                              lineCap:(float)lineCap
                         numDashValue:(float)numDashValue
                           dashValue0:(float)dashValue0
                           dashValue1:(float)dashValue1
                           dashValue2:(float)dashValue2
                           dashValue3:(float)dashValue3
                               offset:(float)offset
{
    if (self = [super init]) {
        _width = width;
        _colorR = colorR;
        _colorG = colorG;
        _colorB = colorB;
        _colorA = colorA;
        _gapColorR = gapColorR;
        _gapColorG = gapColorG;
        _gapColorB = gapColorB;
        _gapColorA = gapColorA;
        _widthAsPixel = widthAsPixel;
        _opacity = opacity;
        _blur = blur;
        _lineCap = lineCap;
        _numDashValue = numDashValue;
        _dashValue0 = dashValue0;
        _dashValue1 = dashValue1;
        _dashValue2 = dashValue2;
        _dashValue3 = dashValue3;
        _offset = offset;
    }
    return self;
}

+ (nonnull instancetype)shaderLineStyleWithWidth:(float)width
                                          colorR:(float)colorR
                                          colorG:(float)colorG
                                          colorB:(float)colorB
                                          colorA:(float)colorA
                                       gapColorR:(float)gapColorR
                                       gapColorG:(float)gapColorG
                                       gapColorB:(float)gapColorB
                                       gapColorA:(float)gapColorA
                                    widthAsPixel:(float)widthAsPixel
                                         opacity:(float)opacity
                                            blur:(float)blur
                                         lineCap:(float)lineCap
                                    numDashValue:(float)numDashValue
                                      dashValue0:(float)dashValue0
                                      dashValue1:(float)dashValue1
                                      dashValue2:(float)dashValue2
                                      dashValue3:(float)dashValue3
                                          offset:(float)offset
{
    return [[self alloc] initWithWidth:width
                                colorR:colorR
                                colorG:colorG
                                colorB:colorB
                                colorA:colorA
                             gapColorR:gapColorR
                             gapColorG:gapColorG
                             gapColorB:gapColorB
                             gapColorA:gapColorA
                          widthAsPixel:widthAsPixel
                               opacity:opacity
                                  blur:blur
                               lineCap:lineCap
                          numDashValue:numDashValue
                            dashValue0:dashValue0
                            dashValue1:dashValue1
                            dashValue2:dashValue2
                            dashValue3:dashValue3
                                offset:offset];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p width:%@ colorR:%@ colorG:%@ colorB:%@ colorA:%@ gapColorR:%@ gapColorG:%@ gapColorB:%@ gapColorA:%@ widthAsPixel:%@ opacity:%@ blur:%@ lineCap:%@ numDashValue:%@ dashValue0:%@ dashValue1:%@ dashValue2:%@ dashValue3:%@ offset:%@>", self.class, (void *)self, @(self.width), @(self.colorR), @(self.colorG), @(self.colorB), @(self.colorA), @(self.gapColorR), @(self.gapColorG), @(self.gapColorB), @(self.gapColorA), @(self.widthAsPixel), @(self.opacity), @(self.blur), @(self.lineCap), @(self.numDashValue), @(self.dashValue0), @(self.dashValue1), @(self.dashValue2), @(self.dashValue3), @(self.offset)];
}

#endif
@end
