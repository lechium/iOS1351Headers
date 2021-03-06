/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AMSMetricsDatabaseSchema : NSObject
+(id)databasePathForContainerId:(id)arg1 ;
+(BOOL)createOrUpdateSchemaUsingConnection:(id)arg1 ;
+(BOOL)removeDatabaseForContainerId:(id)arg1 ;
+(void)migrateVersion0to1WithMigration:(id)arg1 ;
+(void)migrateVersion1to2WithMigration:(id)arg1 ;
+(id)_containerURLForContainerId:(id)arg1 ;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg1 ;
+(BOOL)_addSkipBackupAttribute:(BOOL)arg1 forURL:(id)arg2 ;
@end

