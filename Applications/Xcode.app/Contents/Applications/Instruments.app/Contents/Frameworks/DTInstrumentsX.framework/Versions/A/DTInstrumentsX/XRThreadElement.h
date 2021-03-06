//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTInstrumentsX/XRImmutableElement.h>

@class NSString, XRAttributeSet;

@interface XRThreadElement : XRImmutableElement
{
    unsigned int _serialNumber;
    NSString *_representativeSymbol;
    XRAttributeSet *_attributes;
    unsigned long long _tid;
}

@property(readonly, nonatomic) unsigned long long tid; // @synthesize tid=_tid;
@property(readonly, nonatomic) XRAttributeSet *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *representativeSymbol; // @synthesize representativeSymbol=_representativeSymbol;
@property(readonly, nonatomic) unsigned int serialNumber; // @synthesize serialNumber=_serialNumber;
- (void).cxx_destruct;
- (id)bestCombinationWith:(id)arg1;
- (id)threadElementUsingAttributes:(id)arg1;
- (id)threadElementUsingRepresentativeSymbol:(id)arg1;
- (id)displayName;
- (id)initWithSerialNumber:(unsigned int)arg1 tid:(unsigned long long)arg2 representativeSymbol:(id)arg3 attributes:(id)arg4;
- (id)_initWithSerialNumber:(unsigned int)arg1 tid:(unsigned long long)arg2 representativeSymbol:(id)arg3 attributes:(id)arg4 UUID:(struct __CFUUID *)arg5;

@end

