/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceTermsDataResponse : PKAccountWebServiceResponse {

	NSData* _termsData;
	NSString* _termsDataFileName;

}

@property (nonatomic,retain) NSData * termsData;                      //@synthesize termsData=_termsData - In the implementation block
@property (nonatomic,copy) NSString * termsDataFileName;              //@synthesize termsDataFileName=_termsDataFileName - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)termsData;
-(void)setTermsData:(NSData *)arg1 ;
-(NSString *)termsDataFileName;
-(void)setTermsDataFileName:(NSString *)arg1 ;
@end
