/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKContinuityPaymentServiceDelegate <NSObject>
@optional
-(void)didReceiveUpdatedPaymentDevices:(id)arg1;
-(void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
-(void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;

@end

