/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIImageView, UIVisualEffectView, UIImage;

@interface _TVStackBackdropView : UIView {

	UIImageView* _imageView;
	UIVisualEffectView* _visualEffectView;
	UIImage* _image;
	long long _blurEffectStyle;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;              //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(long long)blurEffectStyle;
-(id)initWithBlurEffectStyle:(long long)arg1 ;
@end
