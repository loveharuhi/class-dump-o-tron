//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAffineTransform, NSImage;

@interface XRBezierPath : NSObject
{
    struct CGPath *_cgPathRef;
    NSAffineTransform *_transform;
    double _lineWidth;
    double _dashPhase;
    unsigned long long _dashCount;
    double *_dashLengths;
    NSImage *_cachedImage;
    long long _elementCount;
    struct CGPoint *_firstPoints;
    unsigned long long *_types;
    long long _applierIndex;
    struct CGPath *_tempPathRef;
    NSAffineTransform *_applyTransform;
}

- (void)stroke;
- (void)fill;
- (unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;
- (long long)elementCount;
- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (struct CGRect)bounds;
- (void)transformUsingAffineTransform:(id)arg1;
- (void)dealloc;
- (id)init;

@end
