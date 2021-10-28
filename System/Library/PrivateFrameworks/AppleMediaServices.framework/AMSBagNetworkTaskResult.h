/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSDate, NSString;

@interface AMSBagNetworkTaskResult : NSObject {

	NSDictionary* _data;
	NSDate* _expirationDate;
	NSString* _storefront;

}

@property (nonatomic,retain) NSDictionary * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL expired; 
@property (nonatomic,retain) NSString * storefront;                //@synthesize storefront=_storefront - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)storefront;
-(void)setStorefront:(NSString *)arg1 ;
-(BOOL)expired;
@end
