/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSCloudHistoryDataStore
@required
-(void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(id)initWithConfiguration:(id)arg1 useManateeContainer:(BOOL)arg2;
-(void)deleteHistoryZoneWithCompletion:(/*^block*/id)arg1;
-(void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)initializePushNotifications:(/*^block*/id)arg1;
-(void)fetchNumberOfDevicesInSyncCircleWithCompletion:(/*^block*/id)arg1;

@end

