//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface MNRefittedFrame : NSObject
{
    double _width;
    unsigned long long _maximumNumberOfLines;
    double _minimumLineHeight;
    struct __CTFrame *_frame;
    _Bool _measured;
    unsigned long long _numberOfLines;
    double _maxLineHeight;
    double _maxLineWidth;
    struct _NSRange _fittedRange;
    NSAttributedString *_string;
}

@property(copy, nonatomic) NSAttributedString *string; // @synthesize string=_string;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)getLayersForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) unsigned long long numberOfLines;
@property(readonly, nonatomic) _Bool textFitsEntirely;
@property(readonly, nonatomic) double widthUsed;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) struct _NSRange fittedRange;
- (void)measureIfNeeded;
- (struct __CTFrame *)newFrameFromFramesetter:(struct __CTFramesetter *)arg1;
@property(readonly, nonatomic) struct __CTFrame *CTFrame;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 width:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3 minimumLineHeight:(double)arg4;

@end

