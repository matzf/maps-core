// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#import "MCLayerInterface.h"
#import <Foundation/Foundation.h>
@class MCIconInfoInterface;
@class MCIconLayerInterface;
@protocol MCIconLayerCallbackInterface;


@interface MCIconLayerInterface : NSObject

+ (nullable MCIconLayerInterface *)create;

- (void)setIcons:(nonnull NSArray<MCIconInfoInterface *> *)icons;

- (nonnull NSArray<MCIconInfoInterface *> *)getIcons;

- (void)remove:(nullable MCIconInfoInterface *)icon;

- (void)add:(nullable MCIconInfoInterface *)icon;

- (void)clear;

- (void)setCallbackHandler:(nullable id<MCIconLayerCallbackInterface>)handler;

- (nullable id<MCLayerInterface>)asLayerInterface;

- (void)invalidate;

- (void)setLayerClickable:(BOOL)isLayerClickable;

@end
