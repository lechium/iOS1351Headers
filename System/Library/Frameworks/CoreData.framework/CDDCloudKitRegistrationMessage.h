/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CDDCloudKitMessage.h>

@class NSString, NSFileHandle;

@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage {

	NSString* _bundleIdentifier;
	NSFileHandle* _storeFileHandle;
	NSString* _storePath;
	NSString* _storeFileProtectionClass;
	NSString* _storeType;
	NSString* _storeConfigurationName;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSFileHandle * storeFileHandle;                   //@synthesize storeFileHandle=_storeFileHandle - In the implementation block
@property (nonatomic,readonly) NSString * storePath;                             //@synthesize storePath=_storePath - In the implementation block
@property (nonatomic,readonly) NSString * storeFileProtectionClass;              //@synthesize storeFileProtectionClass=_storeFileProtectionClass - In the implementation block
@property (nonatomic,readonly) NSString * storeType;                             //@synthesize storeType=_storeType - In the implementation block
@property (nonatomic,readonly) NSString * storeConfigurationName;                //@synthesize storeConfigurationName=_storeConfigurationName - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                   //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)containerIdentifier;
-(NSString *)storePath;
-(NSFileHandle *)storeFileHandle;
-(NSString *)storeConfigurationName;
-(NSString *)storeFileProtectionClass;
-(id)initWithFileHandle:(id)arg1 forStoreWithDescription:(id)arg2 andBundleIdentifier:(id)arg3 ;
-(NSString *)storeType;
@end
