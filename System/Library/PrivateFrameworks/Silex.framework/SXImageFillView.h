/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXFillView.h>

@class SXClippingView, SXImageFill, SXImageResource, SXImageView, UIImage, SXAnimatedImage;

@interface SXImageFillView : SXFillView {

	SXClippingView* _clippingView;
	SXImageFill* _imageFill;
	SXImageResource* _imageResource;
	SXImageView* _imageView;

}

@property (nonatomic,retain) SXClippingView * clippingView;                  //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,readonly) SXImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) SXImageFill * imageFill;                      //@synthesize imageFill=_imageFill - In the implementation block
@property (nonatomic,readonly) SXImageResource * imageResource;              //@synthesize imageResource=_imageResource - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) SXAnimatedImage * animatedImage; 
-(void)dealloc;
-(void)load;
-(void)pause;
-(UIImage *)image;
-(CGRect)contentFrame;
-(void)play;
-(void)layoutSubviews;
-(SXImageView *)imageView;
-(void)setContentFrame:(CGRect)arg1 ;
-(SXAnimatedImage *)animatedImage;
-(SXClippingView *)clippingView;
-(void)setClippingView:(SXClippingView *)arg1 ;
-(SXImageResource *)imageResource;
-(CGRect)fillFrameWithBoundingSize:(CGSize)arg1 ;
-(id)initWithImageFill:(id)arg1 imageResource:(id)arg2 imageViewFactory:(id)arg3 ;
-(id)dragable;
-(SXImageFill *)imageFill;
@end
