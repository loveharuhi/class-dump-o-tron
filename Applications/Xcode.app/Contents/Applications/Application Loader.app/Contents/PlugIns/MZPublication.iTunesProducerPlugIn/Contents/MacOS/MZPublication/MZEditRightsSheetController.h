//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZRightsAndPricingSheetController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class BookProductElement, MZPopoverButton, NSArray, NSButton, NSNumber, NSPopUpButton, NSPopover, NSString, NSTextField, NSView;

@interface MZEditRightsSheetController : MZRightsAndPricingSheetController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSNumber *_clearedForSale;
    NSNumber *_vppEnabled;
    NSString *_physicalListPrice;
    NSString *_longWholesalePriceTier;
    NSArray *_selectedProducts;
    NSTextField *_singleTerritoryField;
    NSButton *_territoryButton;
    NSPopover *_territoryPopover;
    NSButton *_clearedForSaleCheckbox;
    NSButton *_vppCheckbox;
    NSView *_singleTerritoryControls;
    NSPopUpButton *_tierPopup;
    NSView *_multipleTerritoryControls;
    NSPopUpButton *_baseCurrencyField;
    MZPopoverButton *_baseCurrencyInfoButton;
    MZPopoverButton *_suggestedPriceInfoButton;
}

+ (id)windowNibName;
+ (id)keyPathsForValuesAffectingIsPriceTierPopUpEnabled;
+ (id)keyPathsForValuesAffectingAllowedWholesalePriceTiers;
+ (id)keyPathsForValuesAffectingPhysicalListPrice;
+ (id)keyPathsForValuesAffectingHasDigitalOnlyReleaseType;
+ (id)keyPathsForValuesAffectingCanApply;
@property MZPopoverButton *suggestedPriceInfoButton; // @synthesize suggestedPriceInfoButton=_suggestedPriceInfoButton;
@property MZPopoverButton *baseCurrencyInfoButton; // @synthesize baseCurrencyInfoButton=_baseCurrencyInfoButton;
@property NSPopUpButton *baseCurrencyField; // @synthesize baseCurrencyField=_baseCurrencyField;
@property NSView *multipleTerritoryControls; // @synthesize multipleTerritoryControls=_multipleTerritoryControls;
@property NSPopUpButton *tierPopup; // @synthesize tierPopup=_tierPopup;
@property NSView *singleTerritoryControls; // @synthesize singleTerritoryControls=_singleTerritoryControls;
@property NSButton *vppCheckbox; // @synthesize vppCheckbox=_vppCheckbox;
@property NSButton *clearedForSaleCheckbox; // @synthesize clearedForSaleCheckbox=_clearedForSaleCheckbox;
@property NSPopover *territoryPopover; // @synthesize territoryPopover=_territoryPopover;
@property NSButton *territoryButton; // @synthesize territoryButton=_territoryButton;
@property NSTextField *singleTerritoryField; // @synthesize singleTerritoryField=_singleTerritoryField;
@property(copy) NSArray *selectedProducts; // @synthesize selectedProducts=_selectedProducts;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)isPriceTierPopUpEnabled;
- (id)allowedWholesalePriceTiers;
- (id)selectedTerritoryCodes;
@property(readonly) BookProductElement *singleTerritory;
- (void)setLongWholesalePriceTier:(id)arg1;
- (id)longWholesalePriceTier;
- (void)setVppEnabled:(id)arg1;
- (id)vppEnabled;
- (void)setClearedForSale:(id)arg1;
- (id)clearedForSale;
- (BOOL)isSingleItemSelected;
- (void)showSelectedTerritories:(id)arg1;
- (id)controlsToUpdate;
- (void)submitWorkSeries;
- (id)mergedValueForKey:(id)arg1 state:(long long *)arg2;
- (void)adjustPopupButtonConstraints;
- (void)loadInterface;
- (void)apply:(id)arg1;
- (BOOL)hasMissingValues;
- (BOOL)canApply;
- (void)dealloc;
- (id)initWithSheetWindow:(id)arg1 delegate:(id)arg2 document:(id)arg3 vendordId:(id)arg4 selectedProducts:(id)arg5 applySelector:(SEL)arg6 cancelSelector:(SEL)arg7 revertSelector:(SEL)arg8;

@end
