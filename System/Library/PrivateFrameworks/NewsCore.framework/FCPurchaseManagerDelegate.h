/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCPurchaseManagerDelegate
@required
-(void)purchaseSuccessWithProductID:(id)arg1 purchaseReceipt:(id)arg2 chargeCurrencyCode:(id)arg3 ongoingPurchaseEntry:(id)arg4;
-(void)purchaseFailedWithProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3 ongoingPurchaseEntry:(id)arg4;
-(void)purchaseFailedForInvalidPurchaseReceiptWithProductID:(id)arg1 ongoingPurchaseEntry:(id)arg2;

@end

