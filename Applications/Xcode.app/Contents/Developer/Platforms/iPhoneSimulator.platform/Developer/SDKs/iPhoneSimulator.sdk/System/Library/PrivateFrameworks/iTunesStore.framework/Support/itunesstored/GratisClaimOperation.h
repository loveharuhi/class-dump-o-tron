//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

#import "ISStoreURLOperationDelegate.h"

@class NSDictionary, NSNumber, NSString, SSURLRequestProperties, SSVGratisRequestBody;

@interface GratisClaimOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSNumber *_accountID;
    NSString *_authenticationReasonDescription;
    SSURLRequestProperties *_defaultRequestProperties;
    NSDictionary *_rawOutput;
    SSVGratisRequestBody *_requestBody;
    _Bool _suppressesErrorDialogs;
}

- (id)_newRetryRequestPropertiesWithURL:(id)arg1;
- (id)_newDefaultRequestProperties;
- (id)_bodyData;
- (id)_authenticationContext;
- (id)_accountID;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (_Bool)operation:(id)arg1 processData:(id)arg2 error:(id *)arg3;
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;
- (void)run;
@property _Bool suppressesErrorDialogs;
@property(copy) NSString *authenticationReasonDescription;
@property(readonly) NSDictionary *rawOutput;
- (void)dealloc;
- (id)initWithRequestBody:(id)arg1;
- (id)initWithPurchase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

