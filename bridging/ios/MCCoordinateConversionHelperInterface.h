// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#import "MCCoord.h"
#import "MCQuadCoord.h"
#import "MCRectCoord.h"
#import <Foundation/Foundation.h>
@class MCCoordinateConversionHelperInterface;
@protocol MCCoordinateConverterInterface;


@interface MCCoordinateConversionHelperInterface : NSObject

/**
 * This instance is independent of the map and does not know about the rendering system.
 * It can not be used to convert coordinates into rendering space.
 */
+ (nullable MCCoordinateConversionHelperInterface *)independentInstance;

- (void)registerConverter:(nullable id<MCCoordinateConverterInterface>)converter;

- (nonnull MCCoord *)convert:(nonnull NSString *)to
                  coordinate:(nonnull MCCoord *)coordinate;

- (nonnull MCRectCoord *)convertRect:(nonnull NSString *)to
                                rect:(nonnull MCRectCoord *)rect;

- (nonnull MCRectCoord *)convertRectToRenderSystem:(nonnull MCRectCoord *)rect;

- (nonnull MCQuadCoord *)convertQuad:(nonnull NSString *)to
                                quad:(nonnull MCQuadCoord *)quad;

- (nonnull MCQuadCoord *)convertQuadToRenderSystem:(nonnull MCQuadCoord *)quad;

- (nonnull MCCoord *)convertToRenderSystem:(nonnull MCCoord *)coordinate;

@end
