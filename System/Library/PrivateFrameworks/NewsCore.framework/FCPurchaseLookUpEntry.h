/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:39 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NewsCore/NewsCore-Structs.h>
@class NSDate, NSString;

@interface FCPurchaseLookUpEntry : NSObject {

	BOOL _isNewsAppPurchase;
	BOOL _hasShownRenewalNotice;
	unsigned long long _purchaseType;
	unsigned long long _purchaseValidationState;
	NSDate* _lastVerificationTime;
	NSDate* _lastVerificationFailureTime;
	NSString* _purchaseID;
	NSString* _tagID;
	NSString* _identifier;
	NSDate* _dateOfExpiration;

}

@property (assign,nonatomic) unsigned long long purchaseType;                         //@synthesize purchaseType=_purchaseType - In the implementation block
@property (assign,nonatomic) unsigned long long purchaseValidationState;              //@synthesize purchaseValidationState=_purchaseValidationState - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * tagID;                                          //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                                     //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSDate * lastVerificationTime;                             //@synthesize lastVerificationTime=_lastVerificationTime - In the implementation block
@property (nonatomic,copy) NSDate * lastVerificationFailureTime;                      //@synthesize lastVerificationFailureTime=_lastVerificationFailureTime - In the implementation block
@property (assign,nonatomic) BOOL isNewsAppPurchase;                                  //@synthesize isNewsAppPurchase=_isNewsAppPurchase - In the implementation block
@property (nonatomic,copy) NSDate * dateOfExpiration;                                 //@synthesize dateOfExpiration=_dateOfExpiration - In the implementation block
@property (assign,nonatomic) BOOL hasShownRenewalNotice;                              //@synthesize hasShownRenewalNotice=_hasShownRenewalNotice - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)tagID;
-(unsigned long long)purchaseType;
-(BOOL)isNewsAppPurchase;
-(NSString *)purchaseID;
-(void)setPurchaseID:(NSString *)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(unsigned long long)purchaseValidationState;
-(void)setPurchaseValidationState:(unsigned long long)arg1 ;
-(void)setHasShownRenewalNotice:(BOOL)arg1 ;
-(void)setDateOfExpiration:(NSDate *)arg1 ;
-(BOOL)hasShownRenewalNotice;
-(void)setPurchaseType:(unsigned long long)arg1 ;
-(NSDate *)dateOfExpiration;
-(void)setLastVerificationTime:(NSDate *)arg1 ;
-(void)setLastVerificationFailureTime:(NSDate *)arg1 ;
-(NSDate *)lastVerificationFailureTime;
-(id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastVerificationTime:(id)arg4 lastVerificationFailureTime:(id)arg5 purchaseType:(unsigned long long)arg6 purchaseValidationState:(unsigned long long)arg7 isNewsAppPurchase:(BOOL)arg8 dateOfExpiration:(id)arg9 hasShownRenewalNotice:(BOOL)arg10 ;
-(NSDate *)lastVerificationTime;
-(void)setIsNewsAppPurchase:(BOOL)arg1 ;
@end

