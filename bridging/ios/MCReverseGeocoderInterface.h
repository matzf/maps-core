// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from reverse_geocoder.djinni

#import "MCCoord.h"
#import "MCLoaderInterface.h"
#import "MCVectorLayerFeatureCoordInfo.h"
#import <Foundation/Foundation.h>
@class MCReverseGeocoderInterface;


@interface MCReverseGeocoderInterface : NSObject

+ (nullable MCReverseGeocoderInterface *)create:(nullable id<MCLoaderInterface>)loader
                                tileUrlTemplate:(nonnull NSString *)tileUrlTemplate
                                      zoomLevel:(int32_t)zoomLevel;

- (nonnull NSArray<MCVectorLayerFeatureCoordInfo *> *)reverseGeocode:(nonnull MCCoord *)coord
                                                     thresholdMeters:(int64_t)thresholdMeters;

- (nullable MCVectorLayerFeatureCoordInfo *)reverseGeocodeClosest:(nonnull MCCoord *)coord
                                                  thresholdMeters:(int64_t)thresholdMeters;

@end
