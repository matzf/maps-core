// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#import <Foundation/Foundation.h>
@protocol MCAlphaInstancedShaderInterface;
@protocol MCAlphaShaderInterface;
@protocol MCColorCircleShaderInterface;
@protocol MCColorShaderInterface;
@protocol MCLineGroupShaderInterface;
@protocol MCPolygonGroupShaderInterface;
@protocol MCPolygonPatternGroupShaderInterface;
@protocol MCRasterShaderInterface;
@protocol MCStretchInstancedShaderInterface;
@protocol MCStretchShaderInterface;
@protocol MCTextInstancedShaderInterface;
@protocol MCTextShaderInterface;


@protocol MCShaderFactoryInterface

- (nullable id<MCAlphaShaderInterface>)createAlphaShader;

- (nullable id<MCAlphaInstancedShaderInterface>)createAlphaInstancedShader;

- (nullable id<MCLineGroupShaderInterface>)createLineGroupShader;

- (nullable id<MCColorShaderInterface>)createColorShader;

- (nullable id<MCColorCircleShaderInterface>)createColorCircleShader;

- (nullable id<MCPolygonGroupShaderInterface>)createPolygonGroupShader:(BOOL)isStriped;

- (nullable id<MCPolygonPatternGroupShaderInterface>)createPolygonPatternGroupShader:(BOOL)fadeInPattern;

- (nullable id<MCTextShaderInterface>)createTextShader;

- (nullable id<MCTextInstancedShaderInterface>)createTextInstancedShader;

- (nullable id<MCRasterShaderInterface>)createRasterShader;

- (nullable id<MCRasterShaderInterface>)createUnitSphereRasterShader;

- (nullable id<MCStretchShaderInterface>)createStretchShader;

- (nullable id<MCStretchInstancedShaderInterface>)createStretchInstancedShader;

@end
