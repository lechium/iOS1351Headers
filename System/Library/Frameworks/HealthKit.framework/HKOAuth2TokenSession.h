/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding> {

	NSString* _code;
	NSString* _query;
	NSUUID* _state;

}

@property (nonatomic,copy,readonly) NSString * code;               //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * query;              //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * state;                //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)query;
-(NSUUID *)state;
-(id)initWithCode:(id)arg1 query:(id)arg2 state:(id)arg3 ;
@end

