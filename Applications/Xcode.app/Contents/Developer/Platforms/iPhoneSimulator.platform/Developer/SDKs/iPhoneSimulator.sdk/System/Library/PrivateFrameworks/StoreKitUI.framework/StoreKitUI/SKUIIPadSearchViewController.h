//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SKUIIPadSearchHeaderViewDelegate.h"
#import "SKUIItemCollectionDelegate.h"
#import "SKUIMetricsViewController.h"
#import "SKUISearchRelatedViewDelegate.h"
#import "SKUISearchResultGroupControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIViewControllerRestoration.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SKUIClientContext, SKUIIPadSearchHeaderView, SKUIItemCollectionController, SKUIMetricsController, SKUISearchPage, SKUISearchRelatedView, SKUISearchResultGroupController, UICollectionView;

@interface SKUIIPadSearchViewController : UIViewController <SKUIIPadSearchHeaderViewDelegate, SKUIItemCollectionDelegate, SKUIMetricsViewController, UICollectionViewDataSource, UICollectionViewDelegate, SKUISearchRelatedViewDelegate, SKUISearchResultGroupControllerDelegate, UIViewControllerRestoration>
{
    UICollectionView *_collectionView;
    NSDictionary *_facetSelections;
    SKUIIPadSearchHeaderView *_headerView;
    id <SKUISearchChildViewControllerDelegate> _delegate;
    SKUIItemCollectionController *_itemCollectionController;
    SKUIMetricsController *_metricsController;
    SKUISearchRelatedView *_relatedView;
    SKUISearchResultGroupController *_searchResultGroupController;
    NSString *_previousRelatedSearchTerm;
    SKUISearchPage *_page;
    NSArray *_searchFacets;
    SKUIClientContext *_clientContext;
    NSMutableDictionary *_indexesByItemIndex;
    NSMutableDictionary *_itemIndexesByIndex;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) NSDictionary *facetSelections; // @synthesize facetSelections=_facetSelections;
@property(retain, nonatomic) NSArray *searchFacets; // @synthesize searchFacets=_searchFacets;
@property(retain, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(readonly, nonatomic) NSString *previousRelatedSearchTerm; // @synthesize previousRelatedSearchTerm=_previousRelatedSearchTerm;
@property(readonly, nonatomic) SKUISearchPage *searchPage; // @synthesize searchPage=_page;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) __weak id <SKUISearchChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_itemIndexForIndex:(long long)arg1;
- (long long)_indexForItemIndex:(long long)arg1;
- (id)_visibleMetricsImpressionsString;
- (void)_recordClickEventForItemOfferAtIndex:(long long)arg1;
- (void)_recordClickEventForItemAtIndex:(long long)arg1;
- (void)_recordClickEventForEditorialAtIndex:(long long)arg1;
- (void)_recordClickEvent:(id)arg1 withCell:(id)arg2;
- (void)_reloadOrientation:(long long)arg1;
- (void)_reloadFacets;
- (void)_reloadView;
- (id)_itemCollectionController;
- (id)_collectionView;
- (void)_addImpressionWithItemID:(long long)arg1 type:(id)arg2 index:(long long)arg3;
- (void)_noResultsAction:(id)arg1;
- (void)_spellCorrectionAction:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)searchRelatedViewDidSelectBackButton:(id)arg1;
- (void)searchRelatedView:(id)arg1 didSelectRelatedQueryAtIndex:(long long)arg2;
- (id)activeMetricsController;
- (void)searchHeaderViewDidUpdateFacetSelections:(id)arg1 facetIndex:(long long)arg2 listIndex:(long long)arg3;
- (id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2;
- (void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (void)searchResultGroupController:(id)arg1 didLoadArtworkAtIndex:(unsigned long long)arg2;
- (void)searchResultGroupController:(id)arg1 didLoadEntityAtIndexes:(id)arg2 removedEntityAtIndexes:(id)arg3;
- (id)contentScrollView;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)setSearchPage:(id)arg1 previousRelatedSearchTerm:(id)arg2;
- (void)scrollToTop;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
