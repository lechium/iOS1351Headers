/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount, ACAccountStore, NSString;

@interface ICQOfferUpdateRequestContext : NSObject {

	BOOL _zeroAction;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	NSString* _buttonId;
	NSString* _offerId;

}

@property (nonatomic,retain) ACAccount * account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSString * buttonId;                                //@synthesize buttonId=_buttonId - In the implementation block
@property (nonatomic,retain) NSString * offerId;                               //@synthesize offerId=_offerId - In the implementation block
@property (assign,getter=isZeroAction,nonatomic) BOOL zeroAction;              //@synthesize zeroAction=_zeroAction - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(NSString *)offerId;
-(void)setButtonId:(NSString *)arg1 ;
-(void)setOfferId:(NSString *)arg1 ;
-(void)setZeroAction:(BOOL)arg1 ;
-(NSString *)buttonId;
-(BOOL)isZeroAction;
@end

