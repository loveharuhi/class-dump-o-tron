//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLPlatformObject.h"

#import "APSConnectionDelegate.h"
#import "CPLEngineTransportImplementation.h"

@class APSConnection, CKContainer, CKDatabase, CKRecord, CKRecordZone, CPLEngineLibrary, NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface CPLCloudKitTransport : CPLPlatformObject <APSConnectionDelegate, CPLEngineTransportImplementation>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushQueue;
    NSObject<OS_dispatch_queue> *_pendingOperationQueue;
    NSMapTable *_pendingOperations;
    NSMapTable *_progressPerOperations;
    NSMutableSet *_cancelledOperations;
    _Bool _registeredPushSubscription;
    double _lastPushRegistrationTime;
    CKContainer *_container;
    _Bool _stoppedWaitingForPush;
    CKDatabase *_database;
    CKRecord *_userRecord;
    CKRecordZone *_primaryZone;
}

+ (unsigned long long)ResourceTypeForCloudKitKey:(id)arg1 outSuffix:(id *)arg2;
+ (_Bool)HasCloudKitKeyForResourceType:(unsigned long long)arg1;
+ (id)CloudKitKeyForResourceType:(unsigned long long)arg1 suffix:(id)arg2;
+ (void)_AddMappingsForResourceTypes;
+ (void)_AddMappingsForResourceType:(unsigned long long)arg1 prefix:(id)arg2;
+ (id)bestErrorForUnderlyingError:(id)arg1;
@property(retain, nonatomic) CKRecordZone *primaryZone; // @synthesize primaryZone=_primaryZone;
@property(retain, nonatomic) CKRecord *userRecord; // @synthesize userRecord=_userRecord;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)_didCancelCKOperation:(id)arg1;
- (void)_didFinishCKOperation:(id)arg1;
- (void)_CKOperation:(id)arg1 didProgress:(double)arg2;
- (void)_didStartCKOperation:(id)arg1;
- (void)_cancelAllCKOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_emitLogForCurrentOperations;
- (id)_pendingOperationsStatus;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)stopWaitingForPushNotificationsAndDeactivate:(_Bool)arg1;
- (void)startWaitingForPushNotifications;
- (id)_CloudKitContainerFromFromCPLAlbumChange:(id)arg1;
- (id)_CloudKitContainerRelationChangeFromCPLContainerRelationChange:(id)arg1;
- (id)_CloudKitBaseChangeForRecordType:(id)arg1 fromCPLRecordChange:(id)arg2;
- (id)_CloudKitAssetFromCPLAssetChange:(id)arg1 clearMissingResources:(_Bool)arg2 outError:(id *)arg3;
- (id)_CloudKitMasterFromCPLMasterChange:(id)arg1 clearMissingResources:(_Bool)arg2 outError:(id *)arg3;
- (id)newCKRecordFromCPLRecordChange:(id)arg1 withRecordType:(id)arg2 recordID:(id)arg3;
- (id)_addResourcesFromCPLResources:(id)arg1 clearMissing:(_Bool)arg2 clearResourceIfNecessary:(_Bool)arg3 toCloudKitRecord:(id)arg4;
- (void)_clearResourceWithType:(unsigned long long)arg1 inCloudKitRecord:(id)arg2;
- (void)_addResourceValuesForResourceType:(unsigned long long)arg1 imageWidth:(id)arg2 imageHeight:(id)arg3 fileSize:(id)arg4 fileUTI:(id)arg5 fingerPrint:(id)arg6 resourceFileURL:(id)arg7 setResource:(_Bool)arg8 toCloudKitRecord:(id)arg9;
- (id)_imagePrefixForresourceType:(unsigned long long)arg1;
- (void)_updateRemapInfoInCPLRecordChange:(id)arg1 withCloudKitRecord:(id)arg2;
- (void)_setZoneStateEnabled:(_Bool)arg1 withDisabledTime:(id)arg2 deleteTime:(id)arg3;
- (void)_updateLocalZoneStateFromCloudKitZoneState:(id)arg1;
- (id)_CPLContainerRelationChangeFromCloudKitContainerRelation:(id)arg1 withChangeType:(unsigned long long)arg2;
- (id)_CPLAlbumChangeFromCloudKitAlbum:(id)arg1 withChangeType:(unsigned long long)arg2;
- (id)_CPLAssetChangeFromCloudKitAsset:(id)arg1 withChangeType:(unsigned long long)arg2;
- (id)_CPLLocationFromCLLocation:(id)arg1;
- (id)_CLLocationFromCPLLocationDict:(id)arg1;
- (id)_CPLMasterChangeFromCloudKitMaster:(id)arg1 withChangeType:(unsigned long long)arg2;
- (void)_updateBaseCloudKitRecord:(id)arg1 fromCPLRecordChange:(id)arg2;
- (void)_updateBaseCPLRecordChange:(id)arg1 fromCloudKitRecord:(id)arg2;
- (void)_addResourcesFromCloudKitRecord:(id)arg1 toFinalResources:(id)arg2 withIdentifier:(id)arg3;
- (id)preferredFileExtensionForType:(id)arg1;
- (void)_updatePropertyInResourceIdentity:(id)arg1 forSuffix:(id)arg2 withValue:(id)arg3;
- (void)downloadResource:(id)arg1 clientBundleID:(id)arg2 foreground:(_Bool)arg3 highPriority:(_Bool)arg4 cancelState:(id)arg5 didStartHandler:(CDUnknownBlockType)arg6 progressHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_updateDownloadOperation:(id)arg1 withCellularAccessForResource:(id)arg2 isForeground:(_Bool)arg3 isHighPriority:(_Bool)arg4;
- (void)_downloadNextChangeBatchForSyncAnchor:(id)arg1 foreground:(_Bool)arg2 cancelState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)downloadNextChangeBatchForSyncAnchor:(id)arg1 foreground:(_Bool)arg2 cancelState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getAssetCountsForeground:(_Bool)arg1 cancelState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateLibraryInfoFromCKRecord:(id)arg1;
- (id)_assetCountsFromCKRecord:(id)arg1;
- (void)publishResource:(id)arg1 foreground:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadResource:(id)arg1 ofRecord:(id)arg2 foreground:(_Bool)arg3 cancelState:(id)arg4 didStartHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)uploadChangeBatch:(id)arg1 forSyncAnchor:(id)arg2 foreground:(_Bool)arg3 cancelState:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)removeCloudLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resetPushSubscriptionState;
- (void)setupPushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchPrimaryZoneCreateIfNecessary:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setupCloudWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)CPLErrorForCloudKitError:(id)arg1 description:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
- (id)CPLErrorForCloudKitError:(id)arg1 description:(id)arg2;
- (void)processCPLErrorIfNeeded:(id)arg1;
- (id)simpleDataForSyncAnchor:(id)arg1;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (id)resourcePublishTaskForResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)supportsDelayedUploads;
- (id)removeLibraryTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getAssetCountsTaskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)uploadBatchTaskForBatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)setupTaskCreateLibraryIfNecessary:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) CPLEngineLibrary *engineLibrary;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

