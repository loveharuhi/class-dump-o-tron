//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRFilledLineBrushImpl.h>

@interface XRStratifiedBrushImpl : XRFilledLineBrushImpl
{
}

+ (Class)graphSequenceClass;
- (void)preparePathForRendering:(id)arg1;
- (double)minPixelsForRun:(id)arg1 datasource:(id)arg2 usingScale:(struct CGSize)arg3;
- (void)run:(id)arg1 datasource:(id)arg2 renderPathGroup:(id)arg3 sequences:(id)arg4 usingScale:(struct CGSize)arg5 graphAtIndex:(long long)arg6;
- (void)run:(id)arg1 datasource:(id)arg2 applyStyleToPath:(id)arg3 withState:(unsigned long long)arg4 pathType:(unsigned long long)arg5 scale:(struct CGSize)arg6 graphAtIndex:(long long)arg7;
- (id)run:(id)arg1 datasource:(id)arg2 createPathForSequences:(id)arg3 inRect:(struct CGRect)arg4 usingScale:(struct CGSize)arg5 peakValue:(double *)arg6 graphAtIndex:(long long)arg7;

@end

