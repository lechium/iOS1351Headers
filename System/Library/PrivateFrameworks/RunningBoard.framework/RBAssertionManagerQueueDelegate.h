/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBAssertionManagerQueueDelegate <NSObject>
@required
-(double)eventQueue:(id)arg1 startTimeForAssertion:(id)arg2;
-(void)eventQueue:(id)arg1 handleWarningEventForAssertion:(id)arg2;
-(void)eventQueue:(id)arg1 handleInvalidationEventForAssertion:(id)arg2;
-(double)eventQueue:(id)arg1 remainingRuntimeForProcessIdentity:(id)arg2;
-(void)eventQueue:(id)arg1 handleAssertionsExpirationWarningEventForProcessIdentity:(id)arg2 expirationTime:(double)arg3;

@end

