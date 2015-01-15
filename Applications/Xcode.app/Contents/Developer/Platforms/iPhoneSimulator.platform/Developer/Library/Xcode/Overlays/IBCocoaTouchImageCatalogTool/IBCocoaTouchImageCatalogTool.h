//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractPlatformTool.h"

#import "IBCocoaTouchImageCatalogTool.h"

@class NSString;

@interface IBCocoaTouchImageCatalogTool : IBAbstractPlatformTool <IBCocoaTouchImageCatalogTool>
{
}

+ (void)main;
- (id)messageReceiveChannel:(id)arg1 preprocessException:(id)arg2;
- (id)messageReceiveChannel:(id)arg1 queueForReceivingMessage:(SEL)arg2;
- (void)registerSchema:(id)arg1;
- (id)compileImageCatalogsFromPaths:(id)arg1 usingSchemaProviderClassNames:(id)arg2 options:(id)arg3 imageSetRepWhiteList:(id)arg4;
- (void)_MAIN_THREAD_compileImageCatalogsFromPaths:(id)arg1 options:(id)arg2 imageSetRepWhiteList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)initializeWithArguments:(id)arg1;
- (id)protocolCapabilities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
