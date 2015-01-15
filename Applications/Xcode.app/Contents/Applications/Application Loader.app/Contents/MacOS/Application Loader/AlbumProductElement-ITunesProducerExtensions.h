//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AlbumProductElement.h"

@interface AlbumProductElement (ITunesProducerExtensions)
+ (id)keyPathsForValuesAffectinAllowedTerritories;
+ (id)keyPathsForValuesAffectingLongTerritory;
+ (id)keyPathsForValuesAffectingMusicToneTerritoryNames;
+ (id)keyPathsForValuesAffectingShouldHidePreorderWholesalePriceTier;
- (BOOL)shouldHidePreorderWholesalePriceTier;
- (void)clearUnknownDefaultTrackWholesalePriceTier;
- (id)longDefaultTrackWholesalePriceTierWithNoFallback;
- (void)setLongDefaultTrackWholesalePriceTier:(id)arg1;
- (id)longDefaultTrackWholesalePriceTier;
- (void)clearUnknownWholesalePriceTier;
- (id)longWholesalePriceTierWithNoFallback;
- (void)setLongPreorderWholesalePriceTier:(id)arg1;
- (id)longPreorderWholesalePriceTier;
- (void)setLongWholesalePriceTier:(id)arg1;
- (id)longWholesalePriceTier;
- (BOOL)isAddTerritoryDisabled;
- (BOOL)isDefaultTrackPriceTiersVisible;
- (id)allowedDefaultTrackPriceTiers;
- (id)allowedAlbumPriceTiers;
- (id)musicToneTerritoryNames;
- (id)allowedMusicTerritoryNames;
- (id)defaultTrackTierDTOWithKey:(id)arg1 value:(id)arg2;
- (void)setLongTerritory:(id)arg1;
- (id)albumTierDTOWithKey:(id)arg1 value:(id)arg2;
- (id)longTerritory;
- (id)allowedTerritories;
- (void)notifyObserversOfTerritoryChange;
@end
