//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DayNavigationViewCell.h"

@class NSString, TappableDayNumber, TodayCirclePulseView, UILabel, UIView;

@interface LargeDayNavigationViewCell : DayNavigationViewCell
{
    TappableDayNumber *_dayNumber;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UILabel *_overlayLabel;
    UIView *_overlayUnderline;
    double _overlayUnderlineThickness;
    NSString *_leftString;
    NSString *_centerString;
    NSString *_rightString;
    _Bool _hasOverlay;
    _Bool _overlayShowsMonth;
    TodayCirclePulseView *_pulseView;
}

+ (void)_updateFormatter;
+ (id)_rightDateFormatter;
+ (id)_centerDateFormatter;
+ (id)_leftDateFormatter;
+ (id)_findFormatForLocale:(id)arg1 usingExampleDate:(id)arg2;
+ (void)_generateFormatStringsIfNeeded;
+ (struct _NSRange)_rangeForFirstSequenceOfDCharacters:(id)arg1;
+ (void)_localeChanged;
+ (_Bool)_stringsIncludeSpacing;
+ (double)_widthOfSpace;
+ (id)_rightStringForDate:(id)arg1;
+ (id)_centerStringForDate:(id)arg1;
+ (id)_leftStringForDate:(id)arg1;
+ (double)circleDiameter;
+ (double)yCenterForDayNumbers;
+ (id)_boldFont;
+ (id)_normalFont;
+ (void)localeChanged;
- (void).cxx_destruct;
- (void)touchCancelled:(id)arg1;
- (void)touchUpOccurred:(id)arg1;
- (void)touchDownOccurred:(id)arg1;
- (void)_updateDisplayedStrings;
- (void)layoutSubviews;
- (void)stopPulsing;
- (void)pulseToday;
- (void)setBackgroundColor:(id)arg1;
- (void)setDate:(id)arg1 forceStringUpdate:(_Bool)arg2;
- (void)setDate:(id)arg1;
- (void)setCircled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCircled:(_Bool)arg1;
- (id)weekendColor;
- (void)setWeekendColor:(id)arg1;
- (void)setIsWeekend:(_Bool)arg1;
- (void)setIsToday:(_Bool)arg1;
- (void)setOverlayShowsMonth:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateOverlay;
- (void)_createSubviews;
- (struct CGRect)circleFrame;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

