//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class NSString;

@interface MediaDRMOperation : ISOperation
{
    NSString *_mediaFileExtension;
    NSString *_mediaPath;
    id _sinfs;
}

- (void)run;
@property(readonly) id sinfs;
@property(readonly) NSString *mediaPath;
@property(readonly) NSString *mediaFileExtension;
- (void)dealloc;
- (id)initWithMediaPath:(id)arg1 sinfs:(id)arg2;

@end
