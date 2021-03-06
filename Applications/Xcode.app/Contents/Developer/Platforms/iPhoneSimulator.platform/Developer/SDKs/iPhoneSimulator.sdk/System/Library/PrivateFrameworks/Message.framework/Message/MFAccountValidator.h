//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFAccount, MFActivityMonitor, MFError, MFMonitoredInvocation, NSArray;

@interface MFAccountValidator : NSObject
{
    MFAccount *_account;
    id _delegate;
    MFActivityMonitor *_accountValidationActivity;
    MFMonitoredInvocation *_validationInvocation;
    CDUnknownBlockType _completionBlock;
    struct {
        unsigned int useSSL:1;
        unsigned int incomingServerSupportsSSL:1;
        unsigned int smtpServerSupportsSSL:1;
        unsigned int canceled:1;
        unsigned int performsValidationInBackground:1;
        unsigned int unused:27;
    } _flags;
    MFError *_incomingServerValidationError;
    MFError *_smtpServerValidationError;
    NSArray *_incomingServerAuthSchemes;
    NSArray *_smtpServerAuthSchemes;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MFError *error;
@property(readonly, nonatomic) _Bool accountSupportsSSL;
@property(readonly, nonatomic) _Bool accountIsValid;
@property(readonly, nonatomic) MFMonitoredInvocation *validationInvocation;
@property(readonly, nonatomic) _Bool performsValidationInBackground;
- (void)_validateAccount:(id)arg1 withFallbacks:(_Bool)arg2;
- (_Bool)accountValidationCanceled;
- (void)stop;
- (_Bool)_outgoingServerValid;
- (_Bool)_incomingServerValid;
- (void)_validateAccountWithoutFallbacks:(id)arg1;
- (void)_validateAccount:(id)arg1;
- (void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2;
- (id)_ispAccountInfo;
- (void)cancelValidation;
@property(readonly, nonatomic) MFAccount *account;
- (void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)validateAccountWithoutFallbacks:(id)arg1;
- (void)validateAccount:(id)arg1 useSSL:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)validateAccount:(id)arg1 useSSL:(_Bool)arg2;
- (void)dealloc;
- (id)initWithPerformsValidationInBackground:(_Bool)arg1;
- (id)init;

@end

