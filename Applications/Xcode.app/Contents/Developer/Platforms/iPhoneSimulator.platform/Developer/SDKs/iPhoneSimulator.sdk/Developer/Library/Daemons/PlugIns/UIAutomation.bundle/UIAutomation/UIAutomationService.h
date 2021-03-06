//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXService.h"

#import "UIAServiceAuthorizedAPI.h"

@class DTXConnection, NSString;

@interface UIAutomationService : DTXService <UIAServiceAuthorizedAPI>
{
    DTXConnection *_relay;
    NSString *_targetBundleID;
    int _targetPID;
    int _agentPID;
    _Bool _continueMonitoringTargetPID;
    _Bool _serviceQueueDisconnected;
}

+ (id)uuidString;
- (void)_monitorPID:(id)arg1;
- (void)scriptDidThrowIssue:(id)arg1;
- (void)scriptDidThrowException:(id)arg1;
- (void)_hostTaskDidFinishWithInfo:(id)arg1;
- (void)performTaskOnHost:(id)arg1 withArguments:(id)arg2 timeout:(id)arg3;
- (id)updateBundleStatus:(id)arg1;
- (id)updateScriptStatus:(id)arg1;
- (void)agentDidCaptureEvent:(id)arg1;
- (void)agentIsGone:(id)arg1;
- (void)agentIsReady;
- (id)configureLaunchEnvironment:(id)arg1;
- (id)scriptStatus;
- (void)takeScreenshot;
- (void)stopCapture;
- (void)resumeCapture;
- (void)pauseCapture;
- (void)processBundleWithInfo:(id)arg1;
- (void)startCaptureWithInfo:(id)arg1;
- (void)stopScript;
- (void)resumeScript;
- (void)pauseScript;
- (void)startScriptWithInfo:(id)arg1;
- (void)startInternalAgentForApp:(id)arg1 withPID:(id)arg2;
- (void)startAgentForApp:(id)arg1 withPID:(id)arg2;
- (_Bool)_startUpAgentAtLocation:(const char *)arg1;
- (void)_watchAgent;
- (void)_checkTaskForTarget;
- (id)_rootDirectory;
- (void)dealloc;
- (void)messageReceived:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

