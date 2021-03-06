//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BookmarkFavoritesGridViewDelegate-Protocol.h"
#import "BookmarksFolderViewController-Protocol.h"
#import "_SFWebBookmarkActionHandler-Protocol.h"

@class BookmarkFavoritesGridView, ForYouRecommendationMediator, NSMutableArray, NSObject, NSString, WebBookmark, WebBookmarkCollection, WebBookmarkList;
@protocol BookmarkFavoritesViewControllerDelegate, OS_dispatch_queue, WBBookmarkProvider;

@interface BookmarkFavoritesViewController : UIViewController <BookmarkFavoritesGridViewDelegate, _SFWebBookmarkActionHandler, BookmarksFolderViewController>
{
    WebBookmarkCollection *_collection;	// 8 = 0x8
    id <WBBookmarkProvider> _bookmarkProvider;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_bookmarkProviderQueue;	// 24 = 0x18
    BookmarkFavoritesGridView *_favoritesGridView;	// 32 = 0x20
    WebBookmarkList *_favoritesList;	// 40 = 0x28
    _Bool _ignoreBookmarksFolderContentsDidChangeNotification;	// 48 = 0x30
    _Bool _showWhitelistFavorites;	// 49 = 0x31
    ForYouRecommendationMediator *_mediator;	// 56 = 0x38
    NSMutableArray *_currentSiriSuggestions;	// 64 = 0x40
    WebBookmark *_folder;	// 72 = 0x48
    id <BookmarkFavoritesViewControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010014cf34
@property(retain, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <BookmarkFavoritesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WebBookmark *folder; // @synthesize folder=_folder;
- (void)bookmark:(id)arg1 didProduceNavigationIntent:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000010014ce7c
- (void)deleteBookmark:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010014cd20
- (void)editBookmark:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010014ccbc
- (void)_downvoteSource:(unsigned long long)arg1 forRecommendation:(id)arg2;	// IMP=0x000000010014cbc0
- (void)_banWebsiteWithRecommendation:(id)arg1;	// IMP=0x000000010014ca78
- (void)_openRecommendationInNewTabWithRecommendation:(id)arg1;	// IMP=0x000000010014c8fc
- (void)bookmarkFavoritesGridView:(id)arg1 getChildCountForBookmarkFolder:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010014c818
- (void)bookmarkFavoritesGridView:(id)arg1 getChildCountForBookmarkFoldersInParent:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010014c6ec
- (void)_commitPreviewViewController:(id)arg1;	// IMP=0x000000010014c638
- (id)_previewViewControllerForBookmark:(id)arg1;	// IMP=0x000000010014c424
- (void)bookmarkFavoritesGridViewWillDismissLinkPreview:(id)arg1;	// IMP=0x000000010014c3e0
- (void)bookmarkFavoritesGridViewContentChanged:(id)arg1;	// IMP=0x000000010014c39c
- (void)bookmarkFavoritesGridView:(id)arg1 dropBookmarkWithCoordinator:(id)arg2;	// IMP=0x000000010014b9bc
- (_Bool)bookmarkFavoritesGridView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x000000010014b9a4
- (_Bool)bookmarkFavoritesGridViewIsPresentedInsideBlankTab:(id)arg1;	// IMP=0x000000010014b954
- (long long)bookmarkFavoritesGridViewLayoutType:(id)arg1;	// IMP=0x000000010014b904
- (void)bookmarkFavoritesGridView:(id)arg1 banFrequentlyVisitedSite:(id)arg2;	// IMP=0x000000010014b7e0
- (void)bookmarkFavoritesGridView:(id)arg1 promoteFrequentlyVisitedSite:(id)arg2 toFavoriteAtIndex:(unsigned long long)arg3;	// IMP=0x000000010014b768
- (void)bookmarkFavoritesGridView:(id)arg1 willCommitPreviewViewController:(id)arg2;	// IMP=0x000000010014b758
- (id)bookmarkFavoritesGridView:(id)arg1 contextMenuConfigurationWithIdentifier:(id)arg2 forSiriSuggestion:(id)arg3;	// IMP=0x000000010014afbc
- (id)bookmarkFavoritesGridView:(id)arg1 contextMenuConfigurationWithIdentifier:(id)arg2 forBookmark:(id)arg3;	// IMP=0x000000010014ae80
- (void)_setReadingListRecommendationAsReadWithRecommendation:(id)arg1;	// IMP=0x000000010014ad9c
- (void)bookmarkFavoritesGridView:(id)arg1 didSelectActionButton:(id)arg2 forSiriSuggestion:(id)arg3;	// IMP=0x000000010014a880
- (void)bookmarkFavoritesGridView:(id)arg1 didToggleExpansionForSection:(long long)arg2 expanded:(_Bool)arg3;	// IMP=0x000000010014a810
- (void)bookmarkFavoritesGridView:(id)arg1 didSelectRecommendation:(id)arg2;	// IMP=0x000000010014a6a4
- (_Bool)bookmarkFavoritesGridViewCanPromoteFrequentlyVisitedSiteToFavorite:(id)arg1;	// IMP=0x000000010014a638
- (void)didTapOutsideBookmarkFavoritesGridView:(id)arg1;	// IMP=0x000000010014a5f4
- (void)bookmarkFavoritesGridView:(id)arg1 didSelectBookmark:(id)arg2;	// IMP=0x000000010014a508
- (void)_updateNavigationBarHiddenAnimated:(_Bool)arg1;	// IMP=0x000000010014a4a0
- (void)setScrollViewScrollsToTop:(_Bool)arg1;	// IMP=0x000000010014a458
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010014a440
- (void)loadFavoritesList;	// IMP=0x000000010014a408
- (void)_observeBookmarkNotificationsForCollection:(id)arg1;	// IMP=0x000000010014a290
- (void)_stopObservingBookmarksNotificationsForCollection:(id)arg1;	// IMP=0x000000010014a1c8
- (void)_updateFavoritesListAnimated:(_Bool)arg1;	// IMP=0x0000000100149fe4
- (void)_updateFavoritesList;	// IMP=0x0000000100149f38
- (void)_recomputeFrequentlyVisitedSitesIfNecessary;	// IMP=0x0000000100149e9c
- (void)_updateVisibleFrequentlyVisitedSites;	// IMP=0x0000000100149b34
- (void)_receivedFrequentlyVisitedSitesDidChangeNotification:(id)arg1;	// IMP=0x0000000100149b00
- (void)_receivedBookmarksFolderContentChangedNotification:(id)arg1;	// IMP=0x0000000100149970
- (void)_receivedBookmarksReloadOrSpecialFolderChangeNotification:(id)arg1;	// IMP=0x0000000100149960
- (_Bool)_canReorderFavorites;	// IMP=0x0000000100149948
- (id)bookmarksNavigationController;	// IMP=0x00000001001498d8
@property(nonatomic, getter=isPresentedWithinPopover) _Bool presentedWithinPopover;
- (void)setAdjustedForSidebar:(_Bool)arg1;	// IMP=0x0000000100149864
- (unsigned long long)_existingHandoffRecommendationIndex;	// IMP=0x00000001001497b0
- (void)_fetchHandoffResult;	// IMP=0x0000000100149568
- (void)_scheduleHandoffApplicationUpdate:(id)arg1;	// IMP=0x000000010014950c
- (void)_updateImageForRecommendation:(id)arg1;	// IMP=0x0000000100149304
- (void)_updateRecommendationsForTopics:(id)arg1;	// IMP=0x0000000100149040
- (void)_updateRecommendationsForAllTopics;	// IMP=0x0000000100148f30
- (void)_updateSiriSuggestions:(id)arg1;	// IMP=0x0000000100148b1c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100148ab4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100148828
- (void)viewWillLayoutSubviews;	// IMP=0x00000001001487a4
@property(readonly, nonatomic) BookmarkFavoritesGridView *favoritesGridView;
- (void)loadView;	// IMP=0x00000001001486ac
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001484b4
- (void)test_overrideBookmarkCollection:(id)arg1;	// IMP=0x0000000100148428
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100148348
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001001482b8
- (void)dealloc;	// IMP=0x00000001001481c8
- (id)initWithFolder:(id)arg1 bookmarksCollection:(id)arg2 bookmarkProvider:(id)arg3 bookmarkProviderQueue:(id)arg4 showWhiteListFavorites:(_Bool)arg5;	// IMP=0x0000000100147ef0
- (id)initWithBookmarksCollection:(id)arg1 bookmarkProvider:(id)arg2 bookmarkProviderQueue:(id)arg3 showWhiteListFavorites:(_Bool)arg4;	// IMP=0x0000000100147e64
- (id)initWithFolder:(id)arg1 inCollection:(id)arg2 bookmarkProvider:(id)arg3 bookmarkProviderQueue:(id)arg4;	// IMP=0x0000000100147dc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

