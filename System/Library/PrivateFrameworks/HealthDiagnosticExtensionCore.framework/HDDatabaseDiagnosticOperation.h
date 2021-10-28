/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:21 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperation.h>

@interface HDDatabaseDiagnosticOperation : HDDiagnosticOperation
-(void)run;
-(BOOL)allowsSensitiveAttachments;
-(id)reportFilename;
-(void)_reportStatsForDatabaseAtURL:(id)arg1 ;
-(void)_reportSizeForHFDAtURL:(id)arg1 ;
-(void)_reportJournalStatisticsInSubdirectory:(id)arg1 profileDirectory:(id)arg2 ;
-(void)_reportMedicalIDStatistics;
-(BOOL)_reportStatisticsForUnprotectedDatabaseAtURL:(id)arg1 protectedDatabaseAtURL:(id)arg2 ;
-(BOOL)_captureUnprotectedDatabaseAtURL:(id)arg1 protectedDatabaseAtURL:(id)arg2 reason:(id)arg3 ;
-(void)_verifyPermissionsForFileAtURL:(id)arg1 ;
-(void)_reportIntegrityForDatabase:(id)arg1 ;
-(void)_checkSchemaVersionForDatabase:(id)arg1 currentSchema:(int)arg2 futureSchema:(int)arg3 ;
-(void)_reportCountsForDatabase:(id)arg1 entityClasses:(id)arg2 ;
-(void)_reportMissingSourceOrderEntriesWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2 ;
-(long long)_reportCountOfObjectsForEntityClass:(Class)arg1 database:(id)arg2 ;
-(long long)_reportCountOfObjectsInTable:(id)arg1 database:(id)arg2 ;
@end
