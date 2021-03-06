/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKInstallmentPlan, PKAccount, PKPaymentPass, NSString;

@interface PKDashboardInstallmentPlanStatusItem : NSObject <PKDashboardItem> {

	PKInstallmentPlan* _installmentPlan;
	PKAccount* _account;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,retain) PKInstallmentPlan * installmentPlan;              //@synthesize installmentPlan=_installmentPlan - In the implementation block
@property (nonatomic,retain) PKAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                      //@synthesize paymentPass=_paymentPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKAccount *)account;
-(void)setAccount:(PKAccount *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKInstallmentPlan *)installmentPlan;
-(void)setInstallmentPlan:(PKInstallmentPlan *)arg1 ;
@end

