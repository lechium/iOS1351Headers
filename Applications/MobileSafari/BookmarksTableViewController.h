//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/_SFPopoverSizingTableViewController.h>

#import "BookmarksFolderViewController-Protocol.h"
#import "BookmarksPanelStateRestoring-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDragDelegate-Protocol.h"
#import "UITableViewDropDelegate-Protocol.h"
#import "_SFBookmarkInfoViewControllerDelegate-Protocol.h"
#import "_SFWebBookmarkActionHandler-Protocol.h"

@class NSString, UISearchBar, WebBookmark, WebBookmarkCollection, WebBookmarkList;
@protocol BookmarksTableViewControllerDelegate, LinkPreviewProvider;

@interface BookmarksTableViewController : _SFPopoverSizingTableViewController <UISearchBarDelegate, UITableViewDragDelegate, UITableViewDropDelegate, _SFBookmarkInfoViewControllerDelegate, _SFWebBookmarkActionHandler, BookmarksFolderViewController, BookmarksPanelStateRestoring>
{
    WebBookmarkCollection *_collection;	// 8 = 0x8
    WebBookmarkList *_bookmarkList;	// 16 = 0x10
    WebBookmark *_favoritesFolder;	// 24 = 0x18
    UISearchBar *_searchBar;	// 32 = 0x20
    NSString *_userTypedFilter;	// 40 = 0x28
    unsigned long long _skipOffset;	// 48 = 0x30
    _Bool _needsInitialContentOffsetUpdateForTableHeaderView;	// 56 = 0x38
    _Bool _needsContentOffsetUpdate;	// 57 = 0x39
    _Bool _shouldDeferReload;	// 58 = 0x3a
    _Bool _previewing;	// 59 = 0x3b
    WebBookmark *_folder;	// 64 = 0x40
    id <BookmarksTableViewControllerDelegate> _delegate;	// 72 = 0x48
    id <LinkPreviewProvider> _linkPreviewProvider;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100030394
@property(nonatomic, getter=isPreviewing) _Bool previewing; // @synthesize previewing=_previewing;
@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <BookmarksTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WebBookmark *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (void)updateUserActivityState:(id)arg1;	// IMP=0x0000000100030280
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;	// IMP=0x0000000100030234
- (long long)_tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000010003022c
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x000000010002fdf0
- (void)_moveBookmarks:(id)arg1 toFolderID:(int)arg2 toIndex:(unsigned int)arg3 shouldReorder:(_Bool)arg4;	// IMP=0x000000010002fa78
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x000000010002f90c
- (_Bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x000000010002f884
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010002f87c
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x000000010002f868
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010002f854
- (id)_dragItemsAtIndexPath:(id)arg1 includingFolders:(_Bool)arg2;	// IMP=0x000000010002f704
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x000000010002f6f4
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000010002f668
- (void)bookmark:(id)arg1 didProduceNavigationIntent:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010002f604
- (void)editBookmark:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010002f5c4
- (void)deleteBookmark:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010002f574
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;	// IMP=0x000000010002f568
- (_Bool)hasTranslucentAppearance;	// IMP=0x000000010002f4e4
- (id)safari_tableViewScrollPositionSaveIdentifier;	// IMP=0x000000010002f488
- (id)selectedBookmarks;	// IMP=0x000000010002f2e0
- (_Bool)restoreStateWithDictionary:(id)arg1;	// IMP=0x000000010002efac
- (id)currentStateDictionary;	// IMP=0x000000010002ee50
- (void)setScrollViewScrollsToTop:(_Bool)arg1;	// IMP=0x000000010002ee08
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000010002ec94
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x000000010002ea44
- (void)_deleteBookmark:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010002e600
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010002e57c
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x000000010002e50c
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000010002e408
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000a5dc
- (void)_updateTableViewCellsTextStyleForEditing:(_Bool)arg1;	// IMP=0x000000010002e244
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000010002e200
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000010002dfc4
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x000000010002df1c
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x000000010002db58
- (_Bool)tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x000000010002dae8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000ad04
- (void)_pushInfoViewControllerForBookmark:(id)arg1;	// IMP=0x000000010002d9dc
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010000ac60
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010000aa7c
- (id)_tableViewCellForBookmark:(id)arg1;	// IMP=0x000000010002d4fc
- (id)_fontForCurrentTraitCollection;	// IMP=0x000000010002d460
- (id)bookmarksTableViewCellWithReuseIdentifier:(id)arg1;	// IMP=0x000000010002d27c
- (id)_bookmarkAtIndexPath:(id)arg1;	// IMP=0x000000010000aae0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000a9c0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010000a5d4
- (_Bool)safari_wantsDoneButtonInModalBookmarksPanel;	// IMP=0x000000010002d274
- (void)viewDidLayoutSubviews;	// IMP=0x000000010002d224
- (void)_updateContentOffsetIfNeeded;	// IMP=0x000000010002d120
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010002d0a0
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x000000010002d02c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010002cf04
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000a584
- (void)viewDidLoad;	// IMP=0x000000010000a3bc
- (void)updateSeparatorInset;	// IMP=0x000000010002cdc4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010002cb9c
- (void)loadView;	// IMP=0x000000010002cae4
- (id)bookmarksNavigationController;	// IMP=0x000000010000a568
- (long long)minimumNumberOfRows;	// IMP=0x000000010002ca98
@property(readonly, nonatomic) int folderID;
- (void)reloadBookmarks;	// IMP=0x000000010002c904
- (void)_recreateBookmarkLists;	// IMP=0x000000010002c748
- (_Bool)_inRootFolder;	// IMP=0x000000010000aa4c
- (void)_updateTitle;	// IMP=0x000000010002c660
- (id)initWithFolder:(id)arg1 inCollection:(id)arg2 skipOffset:(unsigned int)arg3;	// IMP=0x000000010000a08c
- (id)initWithFolder:(id)arg1 inCollection:(id)arg2;	// IMP=0x000000010000a02c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

