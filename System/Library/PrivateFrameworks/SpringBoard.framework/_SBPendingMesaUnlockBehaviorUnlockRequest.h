/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBBiometricUnlockBehavior;
@class SBAuthenticationFeedback;

@interface _SBPendingMesaUnlockBehaviorUnlockRequest : NSObject {

	id<SBBiometricUnlockBehavior> _behavior;
	id _request;
	SBAuthenticationFeedback* _feedback;

}

@property (nonatomic,readonly) id<SBBiometricUnlockBehavior> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) id request;                                          //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) SBAuthenticationFeedback * feedback;                 //@synthesize feedback=_feedback - In the implementation block
-(id)request;
-(id<SBBiometricUnlockBehavior>)behavior;
-(SBAuthenticationFeedback *)feedback;
-(id)initWithBehavior:(id)arg1 request:(id)arg2 feedback:(id)arg3 ;
@end

