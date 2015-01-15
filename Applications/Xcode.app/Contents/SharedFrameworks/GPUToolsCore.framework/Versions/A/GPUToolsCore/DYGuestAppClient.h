//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYTransport, DYTransportSource;

@interface DYGuestAppClient : NSObject
{
    DYTransport *_transport;
    DYTransportSource *_source;
    BOOL _triggerCaptureOnNextGraphicsCommand;
    BOOL _harvestAtEndOfCapture;
    BOOL _suspendAfterCapture;
    BOOL _lockGraphicsAfterCapture;
    BOOL _didSendAllDataSentMessage;
    BOOL _allDataReceivedAck;
}

+ (id)timebaseDictionary;
@property(readonly, nonatomic) BOOL harvestAtEndOfCapture; // @synthesize harvestAtEndOfCapture=_harvestAtEndOfCapture;
@property(readonly, nonatomic) BOOL triggerCaptureOnNextGraphicsCommand; // @synthesize triggerCaptureOnNextGraphicsCommand=_triggerCaptureOnNextGraphicsCommand;
- (void)_waitForGraphicsThreads;
- (BOOL)_canTriggerCaptureOnNextGraphicsCommand;
- (void)_appendLinkTimeLibrariesToVersionsDictionary:(id)arg1;
- (void)_appendToAllCaptureDataSentMessagePayload:(id)arg1;
- (void)_populateQueueAndThreadLabelMaps;
- (void)_appendLinkTimeLibrary:(const char *)arg1 toVersionsDictionary:(id)arg2;
- (void)unlockGraphics;
- (void)lockGraphicsAndWaitForThreads:(BOOL)arg1;
- (void)notifyAllCaptureDataSent;
- (void)_handleActivateCaptureMessage:(id)arg1;
- (id)_buildLibraryLinkTimeVersionsDictionary;
- (id)_buildQueueThreadLabelsDictionary;
- (void)sendTimebaseUpdate;
- (void)sendCaptureData:(id)arg1 name:(id)arg2 inReplyTo:(id)arg3;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 inReplyTo:(id)arg2;
- (BOOL)shouldLockGraphicsWhenTurningOffCapturing;
- (void)processMessage:(id)arg1;
- (void)atexit;
- (void)dealloc;
- (id)initWithTransport:(id)arg1;
- (id)init;

@end
