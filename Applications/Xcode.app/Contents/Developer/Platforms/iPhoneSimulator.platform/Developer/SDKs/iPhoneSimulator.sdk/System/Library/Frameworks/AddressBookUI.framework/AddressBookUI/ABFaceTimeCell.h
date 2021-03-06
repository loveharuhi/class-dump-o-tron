//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABLabeledCell.h>

@class ABTransportButton, UILabel;

@interface ABFaceTimeCell : ABLabeledCell
{
    _Bool _isFaceTimeAudioAvailable;
    ABTransportButton *_transportIcon1;
    ABTransportButton *_transportIcon2;
    id <ABPropertyCellDelegate> _delegate;
    UILabel *_faceTimeLabel;
}

@property(nonatomic) _Bool isFaceTimeAudioAvailable; // @synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable;
@property(readonly, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ABTransportButton *transportIcon2; // @synthesize transportIcon2=_transportIcon2;
@property(readonly, nonatomic) ABTransportButton *transportIcon1; // @synthesize transportIcon1=_transportIcon1;
- (void)transportButtonClicked:(id)arg1;
- (void)tintColorDidChange;
- (id)variableConstraints;
- (id)constantConstraints;
- (id)rightMostView;
- (double)minCellHeight;
- (void)performDefaultAction;
- (id)labelView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

