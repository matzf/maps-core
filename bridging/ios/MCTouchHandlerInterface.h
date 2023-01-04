// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from touch_handler.djinni

#import "MCTouchEvent.h"
#import <Foundation/Foundation.h>
@protocol MCTouchInterface;


@protocol MCTouchHandlerInterface

- (void)onTouchEvent:(nonnull MCTouchEvent *)touchEvent;

- (void)insertListener:(nullable id<MCTouchInterface>)listener
                 index:(int32_t)index;

- (void)addListener:(nullable id<MCTouchInterface>)listener;

- (void)removeListener:(nullable id<MCTouchInterface>)listener;

@end
