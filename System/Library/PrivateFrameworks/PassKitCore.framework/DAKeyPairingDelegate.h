/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DAKeyPairingDelegate <DASessionDelegate>
@optional
-(void)didStartPairing;

@required
-(void)didFinishPreWarmWithResult:(id)arg1;
-(void)keyPairingSession:(id)arg1 didFinishPairingWithKey:(id)arg2 trackingRequest:(id)arg3 error:(id)arg4;
-(void)didFinishFirstTransactionForSession:(id)arg1 error:(id)arg2;
-(void)didFinishProbingWithResult:(BOOL)arg1;

@end

