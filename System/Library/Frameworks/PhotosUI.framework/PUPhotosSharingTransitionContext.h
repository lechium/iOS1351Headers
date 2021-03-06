/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PHAssetCollectionDataSource;
@class NSIndexPath;

@interface PUPhotosSharingTransitionContext : NSObject {

	id<PHAssetCollectionDataSource> _assetCollectionsDataSource;
	NSIndexPath* _keyAssetIndexPath;

}

@property (nonatomic,retain) id<PHAssetCollectionDataSource> assetCollectionsDataSource;              //@synthesize assetCollectionsDataSource=_assetCollectionsDataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * keyAssetIndexPath;                                         //@synthesize keyAssetIndexPath=_keyAssetIndexPath - In the implementation block
-(NSIndexPath *)keyAssetIndexPath;
-(void)setAssetCollectionsDataSource:(id<PHAssetCollectionDataSource>)arg1 ;
-(id<PHAssetCollectionDataSource>)assetCollectionsDataSource;
-(void)setKeyAssetIndexPath:(NSIndexPath *)arg1 ;
@end

