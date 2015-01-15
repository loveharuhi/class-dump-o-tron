//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SLUploadCompletionSession;

@interface SLUploadService : NSObject
{
    SLUploadCompletionSession *_session;
    NSString *_XPCServiceName;
    NSArray *_notificationNames;
    long long _bulletinSubtype;
    NSString *_variantIconResourceName;
}

@property(readonly) NSString *variantIconResourceName; // @synthesize variantIconResourceName=_variantIconResourceName;
@property(readonly) long long bulletinSubtype; // @synthesize bulletinSubtype=_bulletinSubtype;
@property(retain) NSArray *notificationNames; // @synthesize notificationNames=_notificationNames;
@property(retain) NSString *XPCServiceName; // @synthesize XPCServiceName=_XPCServiceName;
- (void).cxx_destruct;
@property(readonly) SLUploadCompletionSession *session;
- (id)initWithXPCServiceName:(id)arg1 notificationNames:(id)arg2 bulletinSubtype:(long long)arg3 variantIconResourceName:(id)arg4;

@end
