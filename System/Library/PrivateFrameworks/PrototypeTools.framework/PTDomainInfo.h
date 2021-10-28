/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding> {

	NSString* _uniqueIdentifier;
	NSString* _domainGroupName;
	NSString* _domainName;
	NSString* _settingsClassName;
	NSString* _settingsFrameworkBundlePath;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * domainGroupName;                          //@synthesize domainGroupName=_domainGroupName - In the implementation block
@property (nonatomic,readonly) NSString * domainName;                               //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) NSString * settingsClassName;                        //@synthesize settingsClassName=_settingsClassName - In the implementation block
@property (nonatomic,readonly) NSString * settingsFrameworkBundlePath;              //@synthesize settingsFrameworkBundlePath=_settingsFrameworkBundlePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)domainName;
-(id)initWithDomain:(id)arg1 ;
-(NSString *)domainGroupName;
-(NSString *)settingsClassName;
-(NSString *)settingsFrameworkBundlePath;
@end
