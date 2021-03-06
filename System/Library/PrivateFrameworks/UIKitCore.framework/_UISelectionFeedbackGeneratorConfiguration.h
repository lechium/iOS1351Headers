/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UISelectionFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _feedback;
	double _minimumInterval;
	double _maxSpeed;
	double _slowAudioVolume;
	double _fastAudioVolume;
	double _slowHapticVolume;
	double _fastHapticVolume;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (assign,nonatomic) double minimumInterval;                                          //@synthesize minimumInterval=_minimumInterval - In the implementation block
@property (assign,nonatomic) double maxSpeed;                                                 //@synthesize maxSpeed=_maxSpeed - In the implementation block
@property (assign,nonatomic) double slowAudioVolume;                                          //@synthesize slowAudioVolume=_slowAudioVolume - In the implementation block
@property (assign,nonatomic) double fastAudioVolume;                                          //@synthesize fastAudioVolume=_fastAudioVolume - In the implementation block
@property (assign,nonatomic) double slowHapticVolume;                                         //@synthesize slowHapticVolume=_slowHapticVolume - In the implementation block
@property (assign,nonatomic) double fastHapticVolume;                                         //@synthesize fastHapticVolume=_fastHapticVolume - In the implementation block
+(id)defaultConfiguration;
+(id)lightConfiguration;
+(id)strongConfiguration;
+(id)pickerConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)feedback;
-(double)minimumInterval;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setMinimumInterval:(double)arg1 ;
-(id)feedbackKeyPaths;
-(double)maxSpeed;
-(double)slowAudioVolume;
-(double)fastAudioVolume;
-(double)slowHapticVolume;
-(double)fastHapticVolume;
-(void)setMaxSpeed:(double)arg1 ;
-(void)setSlowAudioVolume:(double)arg1 ;
-(void)setFastAudioVolume:(double)arg1 ;
-(void)setSlowHapticVolume:(double)arg1 ;
-(void)setFastHapticVolume:(double)arg1 ;
@end

