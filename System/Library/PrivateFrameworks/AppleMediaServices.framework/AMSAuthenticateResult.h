/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class ACAccount, NSDictionary;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding> {

	ACAccount* _account;
	NSDictionary* _serverResponse;

}

@property (nonatomic,readonly) ACAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ACAccount *)account;
-(id)initWithAccount:(id)arg1 ;
-(NSDictionary *)serverResponse;
@end
