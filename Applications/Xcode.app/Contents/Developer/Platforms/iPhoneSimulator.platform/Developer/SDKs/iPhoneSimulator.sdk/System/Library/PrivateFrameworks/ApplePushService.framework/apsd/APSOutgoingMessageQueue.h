//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSEnvironment, NSMutableArray, NSTimer;

@interface APSOutgoingMessageQueue : NSObject
{
    id <APSOutgoingMessageQueueDelegate> _delegate;
    APSEnvironment *_environment;
    NSMutableArray *_queue;
    NSTimer *_timer;
    double _criticalMessageTimeout;
    NSTimer *_criticalMessageKeepAliveTimer;
    double _criticalMessageKeepAliveTimerDuration;
    unsigned long long _criticalMessageFlushCount;
    unsigned long long _numberOfCriticalMessageFlushesBeforeDisconnecting;
    unsigned long long _criticalMessageFlushSize;
    double _forcedShortTimeoutDuration;
    double _lastReceivedAckOrReconnect;
    void *_powerAssertion;
}

- (unsigned long long)count;
- (void)setForcedShortTimeoutInterval:(id)arg1;
- (void)setCriticalMessageTimeout:(id)arg1;
- (void)setCriticalMessageKeepAliveTimerDuration:(id)arg1;
- (void)setNumberOfCriticalMessageFlushesBeforeDisconnecting:(id)arg1;
@property(readonly, nonatomic) _Bool hasEagerMessages;
@property(readonly, nonatomic) _Bool hasPendingMessages;
- (void)_criticalMessageKeepAliveTimerFired;
- (void)_clearCriticalMessageKeepAliveTimer;
- (void)_clearCriticalMessageKeepAliveTimerIfAppropriate;
- (void)_startCriticalMessageFlushTimerSendingFlush;
- (_Bool)_outgoingMessageIsLateCriticalMessage:(id)arg1;
- (void)_timerFired:(id)arg1;
- (void)_recalculateDisableFastDormancy;
- (void)_recalculatePowerAssertion;
- (void)_recalculateTimer;
- (void)_queueChanged;
- (void)_deliverResult:(id)arg1 forMessage:(id)arg2;
- (void)handleConnectionClosedOnInterface:(long long)arg1;
- (void)handleConnectionOpened;
- (void)handleAcknowledgmentForOutgoingMessageWithResult:(id)arg1 relevantInterfaceMonitor:(id)arg2 dualChannelState:(unsigned int)arg3 onInterface:(long long)arg4;
- (void)handleErrorSendingOutgoingMessage:(id)arg1 error:(id)arg2;
- (void)handleSentOutgoingMessage:(id)arg1 onInterface:(long long)arg2;
- (void)cancelOutgoingMessageWithID:(unsigned long long)arg1;
- (id)nextOutgoingMessageToSendForTokenState:(id)arg1;
- (void)enqueueOutgoingMessage:(id)arg1 forOriginator:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 environment:(id)arg2;

@end

