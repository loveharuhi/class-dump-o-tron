//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIALogViewController.h"

@interface UIAEditorLogViewController : UIALogViewController
{
    unsigned long long currentIndex;
}

- (void)scriptPlaybackStoppedWithReason:(int)arg1;
- (id)screenshotDataForUUIDString:(id)arg1;
- (id)addDataSamplesFromArray:(id)arg1;
- (id)buildElementTreeWithDictionary:(id)arg1 index:(unsigned long long *)arg2 screenShot:(id)arg3 offset:(struct CGPoint)arg4 parentNode:(id)arg5;
- (BOOL)outlineView:(id)arg1 shouldTakeKeyDown:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;

@end

