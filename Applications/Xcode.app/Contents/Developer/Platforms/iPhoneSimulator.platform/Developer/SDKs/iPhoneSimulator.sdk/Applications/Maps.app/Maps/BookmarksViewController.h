//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CollectionsTableViewController.h"

#import "BookmarkViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class EditBookmarkViewController, NSIndexPath, NSString, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface BookmarksViewController : CollectionsTableViewController <UINavigationControllerDelegate, BookmarkViewControllerDelegate>
{
    EditBookmarkViewController *_editController;
    UIBarButtonItem *_doneButtonItem;
    int _searchType;
    _Bool _isEditingBookmark;
    id <CollectionsViewControllerDelegate> _collectionsViewControllerDelegate;
    NSIndexPath *_editIndexPath;
}

+ (id)title;
+ (id)dataSourceChangedNotification;
@property(retain, nonatomic) NSIndexPath *editIndexPath; // @synthesize editIndexPath=_editIndexPath;
@property(nonatomic) __weak id <CollectionsViewControllerDelegate> collectionsViewControllerDelegate; // @synthesize collectionsViewControllerDelegate=_collectionsViewControllerDelegate;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
- (void).cxx_destruct;
- (void)view:(id)arg1 willDisappear:(_Bool)arg2;
- (void)view:(id)arg1 didDisappear:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_maps_backgroundCompositionStyleOverrideDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)_canEditIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)_handleSelectRow:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateBookmarkWithEditController:(id)arg1;
- (id)editControllerWithBookmark:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_moveBookmarkAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_replaceBookmark:(id)arg1 withBookmark:(id)arg2;
- (void)_removeBookmarkAtIndex:(unsigned long long)arg1;
- (void)_addBookmark:(id)arg1;
- (void)_updateEditButtonEnabled;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

