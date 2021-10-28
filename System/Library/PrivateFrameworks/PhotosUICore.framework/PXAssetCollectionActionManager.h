/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionManager.h>

@protocol PXDisplayAssetCollection;
@class PXDisplayTitleInfo, PHFetchResult;

@interface PXAssetCollectionActionManager : PXActionManager {

	id<PXDisplayAssetCollection> _assetCollection;
	PXDisplayTitleInfo* _displayTitleInfo;
	PHFetchResult* _people;

}

@property (nonatomic,retain) PHFetchResult * people;                                      //@synthesize people=_people - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PXDisplayTitleInfo * displayTitleInfo;                     //@synthesize displayTitleInfo=_displayTitleInfo - In the implementation block
-(id)init;
-(PHFetchResult *)people;
-(void)setPeople:(PHFetchResult *)arg1 ;
-(id<PXDisplayAssetCollection>)assetCollection;
-(id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2 ;
-(PXDisplayTitleInfo *)displayTitleInfo;
@end
