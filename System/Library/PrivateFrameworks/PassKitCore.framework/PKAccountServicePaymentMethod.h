/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding> {

	BOOL _deviceSupportsPeerPaymentAccountPayment;
	PKBankAccountInformation* _bankAccountInformation;
	PKCurrencyAmount* _peerPaymentBalance;

}

@property (nonatomic,copy) PKBankAccountInformation * bankAccountInformation;              //@synthesize bankAccountInformation=_bankAccountInformation - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * peerPaymentBalance;                          //@synthesize peerPaymentBalance=_peerPaymentBalance - In the implementation block
@property (assign,nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment;                 //@synthesize deviceSupportsPeerPaymentAccountPayment=_deviceSupportsPeerPaymentAccountPayment - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKBankAccountInformation *)bankAccountInformation;
-(PKCurrencyAmount *)peerPaymentBalance;
-(BOOL)deviceSupportsPeerPaymentAccountPayment;
-(void)setPeerPaymentBalance:(PKCurrencyAmount *)arg1 ;
-(void)setBankAccountInformation:(PKBankAccountInformation *)arg1 ;
-(void)setDeviceSupportsPeerPaymentAccountPayment:(BOOL)arg1 ;
-(id)initWithBankAccountInformation:(id)arg1 peerPaymentBalance:(id)arg2 deviceSupportsPeerPaymentAccountPayment:(BOOL)arg3 ;
@end

