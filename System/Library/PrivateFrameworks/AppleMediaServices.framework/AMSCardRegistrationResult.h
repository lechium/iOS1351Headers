/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject {

	NSData* _cardData;
	NSURL* _brokerURL;
	NSURL* _paymentServicesURL;

}

@property (nonatomic,readonly) NSData * cardData;                       //@synthesize cardData=_cardData - In the implementation block
@property (nonatomic,readonly) NSURL * brokerURL;                       //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,readonly) NSURL * paymentServicesURL;              //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
-(NSData *)cardData;
-(NSURL *)brokerURL;
-(NSURL *)paymentServicesURL;
-(id)initWithCardRegistrationResponse:(id)arg1 ;
@end
