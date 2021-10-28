/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLook/QLTransitionController.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class NSString;

@interface QLInteractiveTransitionController : QLTransitionController <UIViewControllerInteractiveTransitioning> {

	double _initialTransitioningViewWidth;
	double _completeProgress;

}

@property (assign,nonatomic) double completeProgress;                   //@synthesize completeProgress=_completeProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(double)transitionDuration:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 ;
-(void)completeTransition:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)_performForcedDismissal;
-(void)setCompleteProgress:(double)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 isFinal:(BOOL)arg2 ;
-(double)completeProgress;
@end
