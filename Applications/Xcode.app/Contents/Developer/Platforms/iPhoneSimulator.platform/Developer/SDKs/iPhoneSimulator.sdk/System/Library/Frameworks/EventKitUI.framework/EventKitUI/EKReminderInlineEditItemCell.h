//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class EKExpandingTextView, NSString;

@interface EKReminderInlineEditItemCell : UITableViewCell
{
    double _lastSeenContentWidth;
    EKExpandingTextView *_textView;
    double _verticalPadding;
}

@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(readonly, nonatomic) EKExpandingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)heightNeededForContentWidth:(double)arg1;
- (double)_textViewWidthForContentWidth:(double)arg1;
@property(copy, nonatomic) NSString *placeholder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
