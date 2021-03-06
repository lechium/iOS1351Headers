/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCollectionsDataSourceManager.h>
#import <libobjc.A.dylib/PXCollectionFetchOperationDelegate.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHCollectionList, PHFetchResult, PHPhotoLibrary, NSMutableDictionary, NSOperationQueue, NSMutableSet, NSArray, PXPhotoKitCollectionsDataSourceManagerConfiguration, PXPhotoKitCollectionsDataSource, NSString;

@interface PXPhotoKitCollectionsDataSourceManager : PXCollectionsDataSourceManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver> {

	PHCollectionList* _collectionList;
	PHFetchResult* _collectionsFetchResult;
	PHPhotoLibrary* _photoLibrary;
	NSMutableDictionary* _subCollectionFetchResultsCache;
	NSMutableDictionary* _subCollectionKeyAssetFetchResultsCache;
	NSMutableDictionary* _collectionIndexPathByCollection;
	NSOperationQueue* _subCollectionFetchOperationQueue;
	NSOperationQueue* _subCollectionKeyAssetsFetchOperationQueue;
	BOOL _performedBackgroundFetching;
	BOOL _needsBackgroundFetching;
	BOOL _prepareBackgroundFetching;
	BOOL _startBackgroundFetching;
	BOOL _publishChangesScheduledOnRunLoop;
	NSMutableDictionary* _fetchResultsByPendingChangedCollections;
	NSMutableSet* _changedSubCollections;
	BOOL _isPhotoLibraryEmpty;
	NSMutableDictionary* __subCollectionActiveCountFetchOperations;
	NSMutableDictionary* __subCollectionActiveKeyAssetsFetchOperations;
	NSArray* __collectionListBySection;
	NSArray* __collectionsFetchResultBySection;
	NSArray* __virtualCollections;
	PXPhotoKitCollectionsDataSourceManagerConfiguration* _configuration;

}

@property (nonatomic,readonly) NSMutableDictionary * _subCollectionActiveCountFetchOperations;                                    //@synthesize _subCollectionActiveCountFetchOperations=__subCollectionActiveCountFetchOperations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _subCollectionActiveKeyAssetsFetchOperations;                                //@synthesize _subCollectionActiveKeyAssetsFetchOperations=__subCollectionActiveKeyAssetsFetchOperations - In the implementation block
@property (setter=_setCollectionListBySection:,nonatomic,retain) NSArray * _collectionListBySection;                              //@synthesize _collectionListBySection=__collectionListBySection - In the implementation block
@property (setter=_setCollectionsFetchResultBySection:,nonatomic,retain) NSArray * _collectionsFetchResultBySection;              //@synthesize _collectionsFetchResultBySection=__collectionsFetchResultBySection - In the implementation block
@property (nonatomic,retain) NSArray * _virtualCollections;                                                                       //@synthesize _virtualCollections=__virtualCollections - In the implementation block
@property (readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration * configuration;                                         //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NSObject*<OS_os_log> dataSourceManagerLog; 
@property (nonatomic,readonly) long long numberOfPendingKeyAssetFetches; 
@property (nonatomic,readonly) PHCollectionList * collectionList;                                                                 //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,readonly) PHFetchResult * collectionsFetchResult;                                                            //@synthesize collectionsFetchResult=_collectionsFetchResult - In the implementation block
@property (nonatomic,readonly) PXPhotoKitCollectionsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedKeyAssetsFetchQueue;
+(id)sharedSubCollectionsFetchQueue;
-(void)dealloc;
-(BOOL)_isEmpty;
-(id)initWithConfiguration:(id)arg1 ;
-(PXPhotoKitCollectionsDataSourceManagerConfiguration *)configuration;
-(BOOL)canEditAlbums;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(PHCollectionList *)collectionList;
-(id)createInitialDataSource;
-(PHFetchResult *)collectionsFetchResult;
-(id)_subitemChangeDetailsByItemBySection;
-(id)_newDataSource;
-(void)startBackgroundFetchingIfNeeded;
-(id)indexPathForCollection:(id)arg1 ;
-(NSArray *)_collectionListBySection;
-(NSArray *)_collectionsFetchResultBySection;
-(NSArray *)_virtualCollections;
-(void)collectionFetchOperationDidBegin:(id)arg1 ;
-(void)collectionFetchOperationDidComplete:(id)arg1 ;
-(void)collectionFetchOperationDidCancel:(id)arg1 ;
-(void)_updateFilteredCollectionsFetchResults;
-(unsigned long long)_fixedOrderPriorityForVirtualCollection:(id)arg1 ;
-(id)_getSectionedCollectionListAndFetchResultsFromFetchResult:(id)arg1 ;
-(id)_filterFetchResult:(id)arg1 ;
-(BOOL)_shouldIncludeCollection:(id)arg1 ;
-(void)_updateCollectionIndexMappingForFilteredFetchResults;
-(void)_enumerateAllPhotoKitCollectionsUsingBlock:(/*^block*/id)arg1 ;
-(long long)estimatedCountForAssetCollection:(id)arg1 ;
-(BOOL)_containsAnyAssets:(id)arg1 ;
-(BOOL)_containsAnyAlbumsWithAssets:(id)arg1 ;
-(void)_recursivelyEnumerateAssetCollectionsInFetchResult:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2 ;
-(void)prepareBackgroundFetchingIfNeeded;
-(void)_prepareBackgroundFetchingIfNeededForCollection:(id)arg1 ;
-(void)_startFetchOperations;
-(void)_fetchAndUpdateCountsForCollection:(id)arg1 ;
-(void)_updateVisibleCountsForCollection:(id)arg1 withWithFetchResult:(id)arg2 ;
-(void)_startKeyAssetsFetchOperations;
-(void)_fetchKeyAssetsForCollection:(id)arg1 ;
-(void)_updateKeyAssetsCacheForCollection:(id)arg1 withFetchResult:(id)arg2 otherFetchResultsByAssetCollection:(id)arg3 ;
-(void)_updateDataSourceForChangeOnCollection:(id)arg1 withFetchResult:(id)arg2 ;
-(void)_publishPendingCollectionChanges;
-(void)_endSignpostForFetchOperation:(id)arg1 ;
-(id)keyAssetsFetchResultForCollection:(id)arg1 ;
-(id)assetsFetchResultForCollection:(id)arg1 ;
-(BOOL)hasAssetsFetchResultForCollection:(id)arg1 ;
-(id)fetchResultForSubCollection:(id)arg1 ;
-(id)uncachedFetchResultForSubCollection:(id)arg1 ;
-(BOOL)isCachedFetchResultOutdatedForCollection:(id)arg1 ;
-(id)_cachedKeyAssetFetchResultForSubCollection:(id)arg1 ;
-(id)uncachedKeyAssetFetchResultForSubCollection:(id)arg1 ;
-(BOOL)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 fetchResultChangeDetails:(id)arg2 ;
-(id)_changedSubCollectionIndexesBySections;
-(BOOL)_needsKeyAssetsFetchResultForCollection:(id)arg1 ;
-(BOOL)_needsFetchResultForCollection:(id)arg1 ;
-(BOOL)_isPlacesAlbumAssetCollection:(id)arg1 ;
-(BOOL)_isImportsAssetCollection:(id)arg1 ;
-(BOOL)containsAnyAssets:(id)arg1 ;
-(BOOL)canDeleteCollection:(id)arg1 ;
-(BOOL)canRenameCollection:(id)arg1 ;
-(BOOL)canReorderCollection:(id)arg1 ;
-(void)startCoalescingFetchResultChanges;
-(void)stopCoalescingAndPublishFetchResultChanges;
-(void)waitUntilBackgroundFetchingFinishedWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)numberOfPendingKeyAssetFetches;
-(NSObject*<OS_os_log>)dataSourceManagerLog;
-(NSMutableDictionary *)_subCollectionActiveCountFetchOperations;
-(NSMutableDictionary *)_subCollectionActiveKeyAssetsFetchOperations;
-(void)_setCollectionListBySection:(id)arg1 ;
-(void)_setCollectionsFetchResultBySection:(id)arg1 ;
-(void)set_virtualCollections:(NSArray *)arg1 ;
@end

