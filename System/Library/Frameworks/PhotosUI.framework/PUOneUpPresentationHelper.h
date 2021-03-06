/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUPhotosPreviewPresentationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUTilingViewTileSource.h>
#import <libobjc.A.dylib/PUTilingViewTileTransitionDelegate.h>
#import <libobjc.A.dylib/PUTilingViewTileUseDelegate.h>
#import <libobjc.A.dylib/PUPinchedTileTrackerDelegate.h>
#import <libobjc.A.dylib/PUTilingViewControllerTransitionEndPoint.h>

@protocol PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate;
@class PUBrowsingSession, UIViewController, PXPhotosDataSource, PUTilingView, NSSet, PUOneUpViewController, UITapGestureRecognizer, PUPinchedTileTracker, PUChangeDirectionValueFilter, NSString;

@interface PUOneUpPresentationHelper : NSObject <PUPhotosPreviewPresentationControllerDelegate, UIGestureRecognizerDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate, PUPinchedTileTrackerDelegate, PUTilingViewControllerTransitionEndPoint> {

	struct {
		BOOL respondsToTransitionTypeWithProposedTransitionType;
		BOOL respondsToWillPresentOneUpViewController;
		BOOL respondsToDidDismissOneUpViewController;
		BOOL respondsToViewHostingGestureRecognizers;
		BOOL respondsToViewHostingTilingView;
		BOOL respondsToScrollView;
		BOOL respondsToPreferredBarStyle;
		BOOL respondsToShouldLeaveContentOnSecondScreen;
		BOOL respondsToDisableFinalFadeoutAnimation;
		BOOL respondsToPreviewScrubberDidBecomeAvailable;
		BOOL respondsToShouldAutoPlay;
		BOOL respondsToPreventRevealInMomentAction;
		BOOL respondsToPreferredPresentationOrientation;
		BOOL respondsToEnableFreezeLayoutOnOrientationChange;
		BOOL respondsToAdditionalOptions;
	}  _delegateFlags;
	struct {
		BOOL respondsToCurrentImageForAssetReference;
		BOOL respondsToShouldHideAssetReferences;
		BOOL respondsToScrollAssetReferenceToVisible;
		BOOL respondsToShouldDisableScroll;
	}  _assetDisplayDelegateFlags;
	SCD_Struct_PU16 _needsUpdateFlags;
	BOOL _cachesScrubberView;
	BOOL __isEndingPresentation;
	BOOL __shouldPauseLibraryChanges;
	BOOL __needsUpdateAssetReferencesDisplayedInTilingView;
	BOOL __isPerformingNonAnimatedPush;
	PUBrowsingSession* _browsingSession;
	UIViewController* _presentingViewController;
	long long _transitionType;
	PXPhotosDataSource* _photosDataSource;
	id<PUOneUpPresentationHelperDelegate> _delegate;
	id<PUOneUpPresentationHelperAssetDisplayDelegate> _assetDisplayDelegate;
	/*^block*/id _unlockDeviceStatus;
	/*^block*/id _unlockDeviceHandler;
	long long __state;
	long long __presentationEndTimeoutIdentifier;
	id __libraryChangePauseToken;
	/*^block*/id __browsingSessionCreationBlock;
	PUTilingView* __tilingView;
	PUTilingView* __disappearingTilingView;
	PUTilingView* __transitioningTilingView;
	NSSet* __assetReferencesDisplayedInTilingView;
	PUOneUpViewController* __oneUpViewController;
	UITapGestureRecognizer* __tapGestureRecognizer;
	PUPinchedTileTracker* __pinchedTileTracker;
	PUChangeDirectionValueFilter* __panDirectionValueFilter;
	long long __presentationOrigin;

}

@property (assign,setter=_setState:,nonatomic) long long _state;                                                                                             //@synthesize _state=__state - In the implementation block
@property (assign,setter=_setEndingPresentation:,nonatomic) BOOL _isEndingPresentation;                                                                      //@synthesize _isEndingPresentation=__isEndingPresentation - In the implementation block
@property (assign,setter=_setPresentationEndTimeoutIdentifier:,nonatomic) long long _presentationEndTimeoutIdentifier;                                       //@synthesize _presentationEndTimeoutIdentifier=__presentationEndTimeoutIdentifier - In the implementation block
@property (assign,setter=_setShouldPauseLibraryChanges:,nonatomic) BOOL _shouldPauseLibraryChanges;                                                          //@synthesize _shouldPauseLibraryChanges=__shouldPauseLibraryChanges - In the implementation block
@property (setter=_setLibraryChangePauseToken:,nonatomic,retain) id _libraryChangePauseToken;                                                                //@synthesize _libraryChangePauseToken=__libraryChangePauseToken - In the implementation block
@property (nonatomic,copy,readonly) id _browsingSessionCreationBlock;                                                                                        //@synthesize _browsingSessionCreationBlock=__browsingSessionCreationBlock - In the implementation block
@property (setter=_setBrowsingSession:,nonatomic,retain) PUBrowsingSession * browsingSession;                                                                //@synthesize browsingSession=_browsingSession - In the implementation block
@property (nonatomic,readonly) long long transitionType;                                                                                                     //@synthesize transitionType=_transitionType - In the implementation block
@property (setter=_setTilingView:,nonatomic,retain) PUTilingView * _tilingView;                                                                              //@synthesize _tilingView=__tilingView - In the implementation block
@property (assign,setter=_setDisappearingTilingView:,nonatomic,__weak) PUTilingView * _disappearingTilingView;                                               //@synthesize _disappearingTilingView=__disappearingTilingView - In the implementation block
@property (setter=_setTransitioningTilingView:,nonatomic,retain) PUTilingView * _transitioningTilingView;                                                    //@synthesize _transitioningTilingView=__transitioningTilingView - In the implementation block
@property (assign,setter=_setNeedsUpdateAssetReferencesDisplayedInTilingView:,nonatomic) BOOL _needsUpdateAssetReferencesDisplayedInTilingView;              //@synthesize _needsUpdateAssetReferencesDisplayedInTilingView=__needsUpdateAssetReferencesDisplayedInTilingView - In the implementation block
@property (setter=_setAssetReferencesDisplayedInTilingView:,nonatomic,retain) NSSet * _assetReferencesDisplayedInTilingView;                                 //@synthesize _assetReferencesDisplayedInTilingView=__assetReferencesDisplayedInTilingView - In the implementation block
@property (setter=_setOneUpViewController:,nonatomic,retain) PUOneUpViewController * _oneUpViewController;                                                   //@synthesize _oneUpViewController=__oneUpViewController - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;                                                //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (setter=_setPinchedTileTracker:,nonatomic,retain) PUPinchedTileTracker * _pinchedTileTracker;                                                      //@synthesize _pinchedTileTracker=__pinchedTileTracker - In the implementation block
@property (setter=_setPanDirectionValueFilter:,nonatomic,retain) PUChangeDirectionValueFilter * _panDirectionValueFilter;                                    //@synthesize _panDirectionValueFilter=__panDirectionValueFilter - In the implementation block
@property (assign,setter=_setIsPerformingNonAnimatedPush:,nonatomic) BOOL _isPerformingNonAnimatedPush;                                                      //@synthesize _isPerformingNonAnimatedPush=__isPerformingNonAnimatedPush - In the implementation block
@property (assign,nonatomic) long long _presentationOrigin;                                                                                                  //@synthesize _presentationOrigin=__presentationOrigin - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource;                                                                                          //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpPresentationHelperDelegate> delegate;                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpPresentationHelperAssetDisplayDelegate> assetDisplayDelegate;                                                  //@synthesize assetDisplayDelegate=_assetDisplayDelegate - In the implementation block
@property (nonatomic,copy) id unlockDeviceStatus;                                                                                                            //@synthesize unlockDeviceStatus=_unlockDeviceStatus - In the implementation block
@property (nonatomic,copy) id unlockDeviceHandler;                                                                                                           //@synthesize unlockDeviceHandler=_unlockDeviceHandler - In the implementation block
@property (nonatomic,readonly) BOOL isOneUpPresented; 
@property (assign,nonatomic) BOOL cachesScrubberView;                                                                                                        //@synthesize cachesScrubberView=_cachesScrubberView - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                                                                           //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PUOneUpPresentationHelperDelegate>)delegate;
-(void)setDelegate:(id<PUOneUpPresentationHelperDelegate>)arg1 ;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)commitPreviewViewController:(id)arg1 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(void)_updateLayout;
-(void)_handleTap:(id)arg1 ;
-(long long)transitionType;
-(PXPhotosDataSource *)photosDataSource;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(id)unlockDeviceHandler;
-(void)setUnlockDeviceHandler:(id)arg1 ;
-(id)unlockDeviceStatus;
-(void)setUnlockDeviceStatus:(id)arg1 ;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(id)initWithPhotosDataSource:(id)arg1 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg1 ;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg1 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg1 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg1 ;
-(BOOL)handlePresentingPinchGestureRecognizer:(id)arg1 ;
-(PUBrowsingSession *)browsingSession;
-(PUTilingView *)_tilingView;
-(void)_updateTapGestureRecognizer;
-(BOOL)dismissOneUpViewControllerForced:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)presentingViewControllerScrollViewDidScroll:(id)arg1 ;
-(void)setAssetDisplayDelegate:(id<PUOneUpPresentationHelperAssetDisplayDelegate>)arg1 ;
-(void)presentOneUpViewControllerAnimated:(BOOL)arg1 interactiveMode:(long long)arg2 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4 ;
-(id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForUpdateWithItems:(id)arg2 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(CGRect)arg2 toFrame:(CGRect)arg3 duration:(double)arg4 ;
-(id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3 ;
-(id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4 ;
-(double)pinchedTiledTracker:(id)arg1 initialAspectRatioForTileWithLayoutInfo:(id)arg2 ;
-(id)pinchedTiledTracker:(id)arg1 finalLayoutInfoForTileWithLayoutInfo:(id)arg2 ;
-(void)interactiveTileTracker:(id)arg1 willStartTrackingTileController:(id)arg2 ;
-(void)interactiveTileTracker:(id)arg1 didStopTrackingTileController:(id)arg2 ;
-(PUPinchedTileTracker *)_pinchedTileTracker;
-(void)_setPinchedTileTracker:(id)arg1 ;
-(BOOL)tilingViewControllerTransitionUsesTransientTilingView:(id)arg1 ;
-(long long)tilingViewControllerTransitionPreferredBarStyle:(id)arg1 ;
-(void)tilingViewControllerTransitionWasAborted:(id)arg1 ;
-(id)tilingViewControllerTransitionTilingViewHostView:(id)arg1 ;
-(id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2 ;
-(void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3 ;
-(void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(BOOL)arg4 animationSetupCompletionHandler:(/*^block*/id)arg5 ;
-(void)tilingView:(id)arg1 willStartUsingTileController:(id)arg2 ;
-(void)tilingView:(id)arg1 didStopUsingTileController:(id)arg2 ;
-(void)tilingViewDidUpdateTileControllers:(id)arg1 ;
-(void)tilingViewDidEndAnimatingTileControllers:(id)arg1 ;
-(void)photosPreviewPresentationController:(id)arg1 willPresentPreviewViewController:(id)arg2 ;
-(id)initWithBrowsingSessionCreationBlock:(/*^block*/id)arg1 ;
-(id)browsingSessionCreateIfNeeded:(BOOL)arg1 ;
-(BOOL)isOneUpPresented;
-(void)_invalidatePresentationInfo;
-(void)_updatePresentationInfoIfNeeded;
-(void)_presentOneUpViewController:(id)arg1 animated:(BOOL)arg2 interactiveMode:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_configureNavigationController:(id)arg1 ;
-(BOOL)canPresentOneUpViewControllerAnimated:(BOOL)arg1 ;
-(CGAffineTransform)_tilingViewTransitionTransform;
-(void)presentOneUpViewControllerFromAssetAtIndexPath:(id)arg1 animated:(BOOL)arg2 interactiveMode:(long long)arg3 ;
-(BOOL)canDismissOneUpViewController;
-(BOOL)_prepareDismissalForced:(BOOL)arg1 ;
-(void)_cleanupOneUpViewControllerForDismissalIfNeeded;
-(BOOL)handlePresentingPanGestureRecognizer:(id)arg1 ;
-(BOOL)_handleInteractivePresentationWithBlock:(/*^block*/id)arg1 ;
-(void)_handleTileControllerAnimationEnd;
-(void)_setEndingPresentation:(BOOL)arg1 ;
-(void)_setShouldPauseLibraryChanges:(BOOL)arg1 ;
-(void)_presentationEndDidTimeOut:(long long)arg1 ;
-(id)_transitionHostingView;
-(void)_ensureRegistrationWithPresentingViewController;
-(void)_setTilingView:(id)arg1 ;
-(void)_setOneUpViewController:(id)arg1 ;
-(void)_setTransitioningTilingView:(id)arg1 ;
-(void)_setAssetReferencesDisplayedInTilingView:(id)arg1 ;
-(void)_updateLayout:(id)arg1 ;
-(id)_currentTilingViewControllerTransition;
-(long long)_currentNavigationControllerOperation;
-(id)_newCollapsedLayout;
-(void)_invalidateAssetReferencesDisplayedInTilingView;
-(void)_updateAssetReferencesDisplayedInTilingView;
-(void)_cleanUpAfterTilingViewTransitionAnimated:(BOOL)arg1 transitionAborted:(BOOL)arg2 ;
-(void)_disappearingTilingView:(id)arg1 animationCompleted:(BOOL)arg2 ;
-(void)_didFinishTransitioningToOneUp;
-(id)_createOneUpViewControllerWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2 ;
-(id)previewViewControllerForItemAtIndexPath:(id)arg1 allowingActions:(BOOL)arg2 ;
-(void)beginUsingBlackTheme;
-(void)cancelCommitTransitionForPreviewViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)cameraPreviewTransitionDelegateWithSourceRect:(CGRect)arg1 sourceImage:(id)arg2 ;
-(void)navigateToAssetAtIndexPath:(id)arg1 ;
-(BOOL)_shouldAutoplayOnNavigation;
-(void)_setBrowsingSession:(id)arg1 ;
-(id<PUOneUpPresentationHelperAssetDisplayDelegate>)assetDisplayDelegate;
-(BOOL)cachesScrubberView;
-(void)setCachesScrubberView:(BOOL)arg1 ;
-(BOOL)_isEndingPresentation;
-(long long)_presentationEndTimeoutIdentifier;
-(void)_setPresentationEndTimeoutIdentifier:(long long)arg1 ;
-(BOOL)_shouldPauseLibraryChanges;
-(id)_libraryChangePauseToken;
-(void)_setLibraryChangePauseToken:(id)arg1 ;
-(id)_browsingSessionCreationBlock;
-(PUTilingView *)_disappearingTilingView;
-(void)_setDisappearingTilingView:(id)arg1 ;
-(PUTilingView *)_transitioningTilingView;
-(BOOL)_needsUpdateAssetReferencesDisplayedInTilingView;
-(void)_setNeedsUpdateAssetReferencesDisplayedInTilingView:(BOOL)arg1 ;
-(NSSet *)_assetReferencesDisplayedInTilingView;
-(PUOneUpViewController *)_oneUpViewController;
-(PUChangeDirectionValueFilter *)_panDirectionValueFilter;
-(void)_setPanDirectionValueFilter:(id)arg1 ;
-(BOOL)_isPerformingNonAnimatedPush;
-(void)_setIsPerformingNonAnimatedPush:(BOOL)arg1 ;
-(long long)_presentationOrigin;
-(void)set_presentationOrigin:(long long)arg1 ;
@end

