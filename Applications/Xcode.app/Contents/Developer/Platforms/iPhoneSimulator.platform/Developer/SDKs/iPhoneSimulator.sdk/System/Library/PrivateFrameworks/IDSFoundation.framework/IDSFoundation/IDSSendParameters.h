//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSSendParameters : NSObject <NSCopying>
{
    NSMutableDictionary *_params;
}

@property(readonly, retain, nonatomic) NSDate *expirationDate;
@property(nonatomic) _Bool fireAndForget;
@property(nonatomic) _Bool bypassSizeCheck;
@property(nonatomic) _Bool daemonDeathResend;
@property(nonatomic) _Bool nonWaking;
@property(nonatomic) _Bool activityContinuation;
@property(nonatomic) _Bool bypassDuet;
@property(nonatomic) double timeout;
@property(nonatomic) _Bool requireBluetooth;
@property(nonatomic) _Bool localDelivery;
@property(nonatomic) long long priority;
@property(nonatomic) _Bool wantsDeliveryStatus;
@property(nonatomic) _Bool wantsResponse;
@property(nonatomic) _Bool compressPayload;
@property(nonatomic) _Bool encryptPayload;
@property(nonatomic) _Bool wantsAppAck;
@property(nonatomic) _Bool useDictAsTopLevel;
@property(nonatomic) _Bool compressed;
@property(nonatomic) _Bool expectsPeerResponse;
@property(retain, nonatomic) NSString *queueOneIdentifier;
@property(retain, nonatomic) NSArray *interestingRegistrationProperties;
@property(retain, nonatomic) NSArray *requireAllRegistrationProperties;
@property(retain, nonatomic) NSString *peerResponseIdentifier;
@property(retain, nonatomic) NSArray *bulkedPayload;
@property(retain, nonatomic) NSString *alternateCallbackID;
@property(retain, nonatomic) NSData *messageUUID;
@property(retain, nonatomic) NSDictionary *deliveryStatusContext;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSNumber *command;
@property(retain, nonatomic) NSData *dataToEncrypt;
@property(retain, nonatomic) NSString *accountUUID;
@property(retain, nonatomic) NSArray *destinations;
@property(retain, nonatomic) NSString *fromID;
@property(retain, nonatomic) NSDictionary *protobuf;
@property(retain, nonatomic) NSDictionary *message;
@property(retain, nonatomic) NSData *data;
@property(readonly, retain, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

