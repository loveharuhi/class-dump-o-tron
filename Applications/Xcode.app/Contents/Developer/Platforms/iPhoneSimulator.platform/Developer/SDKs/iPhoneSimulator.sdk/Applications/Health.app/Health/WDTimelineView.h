//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSDate, NSString, UIScrollView;

@interface WDTimelineView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    double _leftEdge;
    double _rightEdge;
    _Bool _listenForScrollViewUpdates;
    id <WDTimelineViewDelegate> _delegate;
    NSDate *_minDate;
    NSDate *_maxDate;
    double _timeframe;
    double _anchorTime;
}

@property(nonatomic) double anchorTime; // @synthesize anchorTime=_anchorTime;
@property(nonatomic) double timeframe; // @synthesize timeframe=_timeframe;
@property(readonly, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(readonly, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(nonatomic) __weak id <WDTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)rightEdge;
- (id)leftEdge;
- (void)_alertDelegateDidReassessConstraints;
- (void)_alertDelegateDidChange;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_resetScrollView;
- (void)_resetScrollViewIfNecessary;
- (void)_adjustAnchorTime;
- (double)_currentTimeFrame;
- (void)setAnchorDate:(id)arg1;
- (void)layoutSubviews;
- (void)_contentOffsetDidChange;
- (id)endDate;
- (id)startDate;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 minDate:(id)arg2 maxDate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

