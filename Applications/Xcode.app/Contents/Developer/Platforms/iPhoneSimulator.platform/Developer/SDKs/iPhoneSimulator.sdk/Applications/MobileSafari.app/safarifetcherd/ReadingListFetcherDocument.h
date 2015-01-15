//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ReaderControllerDelegate.h"
#import "SiteIconDownloadRequestDelegate.h"

@class NSString, NSTimer, ReaderContextWK1, SiteIconDownloadRequest, WebBookmark, WebView;

@interface ReadingListFetcherDocument : NSObject <ReaderControllerDelegate, SiteIconDownloadRequestDelegate>
{
    long long _retainCount;
    WebView *_webView;
    ReaderContextWK1 *_readerContext;
    WebBookmark *_bookmark;
    SiteIconDownloadRequest *_thumbnailDownloadRequest;
    _Bool _completionPendingThumbnail;
    _Bool _isLoading;
    _Bool _finishedLoadingMainFrame;
    _Bool _mainPageArchived;
    _Bool _fetcherInitiatedLoadCancel;
    _Bool _loadFailed;
    _Bool _didFinishFetchingDocument;
    unsigned long long _numCompletedSubpages;
    double _loadStartTimestamp;
    double _dataReceivedTimestamp;
    NSTimer *_slowLoadTimer;
    NSTimer *_readerPageTimer;
    NSTimer *_dataCheckTimer;
    NSTimer *_webThreadUnresponsiveFailSafeTimer;
}

@property(readonly, nonatomic) _Bool loadFailed; // @synthesize loadFailed=_loadFailed;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) _Bool wasCancelled; // @synthesize wasCancelled=_fetcherInitiatedLoadCancel;
- (void)siteIconDownloadRequest:(id)arg1 didComputeIconKeyColor:(id)arg2;
- (void)siteIconDownloadRequest:(id)arg1 didLoadIconData:(id)arg2;
- (void)siteIconDownloadRequestDidFail:(id)arg1;
- (void)_cleanUpAfterIconDownloadRequestCompletion;
- (_Bool)readerShouldUseNarrowLayout;
- (void)webFrame:(id)arg1 didFinishLoadingNextPageNumber:(unsigned long long)arg2;
- (void)doneLoadingReaderPage;
- (int)readerOperationMode;
- (_Bool)isShowingReadingListArchive;
- (void)webView:(id)arg1 didPerformServerRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4;
- (void)webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4;
- (void)_webView:(id)arg1 didPerformAnyRedirectFromURL:(id)arg2 toURL:(id)arg3 inFrame:(id)arg4;
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (id)_mimeTypeForFrameContents:(id)arg1;
- (void)detectReaderAvailabilityOnWebThread;
- (void)_didDetectReaderAvailability:(_Bool)arg1;
- (void)saveNextPage:(id)arg1 asPageNumber:(unsigned long long)arg2;
- (void)didFinishLoadingAllReaderPages;
- (void)_didCancelLoad;
- (void)cancelLoad;
- (void)loadBookmark:(id)arg1;
- (void)_cancelFailSafeTimer;
- (void)_failSafeTimerExpired;
- (void)startFailSafeTimer;
- (void)_dataCheckTimeoutExpired;
- (void)_readerPageTimeoutExpired;
- (void)_slowLoadTimeoutExpired;
- (void)_dataReceived;
- (void)_loadDidFail;
- (void)_saveAndSelfExpire;
- (void)finishFetchingDocument;
- (void)_didFinishLoadingSubpage;
- (double)progress;
- (void)dealloc;
- (id)init;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
