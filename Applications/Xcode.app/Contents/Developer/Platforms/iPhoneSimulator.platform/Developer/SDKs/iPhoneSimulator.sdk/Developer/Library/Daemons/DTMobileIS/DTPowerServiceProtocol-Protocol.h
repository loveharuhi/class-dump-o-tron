//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXAllowedRPC.h"

@class NSData, NSNumber, NSString;

@protocol DTPowerServiceProtocol <DTXAllowedRPC>
- (void)endStreamTransfer:(NSNumber *)arg1;
- (void)putData:(NSData *)arg1 toStreamID:(NSNumber *)arg2;
- (void)startStreamTransfer:(NSNumber *)arg1;
- (NSNumber *)openStreamForPath:(NSString *)arg1;
@end

