//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface LSAuditToken : NSObject <NSCopying>
{
    NSDictionary *_entitlements;
    NSDictionary *_infoPList;
    CDStruct_4c969caf _auditToken;
}

@property(readonly) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;
- (id)description;
@property(readonly, getter=isSandboxed) _Bool sandboxed; // @dynamic sandboxed;
@property(readonly) unsigned int euid; // @dynamic euid;
@property(readonly) int pidVersion; // @dynamic pidVersion;
@property(readonly) int pid; // @dynamic pid;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;

@end
