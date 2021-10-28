/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUAssetActionManager.h>

@class PUPhotoKitDataSourceManager;

@interface PUPhotoKitAssetActionManager : PUAssetActionManager {

	BOOL _enableNavigateToPhotos;
	PUPhotoKitDataSourceManager* _dataSourceManager;

}

@property (nonatomic,retain) PUPhotoKitDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL enableNavigateToPhotos;                                  //@synthesize enableNavigateToPhotos=_enableNavigateToPhotos - In the implementation block
+(Class)actionPerformerClassForActionType:(unsigned long long)arg1 ;
-(PUPhotoKitDataSourceManager *)dataSourceManager;
-(void)setDataSourceManager:(PUPhotoKitDataSourceManager *)arg1 ;
-(BOOL)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(BOOL)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3 ;
-(unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg1 onAssetsByAssetCollection:(id)arg2 ;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(SCD_Struct_PH4)arg2 ;
-(id)_photoKitAssetsDataSource;
-(BOOL)_actionTypeIsSimple:(unsigned long long)arg1 ;
-(BOOL)enableNavigateToPhotos;
-(void)setEnableNavigateToPhotos:(BOOL)arg1 ;
@end
