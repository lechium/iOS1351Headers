/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSTimer;

@interface CACMicStatusView : UIView {

	BOOL _swapPalette;
	long long _micStatus;
	double _micPowerLevel;
	UIImageView* _statusIndicatorImageView;
	NSTimer* _statusIndicatorAnimationTimer;

}

@property (nonatomic,retain) UIImageView * statusIndicatorImageView;               //@synthesize statusIndicatorImageView=_statusIndicatorImageView - In the implementation block
@property (nonatomic,retain) NSTimer * statusIndicatorAnimationTimer;              //@synthesize statusIndicatorAnimationTimer=_statusIndicatorAnimationTimer - In the implementation block
@property (assign,nonatomic) long long micStatus;                                  //@synthesize micStatus=_micStatus - In the implementation block
@property (assign,nonatomic) double micPowerLevel;                                 //@synthesize micPowerLevel=_micPowerLevel - In the implementation block
@property (assign,nonatomic) BOOL swapPalette;                                     //@synthesize swapPalette=_swapPalette - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)imageBundle;
-(UIImageView *)statusIndicatorImageView;
-(void)setStatusIndicatorImageView:(UIImageView *)arg1 ;
-(void)drawBase;
-(void)setMicStatus:(long long)arg1 ;
-(void)transitionToIdle;
-(void)transitionToListening;
-(void)transitionToRecording;
-(long long)micStatus;
-(void)stopRecordingAnimation;
-(BOOL)swapPalette;
-(NSTimer *)statusIndicatorAnimationTimer;
-(void)setStatusIndicatorAnimationTimer:(NSTimer *)arg1 ;
-(void)setSwapPalette:(BOOL)arg1 ;
-(double)micPowerLevel;
-(void)setMicPowerLevel:(double)arg1 ;
@end

