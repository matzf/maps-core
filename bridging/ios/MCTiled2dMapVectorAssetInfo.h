// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCRectI.h"
#import "MCTextureHolderInterface.h"
#import <Foundation/Foundation.h>

NS_SWIFT_SENDABLE
@interface MCTiled2dMapVectorAssetInfo : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithFeatureIdentifiersUv:(nonnull NSDictionary<NSString *, MCRectI *> *)featureIdentifiersUv
                                             texture:(nullable id<MCTextureHolderInterface>)texture NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)tiled2dMapVectorAssetInfoWithFeatureIdentifiersUv:(nonnull NSDictionary<NSString *, MCRectI *> *)featureIdentifiersUv
                                                                  texture:(nullable id<MCTextureHolderInterface>)texture;

@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, MCRectI *> * featureIdentifiersUv;

@property (nonatomic, readonly, nullable) id<MCTextureHolderInterface> texture;

@end
