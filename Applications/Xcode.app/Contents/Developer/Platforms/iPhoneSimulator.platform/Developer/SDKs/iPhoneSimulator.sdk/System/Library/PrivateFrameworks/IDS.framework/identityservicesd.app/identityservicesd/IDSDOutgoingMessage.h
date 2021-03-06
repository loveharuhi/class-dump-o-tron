//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface IDSDOutgoingMessage : NSObject
{
    NSDictionary *_message;
    NSData *_data;
    NSDictionary *_protobuf;
    NSString *_fromID;
    NSArray *_destinations;
    NSString *_accountGUID;
    _Bool _useDictAsTopLevel;
    NSData *_dataToEncrypt;
    _Bool _encryptPayload;
    _Bool _compressPayload;
    _Bool _wantsResponse;
    NSDate *_expirationDate;
    NSNumber *_command;
    _Bool _wantsDeliveryStatus;
    NSDictionary *_deliveryStatusContext;
    NSData *_messageUUID;
    long long _priority;
    NSString *_guid;
    NSString *_alternateGUID;
    NSString *_identifier;
    _Bool _forcedLocal;
    NSString *_queueOneIdentifier;
    NSString *_peerResponseIdentifier;
    _Bool _expectsPeerResponse;
    _Bool _wantsAppAck;
    _Bool _fireAndForget;
    _Bool _nonWaking;
    NSMutableArray *_combinedMessages;
}

@property(copy) NSString *queueOneIdentifier; // @synthesize queueOneIdentifier=_queueOneIdentifier;
@property _Bool fireAndForget; // @synthesize fireAndForget=_fireAndForget;
@property _Bool nonWaking; // @synthesize nonWaking=_nonWaking;
@property _Bool wantsAppAck; // @synthesize wantsAppAck=_wantsAppAck;
@property _Bool expectsPeerResponse; // @synthesize expectsPeerResponse=_expectsPeerResponse;
@property(copy) NSString *peerResponseIdentifier; // @synthesize peerResponseIdentifier=_peerResponseIdentifier;
@property _Bool forcedLocal; // @synthesize forcedLocal=_forcedLocal;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain) NSArray *combinedMessages; // @synthesize combinedMessages=_combinedMessages;
@property(copy) NSString *alternateGUID; // @synthesize alternateGUID=_alternateGUID;
@property(copy) NSString *guid; // @synthesize guid=_guid;
@property long long priority; // @synthesize priority=_priority;
@property(copy) NSData *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(copy) NSDictionary *deliveryStatusContext; // @synthesize deliveryStatusContext=_deliveryStatusContext;
@property _Bool wantsDeliveryStatus; // @synthesize wantsDeliveryStatus=_wantsDeliveryStatus;
@property(copy) NSNumber *command; // @synthesize command=_command;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property _Bool wantsResponse; // @synthesize wantsResponse=_wantsResponse;
@property _Bool compressPayload; // @synthesize compressPayload=_compressPayload;
@property _Bool encryptPayload; // @synthesize encryptPayload=_encryptPayload;
@property(copy) NSData *dataToEncrypt; // @synthesize dataToEncrypt=_dataToEncrypt;
@property _Bool useDictAsTopLevel; // @synthesize useDictAsTopLevel=_useDictAsTopLevel;
@property(copy) NSString *accountGUID; // @synthesize accountGUID=_accountGUID;
@property(copy) NSArray *destinations; // @synthesize destinations=_destinations;
@property(copy) NSString *fromID; // @synthesize fromID=_fromID;
@property(copy) NSDictionary *protobuf; // @synthesize protobuf=_protobuf;
@property(copy) NSData *data; // @synthesize data=_data;
@property(copy) NSDictionary *message; // @synthesize message=_message;
- (id)copySendParameters;
- (void)combineWithMessage:(id)arg1;
- (_Bool)canCombineWithMessage:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 data:(id)arg2 protobuf:(id)arg3 fromID:(id)arg4 toDestinations:(id)arg5 accountGUID:(id)arg6 useDictAsTopLevel:(_Bool)arg7 dataToEncrypt:(id)arg8 encryptPayload:(_Bool)arg9 compressPayload:(_Bool)arg10 wantsResponse:(_Bool)arg11 expirationDate:(id)arg12 command:(id)arg13 wantsDeliveryStatus:(_Bool)arg14 deliveryStatusContext:(id)arg15 messageUUID:(id)arg16 priority:(long long)arg17 guid:(id)arg18 alternateGUID:(id)arg19 identifier:(id)arg20 forcedLocal:(_Bool)arg21 peerResponseIdentifier:(id)arg22 expectsPeerResponse:(_Bool)arg23 wantsAppAck:(_Bool)arg24 fireAndForget:(_Bool)arg25 nonWaking:(_Bool)arg26 queueOneIdentifier:(id)arg27;

@end

