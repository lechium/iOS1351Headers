/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXBasicUIViewTileAnimator, PXUIImageTile, PXBasicTileUserData, PXTitleSubtitleUILabelTile, UILabel;

@interface PXPhotosDetailsHeaderPlaceholderView : UIView {

	PXBasicUIViewTileAnimator* _tileAnimator;
	PXTileGeometry* _imageTileGeometry;
	PXUIImageTile* _imageTile;
	PXBasicTileUserData* _imageTileUserData;
	PXTileGeometry* _initialTextTileGeometry;
	PXTileGeometry* _textTileGeometry;
	PXTitleSubtitleUILabelTile* _textTile;
	PXBasicTileUserData* _textTileUserData;
	UILabel* _labelForLastBaselineLayout;

}
-(void)layoutSubviews;
-(id)viewForLastBaselineLayout;
-(id)initWithRegionOfInterest:(id)arg1 ;
-(void)_layoutImageTile;
-(void)_layoutTextTile;
-(void)_layoutTile:(id)arg1 withGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 ;
-(void)_layoutLabelForLastBaselineLayout;
@end
