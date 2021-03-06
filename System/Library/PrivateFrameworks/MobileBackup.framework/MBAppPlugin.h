/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBAppPlugin : MBContainer

@property (nonatomic,readonly) NSString * bundleDir; 
@property (nonatomic,readonly) NSString * ownerBundleID; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * allAppGroupContainers; 
+(id)appPluginWithPropertyList:(id)arg1 ;
-(id)domain;
-(NSDictionary *)entitlements;
-(NSArray *)groups;
-(NSArray *)allAppGroupContainers;
-(NSString *)bundleDir;
-(NSString *)entitlementsRelativePath;
-(NSString *)ownerBundleID;
@end

