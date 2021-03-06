/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:35 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol _TVRemoteAlertVisualStyleProviding;
@class NSString;

@interface TVRUIAlertFadeAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	long long _animationType;
	id<_TVRemoteAlertVisualStyleProviding> _visualStyle;

}

@property (nonatomic,readonly) long long animationType;                                         //@synthesize animationType=_animationType - In the implementation block
@property (nonatomic,readonly) id<_TVRemoteAlertVisualStyleProviding> visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)animationType;
-(id<_TVRemoteAlertVisualStyleProviding>)visualStyle;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)_runPresentationAnimationWithTransition:(id)arg1 ;
-(void)_runDismissalAnimationWithTransition:(id)arg1 ;
-(id)initWithAnimationType:(long long)arg1 visualStyle:(id)arg2 ;
@end

