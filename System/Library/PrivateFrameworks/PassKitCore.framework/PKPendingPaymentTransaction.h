/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKPaymentTransaction, PKPaymentPass, PKPaymentApplication;

@interface PKPendingPaymentTransaction : NSObject {

	PKPaymentTransaction* _transaction;
	PKPaymentPass* _pass;
	PKPaymentApplication* _paymentApplication;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;                     //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;              //@synthesize paymentApplication=_paymentApplication - In the implementation block
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(id)initWithTransaction:(id)arg1 pass:(id)arg2 paymentApplication:(id)arg3 ;
@end
