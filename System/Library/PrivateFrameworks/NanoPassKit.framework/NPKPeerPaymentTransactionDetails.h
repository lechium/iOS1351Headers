/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKPaymentTransaction, NSString, NSArray, NSDate;

@interface NPKPeerPaymentTransactionDetails : NSObject {

	PKPaymentTransaction* _transaction;
	NSString* _serviceIdentifier;
	unsigned long long _paymentStatus;
	NSArray* _availableActions;
	NSDate* _availableActionsFetchDate;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long paymentStatus;                //@synthesize paymentStatus=_paymentStatus - In the implementation block
@property (nonatomic,retain) NSArray * availableActions;                      //@synthesize availableActions=_availableActions - In the implementation block
@property (nonatomic,retain) NSDate * availableActionsFetchDate;              //@synthesize availableActionsFetchDate=_availableActionsFetchDate - In the implementation block
-(id)description;
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(unsigned long long)paymentStatus;
-(void)setPaymentStatus:(unsigned long long)arg1 ;
-(NSArray *)availableActions;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(NSDate *)availableActionsFetchDate;
-(void)setAvailableActionsFetchDate:(NSDate *)arg1 ;
@end

