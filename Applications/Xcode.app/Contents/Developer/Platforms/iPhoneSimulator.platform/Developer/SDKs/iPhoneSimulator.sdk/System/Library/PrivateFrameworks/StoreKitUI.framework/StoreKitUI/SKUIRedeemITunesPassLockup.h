//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class SKUIClientContext, SKUIITunesPassConfiguration, UIImageView, UILabel, UIView;

@interface SKUIRedeemITunesPassLockup : UIControl
{
    SKUIClientContext *_clientContext;
    SKUIITunesPassConfiguration *_configuration;
    UILabel *_descriptionLabel;
    UIView *_horizontalSeparatorView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (id)_attributedDescriptionString;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithITunesPassConfiguration:(id)arg1 clientContext:(id)arg2;

@end

