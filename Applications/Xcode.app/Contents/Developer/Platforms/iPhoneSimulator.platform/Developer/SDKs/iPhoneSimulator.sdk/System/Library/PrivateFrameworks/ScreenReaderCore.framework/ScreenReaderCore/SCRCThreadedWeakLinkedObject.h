//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject
{
    NSLock *_releaseLock;
    int _referenceCount;
    _Bool _calledDealloc;
}

- (void)dealloc;
- (oneway void)release;
- (void)invalidateThreadsWithWeakLinks;
- (id)retain;
- (unsigned long long)retainCount;
- (id)init;

@end

