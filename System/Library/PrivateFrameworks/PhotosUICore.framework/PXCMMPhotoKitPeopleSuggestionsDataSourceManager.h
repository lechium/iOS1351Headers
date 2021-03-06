/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCMMPeopleSuggestionsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PXCMMPhotoKitPeopleSuggestionsDataSourceState, NSMutableOrderedSet, PHAssetCollection, PXUpdater, PXCMMPhotoKitPeopleSuggestionsDataSource, NSString;

@interface PXCMMPhotoKitPeopleSuggestionsDataSourceManager : PXCMMPeopleSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver> {

	BOOL _isPrefetching;
	BOOL _hasCreatedInitialDataSource;
	BOOL _needsDeferredLoading;
	BOOL _hasStartedLoadingFinalDataSource;
	BOOL _hasFinishedLoadingFinalDataSource;
	PXCMMPhotoKitPeopleSuggestionsDataSourceState* __state;
	NSMutableOrderedSet* __remainingPeopleToFetch;
	PHAssetCollection* _assetCollection;
	PXUpdater* _updater;

}

@property (nonatomic,readonly) PXCMMPhotoKitPeopleSuggestionsDataSource * dataSource; 
@property (nonatomic,retain) PXCMMPhotoKitPeopleSuggestionsDataSourceState * _state;               //@synthesize _state=__state - In the implementation block
@property (retain) NSMutableOrderedSet * _remainingPeopleToFetch;                                  //@synthesize _remainingPeopleToFetch=__remainingPeopleToFetch - In the implementation block
@property (nonatomic,retain) PHAssetCollection * assetCollection;                                  //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,retain) PXUpdater * updater;                                                  //@synthesize updater=_updater - In the implementation block
@property (assign,nonatomic) BOOL hasStartedLoadingFinalDataSource;                                //@synthesize hasStartedLoadingFinalDataSource=_hasStartedLoadingFinalDataSource - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedLoadingFinalDataSource;                               //@synthesize hasFinishedLoadingFinalDataSource=_hasFinishedLoadingFinalDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWorkerQueue;
+(id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)arg1 ;
+(id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)arg1 ;
-(PXCMMPhotoKitPeopleSuggestionsDataSourceState *)_state;
-(id)people;
-(void)startLoading;
-(BOOL)isLoading;
-(void)cancelLoading;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2 ;
-(void)setUpdater:(PXUpdater *)arg1 ;
-(PXUpdater *)updater;
-(id)createInitialDataSource;
-(PHAssetCollection *)assetCollection;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(id)_createSuggestionsDataSourceFromCurrentState;
-(void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 ;
-(void)set_state:(PXCMMPhotoKitPeopleSuggestionsDataSourceState *)arg1 ;
-(id)initWithPeopleFetchResult:(id)arg1 ;
-(id)_initWithAssetCollection:(id)arg1 ;
-(void)boostLoading;
-(void)_loadFinalDataSource;
-(void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)arg1 ;
-(void)startPrefetchingIfNeeded;
-(void)_workerQueue_fetchRemainingPeopleInBatches;
-(NSMutableOrderedSet *)_remainingPeopleToFetch;
-(void)set_remainingPeopleToFetch:(NSMutableOrderedSet *)arg1 ;
-(BOOL)hasStartedLoadingFinalDataSource;
-(void)setHasStartedLoadingFinalDataSource:(BOOL)arg1 ;
-(BOOL)hasFinishedLoadingFinalDataSource;
-(void)setHasFinishedLoadingFinalDataSource:(BOOL)arg1 ;
@end

