//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface RUHistoryTableHeaderView : UIView
{
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
}

+ (id)_textLabelFontWithEmphasis:(_Bool)arg1;
+ (id)_detailTextLabelFont;
+ (double)defaultHeightForTraitCollection:(id)arg1 headerType:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 emphasizedText:(id)arg2 detailText:(id)arg3;

@end
