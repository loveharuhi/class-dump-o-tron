//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewItem.h"

@class NSString, NSURL;

@interface ABContactPhotoPreviewItem : NSObject <QLPreviewItem>
{
    NSURL *_previewItemURL;
    NSString *_previewItemTitle;
}

@property(retain) NSString *previewItemTitle; // @synthesize previewItemTitle=_previewItemTitle;
@property(retain) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

