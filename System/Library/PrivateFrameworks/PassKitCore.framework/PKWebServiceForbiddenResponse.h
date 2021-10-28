/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKWebServiceForbiddenResponse : PKWebServiceResponse {

	NSNumber* _errorCode;
	NSString* _localizedTitle;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSNumber * errorCode;                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(NSString *)localizedDescription;
-(id)initWithData:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSNumber *)errorCode;
-(void)setErrorCode:(NSNumber *)arg1 ;
@end
