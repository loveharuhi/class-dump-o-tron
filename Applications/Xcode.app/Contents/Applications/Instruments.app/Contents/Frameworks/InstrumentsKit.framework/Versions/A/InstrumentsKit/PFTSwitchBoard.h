//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

#import "NSMenuDelegate.h"

@class NSMutableArray, NSString;

@interface PFTSwitchBoard : NSControl <NSMenuDelegate>
{
    NSMutableArray *_switches;
    NSMutableArray *_states;
    NSMutableArray *_enabledFlags;
    NSMutableArray *_tooltips;
    int _type;
    int _shape;
    unsigned long long _keyboardNavigationPosition;
}

- (void)keyDown:(id)arg1;
- (void)setKeyboardNavigationPosition:(unsigned long long)arg1;
- (unsigned long long)keyboardNavigationPosition;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (long long)numberOfItemsInMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)setSwitch:(id)arg1 tooltip:(id)arg2;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)setSwitch:(id)arg1 enabled:(BOOL)arg2;
- (BOOL)isAnySwitchEnabled;
- (BOOL)isSwitchEnabledAtIndex:(unsigned long long)arg1;
- (BOOL)isSwitchEnabled:(id)arg1;
- (void)performClickOnSwitch:(id)arg1 toState:(int)arg2;
- (void)performClickOnSwitch:(id)arg1;
- (int)stateOfSwitchAtIndex:(unsigned long long)arg1;
- (int)stateOfSwitch:(id)arg1;
- (id)switchNameClicked;
- (unsigned long long)switchClicked;
- (void)toggleSwitch:(id)arg1;
- (void)removeSwitch:(id)arg1;
- (void)setSwitch:(id)arg1 toState:(int)arg2 tooltip:(id)arg3;
- (void)setSwitch:(id)arg1 toState:(int)arg2;
- (id)selectedSwitch;
- (id)switchAtIndex:(unsigned long long)arg1;
- (id)switches;
- (unsigned long long)numberOfSwitches;
- (int)switchBoardShapeType;
- (void)setSwitchBoardShapeType:(int)arg1;
- (id)menuDelegate;
- (void)setMenuDelegate:(id)arg1;
- (int)switchBoardType;
- (void)setSwitchBoardType:(int)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)isOpaque;
- (void)resetCursorRects;
- (void)dealloc;
- (void)viewDidMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

