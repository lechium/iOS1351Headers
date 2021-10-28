/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	long long _domain;
	NSNumber* _instance;

}

@property (assign,nonatomic) long long domain;                     //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSNumber * instance;                  //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)telephonyDescriptorWithInstance:(id)arg1 ;
+(id)descriptorWithSubscriptionContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setDomain:(long long)arg1 ;
-(NSNumber *)instance;
-(void)setInstance:(NSNumber *)arg1 ;
-(id)initWithDomain:(long long)arg1 instance:(id)arg2 ;
@end
