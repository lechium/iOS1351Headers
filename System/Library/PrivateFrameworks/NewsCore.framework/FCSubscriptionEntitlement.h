/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:37 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface FCSubscriptionEntitlement : NSObject {

	BOOL _newsAppPurchase;
	BOOL _isTrialPeriod;
	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSNumber* _appAdamID;
	NSString* _chargeCurrencyCode;
	NSNumber* _inAppAdamID;

}

@property (nonatomic,readonly) NSNumber * appAdamID;                                       //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,readonly) NSString * chargeCurrencyCode;                              //@synthesize chargeCurrencyCode=_chargeCurrencyCode - In the implementation block
@property (nonatomic,readonly) NSNumber * inAppAdamID;                                     //@synthesize inAppAdamID=_inAppAdamID - In the implementation block
@property (getter=isNewsAppPurchase,nonatomic,readonly) BOOL newsAppPurchase;              //@synthesize newsAppPurchase=_newsAppPurchase - In the implementation block
@property (nonatomic,readonly) BOOL isTrialPeriod;                                         //@synthesize isTrialPeriod=_isTrialPeriod - In the implementation block
@property (nonatomic,readonly) BOOL isPurchaser;                                           //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (nonatomic,readonly) BOOL isAmplifyUser;                                         //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
-(id)description;
-(NSNumber *)appAdamID;
-(NSString *)chargeCurrencyCode;
-(BOOL)isNewsAppPurchase;
-(NSNumber *)inAppAdamID;
-(BOOL)isTrialPeriod;
-(BOOL)isPurchaser;
-(id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(BOOL)arg4 isTrailPeriod:(BOOL)arg5 isPurchaser:(BOOL)arg6 isAmplifyUser:(BOOL)arg7 ;
-(BOOL)isAmplifyUser;
@end

