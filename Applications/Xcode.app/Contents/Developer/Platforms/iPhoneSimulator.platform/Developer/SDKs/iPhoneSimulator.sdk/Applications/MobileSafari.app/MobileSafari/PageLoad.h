//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSTimer, NSURL;

@interface PageLoad : NSObject
{
    int _status;
    NSTimer *_timer;
    NSDate *_startRenderDate;
    NSDate *_endRenderDate;
    NSDate *_startRenderFrameCountDate;
    NSDate *_endRenderFrameCountDate;
    long long _startRenderFrameCount;
    long long _endRenderFrameCount;
    NSURL *_URL;
    NSURL *_redirectURL;
    NSDate *_startDate;
    NSDate *_startLoadDate;
    NSDate *_endLoadDate;
    NSDate *_firstVisualLayoutDate;
    NSError *_error;
    CDStruct_81cc75c8 _heapBefore;
    CDStruct_81cc75c8 _heapAfter;
    NSDate *_redirectDate;
}

@property(retain, nonatomic) NSDate *redirectDate; // @synthesize redirectDate=_redirectDate;
@property(nonatomic) CDStruct_81cc75c8 heapAfter; // @synthesize heapAfter=_heapAfter;
@property(nonatomic) CDStruct_81cc75c8 heapBefore; // @synthesize heapBefore=_heapBefore;
@property(retain, nonatomic) NSDate *firstVisualLayoutDate; // @synthesize firstVisualLayoutDate=_firstVisualLayoutDate;
@property(retain, nonatomic) NSDate *endLoadDate; // @synthesize endLoadDate=_endLoadDate;
@property(retain, nonatomic) NSDate *startLoadDate; // @synthesize startLoadDate=_startLoadDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (double)framesPerSecond;
- (double)renderDuration;
- (void)finishRenderTime:(id)arg1;
- (void)startRenderTime:(id)arg1;
- (void)finishRenderFps:(id)arg1;
- (void)startRenderFps:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;
- (id)statusString;
- (int)status;
- (void)setStatus:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
