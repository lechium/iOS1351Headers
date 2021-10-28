/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIImageView, UIImage;

@interface _SBSUIOrientedImageView : SBFTouchPassThroughView {

	UIImageView* _imageView;
	UIImage* _portraitImage;
	UIImage* _landscapeImage;

}

@property (nonatomic,retain) UIImage * portraitImage;               //@synthesize portraitImage=_portraitImage - In the implementation block
@property (nonatomic,retain) UIImage * landscapeImage;              //@synthesize landscapeImage=_landscapeImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImage *)portraitImage;
-(UIImage *)landscapeImage;
-(void)setPortraitImage:(UIImage *)arg1 ;
-(void)setLandscapeImage:(UIImage *)arg1 ;
@end
