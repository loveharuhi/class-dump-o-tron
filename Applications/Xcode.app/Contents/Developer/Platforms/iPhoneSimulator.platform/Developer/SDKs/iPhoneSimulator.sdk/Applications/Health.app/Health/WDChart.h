//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "WDChartRendererDelegate.h"

@class NSArray, NSString, UIImageView, WDChartBackgroundView, WDChartRenderer;

@interface WDChart : UIView <WDChartRendererDelegate>
{
    NSArray *_xAxisLabels;
    UIImageView *_chartCanvas;
    UIImageView *_chartFillView;
    UIImageView *_chartSecondaryFillView;
    UIView *_topDividerView;
    UIView *_bottomDividerView;
    _Bool _shouldAnimateAxisChanges;
    WDChartRenderer *_chartRenderer;
    long long _animationStyle;
    double _animationDuration;
    id <WDAxisDescriptor> _xAxisDescriptor;
    WDChartBackgroundView *_chartBackgroundView;
    double _xAxisGutterHeight;
    double _dividerInset;
    double _xAxisInsetPercentage;
}

@property(nonatomic) _Bool shouldAnimateAxisChanges; // @synthesize shouldAnimateAxisChanges=_shouldAnimateAxisChanges;
@property(nonatomic) double xAxisInsetPercentage; // @synthesize xAxisInsetPercentage=_xAxisInsetPercentage;
@property(nonatomic) double dividerInset; // @synthesize dividerInset=_dividerInset;
@property(nonatomic) double xAxisGutterHeight; // @synthesize xAxisGutterHeight=_xAxisGutterHeight;
@property(retain, nonatomic) WDChartBackgroundView *chartBackgroundView; // @synthesize chartBackgroundView=_chartBackgroundView;
@property(retain, nonatomic) id <WDAxisDescriptor> xAxisDescriptor; // @synthesize xAxisDescriptor=_xAxisDescriptor;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) long long animationStyle; // @synthesize animationStyle=_animationStyle;
@property(retain, nonatomic) WDChartRenderer *chartRenderer; // @synthesize chartRenderer=_chartRenderer;
- (void).cxx_destruct;
- (void)_significantTimeChangeOccurred;
- (void)chartRendererDidFinishUpdating:(id)arg1 firstRender:(_Bool)arg2;
- (void)_updateDataWithRenderer:(id)arg1 animated:(_Bool)arg2;
- (id)_transitionFromImageView:(id)arg1 withImage:(id)arg2;
- (void)_updateChartCanvas:(_Bool)arg1;
- (void)_layoutXAxisLabels;
- (void)_layoutAxisLabels;
- (void)_layoutChartCanvas;
- (double)_absolutePositionForXPlaneValue:(id)arg1;
- (double)_xAxisLabelPadding;
- (double)_relativePositionForXPlaneValue:(id)arg1;
- (struct CGRect)_chartBounds;
- (void)setChartSecondaryFillCompositingFilter:(id)arg1;
- (void)setChartFillCompositingFilter:(id)arg1;
- (void)setChartCompositingFilter:(id)arg1;
- (void)refreshView;
- (void)reloadData;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

