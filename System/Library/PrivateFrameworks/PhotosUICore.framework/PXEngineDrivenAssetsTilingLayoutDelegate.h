/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXEngineDrivenAssetsTilingLayoutDelegate <NSObject>
@optional
-(void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1;
-(double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(double)engineDrivenLayout:(id)arg1 zPositionForItemAtIndexPath:(PXSimpleIndexPath)arg2;
-(CGRect*)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3;
-(CGSize*)engineDrivenLayout:(id)arg1 playButtonSizeForItemAtIndexPath:(PXSimpleIndexPath)arg2 contentTileSize:(CGSize)arg3;

@end

