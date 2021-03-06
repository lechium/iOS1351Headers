/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PUImportActionCoordinatorDelegate.h>
#import <libobjc.A.dylib/PXImportAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXImportControllerNotificationsReceiver.h>
#import <libobjc.A.dylib/PUImportOneUpCellDisplayDelegate.h>
#import <libobjc.A.dylib/PUImportOneUpScrubberCellDisplayDelegate.h>
#import <libobjc.A.dylib/PUSelectableAssetCollectionViewLayoutDelegate.h>
#import <libobjc.A.dylib/PUReviewScrubberDataSource.h>
#import <libobjc.A.dylib/PUReviewScrubberDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PUImportOneUpTransitioning.h>

@class PUReviewScrubber, PXAssetReference, PUImportOneUpViewControllerSpecManager, PXImportController, PXImportAssetsDataSourceManager, PXImportAssetsDataSource, PUImportChangeDetailsCollectionViewHelper, PXMediaProvider, UICollectionView, PUSelectableAssetCollectionViewLayout, UIBarButtonItem, PLRoundProgressView, PUImportActionCoordinator, PXNavigationTitleView, PLDateRangeFormatter, UITapGestureRecognizer, NSIndexPath, NSMutableSet, PFCoalescer, NSMutableArray, UICollectionViewLayout, NSString;

@interface PUImportOneUpViewController : UIViewController <PUImportActionCoordinatorDelegate, PXImportAssetsDataSourceManagerObserver, PXImportControllerNotificationsReceiver, PUImportOneUpCellDisplayDelegate, PUImportOneUpScrubberCellDisplayDelegate, PUSelectableAssetCollectionViewLayoutDelegate, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PXChangeObserver, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, PUImportOneUpTransitioning> {

	BOOL _isCommitingPreview;
	BOOL _performingDataSourceChange;
	BOOL _allowsSelection;
	BOOL _updatingContentOffsetFromScrubbing;
	BOOL _hasPerformedNavigationToStartingAsset;
	BOOL _loadLargeThumbnailsInCustomOrder;
	BOOL _animatingTransition;
	PUReviewScrubber* _reviewScrubber;
	PXAssetReference* _startingAssetReference;
	PUImportOneUpViewControllerSpecManager* _specManager;
	PXImportController* _importController;
	unsigned long long _presentationFilter;
	PXImportAssetsDataSourceManager* _importDataSourceManager;
	PXImportAssetsDataSource* _importDataSource;
	PXImportAssetsDataSource* _pendingDataSource;
	PUImportChangeDetailsCollectionViewHelper* _changeDetailsHelper;
	PXMediaProvider* _mediaProvider;
	UICollectionView* _collectionView;
	PUSelectableAssetCollectionViewLayout* _collectionViewLayout;
	UIBarButtonItem* _cancelBarButtonItem;
	UIBarButtonItem* _importBarButtonItem;
	UIBarButtonItem* _stopImportBarButtonItem;
	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _progressButtonItem;
	PLRoundProgressView* _roundProgressView;
	UIBarButtonItem* _bottomSpacerBarButtonItem;
	PUImportActionCoordinator* _actionCoordinator;
	PXNavigationTitleView* _navigationTitleView;
	PLDateRangeFormatter* _dayFormatter;
	PLDateRangeFormatter* _timeFormatter;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSIndexPath* _inFlightReferenceIndexPath;
	NSMutableSet* _thumbnailLoadableItemWhitelist;
	NSMutableSet* _itemsWithInvalidImageSizes;
	PFCoalescer* _relayoutCoalescer;
	NSMutableArray* _itemsNeedingRelayout;
	UICollectionViewLayout* _transitionLayout;

}

@property (nonatomic,retain) PUImportOneUpViewControllerSpecManager * specManager;                         //@synthesize specManager=_specManager - In the implementation block
@property (nonatomic,retain) PXImportController * importController;                                        //@synthesize importController=_importController - In the implementation block
@property (assign,nonatomic) unsigned long long presentationFilter;                                        //@synthesize presentationFilter=_presentationFilter - In the implementation block
@property (nonatomic,retain) PXImportAssetsDataSourceManager * importDataSourceManager;                    //@synthesize importDataSourceManager=_importDataSourceManager - In the implementation block
@property (nonatomic,retain) PXImportAssetsDataSource * importDataSource;                                  //@synthesize importDataSource=_importDataSource - In the implementation block
@property (assign,nonatomic) BOOL performingDataSourceChange;                                              //@synthesize performingDataSourceChange=_performingDataSourceChange - In the implementation block
@property (nonatomic,retain) PXImportAssetsDataSource * pendingDataSource;                                 //@synthesize pendingDataSource=_pendingDataSource - In the implementation block
@property (nonatomic,retain) PUImportChangeDetailsCollectionViewHelper * changeDetailsHelper;              //@synthesize changeDetailsHelper=_changeDetailsHelper - In the implementation block
@property (nonatomic,retain) PXMediaProvider * mediaProvider;                                              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) PUSelectableAssetCollectionViewLayout * collectionViewLayout;               //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) PUReviewScrubber * reviewScrubber;                                          //@synthesize reviewScrubber=_reviewScrubber - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelBarButtonItem;                                      //@synthesize cancelBarButtonItem=_cancelBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * importBarButtonItem;                                      //@synthesize importBarButtonItem=_importBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * stopImportBarButtonItem;                                  //@synthesize stopImportBarButtonItem=_stopImportBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * deleteBarButtonItem;                                      //@synthesize deleteBarButtonItem=_deleteBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * progressButtonItem;                                       //@synthesize progressButtonItem=_progressButtonItem - In the implementation block
@property (nonatomic,retain) PLRoundProgressView * roundProgressView;                                      //@synthesize roundProgressView=_roundProgressView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * bottomSpacerBarButtonItem;                                //@synthesize bottomSpacerBarButtonItem=_bottomSpacerBarButtonItem - In the implementation block
@property (nonatomic,retain) PUImportActionCoordinator * actionCoordinator;                                //@synthesize actionCoordinator=_actionCoordinator - In the implementation block
@property (assign,nonatomic) BOOL allowsSelection;                                                         //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (nonatomic,readonly) PXNavigationTitleView * navigationTitleView;                                //@synthesize navigationTitleView=_navigationTitleView - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * dayFormatter;                                        //@synthesize dayFormatter=_dayFormatter - In the implementation block
@property (nonatomic,readonly) PLDateRangeFormatter * timeFormatter;                                       //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSIndexPath * inFlightReferenceIndexPath;                                   //@synthesize inFlightReferenceIndexPath=_inFlightReferenceIndexPath - In the implementation block
@property (nonatomic,readonly) BOOL updatingContentOffsetFromScrubbing;                                    //@synthesize updatingContentOffsetFromScrubbing=_updatingContentOffsetFromScrubbing - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedNavigationToStartingAsset;                                   //@synthesize hasPerformedNavigationToStartingAsset=_hasPerformedNavigationToStartingAsset - In the implementation block
@property (assign,nonatomic) BOOL loadLargeThumbnailsInCustomOrder;                                        //@synthesize loadLargeThumbnailsInCustomOrder=_loadLargeThumbnailsInCustomOrder - In the implementation block
@property (nonatomic,retain) NSMutableSet * thumbnailLoadableItemWhitelist;                                //@synthesize thumbnailLoadableItemWhitelist=_thumbnailLoadableItemWhitelist - In the implementation block
@property (nonatomic,retain) NSMutableSet * itemsWithInvalidImageSizes;                                    //@synthesize itemsWithInvalidImageSizes=_itemsWithInvalidImageSizes - In the implementation block
@property (nonatomic,retain) PFCoalescer * relayoutCoalescer;                                              //@synthesize relayoutCoalescer=_relayoutCoalescer - In the implementation block
@property (nonatomic,retain) NSMutableArray * itemsNeedingRelayout;                                        //@synthesize itemsNeedingRelayout=_itemsNeedingRelayout - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout * transitionLayout;                                    //@synthesize transitionLayout=_transitionLayout - In the implementation block
@property (assign,getter=isAnimatingTransition,nonatomic) BOOL animatingTransition;                        //@synthesize animatingTransition=_animatingTransition - In the implementation block
@property (nonatomic,readonly) PXAssetReference * startingAssetReference;                                  //@synthesize startingAssetReference=_startingAssetReference - In the implementation block
@property (assign,nonatomic) BOOL isCommitingPreview;                                                      //@synthesize isCommitingPreview=_isCommitingPreview - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(UIBarButtonItem *)cancelBarButtonItem;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(PUSelectableAssetCollectionViewLayout *)collectionViewLayout;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)allowsSelection;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(PLDateRangeFormatter *)timeFormatter;
-(void)_cancelAction:(id)arg1 ;
-(id)_currentAsset;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)deleteItems:(id)arg1 ;
-(UIBarButtonItem *)deleteBarButtonItem;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_deleteAction:(id)arg1 ;
-(void)relayoutCollectionView;
-(id)assetAtIndexPath:(id)arg1 ;
-(PXMediaProvider *)mediaProvider;
-(PXImportController *)importController;
-(void)setImportController:(PXImportController *)arg1 ;
-(void)importControllerProgressDidChange:(id)arg1 completedItemCount:(id)arg2 totalItemCount:(id)arg3 ;
-(void)setMediaProvider:(PXMediaProvider *)arg1 ;
-(PUImportOneUpViewControllerSpecManager *)specManager;
-(PXAssetReference *)startingAssetReference;
-(long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1 ;
-(void)setSpecManager:(PUImportOneUpViewControllerSpecManager *)arg1 ;
-(PLDateRangeFormatter *)dayFormatter;
-(void)handleNewDataSource:(id)arg1 ;
-(UICollectionViewLayout *)transitionLayout;
-(void)setTransitionLayout:(UICollectionViewLayout *)arg1 ;
-(CGRect)layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(CGRect)arg3 atIndexPath:(id)arg4 ;
-(CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)reviewScrubberDidScrub:(id)arg1 ;
-(void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfSectionsInReviewScrubber:(id)arg1 ;
-(unsigned long long)reviewScrubber:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2 ;
-(BOOL)reviewScrubber:(id)arg1 shouldProvideFeedbackForCellAtIndexPath:(id)arg2 ;
-(long long)_interfaceOrientationFromDeviceOrientation:(long long)arg1 ;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)_updateBarItemsAnimated:(BOOL)arg1 ;
-(CGRect)selectionBadgeFrameForItemFrame:(CGRect)arg1 atIndexPath:(id)arg2 ;
-(void)_handleTapAtIndexPath:(id)arg1 ;
-(void)_handleTapInMainCollectionView:(id)arg1 ;
-(double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2 ;
-(id)_indexPathInCollectionView:(id)arg1 closestToPoint:(CGPoint)arg2 excludingIndexPath:(id)arg3 ;
-(unsigned short)reviewScrubberImageFormat;
-(void)_updateReviewScrubberFromContentOffset;
-(void)_toggleCurrentPickStatusAtIndexPath:(id)arg1 ;
-(void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1 ;
-(void)_dismissReviewControllerWithAsset:(id)arg1 ;
-(void)actionCoordinatorDidBeginDelete:(id)arg1 ;
-(void)actionCoordinatorDidEndDelete:(id)arg1 ;
-(void)actionCoordinatorWillBeginDelete:(id)arg1 ;
-(void)actionCoordinatorDidCancelImport:(id)arg1 ;
-(void)actionCoordinatorDidBeginImport:(id)arg1 ;
-(void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3 ;
-(id)importDestinationForActionCoordinator:(id)arg1 ;
-(void)actionCoordinatorWillBeginImport:(id)arg1 ;
-(PXImportAssetsDataSource *)importDataSource;
-(void)setImportDataSource:(PXImportAssetsDataSource *)arg1 ;
-(void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2 ;
-(void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2 ;
-(long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareTransitionItemViewForDestination:(id)arg1 ;
-(CGRect)targetFrameForTransitionItem:(id)arg1 ;
-(id)transitionItemsForContext:(id)arg1 ;
-(void)didTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionItems:(id)arg3 ;
-(void)willTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionItems:(id)arg3 ;
-(long long)importOneUpScrubberCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)importOneUpScrubberCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2 ;
-(id)initWithImportController:(id)arg1 mediaProvider:(id)arg2 startingAssetReference:(id)arg3 presentationFilter:(unsigned long long)arg4 ;
-(void)_cancelAlerts;
-(void)setImportDataSourceManager:(PXImportAssetsDataSourceManager *)arg1 ;
-(void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateToolbarItems;
-(void)updateNavigationItemTitle;
-(void)updateMainViewAnimated:(BOOL)arg1 ;
-(void)getMainCollectionViewFrame:(CGRect*)arg1 collectionViewLayoutInsets:(UIEdgeInsets*)arg2 orientation:(long long)arg3 ;
-(void)getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2 ;
-(void)beginCenterPrioritizedThumbnailLoading;
-(void)loadCenterPrioritizedVisibleThumbnails;
-(id)importAssetAtIndexPath:(id)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(void)pageToItemOrNearestIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)pageToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)indexPathOfCenterVisibleItemInCollectionView:(id)arg1 ;
-(id)badgeViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2 ;
-(void)updateCollectionViewLayoutInsets;
-(PUReviewScrubber *)reviewScrubber;
-(double)absoluteProgressFromCurrentContentOffset;
-(void)_cancelOneUpView;
-(void)_importAction:(id)arg1 ;
-(void)_stopImportAction:(id)arg1 ;
-(void)_importControllerDidEndAction;
-(void)_importControllerWillBeginAction;
-(void)invalidateLayoutIfNeededForImportItem:(id)arg1 ;
-(CGRect)imageRectFromPhotoView:(id)arg1 ;
-(long long)previousSectionWithItems:(long long)arg1 ;
-(long long)nextSectionWithItems:(long long)arg1 ;
-(id)previousIndexPath:(id)arg1 ;
-(id)nextIndexPath:(id)arg1 ;
-(BOOL)isCommitingPreview;
-(void)setIsCommitingPreview:(BOOL)arg1 ;
-(unsigned long long)presentationFilter;
-(void)setPresentationFilter:(unsigned long long)arg1 ;
-(PXImportAssetsDataSourceManager *)importDataSourceManager;
-(BOOL)performingDataSourceChange;
-(void)setPerformingDataSourceChange:(BOOL)arg1 ;
-(PXImportAssetsDataSource *)pendingDataSource;
-(void)setPendingDataSource:(PXImportAssetsDataSource *)arg1 ;
-(PUImportChangeDetailsCollectionViewHelper *)changeDetailsHelper;
-(void)setChangeDetailsHelper:(PUImportChangeDetailsCollectionViewHelper *)arg1 ;
-(UIBarButtonItem *)importBarButtonItem;
-(UIBarButtonItem *)stopImportBarButtonItem;
-(UIBarButtonItem *)progressButtonItem;
-(PLRoundProgressView *)roundProgressView;
-(void)setRoundProgressView:(PLRoundProgressView *)arg1 ;
-(UIBarButtonItem *)bottomSpacerBarButtonItem;
-(PUImportActionCoordinator *)actionCoordinator;
-(void)setActionCoordinator:(PUImportActionCoordinator *)arg1 ;
-(PXNavigationTitleView *)navigationTitleView;
-(NSIndexPath *)inFlightReferenceIndexPath;
-(BOOL)updatingContentOffsetFromScrubbing;
-(BOOL)hasPerformedNavigationToStartingAsset;
-(void)setHasPerformedNavigationToStartingAsset:(BOOL)arg1 ;
-(BOOL)loadLargeThumbnailsInCustomOrder;
-(void)setLoadLargeThumbnailsInCustomOrder:(BOOL)arg1 ;
-(NSMutableSet *)thumbnailLoadableItemWhitelist;
-(void)setThumbnailLoadableItemWhitelist:(NSMutableSet *)arg1 ;
-(NSMutableSet *)itemsWithInvalidImageSizes;
-(void)setItemsWithInvalidImageSizes:(NSMutableSet *)arg1 ;
-(PFCoalescer *)relayoutCoalescer;
-(void)setRelayoutCoalescer:(PFCoalescer *)arg1 ;
-(NSMutableArray *)itemsNeedingRelayout;
-(void)setItemsNeedingRelayout:(NSMutableArray *)arg1 ;
-(BOOL)isAnimatingTransition;
-(void)setAnimatingTransition:(BOOL)arg1 ;
@end

