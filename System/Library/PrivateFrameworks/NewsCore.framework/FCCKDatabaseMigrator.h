/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCCKDatabaseMigrator <NSObject>
@required
-(BOOL)databaseMigrationShouldMigrateEntireZone:(id)arg1 database:(id)arg2;
-(id)databaseMigrationRecordNamesToMigrateInZone:(id)arg1 database:(id)arg2;
-(BOOL)databaseMigrationShouldDropRecord:(id)arg1 database:(id)arg2;
-(id)databaseMigrationMigrateRecord:(id)arg1 database:(id)arg2 error:(id*)arg3;
-(id)databaseMigrationZoneNamesForDatabase:(id)arg1;
-(void)databaseMigrationDidFinishForDatabase:(id)arg1 result:(long long)arg2;

@end
