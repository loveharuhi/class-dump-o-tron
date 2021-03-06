//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSDFPSCounter : NSObject
{
    NSMutableArray *_dateArray;
    double _startTimeInterval;
    double _endTimeInterval;
    unsigned long long _frameCount;
}

- (id)p_getFPSInfo:(_Bool)arg1;
- (void)writeFPSInfoToLog:(id)arg1 identifier:(id)arg2 type:(id)arg3 direction:(id)arg4 duration:(double)arg5 graphing:(_Bool)arg6 slide:(long long)arg7;
- (id)fpsGraphString;
- (id)fpsSummaryString;
- (id)p_fpsSummaryStringIncludingGraph:(_Bool)arg1;
- (void)addFrameAtDrawTime:(double)arg1 duration:(double)arg2;
- (void)addFrameAtDrawTime:(double)arg1;
- (void)addFrame;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

