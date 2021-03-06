/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CADDatabaseInterface
@required
-(void)CADDatabaseGetUUID:(/*^block*/id)arg1;
-(void)CADDatabaseRegisterForDetailedChangeTracking:(/*^block*/id)arg1;
-(void)CADDatabaseUnregisterForDetailedChangeTracking:(/*^block*/id)arg1;
-(void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg1 insideObject:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseMarkIndividualChangesConsumed:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetSequenceNumber:(/*^block*/id)arg1;
-(void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetNextAssignableColorWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseImportEvents:(id)arg1 fromICSData:(id)arg2 intoCalendarsWithIDs:(id)arg3 optionsMask:(unsigned long long)arg4 batchSize:(int)arg5 reply:(/*^block*/id)arg6;
-(void)CADDatabaseExportICSDataForCalendarItems:(id)arg1 preventLineFolding:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseRebuildOccurrenceCacheWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseSaveWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseCommitWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseRollbackWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseResetWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseCanModifyCalendarDatabase:(/*^block*/id)arg1;
-(void)CADDatabaseLastConfirmedSplashScreenVersion:(/*^block*/id)arg1;

@end

