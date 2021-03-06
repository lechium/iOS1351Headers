/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:07 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding> {

	NSString* _machineID;
	NSString* _oneTimePassword;
	unsigned long long _routingInfo;

}

@property (nonatomic,copy) NSString * machineID;                          //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSString * oneTimePassword;                    //@synthesize oneTimePassword=_oneTimePassword - In the implementation block
@property (assign,nonatomic) unsigned long long routingInfo;              //@synthesize routingInfo=_routingInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)machineID;
-(NSString *)oneTimePassword;
-(unsigned long long)routingInfo;
-(void)setMachineID:(NSString *)arg1 ;
-(void)setOneTimePassword:(NSString *)arg1 ;
-(void)setRoutingInfo:(unsigned long long)arg1 ;
@end

