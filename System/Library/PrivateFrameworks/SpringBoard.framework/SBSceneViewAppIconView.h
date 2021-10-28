/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class SBIconImageView, UILabel, PLPlatterView;

@interface SBSceneViewAppIconView : UIView {

	SBIconImageView* _imageView;
	UILabel* _label;
	PLPlatterView* _shadowView;

}

@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PLPlatterView * shadowView;               //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,readonly) SBIconImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(UILabel *)label;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(SBIconImageView *)imageView;
-(PLPlatterView *)shadowView;
-(id)initWithIcon:(id)arg1 ;
@end
