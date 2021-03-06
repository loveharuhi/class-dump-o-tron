//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface AssetExportController : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_exportOperationsByCompositionAVURL;
    NSMutableDictionary *_waveformOperationsByCompositionAVURL;
}

- (void).cxx_destruct;
- (void)finalizeAssetWithCompositionAVURL:(id)arg1 cacheWaveform:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

