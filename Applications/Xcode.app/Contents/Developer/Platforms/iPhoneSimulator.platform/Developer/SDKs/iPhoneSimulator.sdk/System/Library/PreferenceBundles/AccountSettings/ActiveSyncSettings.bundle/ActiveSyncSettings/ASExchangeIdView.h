//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class ASExchangeIdTextView, UILabel;

@interface ASExchangeIdView : UIView <PSHeaderFooterView>
{
    UILabel *_label;
    ASExchangeIdTextView *_idTextView;
    double _sized;
    double _labelTopPadding;
    double _textViewTopPadding;
}

@property(nonatomic) double textViewTopPadding; // @synthesize textViewTopPadding=_textViewTopPadding;
@property(nonatomic) double labelTopPadding; // @synthesize labelTopPadding=_labelTopPadding;
@property(nonatomic) double sized; // @synthesize sized=_sized;
@property(retain, nonatomic) ASExchangeIdTextView *idTextView; // @synthesize idTextView=_idTextView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)_accessibilityLabels;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithSpecifier:(id)arg1;
- (void)setTextForExchangeId:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (id)_generateExchangeIdText;
- (id)_generateExchangeIdLabel;

@end

