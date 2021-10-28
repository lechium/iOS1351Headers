/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BCCloudDataSyncManagerDelegate <NSObject>
@optional
-(void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;

@required
-(id)entityName;
-(void)syncManager:(id)arg1 startSyncToCKWithCompletion:(/*^block*/id)arg2;
-(void)signalSyncToCKForSyncManager:(id)arg1;
-(void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(/*^block*/id)arg3;

@end
