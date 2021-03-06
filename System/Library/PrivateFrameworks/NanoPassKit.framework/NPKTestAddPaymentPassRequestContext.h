/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface NPKTestAddPaymentPassRequestContext : NSObject {

	NSString* _cardPNO;
	NSString* _cardFlow;
	NSString* _cardID;
	NSString* _cardType;
	NSString* _cardIssuer;
	NSString* _cardProduct;
	NSString* _cardEncryptionScheme;

}

@property (nonatomic,retain) NSString * cardPNO;                           //@synthesize cardPNO=_cardPNO - In the implementation block
@property (nonatomic,retain) NSString * cardFlow;                          //@synthesize cardFlow=_cardFlow - In the implementation block
@property (nonatomic,retain) NSString * cardID;                            //@synthesize cardID=_cardID - In the implementation block
@property (nonatomic,retain) NSString * cardType;                          //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) NSString * cardIssuer;                        //@synthesize cardIssuer=_cardIssuer - In the implementation block
@property (nonatomic,retain) NSString * cardProduct;                       //@synthesize cardProduct=_cardProduct - In the implementation block
@property (nonatomic,retain) NSString * cardEncryptionScheme;              //@synthesize cardEncryptionScheme=_cardEncryptionScheme - In the implementation block
-(NSString *)cardType;
-(void)setCardType:(NSString *)arg1 ;
-(NSString *)cardPNO;
-(void)setCardPNO:(NSString *)arg1 ;
-(NSString *)cardFlow;
-(void)setCardFlow:(NSString *)arg1 ;
-(NSString *)cardID;
-(void)setCardID:(NSString *)arg1 ;
-(NSString *)cardIssuer;
-(void)setCardIssuer:(NSString *)arg1 ;
-(NSString *)cardProduct;
-(void)setCardProduct:(NSString *)arg1 ;
-(NSString *)cardEncryptionScheme;
-(void)setCardEncryptionScheme:(NSString *)arg1 ;
@end

