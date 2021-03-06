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

@class NSString;

@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sourceBundleIdentifier;
	NSString* _systemBuildVersion;
	NSString* _productType;
	unsigned long long _state;
	int _protocolVersion;

}

@property (copy,readonly) NSString * sourceBundleIdentifier; 
@property (copy,readonly) NSString * systemBuildVersion; 
@property (copy,readonly) NSString * productType; 
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isRestoreComplete,readonly) BOOL restoreComplete; 
@property (readonly) int protocolVersion; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)productType;
-(int)protocolVersion;
-(NSString *)sourceBundleIdentifier;
-(NSString *)systemBuildVersion;
-(BOOL)isRestoreComplete;
-(id)initWithSourceBundleIdentifier:(id)arg1 systemBuildVersion:(id)arg2 productType:(id)arg3 active:(BOOL)arg4 restoreComplete:(BOOL)arg5 protocolVersion:(int)arg6 ;
@end

