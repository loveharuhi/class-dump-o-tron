//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBDataProvider.h"

@class NSBundle, NSMutableSet, NSSet, NSString;

@interface SLSocialBulletinDataProvider : NSObject <BBDataProvider>
{
    NSMutableSet *_bulletins;
    unsigned long long _bulletinCounter;
    NSSet *_uploadServices;
    NSBundle *_socialBundle;
}

- (void).cxx_destruct;
- (id)_socialBundle;
- (id)sectionParameters;
- (void)_configureSectionSubtypeParameters:(id)arg1 forUploadService:(id)arg2;
- (id)sortDescriptors;
- (id)sectionIconData;
- (id)sectionDisplayName;
- (void)dataProviderDidLoad;
- (id)sectionIdentifier;
- (void)_addBulletinWithTitle:(id)arg1 message:(id)arg2 forUploadService:(id)arg3;
- (void)_createBulletinsForUploadInfoDicts:(id)arg1 uploadService:(id)arg2;
- (void)handleNotification:(id)arg1;
- (id)_notificationMessageMap;
- (void)_registerForNotifications;
- (id)defaultSectionInfo;
- (void)_removeNotifications;
- (id)_supportedNotifications;
- (id)_uploadServiceForNotificationName:(id)arg1;
- (id)_uploadServices;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

