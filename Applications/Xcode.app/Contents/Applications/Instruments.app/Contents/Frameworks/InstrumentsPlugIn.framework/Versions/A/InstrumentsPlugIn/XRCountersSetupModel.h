//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSNumber, NSString, XRInstrument;

@interface XRCountersSetupModel : NSObject
{
    XRInstrument *_instrument;
    BOOL _sampleByTime;
    NSNumber *_sampleRateTime;
    NSString *_sampleRateUnits;
    NSNumber *_sampleRateEvents;
    NSString *_pmiEventAliasOrMnemonic;
    NSString *_callstacks;
    NSMutableArray *_eventsAndFormulas;
    NSString *_pmiEventWarningString;
}

@property(retain, nonatomic) NSArray *eventsAndFormulas; // @synthesize eventsAndFormulas=_eventsAndFormulas;
@property(retain, nonatomic) NSString *callstacks; // @synthesize callstacks=_callstacks;
@property(retain, nonatomic) NSString *pmiEventWarningString; // @synthesize pmiEventWarningString=_pmiEventWarningString;
@property(retain, nonatomic) NSString *pmiEventAliasOrMnemonic; // @synthesize pmiEventAliasOrMnemonic=_pmiEventAliasOrMnemonic;
@property(retain, nonatomic) NSNumber *sampleRateEvents; // @synthesize sampleRateEvents=_sampleRateEvents;
@property(retain, nonatomic) NSString *sampleRateUnits; // @synthesize sampleRateUnits=_sampleRateUnits;
@property(retain, nonatomic) NSNumber *sampleRateTime; // @synthesize sampleRateTime=_sampleRateTime;
@property(nonatomic) BOOL sampleByTime; // @synthesize sampleByTime=_sampleByTime;
@property(readonly, nonatomic) __weak XRInstrument *instrument; // @synthesize instrument=_instrument;
- (void).cxx_destruct;
- (id)modelStateDescription;
- (void)removeEventOrFormulaAtIndex:(unsigned long long)arg1;
- (void)removeEventOrFormulaNamed:(id)arg1;
- (void)removeEventOrFormula:(id)arg1;
- (void)addEventOrFormula:(id)arg1;
- (id)thresholdForAliasOrMnemonic:(id)arg1;
- (id)thresholdForMnemonic:(id)arg1;
- (id)eventForAliasOrMnemonic:(id)arg1;
- (id)eventForMnemonic:(id)arg1;
- (void)setConfigurationOptions:(id)arg1;
- (id)configurationOptions;
- (id)initWithInstrument:(id)arg1;

@end

