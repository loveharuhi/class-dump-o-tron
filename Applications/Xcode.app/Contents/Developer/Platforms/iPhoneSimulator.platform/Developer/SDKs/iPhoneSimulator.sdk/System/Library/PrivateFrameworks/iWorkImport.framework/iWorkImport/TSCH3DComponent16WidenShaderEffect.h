//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DLowColorBitsShaderEffect.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCH3DComponent16WidenShaderEffect : TSCH3DLowColorBitsShaderEffect
{
    float mFactor;
    NSString *mWidenFunction;
}

+ (id)variableWidenSelect;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)inject:(id)arg1;
- (void)addVariables:(id)arg1;
- (id)widenFunction;
@property(nonatomic) float factor; // @synthesize factor=mFactor;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)variableWidenSelect;

@end

