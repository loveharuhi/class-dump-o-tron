//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZContainedViewController.h"

@class BookContainerElement, NSLayoutConstraint, NSTextField;

@interface MZIdentifierGroupViewController : MZContainedViewController
{
    BOOL _isShowingPrintIsbnField;
    NSTextField *_vendorIdTextField;
    NSTextField *_isbnTextField;
    NSTextField *_vendorIdLabel;
    NSTextField *_isbnLabel;
    NSTextField *_printISBNLabel;
    NSLayoutConstraint *_vendorIdWidthConstraint;
    NSTextField *_printISBNTextField;
    BookContainerElement *_bookElement;
}

+ (id)pluginName;
+ (id)xibName;
@property BookContainerElement *bookElement; // @synthesize bookElement=_bookElement;
@property NSTextField *printISBNTextField; // @synthesize printISBNTextField=_printISBNTextField;
@property NSLayoutConstraint *vendorIdWidthConstraint; // @synthesize vendorIdWidthConstraint=_vendorIdWidthConstraint;
@property NSTextField *printISBNLabel; // @synthesize printISBNLabel=_printISBNLabel;
@property NSTextField *isbnLabel; // @synthesize isbnLabel=_isbnLabel;
@property NSTextField *vendorIdLabel; // @synthesize vendorIdLabel=_vendorIdLabel;
@property NSTextField *isbnTextField; // @synthesize isbnTextField=_isbnTextField;
@property NSTextField *vendorIdTextField; // @synthesize vendorIdTextField=_vendorIdTextField;
- (void)controlTextDidChange:(id)arg1;
- (void)packageImportedChanged:(id)arg1;
- (BOOL)packageImported;
- (void)updateConstraints;
- (float)minimumLeftColumnRequired;
- (void)vendorIdUpdated:(id)arg1;
- (void)updateVendorIdEditability:(id)arg1;
- (void)isbn13DidChange:(id)arg1;
- (void)vendorIdDidChange:(id)arg1;
- (BOOL)isVendorIdUserEditable;
- (void)teardownModelObservation;
- (void)dealloc;
- (void)setupISBN13PlaceholderText;
- (void)didLoadView;

// Remaining properties
@property NSLayoutConstraint *overallHeightConstraint;

@end

