/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraEditKit/CEKBadgeView.h>

@class UIImage, NSString;

@interface CAMFlashBadge : CEKBadgeView {

	UIImage* __contentImage;
	NSString* __contentSizeCategory;

}

@property (nonatomic,retain) UIImage * _contentImage;                    //@synthesize _contentImage=__contentImage - In the implementation block
@property (nonatomic,copy) NSString * _contentSizeCategory;              //@synthesize _contentSizeCategory=__contentSizeCategory - In the implementation block
-(NSString *)_contentSizeCategory;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)_imageInsets;
-(id)_maskImage;
-(CGSize)_imageSize;
-(UIImage *)_contentImage;
-(void)updateToContentSize:(id)arg1 ;
-(void)set_contentSizeCategory:(NSString *)arg1 ;
-(void)set_contentImage:(UIImage *)arg1 ;
@end

