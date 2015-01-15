//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TUCallCapabilities : NSObject
{
}

+ (void)_initializeCTCapabilitiesSupport;
+ (void)_tearDownCTCapabilitiesNotifications;
+ (void)_setUpCTCapabilitiesNotifications;
+ (struct __CTServerConnection *)_createServerConnection;
+ (void)invalidateCachedValues;
+ (void)_sendNecessaryNotificationsAfterRunningBlock:(CDUnknownBlockType)arg1;
+ (void)_setRelayCallingEnabledDefault:(_Bool)arg1;
+ (_Bool)_relayCallingEnabledDefault;
+ (void)_setCanEnableRelayCallingDefault:(_Bool)arg1;
+ (_Bool)_canEnableRelayCallingDefault;
+ (void)_setSupportsRelayCallingDefault:(_Bool)arg1;
+ (_Bool)_supportsRelayCallingDefault;
+ (void)setRelayCallingEnabled:(_Bool)arg1;
+ (_Bool)isRelayCallingEnabled;
+ (_Bool)canEnableRelayCalling;
+ (_Bool)supportsRelayCalling;
+ (void)_tearDownRelayCallingListeners;
+ (void)_setUpRelayCallingListeners;
+ (void)_initializeState;
+ (_Bool)isWiFiCallingCurrentlyAvailable;
+ (void)setWiFiCallingCapabilityInformation:(id)arg1;
+ (id)wiFiCallingCapabilityInformation;
+ (void)setWiFiCallingEnabled:(_Bool)arg1;
+ (_Bool)isWiFiCallingEnabled;
+ (_Bool)canEnableWiFiCalling;
+ (_Bool)supportsSimultaneousVoiceAndData;
+ (_Bool)supportsDisplayingFaceTimeVideoCalls;
+ (_Bool)supportsDisplayingFaceTimeAudioCalls;
+ (_Bool)supportsDisplayingTelephonyCalls;
+ (_Bool)supportsHostingFaceTimeVideoCalls;
+ (_Bool)supportsHostingFaceTimeAudioCalls;
+ (_Bool)supportsHostingTelephonyCalls;
+ (int)faceTimeVideoCallSupport;
+ (int)faceTimeAudioCallSupport;
+ (int)telephonyCallSupport;
+ (_Bool)supportsFaceTimeVideoCalls;
+ (_Bool)supportsFaceTimeAudioCalls;
+ (_Bool)supportsTelephonyCalls;

@end
