//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDCalligraphyStroke.h>

@class NSString, TSDStrokePattern, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDMutableCalligraphyStroke : TSDCalligraphyStroke
{
}

- (void)setPatternPropertiesFromStroke:(id)arg1;
- (void)setPropertiesFromStroke:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) double actualWidth; // @dynamic actualWidth;
@property(nonatomic) int cap; // @dynamic cap;
@property(copy, nonatomic) TSUColor *color; // @dynamic color;
@property(nonatomic) int join; // @dynamic join;
@property(nonatomic) double miterLimit; // @dynamic miterLimit;
@property(copy, nonatomic) TSDStrokePattern *pattern; // @dynamic pattern;
@property(copy, nonatomic) NSString *strokeName; // @dynamic strokeName;
@property(nonatomic) double width; // @dynamic width;

@end
