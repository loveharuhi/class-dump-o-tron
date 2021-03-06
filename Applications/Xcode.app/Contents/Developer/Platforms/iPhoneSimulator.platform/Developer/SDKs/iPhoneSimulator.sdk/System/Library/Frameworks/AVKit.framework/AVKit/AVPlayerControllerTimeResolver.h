//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class AVPlayerController, NSTimer;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding>
{
    AVPlayerController *_playerController;
    double _interval;
    double _resolution;
    double _currentTime;
    NSTimer *_timer;
}

+ (_Bool)automaticallyNotifiesObserversOfCurrentTime;
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property double currentTime;
@property double resolution;
@property double interval;
@property(retain) AVPlayerController *playerController;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) _Bool currentTimeAtEndOfSeekableTimeRanges;
@property(readonly, getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges) _Bool thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
@property(readonly) double remainingTimeWithinEndTimes;
@property(readonly) double remainingTime;
@property double currentTimeWithinEndTimes;

@end

