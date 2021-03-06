/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBAssertionManagerDelegate <NSObject>
@required
-(void)assertionManager:(id)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)arg2;
-(void)assertionManager:(id)arg1 didUpdateProcessStates:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assertionManager:(id)arg1 didInvalidateAssertions:(id)arg2;
-(void)assertionManager:(id)arg1 didAddProcess:(id)arg2 withState:(id)arg3;
-(void)assertionManager:(id)arg1 didRemoveProcess:(id)arg2 withState:(id)arg3;
-(void)assertionManager:(id)arg1 willExpireAssertionsSoonForProcess:(id)arg2 expirationTime:(double)arg3;
-(void)assertionManager:(id)arg1 willInvalidateAssertion:(id)arg2;
-(void)assertionManager:(id)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didEndTrackingStateForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didBeginTrackingStateForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didResolveSystemState:(id)arg2;

@end

