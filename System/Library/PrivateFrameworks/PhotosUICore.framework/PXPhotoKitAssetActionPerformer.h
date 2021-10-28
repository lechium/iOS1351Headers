/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXAssetActionPerformer.h>

@class NSArray, NSDictionary, PXPhotoKitAssetsDataSourceManager, PHPerson, PXPhotosDataSource;

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer {

	BOOL _shouldSkipUserConfirmation;
	NSArray* _assets;
	NSDictionary* _assetsByAssetCollection;
	PXPhotoKitAssetsDataSourceManager* _photoKitDataSourceManager;
	PHPerson* _person;

}

@property (nonatomic,readonly) PXPhotosDataSource * photosDataSourceSnapshot; 
@property (nonatomic,retain) PXPhotoKitAssetsDataSourceManager * photoKitDataSourceManager;              //@synthesize photoKitDataSourceManager=_photoKitDataSourceManager - In the implementation block
@property (nonatomic,retain) PHPerson * person;                                                          //@synthesize person=_person - In the implementation block
@property (nonatomic,readonly) NSArray * assets;                                                         //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetsByAssetCollection;                                   //@synthesize assetsByAssetCollection=_assetsByAssetCollection - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipUserConfirmation;                                            //@synthesize shouldSkipUserConfirmation=_shouldSkipUserConfirmation - In the implementation block
+(id)createAlertActionWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)localizedTitleForUseCase:(unsigned long long)arg1 selectionSnapshot:(id)arg2 person:(id)arg3 ;
+(id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 ;
+(BOOL)canPerformWithActionManager:(id)arg1 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
-(NSArray *)assets;
-(PHPerson *)person;
-(void)setPerson:(PHPerson *)arg1 ;
-(void)setPhotoKitDataSourceManager:(PXPhotoKitAssetsDataSourceManager *)arg1 ;
-(PXPhotosDataSource *)photosDataSourceSnapshot;
-(void)instantlyExcludeAssetsFromDataSource;
-(void)stopExcludingAssetsFromDataSource;
-(void)forceIncludeAssetsInDataSource;
-(id)_indexPathsInPhotosDataSource:(id)arg1 ;
-(NSDictionary *)assetsByAssetCollection;
-(id)createPerformerWithClass:(Class)arg1 actionType:(id)arg2 ;
-(PXPhotoKitAssetsDataSourceManager *)photoKitDataSourceManager;
-(BOOL)shouldSkipUserConfirmation;
-(void)setShouldSkipUserConfirmation:(BOOL)arg1 ;
@end
