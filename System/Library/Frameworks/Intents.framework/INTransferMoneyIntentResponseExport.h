/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INPaymentAccount, INPaymentAmount, INDateComponentsRange, NSString, INCurrencyAmount;


@protocol INTransferMoneyIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INPaymentAccount * fromAccount; 
@property (nonatomic,copy) INPaymentAccount * toAccount; 
@property (nonatomic,copy) INPaymentAmount * transactionAmount; 
@property (nonatomic,copy) INDateComponentsRange * transactionScheduledDate; 
@property (nonatomic,copy) NSString * transactionNote; 
@property (nonatomic,copy) INCurrencyAmount * transferFee; 
@required
-(long long)code;
-(INPaymentAccount *)fromAccount;
-(void)setFromAccount:(id)arg1;
-(INPaymentAccount *)toAccount;
-(void)setToAccount:(id)arg1;
-(INPaymentAmount *)transactionAmount;
-(void)setTransactionAmount:(id)arg1;
-(INDateComponentsRange *)transactionScheduledDate;
-(void)setTransactionScheduledDate:(id)arg1;
-(NSString *)transactionNote;
-(void)setTransactionNote:(id)arg1;
-(INCurrencyAmount *)transferFee;
-(void)setTransferFee:(id)arg1;

@end
