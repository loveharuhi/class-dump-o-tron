//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCControlView.h>

@class XCBarModule;

@interface XCBarView : XCControlView
{
    XCBarModule *_delegate;
    struct CGRect _clickRect;
    BOOL _clickRectValid;
}

+ (id)clipIndicatorPressed;
+ (id)clipIndicator;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)noteNeedsUpdate;
- (void)collapseAllAndLayoutIfNeeded;
- (void)mouseDown:(id)arg1;
- (void)_overflowItemSelected:(id)arg1;
- (void)_displayOverflowUIForEvent:(id)arg1;
- (long long)_firstItemInOverflowArea;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawToolbarMatchingBackground:(struct CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_callNeedsDisplay:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

