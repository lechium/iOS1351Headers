/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBSwitcherTransitionRequest;

@interface SBPerformTransitionSwitcherModifierAction : SBSwitcherModifierAction {

	BOOL _gestureInitiated;
	SBSwitcherTransitionRequest* _transitionRequest;

}

@property (nonatomic,readonly) SBSwitcherTransitionRequest * transitionRequest;              //@synthesize transitionRequest=_transitionRequest - In the implementation block
@property (getter=isGestureInitiated,nonatomic,readonly) BOOL gestureInitiated;              //@synthesize gestureInitiated=_gestureInitiated - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBSwitcherTransitionRequest *)transitionRequest;
-(BOOL)isGestureInitiated;
-(id)initWithTransitionRequest:(id)arg1 gestureInitiated:(BOOL)arg2 ;
@end

