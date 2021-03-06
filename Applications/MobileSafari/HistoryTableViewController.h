//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PreviewTableViewController.h"

#import "BookmarksPanelStateRestoring-Protocol.h"
#import "BookmarksToolbarItemProvider-Protocol.h"
#import "HistoryTableViewDataSourceDelegate-Protocol.h"
#import "PreviewTableViewControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDragDelegate-Protocol.h"

@class HistoryTableViewDataSource, NSArray, NSString, NSTimer, SafariClearBrowsingDataController, UIBarButtonItem, UISearchBar;
@protocol HistoryTableViewControllerDelegate;

@interface HistoryTableViewController : PreviewTableViewController <BookmarksToolbarItemProvider, HistoryTableViewDataSourceDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, UITableViewDragDelegate, BookmarksPanelStateRestoring, PreviewTableViewControllerDelegate>
{
    UIBarButtonItem *_clearHistoryButton;	// 8 = 0x8
    UIBarButtonItem *_doneBarButtonItem;	// 16 = 0x10
    NSTimer *_saveChangesToCloudHistoryTimer;	// 24 = 0x18
    SafariClearBrowsingDataController *_clearDataController;	// 32 = 0x20
    HistoryTableViewDataSource *_historyDataSource;	// 40 = 0x28
    _Bool _needsInitialContentOffsetUpdateForTableHeaderView;	// 48 = 0x30
    _Bool _needsContentOffsetUpdate;	// 49 = 0x31
    UISearchBar *_searchBar;	// 56 = 0x38
    _Bool _historyWasLoaded;	// 64 = 0x40
    _Bool _allowClearingHistory;	// 65 = 0x41
    id <HistoryTableViewControllerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100087a7c
@property(nonatomic) __weak id <HistoryTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100087a40
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000001000879c0
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000878a0
- (id)previewTableViewController:(id)arg1 menuItemsForRowAtIndexPath:(id)arg2;	// IMP=0x000000010008741c
- (id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2;	// IMP=0x000000010008740c
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x00000001000873c8
- (id)_urlForRowAtIndexPath:(id)arg1;	// IMP=0x0000000100087308
- (void)historyTableViewDataSource:(id)arg1 didChangeRowAtIndexPath:(id)arg2 forChangeType:(long long)arg3;	// IMP=0x00000001000871bc
- (void)historyTableViewDataSource:(id)arg1 didChangeSectionAtIndex:(long long)arg2 forChangeType:(long long)arg3;	// IMP=0x00000001000870b4
- (void)historyTableViewDataSourceDidChangeContent:(id)arg1;	// IMP=0x0000000100087060
- (void)historyTableViewDataSourceWillChangeContent:(id)arg1;	// IMP=0x0000000100087020
- (void)historyTableViewDataSourceDidLoadContent:(id)arg1;	// IMP=0x0000000100086fb8
- (id)safari_tableViewScrollPositionSaveIdentifier;	// IMP=0x0000000100086fa8
- (_Bool)restoreStateWithDictionary:(id)arg1;	// IMP=0x0000000100086fa0
- (id)currentStateDictionary;	// IMP=0x0000000100086f90
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000100086f24
- (void)_deleteRowAtIndexPath:(id)arg1;	// IMP=0x0000000100086e0c
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100086cac
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100086b28
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100086958
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010008693c
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000100086878
- (id)_vibrantHeaderBackgroundView;	// IMP=0x0000000100086808
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010008666c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010008656c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100086554
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0000000100086544
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000100086528
- (_Bool)safari_wantsDoneButtonInModalBookmarksPanel;	// IMP=0x0000000100086520
- (void)_saveChangesToCloudHistory;	// IMP=0x00000001000864b0
- (void)_saveChangesToCloudHistorySoon;	// IMP=0x0000000100086418
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000001000863d8
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100086314
- (void)_updateContentOffsetIfNeeded;	// IMP=0x0000000100086224
- (id)_separatorEffect;	// IMP=0x0000000100086194
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100085da4
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0000000100085d30
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100085cd0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100085c58
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100085c08
- (void)viewDidLoad;	// IMP=0x0000000100085944
- (void)_endEditing;	// IMP=0x0000000100085930
- (void)_clearHistory;	// IMP=0x0000000100085470
- (void)updateClearHistoryButtonEnable;	// IMP=0x0000000100085274
- (id)_clearHistoryBarButtonItem;	// IMP=0x00000001000851b8
- (id)_doneBarButtonItem;	// IMP=0x0000000100085150
@property(readonly, nonatomic) NSArray *toolbarItems;
- (id)bookmarksNavigationController;	// IMP=0x0000000100085010
- (void)dealloc;	// IMP=0x0000000100084f98
- (id)init;	// IMP=0x0000000100084ecc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

