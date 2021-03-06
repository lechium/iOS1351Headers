/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CAMediaTimingFunction;

@interface CAMAdditiveAnimation : NSObject {

	double __toValue;
	double __fromValue;
	double __duration;
	CAMediaTimingFunction* __curve;
	CAMAdditiveAnimation* __fromAnimation;
	double __startTime;
	double __lastTime;

}

@property (nonatomic,readonly) double _toValue;                                    //@synthesize _toValue=__toValue - In the implementation block
@property (assign,nonatomic) double _fromValue;                                    //@synthesize _fromValue=__fromValue - In the implementation block
@property (nonatomic,readonly) double _duration;                                   //@synthesize _duration=__duration - In the implementation block
@property (nonatomic,readonly) CAMediaTimingFunction * _curve;                     //@synthesize _curve=__curve - In the implementation block
@property (nonatomic,retain) CAMAdditiveAnimation * _fromAnimation;                //@synthesize _fromAnimation=__fromAnimation - In the implementation block
@property (assign,setter=_setStartTime:,nonatomic) double _startTime;              //@synthesize _startTime=__startTime - In the implementation block
@property (assign,setter=_setLastTime:,nonatomic) double _lastTime;                //@synthesize _lastTime=__lastTime - In the implementation block
@property (nonatomic,readonly) double value; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
+(id)animationToValue:(double)arg1 fromAnimation:(id)arg2 duration:(double)arg3 curve:(id)arg4 ;
+(id)animationToValue:(double)arg1 fromValue:(double)arg2 duration:(double)arg3 curve:(id)arg4 ;
-(id)description;
-(double)value;
-(BOOL)isFinished;
-(double)_duration;
-(double)_startTime;
-(CAMediaTimingFunction *)_curve;
-(double)_fromValue;
-(double)_toValue;
-(double)_lastTime;
-(CAMAdditiveAnimation *)_fromAnimation;
-(void)updateWithTimestamp:(double)arg1 ;
-(void)_setLastTime:(double)arg1 ;
-(void)_setStartTime:(double)arg1 ;
-(void)set_fromValue:(double)arg1 ;
-(void)set_fromAnimation:(CAMAdditiveAnimation *)arg1 ;
@end

