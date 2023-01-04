// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from wmts_capabilities.djinni

#import "MCRectCoord.h"
#import "MCWmtsLayerDimension.h"
#import <Foundation/Foundation.h>

@interface MCWmtsLayerDescription : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithIdentifier:(nonnull NSString *)identifier
                                     title:(nullable NSString *)title
                              abstractText:(nullable NSString *)abstractText
                                dimensions:(nonnull NSArray<MCWmtsLayerDimension *> *)dimensions
                                    bounds:(nonnull MCRectCoord *)bounds
                         tileMatrixSetLink:(nonnull NSString *)tileMatrixSetLink
                          resourceTemplate:(nonnull NSString *)resourceTemplate
                            resourceFormat:(nonnull NSString *)resourceFormat NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)wmtsLayerDescriptionWithIdentifier:(nonnull NSString *)identifier
                                                     title:(nullable NSString *)title
                                              abstractText:(nullable NSString *)abstractText
                                                dimensions:(nonnull NSArray<MCWmtsLayerDimension *> *)dimensions
                                                    bounds:(nonnull MCRectCoord *)bounds
                                         tileMatrixSetLink:(nonnull NSString *)tileMatrixSetLink
                                          resourceTemplate:(nonnull NSString *)resourceTemplate
                                            resourceFormat:(nonnull NSString *)resourceFormat;

@property (nonatomic, readonly, nonnull) NSString * identifier;

@property (nonatomic, readonly, nullable) NSString * title;

@property (nonatomic, readonly, nullable) NSString * abstractText;

@property (nonatomic, readonly, nonnull) NSArray<MCWmtsLayerDimension *> * dimensions;

@property (nonatomic, readonly, nonnull) MCRectCoord * bounds;

@property (nonatomic, readonly, nonnull) NSString * tileMatrixSetLink;

@property (nonatomic, readonly, nonnull) NSString * resourceTemplate;

@property (nonatomic, readonly, nonnull) NSString * resourceFormat;

@end
