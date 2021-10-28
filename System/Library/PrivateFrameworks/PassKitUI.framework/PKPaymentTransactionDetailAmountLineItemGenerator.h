/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:32 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject
-(id)lineItemsForInstallmentPlan:(id)arg1 paymentPass:(id)arg2 ;
-(id)_lineItemsForPeerPaymentTransaction:(id)arg1 pass:(id)arg2 ;
-(id)_lineItemsForPurchaseTransaction:(id)arg1 pass:(id)arg2 associatedReceipt:(id)arg3 ;
-(id)_lineItemsForWithdrawalTransaction:(id)arg1 pass:(id)arg2 ;
-(id)_rewardsLineItemsForRewards:(id)arg1 currencyCode:(id)arg2 ;
-(id)_totalTransferredItemForTransaction:(id)arg1 ;
-(id)_feeLineItemsForFees:(id)arg1 ;
-(id)_totalPaidLineItemForTransaction:(id)arg1 isUnqualified:(BOOL)arg2 ;
-(id)_foreignExchangeLineItemsForExchangeInfo:(id)arg1 ;
-(id)_primaryFundingSourceLineItemForTransaction:(id)arg1 pass:(id)arg2 ;
-(id)_secondaryFundingSourceLineItemForTransaction:(id)arg1 ;
-(id)_totalSentLineItemForTransaction:(id)arg1 ;
-(id)_totalReceivedLineItemForTransaction:(id)arg1 ;
-(id)_subtotalLineItemForTransaction:(id)arg1 ;
-(id)lineItemsForTransaction:(id)arg1 pass:(id)arg2 associatedTransaction:(id)arg3 associatedReceipt:(id)arg4 ;
@end
