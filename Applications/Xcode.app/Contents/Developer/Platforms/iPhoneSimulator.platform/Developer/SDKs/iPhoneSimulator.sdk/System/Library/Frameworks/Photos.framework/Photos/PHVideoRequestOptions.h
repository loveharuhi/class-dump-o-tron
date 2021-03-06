//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PHVideoRequestOptions : NSObject
{
    _Bool _networkAccessAllowed;
    _Bool _streamingAllowed;
    long long _version;
    long long _deliveryMode;
    CDUnknownBlockType _progressHandler;
}

@property(nonatomic, getter=isStreamingAllowed) _Bool streamingAllowed; // @synthesize streamingAllowed=_streamingAllowed;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

