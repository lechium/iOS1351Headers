/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIViewController, PHAssetCollection;

@interface PUAlbumDropSessionContext : NSObject {

	UIViewController* _viewController;
	PHAssetCollection* _assetCollection;
	unsigned long long _numberOfAssets;

}

@property (nonatomic,readonly) UIViewController * viewController;                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssets;                //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
+(id)contextWithViewController:(id)arg1 assetCollection:(id)arg2 numberOfAssets:(unsigned long long)arg3 ;
-(UIViewController *)viewController;
-(unsigned long long)numberOfAssets;
-(PHAssetCollection *)assetCollection;
@end
