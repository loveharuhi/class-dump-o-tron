//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHChartBarElementsRenderer : TSCHRenderer
{
    _Bool mVertical;
    _Bool mTouchInResize;
    _Bool mTouchInBody;
    unsigned long long mHitSeriesIndex;
    unsigned long long mHitValueIndex;
    double mHitFudgeOffset;
    _Bool mResizeIsOutsideBody;
    struct CGRect mLastDrawRect;
}

- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_drawLabels:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_drawBars:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (struct CGRect)renderingElementFrameForBarElementFrame:(struct CGRect)arg1 groupIndex:(unsigned long long)arg2 modelCache:(id)arg3 stroke:(id)arg4 viewScale:(double)arg5 contextInfo:(CDStruct_71493e60)arg6 returningFillRect:(struct CGRect *)arg7 strokeRect:(struct CGRect *)arg8;
- (CDStruct_d2b197d1)p_valueRangeForModelCache:(id)arg1 groupIndex:(unsigned long long)arg2;
- (struct CGRect)barElementFrameForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
- (_Bool)supportsSeparateLabelsRenderPass;
- (int)chunkPlane;
- (id)initWithChartRep:(id)arg1 layoutItem:(id)arg2;

@end
