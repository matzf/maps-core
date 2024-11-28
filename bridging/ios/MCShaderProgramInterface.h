// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#import "MCBlendMode.h"
#import "MCRenderingContextInterface.h"
#import <Foundation/Foundation.h>


@protocol MCShaderProgramInterface

- (nonnull NSString *)getProgramName;

- (void)setupProgram:(nullable id<MCRenderingContextInterface>)context;

- (void)preRender:(nullable id<MCRenderingContextInterface>)context;

- (void)setBlendMode:(MCBlendMode)blendMode;

- (BOOL)usesModelMatrix;

@end
