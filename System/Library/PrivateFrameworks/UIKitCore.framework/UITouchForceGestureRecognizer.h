/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:05 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink, NSMutableSet, _UIVelocityIntegrator;

@interface UITouchForceGestureRecognizer : UIGestureRecognizer {

	CADisplayLink* _continuousEvaluationDisplayLink;
	NSMutableSet* _currentTouches;
	unsigned long long _eventTouchCount;
	double _currentTouchForce;
	CGPoint _initialCentroidOfTouches;
	CGPoint _currentCentroidOfTouches;
	_UIVelocityIntegrator* _velocityIntegrator;
	BOOL _automaticallyIncreaseTouchForce;
	double _touchesBeganTimestamp;
	BOOL _steady;
	double _touchForce;
	double _minimumRequiredTouchForce;
	double _velocity;
	double _allowableMovement;
	unsigned long long _maximumNumberOfTouches;
	double _automaticTouchForce;
	double _automaticTouchForceDuration;
	/*^block*/id _configurationBlock;

}

@property (assign,nonatomic) double touchForce;                                      //@synthesize touchForce=_touchForce - In the implementation block
@property (assign,nonatomic) double velocity;                                        //@synthesize velocity=_velocity - In the implementation block
@property (assign,getter=isSteady,nonatomic) BOOL steady;                            //@synthesize steady=_steady - In the implementation block
@property (assign,nonatomic) double minimumRequiredTouchForce;                       //@synthesize minimumRequiredTouchForce=_minimumRequiredTouchForce - In the implementation block
@property (assign,nonatomic) double allowableMovement;                               //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement; 
@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;              //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) double automaticTouchForce;                             //@synthesize automaticTouchForce=_automaticTouchForce - In the implementation block
@property (assign,nonatomic) double automaticTouchForceDuration;                     //@synthesize automaticTouchForceDuration=_automaticTouchForceDuration - In the implementation block
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,copy) id configurationBlock;                                    //@synthesize configurationBlock=_configurationBlock - In the implementation block
-(void)reset;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(void)setView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(double)allowableMovement;
-(double)touchDuration;
-(BOOL)hasExceededAllowableMovement;
-(double)touchForce;
-(unsigned long long)maximumNumberOfTouches;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(BOOL)_hasExceededAllowableMovement;
-(id)configurationBlock;
-(void)setConfigurationBlock:(id)arg1 ;
-(void)_endContinuousEvaluation;
-(void)_beginForContinuousEvaluationForTouches:(id)arg1 ;
-(void)_evaluateTouches:(id)arg1 withEvent:(id)arg2 ;
-(void)_endIfNeeded:(BOOL)arg1 ;
-(BOOL)_validateHysteresis;
-(double)automaticTouchForce;
-(double)_evaluateAutomaticTouchForceForTimeInterval:(double)arg1 actualTouchForce:(double)arg2 ;
-(void)_evaluateWithTouchForce:(double)arg1 centroidAtLocation:(CGPoint)arg2 ;
-(void)_updateTouchForce:(double)arg1 ;
-(void)setTouchForce:(double)arg1 ;
-(void)setSteady:(BOOL)arg1 ;
-(BOOL)_hasExceededMaximumNumberOfTouches;
-(void)_updateForContinuousEvaluation:(id)arg1 ;
-(double)minimumRequiredTouchForce;
-(void)setMinimumRequiredTouchForce:(double)arg1 ;
-(BOOL)isSteady;
-(void)setAutomaticTouchForce:(double)arg1 ;
-(double)automaticTouchForceDuration;
-(void)setAutomaticTouchForceDuration:(double)arg1 ;
@end

