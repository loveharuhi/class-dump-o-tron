//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/BookContainerElementBase.h>

@interface BookContainerElement : BookContainerElementBase
{
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingIPadScreenshots;
+ (id)keyPathsForValuesAffectingHoldVersionForPreview;
+ (id)keyPathsForValuesAffectingHasPublication;
+ (id)keyPathsForValuesAffectingHasPreview;
+ (id)keyPathsForValuesAffectingPreviewAppliesToVersion;
- (void)removeInitialElements;
- (void)setAssets:(id)arg1;
- (void)setPreviewAppliesToVersion:(id)arg1;
- (id)previewAppliesToVersion;
- (BOOL)hasScreenshots;
- (BOOL)hasPublication;
- (BOOL)hasPreview;
- (BOOL)hasCoverArt;
- (id)screenshots;
- (void)setIPadScreenshots:(id)arg1;
- (id)iPadScreenshots;
- (id)iPadScreenshotContainerCreatingIfNeeded;
- (id)iPadScreenshotContainer;
- (id)previewContainerCreatingIfNeeded;
- (id)previewContainer;
- (id)publicationContainerCreatingIfNeeded;
- (id)publicationContainer;
- (id)coverArtContainerCreatingIfNeeded;
- (id)coverArtContainer;
- (id)assetContainerElementCreatingIfNeededWithType:(id)arg1;
- (id)assetContainerElementWithType:(id)arg1;
- (id)init;

@end

