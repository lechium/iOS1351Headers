/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUStorageManagementBaseController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperDelegate.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperAssetDisplayDelegate.h>
#import <libobjc.A.dylib/PUDeletePhotosActionControllerDelegate.h>
#import <libobjc.A.dylib/PUVideoListAssetExpungeActionPerformerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSMutableArray, UIBarButtonItem, UITableViewCell, PHImageRequestOptions, PUOneUpPresentationHelper, PXPhotosDataSource, PXPhotosDataSourceConfiguration, PXPhotoKitAssetsDataSourceManager, UIViewController, UITableView, NSIndexPath, PUVideoListContentUnavailableView, NSString;

@interface PUVideoListViewController : PUStorageManagementBaseController <UITableViewDataSource, UITableViewDelegate, UITableViewDataSource, UITableViewDelegate, PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PUDeletePhotosActionControllerDelegate, PUVideoListAssetExpungeActionPerformerDelegate, UIScrollViewDelegate> {

	NSMutableArray* _selectedIndexPathForDelete;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	UITableViewCell* _videoCell;
	BOOL _needsUpdateCellConfiguration;
	BOOL __viewInSyncWithModel;
	BOOL __assetsFetchResultIsValid;
	PHImageRequestOptions* __imageRequestOptions;
	PUOneUpPresentationHelper* __oneUpPresentationHelper;
	PXPhotosDataSource* __dataSource;
	PXPhotosDataSourceConfiguration* __dataSourceManagerConfiguration;
	PXPhotoKitAssetsDataSourceManager* __photoKitDataSourceManager;
	UIViewController* __expungeActionSheet;
	UITableView* __mainTableView;
	NSIndexPath* __lastNavigatedAssetIndexPath;
	PUVideoListContentUnavailableView* __contentUnavailableView;

}

@property (setter=_setOneUpPresentationHelper:,nonatomic,retain) PUOneUpPresentationHelper * _oneUpPresentationHelper;                                  //@synthesize _oneUpPresentationHelper=__oneUpPresentationHelper - In the implementation block
@property (setter=_setDataSource:,nonatomic,retain) PXPhotosDataSource * _dataSource;                                                                   //@synthesize _dataSource=__dataSource - In the implementation block
@property (setter=_setDataSourceManagerConfiguration:,nonatomic,retain) PXPhotosDataSourceConfiguration * _dataSourceManagerConfiguration;              //@synthesize _dataSourceManagerConfiguration=__dataSourceManagerConfiguration - In the implementation block
@property (nonatomic,retain) PXPhotoKitAssetsDataSourceManager * _photoKitDataSourceManager;                                                            //@synthesize _photoKitDataSourceManager=__photoKitDataSourceManager - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * _imageRequestOptions;                                                                            //@synthesize _imageRequestOptions=__imageRequestOptions - In the implementation block
@property (assign,setter=_setExpungeActionSheet:,nonatomic,__weak) UIViewController * _expungeActionSheet;                                              //@synthesize _expungeActionSheet=__expungeActionSheet - In the implementation block
@property (setter=_setMainTableView:,nonatomic,retain) UITableView * _mainTableView;                                                                    //@synthesize _mainTableView=__mainTableView - In the implementation block
@property (assign,setter=_setViewInSyncWithModel:,getter=_isViewInSyncWithModel,nonatomic) BOOL _viewInSyncWithModel;                                   //@synthesize _viewInSyncWithModel=__viewInSyncWithModel - In the implementation block
@property (assign,setter=_setAssetsFetchResultIsValid:,nonatomic) BOOL _assetsFetchResultIsValid;                                                       //@synthesize _assetsFetchResultIsValid=__assetsFetchResultIsValid - In the implementation block
@property (setter=_setLastNavigatedAssetIndexPath:,nonatomic,retain) NSIndexPath * _lastNavigatedAssetIndexPath;                                        //@synthesize _lastNavigatedAssetIndexPath=__lastNavigatedAssetIndexPath - In the implementation block
@property (setter=_setContentUnavailableView:,nonatomic,retain) PUVideoListContentUnavailableView * _contentUnavailableView;                            //@synthesize _contentUnavailableView=__contentUnavailableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PXPhotosDataSource *)_dataSource;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_cancelBarButtonItem;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)_setDataSource:(id)arg1 ;
-(BOOL)_needsUpdate;
-(id)_editBarButtonItem;
-(id)_deleteBarButtonItem;
-(void)deleteSelectedItems:(id)arg1 ;
-(PUVideoListContentUnavailableView *)_contentUnavailableView;
-(void)_updateIfNeeded;
-(id)assetsInAssetCollection:(id)arg1 ;
-(id)assetCollectionsFetchResult;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(PHImageRequestOptions *)_imageRequestOptions;
-(PXPhotoKitAssetsDataSourceManager *)_photoKitDataSourceManager;
-(void)_setContentUnavailableView:(id)arg1 ;
-(PXPhotosDataSourceConfiguration *)_dataSourceManagerConfiguration;
-(void)updateInterfaceLayoutIfNecessary;
-(void)updateListCellForItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateMainView;
-(void)_invalidatePreparedCellsConfiguration;
-(UITableView *)_mainTableView;
-(void)_setMainTableView:(id)arg1 ;
-(void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2 ;
-(long long)preferredAlertControllerStyleForDeletePhotosActionController:(id)arg1 ;
-(long long)oneUpPresentationHelper:(id)arg1 transitionTypeWithProposedTransitionType:(long long)arg2 ;
-(void)oneUpPresentationHelper:(id)arg1 didDismissOneUpViewController:(id)arg2 ;
-(long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1 ;
-(id)oneUpPresentationHelperViewController:(id)arg1 ;
-(void)_ensureOneUpPresentationHelper;
-(PUOneUpPresentationHelper *)_oneUpPresentationHelper;
-(void)_setOneUpPresentationHelper:(id)arg1 ;
-(id)photoCollectionAtIndex:(unsigned long long)arg1 ;
-(CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 contentsRect:(CGRect*)arg4 ;
-(void)processDataSourceChange:(id)arg1 ;
-(void)_updateNavigationBarAnimated:(BOOL)arg1 ;
-(BOOL)_isViewInSyncWithModel;
-(void)_setViewInSyncWithModel:(BOOL)arg1 ;
-(void)actionPerformer:(id)arg1 stopExcludingAssetsFromDataSource:(id)arg2 ;
-(void)actionPerformer:(id)arg1 excludeAssetsFromDataSource:(id)arg2 ;
-(id)_videoCell;
-(void)_reloadContentView;
-(void)_setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateSubviewsOrderingAndVisibilityWithVideoCounts:(unsigned long long)arg1 ;
-(void)_installContentUnavailableView;
-(void)_installVideoListView;
-(void)_updatePreparedCellsConfiguration;
-(id)_tableViewCellContentViewAtIndexPath:(id)arg1 ;
-(void)selectVideoItems:(id)arg1 ;
-(void)_addIndexPathToDeleteSelection:(id)arg1 ;
-(unsigned long long)_numberOfSelectedCellsForDelete;
-(void)_removeIndexPathFromDeleteSelection:(id)arg1 ;
-(void)_clearAllIndexPathsForDeleteSelection;
-(void)cancelEditingMode:(id)arg1 ;
-(void)_deleteItemsAtSelectedIndexes:(id)arg1 ;
-(id)_headerViewForTableView:(id)arg1 ;
-(void)_configureTableView:(id)arg1 ;
-(id)_videoThumbnailViewForAssetAtIndexPath:(id)arg1 ;
-(void)_presentOneUpViewControllerForAssetAtInderxPath:(id)arg1 ;
-(void)_updateAssetsFetchResultIfNeeded;
-(BOOL)_shouldUpdateTableViewForDataSource:(id)arg1 ;
-(void)updateVideoListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setDataSourceManagerConfiguration:(id)arg1 ;
-(void)set_photoKitDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1 ;
-(UIViewController *)_expungeActionSheet;
-(void)_setExpungeActionSheet:(id)arg1 ;
-(BOOL)_assetsFetchResultIsValid;
-(void)_setAssetsFetchResultIsValid:(BOOL)arg1 ;
-(NSIndexPath *)_lastNavigatedAssetIndexPath;
-(void)_setLastNavigatedAssetIndexPath:(id)arg1 ;
@end

