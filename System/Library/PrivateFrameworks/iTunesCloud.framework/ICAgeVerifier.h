/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface ICAgeVerifier : NSObject <NSCopying> {

	long long _status;
	NSDate* _verificationExpirationDate;

}

@property (assign,nonatomic) long long status;                                                           //@synthesize status=_status - In the implementation block
@property (getter=isExplicitContentAllowed,nonatomic,readonly) BOOL explicitContentAllowed; 
@property (nonatomic,readonly) NSDate * verificationExpirationDate;                                      //@synthesize verificationExpirationDate=_verificationExpirationDate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithExpirationDate:(id)arg1 ;
-(NSDate *)verificationExpirationDate;
-(void)runAgeVerification;
-(BOOL)isExplicitContentAllowed;
@end
