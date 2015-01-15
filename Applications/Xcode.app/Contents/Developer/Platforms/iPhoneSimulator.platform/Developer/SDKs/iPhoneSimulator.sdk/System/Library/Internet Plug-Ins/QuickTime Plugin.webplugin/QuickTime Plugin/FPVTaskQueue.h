//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FPVTaskQueue : NSObject
{
    NSMutableArray *_requiredTaskQueue;
    NSMutableArray *_desiredTaskQueue;
    int _numTotalRunning;
    int _numDesiredRunning;
    int _maxTotalTasks;
    int _maxDesiredTasks;
    int _restrictedModeCount;
    int _limitedModeCount;
}

+ (id)sharedTaskQueue;
- (void)_printQueue;
- (void)_updateLimits;
- (void)_kickOffTasks;
- (void)_kickOffTasksReal;
- (void)_addTask:(id)arg1 toQueue:(id)arg2;
- (void)_taskNotification:(id)arg1;
- (void)endRestrictedMode;
- (void)beginRestrictedMode;
- (void)endLimitedMode;
- (void)beginLimitedMode;
- (void)removeTask:(id)arg1;
- (void)addDesiredTask:(id)arg1;
- (void)addRequiredTask:(id)arg1;
- (void)dealloc;
- (id)init;

@end
