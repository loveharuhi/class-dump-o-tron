//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORerouteInfo : NSObject
{
    double _distancePenalty;
    double _throttledReroutesPenalty;
    double _penalty;
    NSDate *_time;
    double _distanceFromDestination;
}

@property(nonatomic) double distanceFromDestination; // @synthesize distanceFromDestination=_distanceFromDestination;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) double penalty; // @synthesize penalty=_penalty;
- (void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(_Bool)arg3 destinationCoordinate:(CDStruct_c3b9c2ee)arg4 numThrottledReroutes:(unsigned long long)arg5;

@end

