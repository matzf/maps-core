// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#import "MCCoord.h"
#import <Foundation/Foundation.h>

@interface MCPolygonCoord : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithPositions:(nonnull NSArray<MCCoord *> *)positions
                                    holes:(nonnull NSArray<NSArray<MCCoord *> *> *)holes NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)polygonCoordWithPositions:(nonnull NSArray<MCCoord *> *)positions
                                            holes:(nonnull NSArray<NSArray<MCCoord *> *> *)holes;

@property (nonatomic, readonly, nonnull) NSArray<MCCoord *> * positions;

@property (nonatomic, readonly, nonnull) NSArray<NSArray<MCCoord *> *> * holes;

@end
