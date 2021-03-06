//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AbstractCatalogViewController.h"

#import "CompletionItemActionHandler-Protocol.h"
#import "CompletionListDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegatePrivate-Protocol.h"
#import "TabSnapshotContentProvider-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UnifiedFieldDelegate-Protocol.h"
#import "UniversalSearchFeedbackDelegate-Protocol.h"
#import "UniversalSearchFirstTimeExperienceViewControllerDelegate-Protocol.h"

@class BookmarkFavoritesGridView, BookmarksNavigationController, BrowserController, CompletionDetailViewController, CompletionList, CompletionListTableViewController, NSMutableSet, NSString, NavigationBar, PopoverCatalogViewController, UIColor, UIImage, UIPopoverPresentationController, UIView, UIViewController, UnifiedField, UniversalSearchFirstTimeExperienceViewController, UniversalSearchSession;
@protocol CatalogViewControllerDelegate, CompletionItem, LoadProgressObserver;

@interface CatalogViewController : AbstractCatalogViewController <CompletionItemActionHandler, CompletionListDelegate, UITableViewDataSource, UITableViewDelegate, UnifiedFieldDelegate, SKStoreProductViewControllerDelegatePrivate, UIPopoverPresentationControllerDelegate, UniversalSearchFeedbackDelegate, UniversalSearchFirstTimeExperienceViewControllerDelegate, TabSnapshotContentProvider>
{
    BrowserController *_browserController;	// 8 = 0x8
    PopoverCatalogViewController *_popoverCatalogViewController;	// 16 = 0x10
    _Bool _transitioningToNewSizeClass;	// 24 = 0x18
    UIViewController *_completionDetailViewController;	// 32 = 0x20
    unsigned long long _lastTopHitMatchLength;	// 40 = 0x28
    UIPopoverPresentationController *_popoverPresentationController;	// 48 = 0x30
    _Bool _dismissingPopover;	// 56 = 0x38
    CompletionDetailViewController *_detailViewController;	// 64 = 0x40
    _Bool _completionTableIsReloading;	// 72 = 0x48
    double _lastScrollOffset;	// 80 = 0x50
    struct CGRect _keyboardFrame;	// 88 = 0x58
    NSMutableSet *_seenVisibleResults;	// 120 = 0x78
    _Bool _feedbackIsBeingGenerated;	// 128 = 0x80
    _Bool _lastFeedbackSentWasScrolling;	// 129 = 0x81
    _Bool _hasKeyboardBeenDismissedForThisQuery;	// 130 = 0x82
    _Bool _suppressKeyboardFeedbackUntilDetailDismissed;	// 131 = 0x83
    _Bool _waitingOnFirstCompletionListUpdateForTelemetry;	// 132 = 0x84
    struct UIEdgeInsets _contentOverlayInsets;	// 136 = 0x88
    _Bool _lastInputWasSearchTextCompletion;	// 168 = 0xa8
    _Bool _contentBorrowed;	// 169 = 0xa9
    _Bool _usesPopoverStyleForFavorites;	// 170 = 0xaa
    _Bool _showingCompletions;	// 171 = 0xab
    CompletionListTableViewController *_completionsViewController;	// 176 = 0xb0
    BookmarksNavigationController *_startPageViewController;	// 184 = 0xb8
    UniversalSearchFirstTimeExperienceViewController *_universalSearchFirstTimeExperienceViewController;	// 192 = 0xc0
    CompletionList *_completionList;	// 200 = 0xc8
    id <CatalogViewControllerDelegate> _delegate;	// 208 = 0xd0
    id <LoadProgressObserver> _loadProgressObserver;	// 216 = 0xd8
    NavigationBar *_navigationBar;	// 224 = 0xe0
    id <CompletionItem> _lastTopHitMatch;	// 232 = 0xe8
    UniversalSearchSession *_parsecSearchSession;	// 240 = 0xf0
    UnifiedField *_textField;	// 248 = 0xf8
    struct UIEdgeInsets _obscuredInsets;	// 256 = 0x100
}

+ (void)updateParsecEnabled;	// IMP=0x00000001001673e0
+ (void)initialize;	// IMP=0x0000000100167398
- (void).cxx_destruct;	// IMP=0x000000010016eaa8
@property(retain, nonatomic) UnifiedField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UniversalSearchSession *parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
@property(retain, nonatomic) id <CompletionItem> lastTopHitMatch; // @synthesize lastTopHitMatch=_lastTopHitMatch;
@property(nonatomic, getter=isShowingCompletions) _Bool showingCompletions; // @synthesize showingCompletions=_showingCompletions;
@property(nonatomic) _Bool usesPopoverStyleForFavorites; // @synthesize usesPopoverStyleForFavorites=_usesPopoverStyleForFavorites;
@property(nonatomic) struct UIEdgeInsets obscuredInsets; // @synthesize obscuredInsets=_obscuredInsets;
@property(retain, nonatomic) NavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak id <LoadProgressObserver> loadProgressObserver; // @synthesize loadProgressObserver=_loadProgressObserver;
@property(nonatomic) __weak id <CatalogViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isContentBorrowed) _Bool contentBorrowed; // @synthesize contentBorrowed=_contentBorrowed;
@property(retain, nonatomic) CompletionList *completionList; // @synthesize completionList=_completionList;
- (id)universalSearchFirstTimeExperienceViewController;	// IMP=0x000000010016e984
- (id)startPageViewController;	// IMP=0x000000010016e974
- (id)completionsViewControllerIfLoaded;	// IMP=0x000000010016e964
- (_Bool)_shouldPresentCompletionDetailViewControllerAfterSizeTransition:(id)arg1;	// IMP=0x000000010016e858
- (void)endTransitionToNewSizeClassWithState:(id)arg1;	// IMP=0x000000010016e6c0
- (void)beginTransitionToNewSizeClassWithState:(id)arg1;	// IMP=0x000000010016e56c
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x000000010016e4a4
- (struct CGRect)snapshotContentRectInBounds:(struct CGRect)arg1;	// IMP=0x000000010016e380
@property(readonly, nonatomic) UIColor *snapshotBackgroundColor;
@property(readonly, nonatomic) UIView *snapshotContentView;
@property(readonly, nonatomic) _Bool isShowingUniversalSearchFirstTimeExperience;
- (void)_dismissUniversalSearchFirstTimeExperience:(id)arg1 dismissalReason:(long long)arg2;	// IMP=0x000000010016e1d0
- (void)didCancelUniversalSearchFirstTimeExperienceViewController:(id)arg1;	// IMP=0x000000010016e1c0
- (void)didInteractWithUniversalSearchFirstTimeExperienceViewController:(id)arg1;	// IMP=0x000000010016e16c
- (void)dismissCompletionsForSizeClassTransition;	// IMP=0x000000010016e120
- (void)firstTimeExperienceContinueButtonPressed;	// IMP=0x000000010016e108
- (void)showUniversalSearchFirstTimeExperienceIfNotShowing;	// IMP=0x000000010016e00c
- (void)feedbackButtonWasTappedWithProblemURL:(id)arg1;	// IMP=0x000000010016dfa0
- (void)_unifiedFieldTab:(id)arg1;	// IMP=0x000000010016df1c
- (void)_unifiedFieldReturnKey:(id)arg1;	// IMP=0x000000010016de7c
- (void)_unifiedFieldUpKey:(id)arg1;	// IMP=0x000000010016dd70
- (void)_unifiedFieldDownKey:(id)arg1;	// IMP=0x000000010016dc64
- (void)unifiedField:(id)arg1 didEngageWithQuerySuggestion:(id)arg2 forQueryString:(id)arg3;	// IMP=0x000000010016db64
- (void)unifiedFieldDidUpdateUserTypedText:(id)arg1 forQueryString:(id)arg2 didUpdateSuggestions:(_Bool)arg3;	// IMP=0x000000010016d8fc
- (void)unifiedFieldShouldPasteAndNavigate:(id)arg1;	// IMP=0x000000010016d860
- (_Bool)unifiedField:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;	// IMP=0x000000010016d830
- (id)_allCombinationsOfModifierKeys;	// IMP=0x000000010016d4fc
- (void)unifiedField:(id)arg1 registerKeyCommandsUsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010016d2f0
- (void)unifiedFieldReflectedItemDidChange:(id)arg1;	// IMP=0x000000010016d2a0
- (id)unifiedField:(id)arg1 topHitForText:(id)arg2;	// IMP=0x000000010016d22c
- (_Bool)unifiedField:(id)arg1 shouldWaitForTopHitForText:(id)arg2;	// IMP=0x000000010016d1bc
- (void)unifiedField:(id)arg1 didEndEditingWithParsecTopHit:(id)arg2;	// IMP=0x000000010016d0a8
- (void)unifiedField:(id)arg1 didEndEditingWithSearch:(id)arg2;	// IMP=0x000000010016cec0
- (void)unifiedField:(id)arg1 didEndEditingWithAddress:(id)arg2;	// IMP=0x000000010016cce4
- (void)unifiedField:(id)arg1 willUpdateUserTypedText:(id)arg2 toText:(id)arg3;	// IMP=0x000000010016cbfc
- (void)_logQueryEngagement;	// IMP=0x000000010016cb54
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x000000010016cae0
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x000000010016ca9c
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x000000010016c978
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x000000010016c604
- (void)clearCachedTabCompletionData;	// IMP=0x000000010016c5ec
- (void)switchToTabWithUUID:(id)arg1 inWindowWithUUID:(id)arg2;	// IMP=0x000000010016c56c
- (void)searchTextCompletionAccessoryButtonTappedForCompletionItem:(id)arg1;	// IMP=0x000000010016c448
- (void)resumeSearchWithQuery:(id)arg1;	// IMP=0x000000010016c274
@property(readonly, nonatomic, getter=isShowingCompletionDetail) _Bool showingCompletionDetail;
- (void)dismissCompletionDetailWindowAndResumeEditingIfNeeded:(_Bool)arg1;	// IMP=0x000000010016c080
- (void)_presentStagedCompletionDetailViewControllerAnimated:(_Bool)arg1;	// IMP=0x000000010016c020
- (void)presentDetail:(id)arg1;	// IMP=0x000000010016bdac
- (void)findOnPage;	// IMP=0x000000010016bd68
- (void)openURLInExternalApplication:(id)arg1;	// IMP=0x000000010016bcfc
- (void)goToURL:(id)arg1;	// IMP=0x000000010016bc90
- (void)goToURLString:(id)arg1;	// IMP=0x000000010016bc28
- (void)search:(id)arg1;	// IMP=0x000000010016bbc0
- (id)browserController;	// IMP=0x000000010016bba0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010016babc
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000010016b9ec
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x000000010016b964
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000010016b87c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000010016b7e8
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010016b6e0
- (void)_selectedCompletionItemAtIndexPath:(id)arg1;	// IMP=0x000000010016b2c0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010016b2b0
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010016b294
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000010016b27c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000010016b070
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x000000010016b054
- (_Bool)_completionsViewControllerIsTranslucent;	// IMP=0x000000010016b02c
- (id)_completionItemAtIndexPath:(id)arg1;	// IMP=0x000000010016af50
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010016aef4
- (void)completionListDidRestoreCachedCompletions:(id)arg1;	// IMP=0x000000010016aea8
- (void)_deselectCompletionsViewControllerSelectedRow;	// IMP=0x000000010016ae2c
- (void)completionList:(id)arg1 topHitDidBecomeReadyForString:(id)arg2;	// IMP=0x000000010016ac84
- (void)_logTopHitWasChosen:(_Bool)arg1;	// IMP=0x000000010016aab4
- (void)_generateVisibleResultsFeedbackForEvent:(long long)arg1;	// IMP=0x000000010016a5a8
- (void)_showCompletionsPopoverIfNecessary;	// IMP=0x000000010016a400
- (void)completionListDidUpdate:(id)arg1 forQuery:(id)arg2;	// IMP=0x000000010016a284
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000010016a238
- (void)_textFieldEditingChanged;	// IMP=0x0000000100169d4c
- (void)_ensureCompletionListAndParsecSession;	// IMP=0x0000000100169c00
- (void)cancelUnifiedFieldSearch;	// IMP=0x0000000100169b50
- (void)_stopCompleting;	// IMP=0x0000000100169a7c
- (void)updateQuerySuggestionsFromResponse:(id)arg1;	// IMP=0x00000001001699d8
- (void)_showCompletionsInPopover;	// IMP=0x0000000100169958
- (void)_setShowingCompletions:(_Bool)arg1 popoverDismissalReason:(long long)arg2;	// IMP=0x00000001001697d8
- (void)resume;	// IMP=0x0000000100169754
- (void)displayPopover;	// IMP=0x000000010016973c
- (void)_clearParsecSearchSession;	// IMP=0x00000001001696f4
- (void)_beginParsecSessionIfNeeded;	// IMP=0x000000010016956c
- (void)_updateStartPageSafeAreaInsets;	// IMP=0x000000010016948c
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x000000010016943c
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00000001001692d0
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x0000000100169238
- (void)popoverPresentationControllerWillDismissPopover:(id)arg1;	// IMP=0x00000001001690f4
- (void)_popoverDismissCompletion;	// IMP=0x000000010016902c
- (void)_dismissPopoverAnimated:(_Bool)arg1 dismissalReason:(long long)arg2;	// IMP=0x0000000100168e80
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000100168e78
@property(readonly, nonatomic) BookmarkFavoritesGridView *topFavoritesGridView;
- (void)_reloadCompletionTable;	// IMP=0x0000000100168dbc
- (void)didTogglePrivateBrowsing;	// IMP=0x0000000100168db8
- (void)willTogglePrivateBrowsing:(_Bool)arg1;	// IMP=0x0000000100168d54
- (void)_presentPopoverWithViewController:(id)arg1;	// IMP=0x0000000100168bbc
@property(retain, nonatomic) NSString *queryString;
- (void)_updateBackgroundColorWhenShowingFavoritesNavigationController;	// IMP=0x0000000100168a18
- (void)_favoritesGridViewDidChangeBookmarks:(id)arg1;	// IMP=0x000000010016898c
- (void)cancelFavoritesGestures;	// IMP=0x000000010016894c
- (void)resetFavorites;	// IMP=0x000000010016880c
- (void)loadFavoritesList;	// IMP=0x00000001001687c0
@property(readonly, nonatomic) UIView *favoritesView;
- (id)_rootFavoritesGridView;	// IMP=0x00000001001686f8
@property(readonly, nonatomic) _Bool needsTransparentBackground;
@property(readonly, nonatomic) _Bool popoverIsShowing;
- (id)unifiedTextField;	// IMP=0x00000001001683e4
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;	// IMP=0x0000000100168368
- (void)didGainOwnershipOfStartPageViewController;	// IMP=0x000000010016835c
- (void)didGainOwnershipOfCompletionsViewController;	// IMP=0x0000000100168274
- (void)updatePreferredContentSize;	// IMP=0x000000010016821c
- (double)requiredContentWidth;	// IMP=0x00000001001681c4
- (id)completionsViewController;	// IMP=0x00000001001680c8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100168030
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100167bb0
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0000000100167b30
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100167ae0
- (void)viewDidLoad;	// IMP=0x00000001001678f0
- (void)dealloc;	// IMP=0x0000000100167760
- (id)initWithDelegate:(id)arg1 bookmarksNavigationController:(id)arg2 browserController:(id)arg3;	// IMP=0x0000000100167470
- (void)_parsecEnabledDidChange:(id)arg1;	// IMP=0x0000000100167454
- (long long)_completionListQueryID;	// IMP=0x0000000100167324
- (void)test_simulateTyping:(id)arg1 inGroup:(id)arg2 startIndex:(unsigned long long)arg3;	// IMP=0x0000000100021644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *snapshotContentImage;
@property(readonly, nonatomic) _Bool snapshotContentShouldUnderlapTopBackdrop;
@property(readonly) Class superclass;

@end

