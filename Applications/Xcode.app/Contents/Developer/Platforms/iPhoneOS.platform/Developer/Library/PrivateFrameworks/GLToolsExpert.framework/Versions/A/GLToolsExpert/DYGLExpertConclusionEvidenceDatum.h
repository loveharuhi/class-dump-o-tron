//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertConclusionEvidenceNamed.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface DYGLExpertConclusionEvidenceDatum : DYGLExpertConclusionEvidenceNamed
{
    int _relOp;
    NSNumber *_value;
    NSNumber *_compareValue;
}

@property(readonly, nonatomic) NSNumber *compareValue; // @synthesize compareValue=_compareValue;
@property(readonly, nonatomic) int relOp; // @synthesize relOp=_relOp;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)debugPrintFormatted;
- (void)translateIntoArray:(id)arg1 withRationale:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithName:(id)arg1 value:(id)arg2 relOp:(int)arg3 compareValue:(id)arg4;

@end

