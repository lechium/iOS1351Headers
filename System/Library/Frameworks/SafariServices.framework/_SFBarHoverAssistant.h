/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:34 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_SFDynamicBarAnimatorStateObserver.h>

@protocol _SFBarCommon;
@class UIHoverGestureRecognizer, UIView, _SFDynamicBarAnimator, NSString;

@interface _SFBarHoverAssistant : NSObject <_SFDynamicBarAnimatorStateObserver> {

	UIHoverGestureRecognizer* _hoverRecognizer;
	BOOL _didShowBarFromHover;
	UIView*<_SFBarCommon> _bar;
	_SFDynamicBarAnimator* _dynamicBarAnimator;
	UIView* _containerView;

}

@property (nonatomic,__weak,readonly) UIView*<_SFBarCommon> bar;                               //@synthesize bar=_bar - In the implementation block
@property (nonatomic,__weak,readonly) _SFDynamicBarAnimator * dynamicBarAnimator;              //@synthesize dynamicBarAnimator=_dynamicBarAnimator - In the implementation block
@property (nonatomic,__weak,readonly) UIView * containerView;                                  //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachToBar:(id)arg1 withAnimator:(id)arg2 inContainerView:(id)arg3 ;
-(UIView *)containerView;
-(UIView*<_SFBarCommon>)bar;
-(void)_hover:(id)arg1 ;
-(id)initWithBar:(id)arg1 withAnimator:(id)arg2 inContainerView:(id)arg3 ;
-(BOOL)_gestureIsOverBar;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(void)dynamicBarAnimatorStateDidChange:(id)arg1 ;
-(_SFDynamicBarAnimator *)dynamicBarAnimator;
@end

