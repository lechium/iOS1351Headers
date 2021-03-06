/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:41 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSURL, NSString;

@interface PKAccountWebServiceTermsDataRequest : PKAccountWebServiceRequest {

	NSURL* _baseURL;
	NSString* _accountIdentifier;
	NSString* _termsIdentifier;
	NSString* _termsDataFormat;

}

@property (nonatomic,retain) NSURL * baseURL;                         //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * termsDataFormat;                //@synthesize termsDataFormat=_termsDataFormat - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(NSString *)termsDataFormat;
-(void)setTermsDataFormat:(NSString *)arg1 ;
@end

