/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBViewControllerAnimatedTransitioning.h>

@class NSMutableArray, UIViewPropertyAnimator, NSString;

@interface SBUIAnimationPropertyAnimator : NSObject <SBViewControllerAnimatedTransitioning> {

	NSMutableArray* _completionBlocks;
	BOOL _wasStarted;
	unsigned long long _reverseCount;
	UIViewPropertyAnimator* _propertyAnimator;
	double _duration;
	/*^block*/id _generator;

}

@property (nonatomic,copy,readonly) id generator;                                      //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) UIViewPropertyAnimator * propertyAnimator;              //@synthesize propertyAnimator=_propertyAnimator - In the implementation block
@property (nonatomic,readonly) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL isReversed; 
@property (nonatomic,readonly) BOOL wasReversed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)duration;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UIViewPropertyAnimator *)propertyAnimator;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(BOOL)isReversed;
-(id)generator;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(id)initWithPropertyAnimatorGenerator:(/*^block*/id)arg1 ;
-(void)reverseAnimation;
-(void)_executeGenerator:(id)arg1 ;
-(void)prepareToRunAnimation:(id)arg1 ;
-(id)initWithPropertyAnimator:(id)arg1 duration:(double)arg2 ;
-(BOOL)wasReversed;
@end

