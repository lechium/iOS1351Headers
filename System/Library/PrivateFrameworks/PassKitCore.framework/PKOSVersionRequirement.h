/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:43 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying> {

	NSString* _iphone;
	NSString* _ipad;
	NSString* _ipod;
	NSString* _appletv;
	NSString* _mac;
	NSString* _watch;
	NSString* _specifiediphone;

}

@property (nonatomic,readonly) NSString * iphone;                       //@synthesize iphone=_iphone - In the implementation block
@property (nonatomic,readonly) NSString * ipad;                         //@synthesize ipad=_ipad - In the implementation block
@property (nonatomic,readonly) NSString * ipod;                         //@synthesize ipod=_ipod - In the implementation block
@property (nonatomic,readonly) NSString * appletv;                      //@synthesize appletv=_appletv - In the implementation block
@property (nonatomic,readonly) NSString * mac;                          //@synthesize mac=_mac - In the implementation block
@property (nonatomic,readonly) NSString * watch;                        //@synthesize watch=_watch - In the implementation block
@property (nonatomic,readonly) NSString * specifiediphone;              //@synthesize specifiediphone=_specifiediphone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromDeviceVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)watch;
-(id)asDictionary;
-(NSString *)iphone;
-(NSString *)ipad;
-(NSString *)ipod;
-(NSString *)appletv;
-(NSString *)mac;
-(long long)compare:(id)arg1 deviceClass:(id)arg2 ;
-(id)versionForDeviceClass:(id)arg1 ;
-(NSString *)specifiediphone;
@end

