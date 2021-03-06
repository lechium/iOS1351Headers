/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifierAction.h>

@interface SBActivateReachabilitySwitcherModifierAction : SBSwitcherModifierAction {

	SBReachabilityActivationContext _reachabilityActivationContext;

}

@property (nonatomic,readonly) SBReachabilityActivationContext reachabilityActivationContext;              //@synthesize reachabilityActivationContext=_reachabilityActivationContext - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBReachabilityActivationContext)reachabilityActivationContext;
-(id)initWithReachabilityContext:(SBReachabilityActivationContext)arg1 ;
@end

