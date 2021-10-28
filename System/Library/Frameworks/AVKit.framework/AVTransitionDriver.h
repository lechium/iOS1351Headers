/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:27 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIPanGestureRecognizer;


@protocol AVTransitionDriver <UIInteraction>
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,nonatomic,__weak) id<AVTransitionDriverDelegate> transitionDriverDelegate; 
@property (nonatomic,readonly) long long transitionInteraction; 
@property (nonatomic,readonly) double rotation; 
@property (nonatomic,readonly) double rotationVelocity; 
@property (nonatomic,readonly) double pinchScale; 
@property (nonatomic,readonly) double pinchVelocity; 
@property (nonatomic,readonly) BOOL lastNonZeroVelocityWasDownward; 
@property (assign,nonatomic,__weak) UIPanGestureRecognizer * contentTransitioningViewGestureRecognizer; 
@required
-(BOOL)isEnabled;
-(double)rotation;
-(CGPoint*)locationInWindow;
-(CGPoint*)translationInWindow;
-(CGPoint*)velocityInWindow;
-(double)angleOfVelocityInWindow;
-(BOOL)transitionDriver:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
-(id<AVTransitionDriverDelegate>)transitionDriverDelegate;
-(void)setTransitionDriverDelegate:(id)arg1;
-(long long)transitionInteraction;
-(double)rotationVelocity;
-(double)pinchScale;
-(double)pinchVelocity;
-(BOOL)lastNonZeroVelocityWasDownward;
-(UIPanGestureRecognizer *)contentTransitioningViewGestureRecognizer;
-(void)setContentTransitioningViewGestureRecognizer:(id)arg1;

@end
