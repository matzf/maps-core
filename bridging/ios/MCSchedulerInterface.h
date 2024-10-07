// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from task_scheduler.djinni

#import <Foundation/Foundation.h>
@class MCSchedulerGraphicsTaskCallbacks;
@protocol MCTaskInterface;


@protocol MCSchedulerInterface

- (void)addTask:(nullable id<MCTaskInterface>)task;

- (void)addTasks:(nonnull NSArray<id<MCTaskInterface>> *)tasks;

- (void)removeTask:(nonnull NSString *)id;

- (void)clear;

- (void)pause;

- (void)resume;

- (void)destroy;

- (BOOL)hasSeparateGraphicsInvocation;

/** Execute added graphics tasks. Returns true, if there are unprocessed tasks in the queue after the execution. */
- (BOOL)runGraphicsTasks;

- (void)setSchedulerGraphicsTaskCallbacks:(nullable MCSchedulerGraphicsTaskCallbacks *)callbacks;

@end
