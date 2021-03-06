/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PUPhotosSharingCollectionViewLayoutDelegate.h>
#import <UIKit/UIActivityViewControllerAirDropDelegate.h>
#import <libobjc.A.dylib/PUTransitionViewAnimatorDelegate.h>
#import <libobjc.A.dylib/PUScrollViewSpeedometerDelegate.h>
#import <libobjc.A.dylib/PUActivityViewControllerDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>
#import <libobjc.A.dylib/PUPhotoViewContentHelperDelegate.h>
#import <libobjc.A.dylib/PUPhotosSharingTransitionViewController.h>
#import <libobjc.A.dylib/PHAssetCollectionDataSource.h>
#import <libobjc.A.dylib/PUOneUpPhotosSharingTransitionViewController.h>
#import <libobjc.A.dylib/PUOneUpAssetTransitionViewController.h>

@protocol PUPhotosSharingViewControllerDelegate, PUPhotosSharingPresentationCoordinator;
@class PUScrollViewSpeedometer, NSMutableDictionary, NSMapTable, UITapGestureRecognizer, NSIndexPath, UIBarButtonItem, PHFetchResult, NSPredicate, PUPhotoSelectionManager, NSArray, PHPerson, PUPhotosSharingViewControllerSpec, UICollectionView, UIView, PUPhotosSharingCollectionViewLayout, PUPhotoPinchGestureRecognizer, PUTransitionViewAnimator, PUPhotosZoomingSharingGridCell, PHCachingImageManager, NSMutableSet, PUActivityViewController, UICollectionViewLayout, PUPhotosSharingTransitionContext, PUAssetTransitionInfo, PHAsset, PXAssetBadgeManager, NSMutableArray, NSString;

@interface PUPhotosSharingViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, UIActivityViewControllerAirDropDelegate, PUTransitionViewAnimatorDelegate, PUScrollViewSpeedometerDelegate, PUActivityViewControllerDelegate, PXPhotoLibraryUIChangeObserver, PUPhotoViewContentHelperDelegate, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController> {

	PUScrollViewSpeedometer* _speedometer;
	NSMutableDictionary* _resultsForAssetCollection;
	NSMutableDictionary* _assetItemsByAssetIdentifier;
	NSMapTable* _indexPathsByOptionView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSIndexPath* _inFlightReferenceIndexPath;
	/*^block*/id _postRotationHandler;
	UIBarButtonItem* _nextButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	BOOL _shouldScrollToSelection;
	BOOL _didAttemptShareViaAirDrop;
	BOOL _inFlightRotation;
	BOOL _defaultIrisEnabled;
	BOOL _shouldPlayVitalityHintAfterViewDidAppear;
	BOOL _willLayoutSubviewsWasCalled;
	double _cachedEmbeddedActivityViewHeight;
	BOOL _allowAirPlayActivity;
	BOOL __viewInSyncWithModel;
	BOOL __loopingPlaybackAllowed;
	PHFetchResult* _photoCollectionsFetchResult;
	NSPredicate* _filterPredicate;
	PUPhotoSelectionManager* _photoSelectionManager;
	NSArray* _excludedActivityTypes;
	const CFStringRef _aggregateKey;
	PHPerson* _person;
	id<PUPhotosSharingViewControllerDelegate> _delegate;
	/*^block*/id _readyToInteractHandler;
	/*^block*/id _ppt_readyToInteractHandler;
	id<PUPhotosSharingPresentationCoordinator> _presentationCoordinator;
	PUPhotosSharingViewControllerSpec* _spec;
	UICollectionView* _mainCollectionView;
	UIView* _embeddedActivityView;
	PUPhotosSharingCollectionViewLayout* _mainCollectionViewLayout;
	PUPhotoPinchGestureRecognizer* __photoZoomPinchGestureRecognizer;
	PUTransitionViewAnimator* __photoZoomAnimator;
	PUPhotosZoomingSharingGridCell* __photoZoomCell;
	PHCachingImageManager* __cachingImageManager;
	NSMutableSet* __preheatedAssets;
	PUActivityViewController* __embeddedActivityViewController;
	PUActivityViewController* __unembeddedActivityViewController;
	PUActivityViewController* __preheatedActivityViewController;
	UICollectionViewLayout* __transitionLayout;
	PUPhotosSharingTransitionContext* _photosSharingTransitionContext;
	PUAssetTransitionInfo* _assetTransitionInfo;
	PHAsset* __lastKnownReferenceAsset;
	NSIndexPath* __lastKnownReferenceIndexPath;
	PXAssetBadgeManager* __badgeManager;
	/*^block*/id __pptOnDidEndScrollingBlock;
	NSMutableArray* __photoViewLoaderBlocks;
	NSMutableArray* __livePhotoViewLoaderBlocks;
	CGRect __previousPreheatRect;

}

@property (nonatomic,retain) PUPhotosSharingViewControllerSpec * spec;                                                                                  //@synthesize spec=_spec - In the implementation block
@property (setter=_setMainCollectionView:,nonatomic,retain) UICollectionView * mainCollectionView;                                                      //@synthesize mainCollectionView=_mainCollectionView - In the implementation block
@property (setter=_setEmbeddedActivityView:,nonatomic,retain) UIView * embeddedActivityView;                                                            //@synthesize embeddedActivityView=_embeddedActivityView - In the implementation block
@property (setter=_setMainCollectionViewLayout:,nonatomic,retain) PUPhotosSharingCollectionViewLayout * mainCollectionViewLayout;                       //@synthesize mainCollectionViewLayout=_mainCollectionViewLayout - In the implementation block
@property (assign,setter=_setViewInSyncWithModel:,getter=_isViewInSyncWithModel,nonatomic) BOOL _viewInSyncWithModel;                                   //@synthesize _viewInSyncWithModel=__viewInSyncWithModel - In the implementation block
@property (nonatomic,retain) PUPhotoSelectionManager * photoSelectionManager;                                                                           //@synthesize photoSelectionManager=_photoSelectionManager - In the implementation block
@property (setter=_setPhotoZoomPinchGestureRecognizer:,nonatomic,retain) PUPhotoPinchGestureRecognizer * _photoZoomPinchGestureRecognizer;              //@synthesize _photoZoomPinchGestureRecognizer=__photoZoomPinchGestureRecognizer - In the implementation block
@property (setter=_setPhotoZoomAnimator:,nonatomic,retain) PUTransitionViewAnimator * _photoZoomAnimator;                                               //@synthesize _photoZoomAnimator=__photoZoomAnimator - In the implementation block
@property (setter=_setPhotoZoomCell:,nonatomic,retain) PUPhotosZoomingSharingGridCell * _photoZoomCell;                                                 //@synthesize _photoZoomCell=__photoZoomCell - In the implementation block
@property (nonatomic,readonly) PHCachingImageManager * _cachingImageManager;                                                                            //@synthesize _cachingImageManager=__cachingImageManager - In the implementation block
@property (assign,setter=_setPreviousPreheatRect:,nonatomic) CGRect _previousPreheatRect;                                                               //@synthesize _previousPreheatRect=__previousPreheatRect - In the implementation block
@property (setter=_setPreheatedAssets:,nonatomic,retain) NSMutableSet * _preheatedAssets;                                                               //@synthesize _preheatedAssets=__preheatedAssets - In the implementation block
@property (nonatomic,readonly) PUActivityViewController * _activityViewController; 
@property (setter=_setEmbeddedActivityViewController:,nonatomic,retain) PUActivityViewController * _embeddedActivityViewController;                     //@synthesize _embeddedActivityViewController=__embeddedActivityViewController - In the implementation block
@property (setter=_setUnembeddedActivityViewController:,nonatomic,retain) PUActivityViewController * _unembeddedActivityViewController;                 //@synthesize _unembeddedActivityViewController=__unembeddedActivityViewController - In the implementation block
@property (setter=_setPreheatedActivityViewController:,nonatomic,retain) PUActivityViewController * _preheatedActivityViewController;                   //@synthesize _preheatedActivityViewController=__preheatedActivityViewController - In the implementation block
@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;                                                   //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (nonatomic,retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;                                                         //@synthesize photosSharingTransitionContext=_photosSharingTransitionContext - In the implementation block
@property (nonatomic,retain) PUAssetTransitionInfo * assetTransitionInfo;                                                                               //@synthesize assetTransitionInfo=_assetTransitionInfo - In the implementation block
@property (setter=_setLastKnownReferenceAsset:,nonatomic,retain) PHAsset * _lastKnownReferenceAsset;                                                    //@synthesize _lastKnownReferenceAsset=__lastKnownReferenceAsset - In the implementation block
@property (setter=_setLastKnownReferenceIndexPath:,nonatomic,retain) NSIndexPath * _lastKnownReferenceIndexPath;                                        //@synthesize _lastKnownReferenceIndexPath=__lastKnownReferenceIndexPath - In the implementation block
@property (assign,setter=_setLoopingPlaybackAllowed:,getter=_isLoopingPlaybackAllowed,nonatomic) BOOL _loopingPlaybackAllowed;                          //@synthesize _loopingPlaybackAllowed=__loopingPlaybackAllowed - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeManager * _badgeManager;                                                                                     //@synthesize _badgeManager=__badgeManager - In the implementation block
@property (setter=_pptSetOnDidEndScrollingBlock:,nonatomic,copy) id _pptOnDidEndScrollingBlock;                                                         //@synthesize _pptOnDidEndScrollingBlock=__pptOnDidEndScrollingBlock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> sharingLog; 
@property (nonatomic,readonly) NSMutableArray * _photoViewLoaderBlocks;                                                                                 //@synthesize _photoViewLoaderBlocks=__photoViewLoaderBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _livePhotoViewLoaderBlocks;                                                                             //@synthesize _livePhotoViewLoaderBlocks=__livePhotoViewLoaderBlocks - In the implementation block
@property (nonatomic,readonly) PHFetchResult * photoCollectionsFetchResult;                                                                             //@synthesize photoCollectionsFetchResult=_photoCollectionsFetchResult - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;                                                                                           //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * currentIndexPath; 
@property (nonatomic,readonly) PHAsset * currentAsset; 
@property (assign,nonatomic) BOOL allowAirPlayActivity;                                                                                                 //@synthesize allowAirPlayActivity=_allowAirPlayActivity - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                                                                                             //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (assign,nonatomic) const CFStringRef aggregateKey;                                                                                            //@synthesize aggregateKey=_aggregateKey - In the implementation block
@property (nonatomic,retain) PHPerson * person;                                                                                                         //@synthesize person=_person - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotosSharingViewControllerDelegate> delegate;                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id readyToInteractHandler;                                                                                                   //@synthesize readyToInteractHandler=_readyToInteractHandler - In the implementation block
@property (nonatomic,copy) id ppt_readyToInteractHandler;                                                                                               //@synthesize ppt_readyToInteractHandler=_ppt_readyToInteractHandler - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotosSharingPresentationCoordinator> presentationCoordinator;                                                 //@synthesize presentationCoordinator=_presentationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHFetchResult * assetCollectionsFetchResult; 
-(void)dealloc;
-(id<PUPhotosSharingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PUPhotosSharingViewControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)_numberOfSections;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(long long)_numberOfItemsInSection:(long long)arg1 ;
-(NSIndexPath *)currentIndexPath;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setSpec:(PUPhotosSharingViewControllerSpec *)arg1 ;
-(PUPhotosSharingViewControllerSpec *)spec;
-(void)_statusBarFrameDidChange:(id)arg1 ;
-(PHPerson *)person;
-(void)setPerson:(PHPerson *)arg1 ;
-(NSPredicate *)filterPredicate;
-(PUActivityViewController *)_embeddedActivityViewController;
-(PUActivityViewController *)_activityViewController;
-(UICollectionView *)mainCollectionView;
-(NSArray *)excludedActivityTypes;
-(void)activityViewControllerWillStartAirdropTransfer:(id)arg1 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)_next:(id)arg1 ;
-(id)assetsInAssetCollection:(id)arg1 ;
-(PHFetchResult *)assetCollectionsFetchResult;
-(PXAssetBadgeManager *)_badgeManager;
-(id)ppt_scrollView;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(PHAsset *)currentAsset;
-(id)_localizedSelectionTitle;
-(PHCachingImageManager *)_cachingImageManager;
-(id)_currentSelectedAssets;
-(CGRect)_previousPreheatRect;
-(BOOL)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1 ;
-(void)setAggregateKey:(const CFStringRef)arg1 ;
-(void)_incrementShareCountForSelectedAssets;
-(BOOL)allowAirPlayActivity;
-(void)setAllowAirPlayActivity:(BOOL)arg1 ;
-(const CFStringRef)aggregateKey;
-(id)readyToInteractHandler;
-(void)setReadyToInteractHandler:(id)arg1 ;
-(id)ppt_readyToInteractHandler;
-(void)setPpt_readyToInteractHandler:(id)arg1 ;
-(PUPhotoSelectionManager *)photoSelectionManager;
-(UICollectionViewLayout *)_transitionLayout;
-(void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1 ;
-(void)_updatePeripheralInterfaceAnimated:(BOOL)arg1 ;
-(void)_resetPreheating;
-(void)_updatePreheatedAssets;
-(void)_setPreviousPreheatRect:(CGRect)arg1 ;
-(void)_setMainCollectionView:(id)arg1 ;
-(void)_setMainCollectionViewLayout:(id)arg1 ;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 ;
-(CGRect)oneUpAssetTransitionAssetFinalFrame:(id)arg1 ;
-(void)setOneUpPhotosSharingTransitionContext:(id)arg1 ;
-(void)setOneUpPhotosSharingTransitionInfo:(id)arg1 ;
-(UIView *)embeddedActivityView;
-(CGRect)embeddedActivityViewFrameWhenShowing:(BOOL)arg1 ;
-(id)transitionCollectionView;
-(void)setPhotosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1 ;
-(void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionViewAnimatorDidEnd:(id)arg1 finished:(BOOL)arg2 ;
-(CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)_updateMainViewAnimated:(BOOL)arg1 ;
-(void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2 ;
-(void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)_handleTapAtIndexPath:(id)arg1 ;
-(void)_handleTapInMainCollectionView:(id)arg1 ;
-(void)_handlePhotoPinch:(id)arg1 ;
-(id)_assetAtIndexPath:(id)arg1 ;
-(void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1 ;
-(double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2 ;
-(id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2 ;
-(void)_beginZoomingForCellAtIndexPath:(id)arg1 ;
-(void)_endZoomingForCell;
-(CGRect)_frameAtIndexPath:(id)arg1 inView:(id)arg2 ;
-(NSMutableSet *)_preheatedAssets;
-(void)_setPreheatedAssets:(id)arg1 ;
-(PUPhotoPinchGestureRecognizer *)_photoZoomPinchGestureRecognizer;
-(void)_setPhotoZoomPinchGestureRecognizer:(id)arg1 ;
-(PUTransitionViewAnimator *)_photoZoomAnimator;
-(void)_setPhotoZoomAnimator:(id)arg1 ;
-(PUPhotosZoomingSharingGridCell *)_photoZoomCell;
-(void)_setPhotoZoomCell:(id)arg1 ;
-(void)_setTransitionLayout:(id)arg1 ;
-(void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3 ;
-(id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(double*)arg3 ;
-(void)setPhotoSelectionManager:(PUPhotoSelectionManager *)arg1 ;
-(void)_updateVisibleCells;
-(CGRect)frameForBadgeOfKind:(id)arg1 forItemFrame:(CGRect)arg2 atIndexPath:(id)arg3 ;
-(id)initWithPhotoCollectionsFetchResult:(id)arg1 assetsFetchResults:(id)arg2 filterPredicate:(id)arg3 selection:(id)arg4 ;
-(void)photoViewContentHelper:(id)arg1 livePhotoWillBeginPlaybackWithStyle:(long long)arg2 ;
-(unsigned long long)_indexForPhotoCollection:(id)arg1 ;
-(void)layout:(id)arg1 collectionView:(id)arg2 itemAtIndexPath:(id)arg3 didChangeToVisibleFrame:(CGRect)arg4 ;
-(double)layout:(id)arg1 collectionView:(id)arg2 bottomBadgeInsetforItemAtIndexPath:(id)arg3 ;
-(CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForBadgeViewOfKind:(id)arg3 forItemAtIndexPath:(id)arg4 ;
-(PUPhotosSharingTransitionContext *)photosSharingTransitionContext;
-(void)_setLastKnownReferenceIndexPath:(id)arg1 ;
-(BOOL)_embedsActivityView;
-(BOOL)_shouldShowAsset:(id)arg1 ;
-(CGSize)_sizeForItemAtIndexPath:(id)arg1 ;
-(void)_handleStillImageRequestResult:(id)arg1 info:(id)arg2 forCell:(id)arg3 indexPath:(id)arg4 ;
-(void)_updateAdditionalContentForAsset:(id)arg1 cell:(id)arg2 ;
-(void)_handleSchedulingStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3 ;
-(void)_handleStillPhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3 ;
-(void)_handleSchedulingLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3 ;
-(void)_handleLivePhotoRequestResult:(id)arg1 forCell:(id)arg2 tag:(long long)arg3 ;
-(void)_handleLoopingVideoRequestResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4 ;
-(void)_handleAnimatedImageResult:(id)arg1 forCell:(id)arg2 asset:(id)arg3 tag:(long long)arg4 ;
-(id)_indexPathInCollectionView:(id)arg1 closestToPoint:(CGPoint)arg2 ;
-(id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(double)arg2 ;
-(id)_photoCollectionAtIndex:(long long)arg1 ;
-(id)_indexPathOfAsset:(id)arg1 sectionHint:(long long)arg2 ;
-(void)_performBlockWhenNotRotating:(/*^block*/id)arg1 ;
-(id)_createActivityViewControllerForCurrentSelection;
-(void)_performPreheatingOfActivityViewController;
-(void)_createActivityViewControllerIfNeeded;
-(void)_handleActivityViewControllerReadyToInteractCompletion;
-(id)_requiredActivityViewController;
-(void)_prepareActivityViewControllerForUse;
-(void)_activityViewControllerDidDismissWithActivityType:(id)arg1 didComplete:(BOOL)arg2 ;
-(id)_activityAssetItemForAsset:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(id)_updatedActivityAssetItemsForAssets:(id)arg1 outAssetIdentifiers:(id)arg2 ;
-(void)_addActivityAssetItem:(id)arg1 ;
-(void)_removeActivityAssetItem:(id)arg1 ;
-(void)_setSelected:(BOOL)arg1 atIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)_isAnyAssetSelected;
-(void)_updateOptionView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_handleSelectionOption:(id)arg1 ;
-(void)_playLivePhotoHintIfNeededAtIndexPath:(id)arg1 ;
-(CGRect)_collectionViewContentFrame;
-(void)_invalidateEmbeddedActivityViewHeight;
-(double)_embeddedActivityViewHeight;
-(void)_getMainCollectionViewFrame:(CGRect*)arg1 collectionViewLayoutInsets:(UIEdgeInsets*)arg2 embeddedActivityViewFrame:(CGRect*)arg3 ;
-(id)_validIndexPathFromIndexPath:(id)arg1 ;
-(void)_updateLastKnownReferenceIndexPath;
-(void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2 ;
-(id)_optionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2 ;
-(BOOL)ppt_scrollToAssetAtRelativeIndex:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)ppt_faultInScollViewContentSize;
-(void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2 needsReloadData:(BOOL)arg3 ;
-(void)_statusBarFrameWillChange:(id)arg1 ;
-(void)_updateNavigationBarAnimated:(BOOL)arg1 ;
-(void)_setLoopingPlaybackAllowed:(BOOL)arg1 ;
-(id)_firstSelectedIndexPath;
-(NSObject*<OS_os_log>)sharingLog;
-(PHFetchResult *)photoCollectionsFetchResult;
-(id<PUPhotosSharingPresentationCoordinator>)presentationCoordinator;
-(void)setPresentationCoordinator:(id<PUPhotosSharingPresentationCoordinator>)arg1 ;
-(void)_setEmbeddedActivityView:(id)arg1 ;
-(PUPhotosSharingCollectionViewLayout *)mainCollectionViewLayout;
-(BOOL)_isViewInSyncWithModel;
-(void)_setViewInSyncWithModel:(BOOL)arg1 ;
-(void)_setEmbeddedActivityViewController:(id)arg1 ;
-(PUActivityViewController *)_unembeddedActivityViewController;
-(void)_setUnembeddedActivityViewController:(id)arg1 ;
-(PUActivityViewController *)_preheatedActivityViewController;
-(void)_setPreheatedActivityViewController:(id)arg1 ;
-(PUAssetTransitionInfo *)assetTransitionInfo;
-(void)setAssetTransitionInfo:(PUAssetTransitionInfo *)arg1 ;
-(PHAsset *)_lastKnownReferenceAsset;
-(void)_setLastKnownReferenceAsset:(id)arg1 ;
-(NSIndexPath *)_lastKnownReferenceIndexPath;
-(BOOL)_isLoopingPlaybackAllowed;
-(id)_pptOnDidEndScrollingBlock;
-(void)_pptSetOnDidEndScrollingBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)_photoViewLoaderBlocks;
-(NSMutableArray *)_livePhotoViewLoaderBlocks;
@end

