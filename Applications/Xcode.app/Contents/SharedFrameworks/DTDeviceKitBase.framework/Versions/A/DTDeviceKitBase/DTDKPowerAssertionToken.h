//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTCancellable.h"

@class NSString;

@interface DTDKPowerAssertionToken : NSObject <DVTCancellable>
{
    id _assertionRef;
}

@property(retain) id assertionRef; // @synthesize assertionRef=_assertionRef;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

