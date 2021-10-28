/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/HDSyncEntityProvider.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>

@class NSString;

@interface ACHAchievementsPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (nonatomic,copy,readonly) NSString * schemaName; 
@property (nonatomic,copy,readonly) NSString * syncSchemaIdentifier; 
-(NSString *)pluginIdentifier;
-(id)taskServerClasses;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(id)extensionForProfile:(id)arg1 ;
-(id)orderedSyncEntities;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1 ;
-(id)databaseEntitiesForProtectionClass:(long long)arg1 ;
-(NSString *)schemaName;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2 ;
-(NSString *)syncSchemaIdentifier;
-(void)_addResetSyncAnchorsMigrationStepToMigrator:(id)arg1 ;
-(void)_addSyncAnchorSaveOffMigrationStepToMigrator:(id)arg1 ;
-(void)_addAddAvailableCountryCodesColumnMigrationToMigrator:(id)arg1 ;
-(void)_addVersion5MigratorToMigrator:(id)arg1 ;
-(void)_addValidateEarnedInstanceRowStepToMigrator:(id)arg1 ;
-(void)_addDropSyncAnchorSaveOffTableIfNecessaryToMigrator:(id)arg1 ;
-(void)_addAddSuffixesColumnMigrationToMigrator:(id)arg1 ;
-(void)_addGracePredicateColumnsMigrationToMigrator:(id)arg1 ;
-(void)_addGraceExpressionColumnsMigrationToMigrator:(id)arg1 ;
@end
