//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, NSURL, SSVPlatformContext;

@interface RadioStoreBag : NSObject
{
    NSDictionary *_mescalRequestWhitelist;
    NSDictionary *_mescalResponseWhitelist;
    NSString *_mescalSetupCertURLString;
    NSString *_mescalSetupURLString;
    SSVPlatformContext *_platformContext;
    NSNumber *_shouldSendKBSyncDataValue;
    NSString *_srdnldURLString;
    NSDictionary *_tiltDictionary;
}

@property(readonly, nonatomic) NSString *streamingDownloadURLString; // @synthesize streamingDownloadURLString=_srdnldURLString;
@property(readonly, nonatomic) NSDictionary *radioConfigurationDictionary; // @synthesize radioConfigurationDictionary=_tiltDictionary;
@property(readonly, nonatomic) NSString *mescalSetupURLString; // @synthesize mescalSetupURLString=_mescalSetupURLString;
@property(readonly, nonatomic) NSString *mescalCertificateURLString; // @synthesize mescalCertificateURLString=_mescalSetupCertURLString;
- (void).cxx_destruct;
- (id)_platformContext;
- (id)_cacheRepresentation;
- (id)_initWithCacheRepresentation:(id)arg1;
@property(readonly, nonatomic) _Bool shouldSendKBSyncData;
- (_Bool)shouldMescalVerifyResponseFromURL:(id)arg1;
- (_Bool)shouldMescalSignRequestWithURL:(id)arg1;
@property(readonly, nonatomic) NSString *platformLookupURLString;
@property(readonly, nonatomic, getter=isAdFreeRadioEnabled) _Bool adFreeRadioEnabled;
@property(readonly, nonatomic) NSURL *baseURL;
- (id)_initWithURLBagDictionary:(id)arg1;

@end

