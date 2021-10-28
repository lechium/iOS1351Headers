/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSDictionary, ICStoreDialogResponse, NSError;

@interface ICRadioResponse : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * contentDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) long long version; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSError * serverError; 
-(long long)version;
-(NSDate *)expirationDate;
-(NSDictionary *)responseDictionary;
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;
-(id)initWithURLResponse:(id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(NSDictionary *)contentDictionary;
@end
