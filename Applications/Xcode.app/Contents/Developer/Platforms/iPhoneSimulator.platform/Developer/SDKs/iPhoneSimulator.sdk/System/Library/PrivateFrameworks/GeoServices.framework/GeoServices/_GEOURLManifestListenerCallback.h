//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListenerCallback : NSObject
{
    CDUnknownBlockType _handler;
    struct __CFRunLoop *_runLoop;
}

- (void)performHandler:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1 handler:(CDUnknownBlockType)arg2;

@end
