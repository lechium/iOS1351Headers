/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class LPVideoPlayButtonStyle, LPImageViewStyle, LPPadding, UIColor, CAMediaTimingFunction;

@interface LPVideoViewStyle : NSObject {

	LPVideoPlayButtonStyle* _playButton;
	LPImageViewStyle* _muteButton;
	LPPadding* _muteButtonPadding;
	double _muteButtonOpacity;
	double _muteButtonHighlightedOpacity;
	UIColor* _pulsingLoadIndicatorColor;
	double _pulsingLoadIndicatorMaximumOpacity;
	double _pulsingLoadIndicatorDuration;
	CAMediaTimingFunction* _pulsingLoadIndicatorTimingFunction;

}

@property (nonatomic,readonly) LPVideoPlayButtonStyle * playButton;                                   //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * muteButton;                                         //@synthesize muteButton=_muteButton - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * muteButtonPadding;                                  //@synthesize muteButtonPadding=_muteButtonPadding - In the implementation block
@property (assign,nonatomic) double muteButtonOpacity;                                                //@synthesize muteButtonOpacity=_muteButtonOpacity - In the implementation block
@property (assign,nonatomic) double muteButtonHighlightedOpacity;                                     //@synthesize muteButtonHighlightedOpacity=_muteButtonHighlightedOpacity - In the implementation block
@property (nonatomic,retain) UIColor * pulsingLoadIndicatorColor;                                     //@synthesize pulsingLoadIndicatorColor=_pulsingLoadIndicatorColor - In the implementation block
@property (assign,nonatomic) double pulsingLoadIndicatorMaximumOpacity;                               //@synthesize pulsingLoadIndicatorMaximumOpacity=_pulsingLoadIndicatorMaximumOpacity - In the implementation block
@property (assign,nonatomic) double pulsingLoadIndicatorDuration;                                     //@synthesize pulsingLoadIndicatorDuration=_pulsingLoadIndicatorDuration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * pulsingLoadIndicatorTimingFunction;              //@synthesize pulsingLoadIndicatorTimingFunction=_pulsingLoadIndicatorTimingFunction - In the implementation block
-(id)init;
-(LPVideoPlayButtonStyle *)playButton;
-(LPPadding *)muteButtonPadding;
-(UIColor *)pulsingLoadIndicatorColor;
-(double)pulsingLoadIndicatorMaximumOpacity;
-(double)pulsingLoadIndicatorDuration;
-(CAMediaTimingFunction *)pulsingLoadIndicatorTimingFunction;
-(LPImageViewStyle *)muteButton;
-(double)muteButtonOpacity;
-(double)muteButtonHighlightedOpacity;
-(void)setMuteButtonOpacity:(double)arg1 ;
-(void)setMuteButtonHighlightedOpacity:(double)arg1 ;
-(void)setPulsingLoadIndicatorColor:(UIColor *)arg1 ;
-(void)setPulsingLoadIndicatorMaximumOpacity:(double)arg1 ;
-(void)setPulsingLoadIndicatorDuration:(double)arg1 ;
-(void)setPulsingLoadIndicatorTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end
