//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RUAudioPreviewViewDelegate.h"
#import "RUPreviewSessionObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, RUMetricsController, RUParallelScrollView, RUPreviewSession, RUProxyTableView, RUStationTreeDataSource, RadioStationTreeNode, SKUICircleProgressIndicator, SSMetricsPageEvent, UILabel, UIScrollView, UITableView;

@interface RUStationTreeViewController : UIViewController <RUAudioPreviewViewDelegate, RUPreviewSessionObserver, UITableViewDataSource, UITableViewDelegate>
{
    SKUICircleProgressIndicator *_activityIndicator;
    RadioStationTreeNode *_addingTreeNode;
    RUParallelScrollView *_containerScrollView;
    struct UIEdgeInsets _containerScrollViewContentInsetAdditions;
    RUStationTreeDataSource *_dataSource;
    _Bool _isLoadingParentTreeNode;
    _Bool _hasLoadedParentTreeNode;
    SSMetricsPageEvent *_lastPageEvent;
    UILabel *_loadingLabel;
    NSMutableArray *_loadingTreeNodes;
    RUMetricsController *_metricsController;
    long long _navigationOperation;
    RadioStationTreeNode *_parentTreeNode;
    RadioStationTreeNode *_previewingTreeNode;
    RUPreviewSession *_previewSession;
    NSMutableArray *_queuedMetricsOperations;
    RUProxyTableView *_tableView;
    _Bool _wasLastNavigationOperationAnimated;
    id <RUStationTreeViewControllerDelegate> _delegate;
}

+ (double)contentWidthForTraitCollection:(id)arg1;
@property(nonatomic) __weak id <RUStationTreeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateWithParentNode:(id)arg1 metricsPageEvent:(id)arg2 metricsConfiguration:(id)arg3 canReloadTableView:(_Bool)arg4;
- (void)_updateViewForHorizontalSizeClassChange;
- (id)_mediaEventForPreviewingItem:(id)arg1;
- (void)_loadAdditionalChildrenForSectionTreeNode:(id)arg1;
- (void)_layoutLoadingViews;
- (id)_indexPathForChildTreeNode:(id)arg1;
- (void)_endPreviewPlaybackWithOptions:(long long)arg1 withFinalItem:(id)arg2 didFinalItemPlayToCompletion:(_Bool)arg3;
- (id)_currentPreviewTrackDescripton;
- (id)_childTreeNodeAtIndexPath:(id)arg1;
- (void)_applyPreviewingAttributesToCell:(id)arg1 forTreeNode:(id)arg2 animated:(_Bool)arg3;
- (void)_addMetricsControllerOperationBlock:(CDUnknownBlockType)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_addButtonAction:(id)arg1;
- (void)removeAddingIndicator;
@property(readonly, nonatomic) UITableView *tableView;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)previewSession:(id)arg1 didStopWithOptions:(long long)arg2 withFinalItem:(id)arg3 didFinalItemPlayToCompletion:(_Bool)arg4;
- (void)previewSession:(id)arg1 didChangeFromItem:(id)arg2 toItem:(id)arg3;
- (void)audioPreviewViewDidCancel:(id)arg1 forReason:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)contentScrollView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)_initWithDataSource:(id)arg1;
- (id)initWithParentNodeID:(long long)arg1;
- (id)initForFeaturedStations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

