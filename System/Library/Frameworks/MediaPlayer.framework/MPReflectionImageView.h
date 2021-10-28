/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:12 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/_UIReflectingView.h>

@class UIImageView, UIImage;

@interface MPReflectionImageView : _UIReflectingView {

	UIImageView* _imageView;
	BOOL _squareImage;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL squareImage;                       //@synthesize squareImage=_squareImage - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(double)defaultReflectionHeight;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(id)albumArtImage;
-(void)setAlbumVisible:(BOOL)arg1 reflectionVisible:(BOOL)arg2 ;
-(void)setFrame:(CGRect)arg1 withReflectionHeight:(double)arg2 ;
-(void)setReflectionVisible:(BOOL)arg1 withDuration:(float)arg2 ;
-(BOOL)squareImage;
-(void)setSquareImage:(BOOL)arg1 ;
@end
