//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXEventRepresentation, NSString;

@interface AXBEventManager : NSObject
{
    NSString *_eventTapIdentifier;
    _Bool _homeIsDown;
    _Bool _overrideGestureRecognitionState;
    _Bool _eventListenerEnabled;
    struct __IOHIDUserDevice *_userDevice;
    AXEventRepresentation *_lastHIDRecord;
}

+ (id)sharedManager;
@property(nonatomic) _Bool homeIsDown; // @synthesize homeIsDown=_homeIsDown;
- (unsigned int)machPortForPoint:(struct CGPoint)arg1;
- (unsigned int)contextIdForPosition:(struct CGPoint)arg1;
- (unsigned int)clientPortForContextId:(unsigned int)arg1;
- (void)clearLastRecordPostedThrougHID;
- (id)lastRecordPostedThroughHID;
- (void)postEvent:(id)arg1 systemEvent:(_Bool)arg2 afterNamedTap:(id)arg3 namedTaps:(id)arg4;
- (void)dispatchEventRepresentationToClient:(id)arg1;
- (void)enableEventTap:(_Bool)arg1 forApplication:(int)arg2;
- (void)wakeUpDeviceIfNecessary;
- (void)_enableAssistiveTouchEventTap:(_Bool)arg1;
- (_Bool)_assistiveTouchEventTap:(id)arg1;
- (void)setDisableSystemGestureRecognitionInEvents:(_Bool)arg1;
- (void)_normalizeEventForContext:(id)arg1;
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;
- (unsigned int)systemAppPort;
- (unsigned int)systemEventPort;
- (id)windowServer;
- (int)springBoardPid;
- (void)registerEventListener:(_Bool)arg1;
- (id)init;

@end

