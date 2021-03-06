/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

@interface VUILibraryCollectionViewCell : UICollectionViewCell {

	UIViewController* _viewController;
	VUISeparatorView* _topSeparatorView;

}

@property (nonatomic,retain) UIViewController * viewController;                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;              //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(VUISeparatorView *)topSeparatorView;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
@end

