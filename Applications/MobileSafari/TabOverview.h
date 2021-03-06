//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CloudTabTableDelegate-Protocol.h"
#import "ReorderingAutoscrollerDelegate-Protocol.h"
#import "TabThumbnailCollectionView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIKeyInput-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchBarDelegate_Private-Protocol.h"
#import "_UIBasicAnimationFactory-Protocol.h"
#import "_UICursorInteractionDelegate-Protocol.h"
#import "_UIScrollToTopView-Protocol.h"

@class BarButton, CADisplayLink, CloudTabItemView, NSArray, NSIndexSet, NSMutableArray, NSString, NSTimer, ReorderingAutoscroller, ScrollingPanGestureRecognizer, TabExplanationView, TabOverviewInterpolatedLocation, TabOverviewItem, UIButton, UILongPressGestureRecognizer, UISearchBar, UITapGestureRecognizer, UITextInputPasswordRules, UIVisualEffectView, _UICursorInteraction;
@protocol TabOverviewDelegate;

@interface TabOverview : UIView <CloudTabTableDelegate, ReorderingAutoscrollerDelegate, _UIBasicAnimationFactory, _UIScrollToTopView, UIGestureRecognizerDelegate, UISearchBarDelegate, UISearchBarDelegate_Private, UIKeyInput, _UICursorInteractionDelegate, TabThumbnailCollectionView>
{
    CADisplayLink *_displayLink;	// 8 = 0x8
    TabOverviewInterpolatedLocation *_interpolatedLocation;	// 16 = 0x10
    NSArray *_displayedItems;	// 24 = 0x18
    _Bool _displayedItemsNeedUpdate;	// 32 = 0x20
    ScrollingPanGestureRecognizer *_panRecognizer;	// 40 = 0x28
    ScrollingPanGestureRecognizer *_tabCloseRecognizer;	// 48 = 0x30
    UITapGestureRecognizer *_tapRecognizer;	// 56 = 0x38
    UILongPressGestureRecognizer *_doneLongPressRecognizer;	// 64 = 0x40
    _UICursorInteraction *_cursorInteraction;	// 72 = 0x48
    TabOverviewItem *_activeItem;	// 80 = 0x50
    TabOverviewItem *_visiblyCenteredItem;	// 88 = 0x58
    TabOverviewInterpolatedLocation *_cloudTabsLocation;	// 96 = 0x60
    NSArray *_cloudTabDevices;	// 104 = 0x68
    NSArray *_cloudTabTables;	// 112 = 0x70
    double _cloudTabsHeight;	// 120 = 0x78
    CloudTabItemView *_editedCloudTabItemView;	// 128 = 0x80
    struct CGPoint _lastPanTranslation;	// 136 = 0x88
    ReorderingAutoscroller *_reorderingAutoscroller;	// 152 = 0x98
    double _swipeCloseTranslation;	// 160 = 0xa0
    TabOverviewItem *_swipeClosingItem;	// 168 = 0xa8
    TabOverviewItem *_deferredClosingItem;	// 176 = 0xb0
    _Bool _dragging;	// 184 = 0xb8
    _Bool _pinching;	// 185 = 0xb9
    _Bool _horizontalBounceEnabled;	// 186 = 0xba
    _Bool _verticalBounceEnabled;	// 187 = 0xbb
    _Bool _shouldBounceToConstrainedLocation;	// 188 = 0xbc
    _Bool _usesAccessibilityContentSize;	// 189 = 0xbd
    UIVisualEffectView *_header;	// 192 = 0xc0
    BarButton *_addTabButton;	// 200 = 0xc8
    BarButton *_privateBrowsingButton;	// 208 = 0xd0
    BarButton *_doneButton;	// 216 = 0xd8
    UISearchBar *_searchBar;	// 224 = 0xe0
    BarButton *_searchCancelButton;	// 232 = 0xe8
    double _searchBarMinimumWidth;	// 240 = 0xf0
    _Bool _includeIncomingItemsInSearch;	// 248 = 0xf8
    UIView *_inputView;	// 256 = 0x100
    UIView *_scrollingContainerView;	// 264 = 0x108
    NSIndexSet *_indexesMatchingSearch;	// 272 = 0x110
    _Bool _shouldAnimateDimmingForSearch;	// 280 = 0x118
    _Bool _suppressItemAnimation;	// 281 = 0x119
    double _bottomKeyboardInset;	// 288 = 0x120
    TabOverviewItem *_interactivePresentationStartingItem;	// 296 = 0x128
    struct CGPoint _interactivePresentationLastOffset;	// 304 = 0x130
    double _interactivePresentationLastTimestamp;	// 320 = 0x140
    double _interactivePresentationLastLogScale;	// 328 = 0x148
    struct CGPoint _interactivePresentationVelocity;	// 336 = 0x150
    double _interactivePresentationZoomLockStartTime;	// 352 = 0x160
    struct CGPoint _interactivePresentationZoomLockOffset;	// 360 = 0x168
    double _headerHeight;	// 376 = 0x178
    NSTimer *_itemActivationTimer;	// 384 = 0x180
    NSMutableArray *_itemViewReuseStack;	// 392 = 0x188
    _Bool _shouldShowPrivateBrowsingExplanationView;	// 400 = 0x190
    TabExplanationView *_explanationView;	// 408 = 0x198
    _Bool _explanationViewVisible;	// 416 = 0x1a0
    _Bool _searchBarBackdropStyleUpdated;	// 417 = 0x1a1
    unsigned long long _fadingSnapshotCount;	// 424 = 0x1a8
    double _lastUpdateTime;	// 432 = 0x1b0
    _Bool _synchronizeClosingItems;	// 440 = 0x1b8
    _Bool _allowsInteractivePresentation;	// 441 = 0x1b9
    _Bool _defersActivation;	// 442 = 0x1ba
    _Bool _inSteadyState;	// 443 = 0x1bb
    long long _presentationState;	// 448 = 0x1c0
    NSArray *_items;	// 456 = 0x1c8
    NSArray *_alternateItems;	// 464 = 0x1d0
    long long _alternateItemPosition;	// 472 = 0x1d8
    TabOverviewItem *_itemToActivate;	// 480 = 0x1e0
    id <TabOverviewDelegate> _delegate;	// 488 = 0x1e8
    CDUnknownBlockType _stateUpdateHandler;	// 496 = 0x1f0
    CDUnknownBlockType _pptStateUpdateHandler;	// 504 = 0x1f8
}

+ (unsigned long long)_tabsPerRowForBounds:(struct CGRect)arg1 isAccessibilityContentSizeCategory:(_Bool)arg2;	// IMP=0x00000001001526e0
+ (double)_minimumThumbnailWidthForBounds:(struct CGRect)arg1;	// IMP=0x0000000100152628
+ (unsigned long long)_maximumTabsPerRowForBounds:(struct CGRect)arg1 isAccessibilityContentSizeCategory:(_Bool)arg2;	// IMP=0x00000001001525cc
- (void).cxx_destruct;	// IMP=0x0000000100160fe4
@property(copy, nonatomic) CDUnknownBlockType pptStateUpdateHandler; // @synthesize pptStateUpdateHandler=_pptStateUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType stateUpdateHandler; // @synthesize stateUpdateHandler=_stateUpdateHandler;
@property(readonly, nonatomic, getter=isInSteadyState) _Bool inSteadyState; // @synthesize inSteadyState=_inSteadyState;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UIButton *privateBrowsingButton; // @synthesize privateBrowsingButton=_privateBrowsingButton;
@property(readonly, nonatomic) UIButton *addTabButton; // @synthesize addTabButton=_addTabButton;
@property(nonatomic) __weak id <TabOverviewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool defersActivation; // @synthesize defersActivation=_defersActivation;
@property(retain, nonatomic) TabOverviewItem *itemToActivate; // @synthesize itemToActivate=_itemToActivate;
@property(readonly, nonatomic) _Bool allowsInteractivePresentation; // @synthesize allowsInteractivePresentation=_allowsInteractivePresentation;
@property(nonatomic) _Bool synchronizeClosingItems; // @synthesize synchronizeClosingItems=_synchronizeClosingItems;
@property(readonly, nonatomic) long long alternateItemPosition; // @synthesize alternateItemPosition=_alternateItemPosition;
@property(readonly, nonatomic) NSArray *alternateItems; // @synthesize alternateItems=_alternateItems;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;	// IMP=0x0000000100160cc4
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000100160b0c
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100160abc
- (_Bool)isScrollEnabled;	// IMP=0x0000000100160ab4
- (unsigned long long)estimatedSnapshotsPerPageForBounds:(struct CGRect)arg1 withTraitCollection:(id)arg2;	// IMP=0x00000001001609f8
- (void)reorderingAutoscroller:(id)arg1 handleScroll:(struct CGPoint)arg2;	// IMP=0x0000000100160964
@property(readonly, nonatomic) unsigned long long snapshotBorderOptions;
@property(readonly, nonatomic) double desiredSnapshotScale;
- (struct CGSize)snapshotSizeForSuggestedSize:(struct CGSize)arg1;	// IMP=0x00000001001608dc
- (id)_timingFunctionForAnimation;	// IMP=0x00000001001608a8
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000001001607c4
- (id)inputView;	// IMP=0x00000001001607b4
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000010016072c
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
- (void)_passTextInputToSeachBarWithChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000010016061c
- (void)deleteBackward;	// IMP=0x0000000100160534
@property(readonly, nonatomic) _Bool hasText;
- (void)insertText:(id)arg1;	// IMP=0x000000010016042c
- (struct CGRect)_searchBar:(id)arg1 proposedSearchFieldFrame:(struct CGRect)arg2;	// IMP=0x00000001001603e8
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0000000100160370
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x0000000100160324
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x00000001001602d8
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000100160200
- (_Bool)_updateDisplayedCloudTabs;	// IMP=0x00000001001600cc
- (void)_updateIndexesMatchingSearchAndPerformLayout:(_Bool)arg1 includingItems:(id)arg2;	// IMP=0x000000010015fd24
- (void)_updateIndexesMatchingSearch;	// IMP=0x000000010015fd10
- (void)_cancelSearch;	// IMP=0x000000010015fcac
- (_Bool)cloudTabTable:(id)arg1 shouldDisplayTab:(id)arg2;	// IMP=0x000000010015fbc0
- (void)cloudTabTable:(id)arg1 didFinishEditingTabItemView:(id)arg2;	// IMP=0x000000010015fb4c
- (void)cloudTabTable:(id)arg1 didStartEditingTabItemView:(id)arg2;	// IMP=0x000000010015fac4
- (void)cloudTabTable:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3;	// IMP=0x000000010015f9fc
- (void)cloudTabTable:(id)arg1 didSelectCloudTab:(id)arg2;	// IMP=0x000000010015f888
- (void)_updateAllowsInteractivePresentation;	// IMP=0x000000010015f798
- (_Bool)showsExplanationView;	// IMP=0x000000010015f768
- (void)_setExplanationViewVariant:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010015f600
- (void)_setShowingSearchExplanationView:(_Bool)arg1;	// IMP=0x000000010015f5a4
- (void)setShowsPrivateBrowsingExplanationView:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010015f52c
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010015ef40
- (void)_displayLinkFired:(id)arg1;	// IMP=0x000000010015e970
- (_Bool)_canSkipFrames;	// IMP=0x000000010015e8a0
- (void)_resetRenderedLocations;	// IMP=0x000000010015e61c
- (void)setCloudTabDevices:(id)arg1;	// IMP=0x000000010015e264
- (void)cancelInteractivePresentation;	// IMP=0x000000010015e254
- (void)endInteractivePresentation;	// IMP=0x000000010015e244
- (void)_endInteractivePresentationRestoringPreviousState:(_Bool)arg1;	// IMP=0x000000010015dce4
- (id)_itemAboveItem:(id)arg1;	// IMP=0x000000010015dc60
- (id)_itemBelowItem:(id)arg1;	// IMP=0x000000010015dbf4
- (id)_itemLeftOfItem:(id)arg1;	// IMP=0x000000010015db68
- (id)_itemRightOfItem:(id)arg1;	// IMP=0x000000010015dadc
- (void)updateInteractivePresentationWithOffset:(struct CGPoint)arg1 scale:(double)arg2;	// IMP=0x000000010015d848
- (void)beginInteractivePresentationWithOffset:(struct CGPoint)arg1 scale:(double)arg2;	// IMP=0x000000010015d360
- (void)_updateSnapshotAlphaForItem:(id)arg1;	// IMP=0x000000010015d090
- (void)_updateSnapshotAlphaForActiveItem;	// IMP=0x000000010015d078
- (id)_closestItemWithDistanceCalculationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010015ce1c
- (id)_closestItemToLocation:(CDStruct_5ca50560)arg1;	// IMP=0x000000010015cd40
- (CDStruct_5ca50560)_rescaleLocationByCentering:(CDStruct_5ca50560)arg1 toLogScale:(double)arg2;	// IMP=0x000000010015ccb0
- (void)_activateItemToActivate;	// IMP=0x000000010015cc18
- (void)_activateItemToActivate:(id)arg1;	// IMP=0x000000010015cbc0
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x000000010015c960
- (void)_resetToSteadyState;	// IMP=0x000000010015c648
- (void)_crossDissolveToSteadyStateIfNeededWithAnimationCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010015c570
- (void)presentAnimated:(_Bool)arg1;	// IMP=0x000000010015be88
- (void)_beginPresentation;	// IMP=0x000000010015bc54
- (void)_relinquishBorrowedContentView;	// IMP=0x000000010015b9b8
- (void)_updateBorrowedContentView;	// IMP=0x000000010015b748
- (_Bool)_wantsBorrowedContentView;	// IMP=0x000000010015b560
- (double)_titleViewSquishPercentage;	// IMP=0x000000010015b538
- (double)_snapshotFadePercentage;	// IMP=0x000000010015b4e8
- (double)_currentScalePercentage;	// IMP=0x000000010015b444
- (double)_widthForCloudTabTableAtIndex:(unsigned long long)arg1 withTableCount:(unsigned long long)arg2;	// IMP=0x000000010015b3ac
- (_Bool)_shouldUseFastExplanationViewAnimation;	// IMP=0x000000010015b33c
- (void)layoutSubviews;	// IMP=0x0000000100159d54
- (double)_itemCornerRadiusForScale:(double)arg1;	// IMP=0x0000000100159cb0
- (struct CATransform3D)_thumbnailTransformForFrame:(struct CGRect)arg1 withScale:(double)arg2 atZPosition:(double)arg3;	// IMP=0x00000001001599fc
- (void)_layoutDisplayedItem:(id)arg1;	// IMP=0x0000000100158f8c
- (void)_updateTargetLocationForDisplayedItem:(id)arg1;	// IMP=0x0000000100158b60
- (double)_controlsAlpha;	// IMP=0x0000000100158b34
- (_Bool)scrollToTop;	// IMP=0x0000000100158a78
- (void)endSearching;	// IMP=0x0000000100158a6c
- (void)beginSearching;	// IMP=0x0000000100158a54
@property(readonly, nonatomic, getter=isSearching) _Bool searching;
- (_Bool)_shouldDimItemsForSearch;	// IMP=0x00000001001589a8
- (void)_tap:(id)arg1;	// IMP=0x00000001001587a0
- (CDStruct_5ca50560)_applyItemPosition:(long long)arg1 toLocation:(CDStruct_5ca50560)arg2;	// IMP=0x0000000100158710
- (id)_itemsContainingItem:(id)arg1;	// IMP=0x00000001001586c4
- (void)_dismissWithItemAtCurrentDecelerationFactor:(id)arg1;	// IMP=0x00000001001585c0
- (void)_dismissWithItem:(id)arg1;	// IMP=0x0000000100158550
- (void)_tabClose:(id)arg1;	// IMP=0x0000000100157e3c
- (void)_startClosingItem:(id)arg1;	// IMP=0x0000000100157c20
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100157ba8
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100157b1c
- (void)_doneLongPressRecognized:(id)arg1;	// IMP=0x0000000100157ab4
- (id)_itemAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001001578c4
- (void)test_simulateScrollByOffset:(struct CGPoint)arg1 inTime:(double)arg2;	// IMP=0x00000001001577f8
- (void)_pan:(id)arg1;	// IMP=0x0000000100157604
- (_Bool)_isClosingLastItem;	// IMP=0x00000001001575d4
- (void)_close:(id)arg1;	// IMP=0x0000000100157288
- (void)enumerateItemsOrderedByVisibility:(CDUnknownBlockType)arg1;	// IMP=0x0000000100156f14
- (id)scrollingContainerView;	// IMP=0x0000000100156f04
- (void)_updateDisplayedItems;	// IMP=0x000000010015699c
- (void)_removeViewsForItem:(id)arg1;	// IMP=0x0000000100156954
- (void)_didReceiveMemoryWarning:(id)arg1;	// IMP=0x000000010015693c
- (void)_relinquishReusableTabOverviewItemView:(id)arg1;	// IMP=0x00000001001568bc
- (id)_requestReusableTabOverviewItemView;	// IMP=0x0000000100156814
- (void)activateItem:(id)arg1;	// IMP=0x0000000100156808
- (id)targetedDragPreviewForLiftingItem:(id)arg1;	// IMP=0x000000010015674c
- (void)willAnimateDropForItem:(id)arg1 withAnimator:(id)arg2;	// IMP=0x0000000100156660
- (id)targetedDragPreviewForDroppingItem:(id)arg1;	// IMP=0x0000000100156378
@property(readonly, nonatomic) _Bool supportsDropTransitionToItemView;
- (id)viewForItem:(id)arg1;	// IMP=0x00000001001562dc
@property(readonly, nonatomic) _Bool supportsSystemDrag;
- (id)itemAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001001562c8
@property(readonly, nonatomic) ReorderingAutoscroller *reorderingAutoscroller;
- (id)targetItemForDropAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000100156090
- (void)_setPresentationState:(long long)arg1;	// IMP=0x0000000100155e34
- (void)endAnimation;	// IMP=0x0000000100155e14
- (_Bool)isItemAnimating:(id)arg1;	// IMP=0x0000000100155c68
@property(copy, nonatomic) NSString *searchTerm;
@property(readonly, nonatomic) NSArray *itemsFullyInView;
@property(readonly, nonatomic) NSArray *itemsMatchingSearchTerm;
- (void)copyLocationFromItem:(id)arg1 toItem:(id)arg2;	// IMP=0x00000001001558a0
- (void)setItems:(id)arg1 alternateItems:(id)arg2 atPosition:(long long)arg3;	// IMP=0x00000001001551f4
- (void)_initializeIncomingItemIfNecessary:(id)arg1 fromItems:(id)arg2 oldItems:(id)arg3 atPosition:(long long)arg4 isIncoming:(_Bool *)arg5;	// IMP=0x0000000100154cb4
- (void)_notifySteadyStateUpdatedIfNeeded;	// IMP=0x0000000100154b5c
- (_Bool)_checkSteadyState;	// IMP=0x0000000100154864
- (_Bool)_shouldAnimateCornerRadius;	// IMP=0x00000001001547f4
- (void)_updateDisplayLink;	// IMP=0x0000000100154188
- (void)_didChangeDismissing:(_Bool)arg1;	// IMP=0x0000000100154088
- (void)_updatePanGesture;	// IMP=0x0000000100154024
- (CDStruct_5ca50560)_constrainLocation:(CDStruct_5ca50560)arg1 includingCloudTabs:(_Bool)arg2;	// IMP=0x0000000100153dc4
- (CDStruct_5ca50560)_constrainLocation:(CDStruct_5ca50560)arg1;	// IMP=0x0000000100153db4
- (struct CGRect)_scrollBounds;	// IMP=0x0000000100153d7c
- (struct CGSize)_contentSize;	// IMP=0x0000000100153cd4
- (double)_contentHeightForCloudTabs;	// IMP=0x0000000100153c80
- (double)_bottomEdgeOfTabs;	// IMP=0x0000000100153bbc
- (struct CGPoint)_offsetForRubberbandOffset:(struct CGPoint)arg1;	// IMP=0x0000000100153aa0
- (struct CGPoint)_rubberbandOffsetForOffset:(struct CGPoint)arg1;	// IMP=0x0000000100153968
- (void)_didChangeVisibility:(_Bool)arg1;	// IMP=0x0000000100153698
- (CDStruct_5ca50560)_itemLocationForRect:(struct CGRect)arg1 withThumbnailScale:(double)arg2;	// IMP=0x0000000100153660
- (CDStruct_5ca50560)_targetLocationForItemAtIndex:(unsigned long long)arg1 inNumberOfItems:(unsigned long long)arg2 insertionStyle:(long long)arg3;	// IMP=0x0000000100153440
- (CDStruct_5ca50560)_targetLocationForItemAtIndex:(unsigned long long)arg1 inNumberOfItems:(unsigned long long)arg2;	// IMP=0x0000000100153430
- (void)updateSnapshotForItem:(id)arg1;	// IMP=0x0000000100153398
- (id)_snapshotForItem:(id)arg1 isBlank:(_Bool *)arg2;	// IMP=0x0000000100153308
- (id)_itemAtLayoutIndex:(unsigned long long)arg1;	// IMP=0x0000000100153264
- (unsigned long long)_layoutIndexForItemIndex:(unsigned long long)arg1;	// IMP=0x0000000100153238
- (CDStruct_5ca50560)_targetLocationForItem:(id)arg1 inItems:(id)arg2;	// IMP=0x0000000100153158
- (CDStruct_5ca50560)_targetLocationForDismissalWithItem:(id)arg1;	// IMP=0x000000010015302c
- (CDStruct_5ca50560)_targetLocationCenteredOnItemLocation:(CDStruct_5ca50560)arg1;	// IMP=0x0000000100152fa0
- (double)zOffsetForHighlightedIncomingItem;	// IMP=0x0000000100152f6c
- (struct CGSize)sizeForIncomingItem;	// IMP=0x0000000100152f00
- (struct CGRect)frameForItem:(id)arg1;	// IMP=0x0000000100152e34
- (struct CGRect)_rectForItemLocation:(CDStruct_5ca50560)arg1;	// IMP=0x0000000100152dc8
- (struct CGRect)_searchBarFrameWithVerticalOffset:(double)arg1;	// IMP=0x0000000100152ca8
- (double)_thumbnailScaleForTotalWidth:(double)arg1 boundsWidth:(double)arg2 safeAreaWidth:(double)arg3;	// IMP=0x0000000100152c64
- (double)_thumbnailScaleForLandscapeOrientation;	// IMP=0x0000000100152ab0
- (double)_thumbnailScaleOfItemsWithCount:(unsigned long long)arg1;	// IMP=0x00000001001529dc
- (double)_totalWidthOfItemsWithCount:(unsigned long long)arg1 tabsPerRow:(unsigned long long)arg2 boundsWidth:(double)arg3;	// IMP=0x00000001001529a4
- (double)_totalWidthOfItemsWithCount:(unsigned long long)arg1;	// IMP=0x0000000100152944
- (unsigned long long)_cloudTabDevicesPerRow;	// IMP=0x0000000100152910
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100152854
- (struct UIEdgeInsets)_effectiveSafeAreaInsets;	// IMP=0x00000001001527dc
- (unsigned long long)_tabsPerRow;	// IMP=0x0000000100152790
- (void)dismissWithAddTabAnimation;	// IMP=0x00000001001522ec
- (void)_updateScrollBoundsForKeyboardNotification:(id)arg1;	// IMP=0x000000010015229c
- (void)_updateScrollBoundsForKeyboardInfo:(id)arg1;	// IMP=0x0000000100152038
@property(readonly, nonatomic) struct UIEdgeInsets barInsets;
- (void)didMoveToWindow;	// IMP=0x0000000100151f8c
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100151f18
- (void)dealloc;	// IMP=0x0000000100151e90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100151050

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

