//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class GKCollectionViewDataSource, GKCollectionViewLayoutAttributes, GKDataSourceMetrics, GKSectionMetrics, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSMutableSet, NSPointerArray, NSSet;

@interface GKGridLayout : UICollectionViewLayout
{
    _Bool _showPlaceholder;
    _Bool _hideSearchBarOnAppear;
    _Bool _hideAboveSegmentOnAppear;
    _Bool _noMoreShowMore;
    _Bool _movedItemsInUpdateCarrySections;
    _Bool _displayClipView;
    _Bool _displayingOverlay;
    unsigned long long _portraitInterleavedSectionsCount;
    unsigned long long _landscapeInterleavedSectionsCount;
    double _leftLayoutGuideOffset;
    double _rightLayoutGuideOffset;
    NSSet *_visibleIndexPathsFilter;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    GKDataSourceMetrics *_dataSourceMetrics;
    double _hiddenSearchBarOffset;
    double _segmentedHeaderPinningOffset;
    NSPointerArray *_sectionToPresentationData;
    NSPointerArray *_sectionToMetricData;
    NSMutableArray *_laidOutAttributes;
    NSMutableOrderedSet *_laidOutPinnableAttributes;
    NSMutableDictionary *_indexPathToSupplementary;
    NSMutableDictionary *_indexPathToDecoration;
    NSMutableDictionary *_indexPathToItem;
    NSMutableDictionary *_oldIndexPathToSupplementary;
    NSMutableDictionary *_oldIndexPathToDecoration;
    NSMutableDictionary *_oldIndexPathToItem;
    NSMutableDictionary *_indexPathToMetrics;
    NSMutableIndexSet *_sectionsWithPinnedHeaders;
    NSMutableSet *_revealedIndexPaths;
    NSIndexPath *_indexPathOfTouchedShowMore;
    NSMutableDictionary *_keyToMetricData;
    NSMutableDictionary *_oldSectionToMetricKeys;
    long long _metricsInvalidationCount;
    NSArray *_currentUpdateItems;
    NSMutableSet *_knownSupplementaryKinds;
    GKCollectionViewDataSource *_dataSourceForUpdate;
    unsigned long long _updateType;
    GKCollectionViewLayoutAttributes *_clipViewAttributes;
    unsigned long long _invalidationFlags;
    double _segmentedBoxY;
    struct CGSize _laidOutContentSize;
    struct CGSize _minimumLaidOutContentSize;
    struct CGSize _oldLaidOutContentSize;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
@property(nonatomic) double segmentedBoxY; // @synthesize segmentedBoxY=_segmentedBoxY;
@property(nonatomic) _Bool displayingOverlay; // @synthesize displayingOverlay=_displayingOverlay;
@property(nonatomic) unsigned long long invalidationFlags; // @synthesize invalidationFlags=_invalidationFlags;
@property(retain, nonatomic) GKCollectionViewLayoutAttributes *clipViewAttributes; // @synthesize clipViewAttributes=_clipViewAttributes;
@property(nonatomic) _Bool displayClipView; // @synthesize displayClipView=_displayClipView;
@property(nonatomic) _Bool movedItemsInUpdateCarrySections; // @synthesize movedItemsInUpdateCarrySections=_movedItemsInUpdateCarrySections;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
@property(retain, nonatomic) GKCollectionViewDataSource *dataSourceForUpdate; // @synthesize dataSourceForUpdate=_dataSourceForUpdate;
@property(retain, nonatomic) NSMutableSet *knownSupplementaryKinds; // @synthesize knownSupplementaryKinds=_knownSupplementaryKinds;
@property(retain, nonatomic) NSArray *currentUpdateItems; // @synthesize currentUpdateItems=_currentUpdateItems;
@property(nonatomic) long long metricsInvalidationCount; // @synthesize metricsInvalidationCount=_metricsInvalidationCount;
@property(retain, nonatomic) NSMutableDictionary *oldSectionToMetricKeys; // @synthesize oldSectionToMetricKeys=_oldSectionToMetricKeys;
@property(retain, nonatomic) NSMutableDictionary *keyToMetricData; // @synthesize keyToMetricData=_keyToMetricData;
@property(nonatomic) _Bool noMoreShowMore; // @synthesize noMoreShowMore=_noMoreShowMore;
@property(retain, nonatomic) NSIndexPath *indexPathOfTouchedShowMore; // @synthesize indexPathOfTouchedShowMore=_indexPathOfTouchedShowMore;
@property(retain, nonatomic) NSMutableSet *revealedIndexPaths; // @synthesize revealedIndexPaths=_revealedIndexPaths;
@property(retain, nonatomic) NSMutableIndexSet *sectionsWithPinnedHeaders; // @synthesize sectionsWithPinnedHeaders=_sectionsWithPinnedHeaders;
@property(retain, nonatomic) NSMutableDictionary *indexPathToMetrics; // @synthesize indexPathToMetrics=_indexPathToMetrics;
@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToItem; // @synthesize oldIndexPathToItem=_oldIndexPathToItem;
@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToDecoration; // @synthesize oldIndexPathToDecoration=_oldIndexPathToDecoration;
@property(retain, nonatomic) NSMutableDictionary *oldIndexPathToSupplementary; // @synthesize oldIndexPathToSupplementary=_oldIndexPathToSupplementary;
@property(retain, nonatomic) NSMutableDictionary *indexPathToItem; // @synthesize indexPathToItem=_indexPathToItem;
@property(retain, nonatomic) NSMutableDictionary *indexPathToDecoration; // @synthesize indexPathToDecoration=_indexPathToDecoration;
@property(retain, nonatomic) NSMutableDictionary *indexPathToSupplementary; // @synthesize indexPathToSupplementary=_indexPathToSupplementary;
@property(nonatomic) struct CGSize oldLaidOutContentSize; // @synthesize oldLaidOutContentSize=_oldLaidOutContentSize;
@property(retain, nonatomic) NSMutableOrderedSet *laidOutPinnableAttributes; // @synthesize laidOutPinnableAttributes=_laidOutPinnableAttributes;
@property(retain, nonatomic) NSMutableArray *laidOutAttributes; // @synthesize laidOutAttributes=_laidOutAttributes;
@property(retain, nonatomic) NSPointerArray *sectionToMetricData; // @synthesize sectionToMetricData=_sectionToMetricData;
@property(retain, nonatomic) NSPointerArray *sectionToPresentationData; // @synthesize sectionToPresentationData=_sectionToPresentationData;
@property(nonatomic) double segmentedHeaderPinningOffset; // @synthesize segmentedHeaderPinningOffset=_segmentedHeaderPinningOffset;
@property(nonatomic) double hiddenSearchBarOffset; // @synthesize hiddenSearchBarOffset=_hiddenSearchBarOffset;
@property(retain, nonatomic) GKDataSourceMetrics *dataSourceMetrics; // @synthesize dataSourceMetrics=_dataSourceMetrics;
@property(retain, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal; // @synthesize defaultSectionMetricsInternal=_defaultSectionMetricsInternal;
@property(nonatomic) NSSet *visibleIndexPathsFilter; // @synthesize visibleIndexPathsFilter=_visibleIndexPathsFilter;
@property(nonatomic) struct CGSize minimumLaidOutContentSize; // @synthesize minimumLaidOutContentSize=_minimumLaidOutContentSize;
@property(nonatomic) struct CGSize laidOutContentSize; // @synthesize laidOutContentSize=_laidOutContentSize;
@property(nonatomic) _Bool hideAboveSegmentOnAppear; // @synthesize hideAboveSegmentOnAppear=_hideAboveSegmentOnAppear;
@property(nonatomic) _Bool hideSearchBarOnAppear; // @synthesize hideSearchBarOnAppear=_hideSearchBarOnAppear;
@property(nonatomic) double rightLayoutGuideOffset; // @synthesize rightLayoutGuideOffset=_rightLayoutGuideOffset;
@property(nonatomic) double leftLayoutGuideOffset; // @synthesize leftLayoutGuideOffset=_leftLayoutGuideOffset;
@property(nonatomic) unsigned long long landscapeInterleavedSectionsCount; // @synthesize landscapeInterleavedSectionsCount=_landscapeInterleavedSectionsCount;
@property(nonatomic) unsigned long long portraitInterleavedSectionsCount; // @synthesize portraitInterleavedSectionsCount=_portraitInterleavedSectionsCount;
@property(nonatomic) _Bool showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (void)prepareForMovingItemsCarryingSections;
- (void)prepareForUpdate:(unsigned long long)arg1 inDataSource:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldSlideOutSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;
- (double)yOffsetForSlidingUpdate;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldSlideInSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForSlidingAwayItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForSlidingInItemAtIndexPath:(id)arg1;
- (id)revealMoreForSectionIndex:(long long)arg1 revealCount:(unsigned long long)arg2 andDeleteItemCount:(unsigned long long)arg3;
- (id)revealMoreForSectionIndex:(long long)arg1;
- (unsigned long long)currentMaxVisibleItemCountForSection:(long long)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)_filterPinnedAttributes;
- (void)finalizePinnedAttributes:(id)arg1 forSection:(long long)arg2 footer:(_Bool)arg3;
- (double)layoutTopPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (double)layoutBottomPinningAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (double)applyTopPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (double)applyBottomPinningToAttributes:(id)arg1 minY:(double)arg2 maxY:(double)arg3;
- (void)fullyRebuildLayout;
- (void)prepareLayout;
- (void)_resetState;
- (unsigned long long)_prepareItemLayoutForSection:(long long)arg1;
- (id)firstVisibleIndexAtOrAfterItem:(long long)arg1 itemCount:(long long)arg2 inSection:(long long)arg3;
- (void)_prepareSegmentedBoxLayoutWithOffset:(long long)arg1;
- (long long)_prepareOverlayLayoutForSection:(long long)arg1 offset:(long long)arg2;
- (long long)_prepareSupplementaryLayoutForSection:(long long)arg1 atLocation:(unsigned long long)arg2 offset:(long long)arg3 globalOffset:(long long *)arg4;
- (long long)indexOfSupplementaryMetricsOfKind:(id)arg1 inList:(id)arg2;
- (void)enumerateSectionsIndexesOverlappingYOffset:(double)arg1 block:(CDUnknownBlockType)arg2;
- (double)yOffsetForSection:(long long)arg1;
- (unsigned long long)sectionsPerRow;
- (_Bool)_areWePortrait;
- (id)presentationDataForSection:(long long)arg1;
- (id)_existingPresentationDataForSection:(long long)arg1;
- (void)finalizeGlobalPresentationDataWithSectionRange:(struct _NSRange)arg1;
- (void)updatePresentationDataInSection:(long long)arg1 withAttributes:(id)arg2 supplementaryLocation:(unsigned long long)arg3;
- (void)updatePresentationDataForLastInterleavedSections;
- (double)calculatedBottomPaddingForSection:(long long)arg1;
- (void)forceFullInvalidate;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldUpdateVisibleCellLayoutAttributes;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)disableClipView;
- (void)enableClipView;
- (void)updatePinnableAreas;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)refreshMetrics;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)calculateCollectionViewContentSize;
- (struct CGSize)_sizeAdjustedForTabBarSettingsBasedOnSize:(struct CGSize)arg1;
- (void)updatePlaceholderVisibility;
- (long long)searchResultsCount;
- (id)metricsForSection:(long long)arg1;
- (id)attributesForSupplementaryIndexPath:(id)arg1;
- (void)setMetricData:(id)arg1 forSection:(long long)arg2;
- (unsigned long long)filteredTotalItemCountForSection:(long long)arg1;
- (id)metricDataForSection:(long long)arg1;
- (id)metricDataForKey:(id)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (struct CGRect)layoutBounds;
- (double)scale;
- (void)dealloc;
- (id)init;

@end

