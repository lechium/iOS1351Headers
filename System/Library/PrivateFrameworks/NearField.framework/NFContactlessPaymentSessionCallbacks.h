/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NFContactlessPaymentSessionCallbacks <NFContactlessSessionCallbacks>
@optional
-(void)didSelectValueAddedService:(BOOL)arg1;
-(void)didPerformValueAddedServiceTransactions:(id)arg1;
-(void)didReceivePendingServerRequest;
-(void)didExpressModeStateChange:(unsigned)arg1 withObject:(id)arg2;
-(void)didReceiveActivityTimeout:(id)arg1;

@required
-(void)didFelicaStateChange:(id)arg1;
-(void)didReceiveButtonPressForApplet:(id)arg1;
-(void)didExpireTransactionForApplet:(id)arg1;
-(void)didStartTransaction:(id)arg1;
-(void)didEndTransaction:(id)arg1;
-(void)didFailDeferredAuthorization;

@end
