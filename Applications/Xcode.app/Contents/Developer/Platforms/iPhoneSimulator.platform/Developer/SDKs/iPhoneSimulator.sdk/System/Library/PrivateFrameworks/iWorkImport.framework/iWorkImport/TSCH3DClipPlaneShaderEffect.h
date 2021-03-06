//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartClippingShaderEffect.h>

__attribute__((visibility("hidden")))
@interface TSCH3DClipPlaneShaderEffect : TSCH3DChartClippingShaderEffect
{
    unsigned long long mNumPlanes;
    _Bool mXConditional;
    _Bool mZConditional;
    _Bool mUseDiscard;
    _Bool mIsTransformingVertices;
    _Bool mUseRepresentativeVertex;
}

+ (id)effectWithPlanes:(unsigned long long)arg1;
+ (_Bool)defaultUsesRepresentativeVertex;
+ (id)variableMinXCondition;
+ (id)variableXCondition;
+ (id)variableClipPlane;
+ (id)variableClipVertexTransform;
+ (id)variableZLimit;
+ (id)variableXLimit;
+ (id)variableClipVertex;
+ (id)variableRepresentativeVertex;
@property(nonatomic) _Bool isTransformingVertices; // @synthesize isTransformingVertices=mIsTransformingVertices;
@property(nonatomic) _Bool useDiscard; // @synthesize useDiscard=mUseDiscard;
@property(nonatomic) _Bool useZConditional; // @synthesize useZConditional=mZConditional;
@property(nonatomic) _Bool useXConditional; // @synthesize useXConditional=mXConditional;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)inject:(id)arg1;
- (void)p_gatherClipPlaneStatementAtIndex:(unsigned long long)arg1 combiner:(id)arg2;
- (void)p_gatherXRangeStatementWithCombiner:(id)arg1 program:(id)arg2;
- (void)addVariables:(id)arg1;
- (unsigned long long)numberOfClippingValues;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPlanes:(unsigned long long)arg1;
- (id)variableMinXCondition;
- (id)variableXCondition;
- (id)variableClipPlane;
- (id)variableClipVertexTransform;
- (id)variableZLimit;
- (id)variableXLimit;
- (id)variableClipVertex;
- (id)variableRepresentativeVertex;

@end

