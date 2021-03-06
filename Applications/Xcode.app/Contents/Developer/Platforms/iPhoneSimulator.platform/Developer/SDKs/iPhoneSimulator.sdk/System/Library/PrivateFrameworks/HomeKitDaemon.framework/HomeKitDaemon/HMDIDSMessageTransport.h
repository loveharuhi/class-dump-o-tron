//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMIDSMessageTransport.h"
#import "HMMessageTransport.h"
#import "IDSServiceDelegate.h"

@class HMMessageDispatcher, IDSService, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDIDSMessageTransport : NSObject <IDSServiceDelegate, HMMessageTransport, HMIDSMessageTransport>
{
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_pendingResponses;
    NSMutableDictionary *_pendingSentMessages;
    NSMutableDictionary *_pendingResponseTimers;
    HMMessageDispatcher *_messageDispatcher;
    NSMutableSet *_peerTransientDeviceAddresses;
    NSMutableSet *_peerResidentDeviceAddresses;
}

+ (void)messageElementsFromDictionary:(id)arg1 messageName:(id *)arg2 messageIdentifier:(id *)arg3 messagePayload:(id *)arg4 target:(id *)arg5 transactionID:(id *)arg6 isRequest:(_Bool *)arg7 isResponse:(_Bool *)arg8 isNotification:(_Bool *)arg9;
+ (id)dictionaryForMessageName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 transactionID:(id)arg5 msgType:(unsigned long long)arg6;
+ (id)idsMessageTypeDescription:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableSet *peerResidentDeviceAddresses; // @synthesize peerResidentDeviceAddresses=_peerResidentDeviceAddresses;
@property(retain, nonatomic) NSMutableSet *peerTransientDeviceAddresses; // @synthesize peerTransientDeviceAddresses=_peerTransientDeviceAddresses;
@property(nonatomic) __weak HMMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSMutableDictionary *pendingResponseTimers; // @synthesize pendingResponseTimers=_pendingResponseTimers;
@property(retain, nonatomic) NSMutableDictionary *pendingSentMessages; // @synthesize pendingSentMessages=_pendingSentMessages;
@property(retain, nonatomic) NSMutableDictionary *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)_removePendingResponseTimerForTransaction:(id)arg1;
- (void)_startPendingResponseTimer:(id)arg1 identifier:(id)arg2;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5;
- (id)sendMessage:(id)arg1 destinations:(id)arg2 msgType:(unsigned long long)arg3 error:(id *)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)updatePeerDeviceAddresses:(id)arg1;
- (void)configure:(id)arg1;
- (id)transientDevices;
- (id)residentDevices;
- (id)initWithIDSService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

