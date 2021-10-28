/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:15 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, UIImage;

@interface ICDocCamImageQuadEditImageView : UIView {

	double _imageOpacity;
	CALayer* _imageLayer;
	UIImage* _image;
	long long _orientation;

}

@property (nonatomic,retain) CALayer * imageLayer;               //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double imageOpacity;                //@synthesize imageOpacity=_imageOpacity - In the implementation block
-(long long)orientation;
-(UIImage *)image;
-(void)setOrientation:(long long)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
-(void)setImage:(id)arg1 orientation:(long long)arg2 ;
-(void)setImageOpacity:(double)arg1 ;
-(double)imageOpacity;
@end
