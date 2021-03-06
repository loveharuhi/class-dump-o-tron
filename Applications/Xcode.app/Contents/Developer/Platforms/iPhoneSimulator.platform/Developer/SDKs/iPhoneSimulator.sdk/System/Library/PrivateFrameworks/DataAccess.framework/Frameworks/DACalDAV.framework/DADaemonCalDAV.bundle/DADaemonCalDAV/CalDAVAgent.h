//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DAAgent.h"

#import "DAPreferredDaysToSyncDidChangeObserver.h"
#import "DAValidityCheckConsumer.h"

@class NSString;

@interface CalDAVAgent : DAAgent <DAPreferredDaysToSyncDidChangeObserver, DAValidityCheckConsumer>
{
}

- (void)preferredDaysToSyncDidChange;
- (void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (void)refreshFolderListRequireChangedFolders:(_Bool)arg1 isUserRequested:(_Bool)arg2;
- (void)refreshDidCompleteWithError:(id)arg1;
- (void)requestAgentStopMonitoringWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startMonitoring;
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;
- (void)_setupNotifications;
- (void)reallyRefresh;
- (void)_validateAndSync:(_Bool)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

