//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIActionSheetDelegate.h"

@class CALayer, GKCollectionViewCell, NSArray, NSString;

@interface GKEditActionsView : UIView <UIActionSheetDelegate>
{
    double _visibleWidth;
    CALayer *_maskLayer;
    GKCollectionViewCell *_cell;
    NSArray *_editActionConstraints;
    NSArray *_actionButtons;
}

@property(retain, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) NSArray *editActionConstraints; // @synthesize editActionConstraints=_editActionConstraints;
@property(nonatomic) GKCollectionViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double visibleWidth; // @synthesize visibleWidth=_visibleWidth;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didTouchMoreEditAction:(id)arg1;
- (void)didTouchEditAction:(id)arg1;
- (void)prepareActionButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 cell:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

