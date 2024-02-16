// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCColor.h"
#import <Foundation/Foundation.h>

@interface MCVectorLayerFeatureInfoValue : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithStringVal:(nullable NSString *)stringVal
                                doubleVal:(nullable NSNumber *)doubleVal
                                   intVal:(nullable NSNumber *)intVal
                                  boolVal:(nullable NSNumber *)boolVal
                                 colorVal:(nullable MCColor *)colorVal
                             listFloatVal:(nullable NSArray<NSNumber *> *)listFloatVal
                            listStringVal:(nullable NSArray<NSString *> *)listStringVal NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)vectorLayerFeatureInfoValueWithStringVal:(nullable NSString *)stringVal
                                                       doubleVal:(nullable NSNumber *)doubleVal
                                                          intVal:(nullable NSNumber *)intVal
                                                         boolVal:(nullable NSNumber *)boolVal
                                                        colorVal:(nullable MCColor *)colorVal
                                                    listFloatVal:(nullable NSArray<NSNumber *> *)listFloatVal
                                                   listStringVal:(nullable NSArray<NSString *> *)listStringVal;

@property (nonatomic, readonly, nullable) NSString * stringVal;

@property (nonatomic, readonly, nullable) NSNumber * doubleVal;

@property (nonatomic, readonly, nullable) NSNumber * intVal;

@property (nonatomic, readonly, nullable) NSNumber * boolVal;

@property (nonatomic, readonly, nullable) MCColor * colorVal;

@property (nonatomic, readonly, nullable) NSArray<NSNumber *> * listFloatVal;

@property (nonatomic, readonly, nullable) NSArray<NSString *> * listStringVal;

@end
