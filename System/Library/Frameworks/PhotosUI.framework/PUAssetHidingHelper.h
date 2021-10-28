/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHManualFetchResult, NSArray, NSString;

@interface PUAssetHidingHelper : NSObject <PXPhotoLibraryUIChangeObserver> {

	BOOL _areAllAssetsHidden;
	BOOL _didCheckAllAssetHidden;
	BOOL _canToogleAssetsVisibility;
	BOOL _didCheckCanToogleAssetsVisibility;
	PHManualFetchResult* __assetsFetchResults;

}

@property (setter=_setAssetsFetchResult:,nonatomic,retain) PHManualFetchResult * _assetsFetchResults;              //@synthesize _assetsFetchResults=__assetsFetchResults - In the implementation block
@property (nonatomic,copy) NSArray * assets; 
@property (nonatomic,readonly) BOOL isHiding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(BOOL)isHiding;
-(id)prepareForPhotoLibraryChange:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(BOOL)_areAllAssetsHidden;
-(void)_setAssetsFetchResult:(id)arg1 ;
-(void)_prepareAssetsVisibilityValueIfNeeded;
-(BOOL)canToggleAssetsVisibility;
-(id)menuItemTitleForTogglingAssetsVisibility;
-(void)applyHiddenState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)alertControllerForTogglingAssetsVisibilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)attemptTogglingAssetsVisibilityFromViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 completionHandler:(/*^block*/id)arg4 ;
-(PHManualFetchResult *)_assetsFetchResults;
@end
