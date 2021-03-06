//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface SBVoiceOverTouchCursorDisplay : UIView
{
    struct CGRect _cursorFrame;
    _Bool _isHidden;
    UIColor *_bgColor;
    double _cachedAlpha;
    struct CGPath *_path;
    _Bool largeCursorEnabled;
}

+ (struct CGRect)resizeFrameForDisplay:(struct CGRect)arg1;
@property(retain, nonatomic) struct CGPath *path; // @synthesize path=_path;
- (void)drawRect:(struct CGRect)arg1;
- (id)_retrieveBezierPaths:(struct CGRect)arg1 usingRealPaths:(_Bool *)arg2;
- (id)_retrieveFrameBezierPath:(struct CGRect)arg1;
- (id)_retrievePathBezierPaths;
- (void)setCursorFrame:(struct CGRect)arg1;
- (double)lineWidth;
- (void)_orderIn;
- (void)_orderOut;
- (_Bool)isHidden;
- (void)setIsHidden:(_Bool)arg1;
- (_Bool)userInteractionEnabled;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) _Bool largeCursorEnabled; // @synthesize largeCursorEnabled;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

