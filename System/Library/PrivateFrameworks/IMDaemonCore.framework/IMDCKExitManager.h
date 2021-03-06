/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@protocol OS_dispatch_queue;
@class NSDate, NSError, CKRecordID, NSNumber, NSObject, IMDRecordZoneManager, IMDCKDatabaseManager;

@interface IMDCKExitManager : IMDCKAbstractSyncController {

	BOOL _fetchedExitDateOnLaunch;
	NSDate* _exitRecordDate;
	NSError* _errorFetchingExitDate;
	CKRecordID* _exitRecordID;
	NSNumber* _saltZoneCreatedOverride;
	NSNumber* _subscriptionCreatedOverride;
	NSObject*<OS_dispatch_queue> _ckQueue;
	IMDRecordZoneManager* _recordZoneManager;
	IMDCKDatabaseManager* _databaseManager;

}

@property (nonatomic,retain) CKRecordID * exitRecordID;                             //@synthesize exitRecordID=_exitRecordID - In the implementation block
@property (nonatomic,retain) NSNumber * saltZoneCreatedOverride;                    //@synthesize saltZoneCreatedOverride=_saltZoneCreatedOverride - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionCreatedOverride;                //@synthesize subscriptionCreatedOverride=_subscriptionCreatedOverride - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;                //@synthesize ckQueue=_ckQueue - In the implementation block
@property (nonatomic,retain) IMDRecordZoneManager * recordZoneManager;              //@synthesize recordZoneManager=_recordZoneManager - In the implementation block
@property (nonatomic,retain) IMDCKDatabaseManager * databaseManager;                //@synthesize databaseManager=_databaseManager - In the implementation block
@property (nonatomic,retain) NSDate * exitRecordDate;                               //@synthesize exitRecordDate=_exitRecordDate - In the implementation block
@property (nonatomic,retain) NSError * errorFetchingExitDate;                       //@synthesize errorFetchingExitDate=_errorFetchingExitDate - In the implementation block
@property (assign,nonatomic) BOOL fetchedExitDateOnLaunch;                          //@synthesize fetchedExitDateOnLaunch=_fetchedExitDateOnLaunch - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_scheduleOperation:(id)arg1 ;
-(IMDCKDatabaseManager *)databaseManager;
-(void)setDatabaseManager:(IMDCKDatabaseManager *)arg1 ;
-(void)setRecordZoneManager:(IMDRecordZoneManager *)arg1 ;
-(IMDRecordZoneManager *)recordZoneManager;
-(void)submitCloudKitMetricWithOperationGroupName:(id)arg1 useManatee:(BOOL)arg2 ;
-(void)submitCloudKitAnalyticWithOperationGroupName:(id)arg1 useManatee:(BOOL)arg2 analyticDictionary:(id)arg3 ;
-(void)writeExitRecordWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initRecordZoneManager:(id)arg1 databaseManager:(id)arg2 ;
-(void)_setUpSubscription;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(NSDate *)exitRecordDate;
-(NSError *)errorFetchingExitDate;
-(void)_fetchExitRecordDateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_saltZoneCreated;
-(BOOL)_subscriptionCreated;
-(CKRecordID *)exitRecordID;
-(id)exitConfiguration;
-(void)setExitRecordDate:(NSDate *)arg1 ;
-(void)setErrorFetchingExitDate:(NSError *)arg1 ;
-(BOOL)fetchedExitDateOnLaunch;
-(void)setFetchedExitDateOnLaunch:(BOOL)arg1 ;
-(void)_evalToggleiCloudSettingsSwitch;
-(long long)derivedQualityOfService;
-(void)writeSyncCompletedRecordWithDate:(id)arg1 useManatee:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)submitCloudKitMetricWithData:(id)arg1 operationGroupName:(id)arg2 useManatee:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_analyticZoneCreated;
-(void)submitCloudKitAnalyticWithDictionary:(id)arg1 operationGroupName:(id)arg2 useManatee:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_sharedCKUtilities;
-(void)_scheduleMetricOperation:(id)arg1 useManate:(BOOL)arg2 ;
-(BOOL)_canSubmitCloudKitMetric;
-(id)_modifiedOpGroupName:(id)arg1 useManatee:(BOOL)arg2 ;
-(id)syncCompleteRecordID;
-(void)_submitCloudKitMetricWithOperationGroupName:(id)arg1 record:(id)arg2 useManatee:(BOOL)arg3 ignoreZoneNotFoundError:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_canSubmitCloudKitAnalytic;
-(id)analyticZoneRecordID;
-(void)handleNotificationForSubscriptionID:(id)arg1 ;
-(void)exitRecordDateWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteExitRecordWithCompletion:(/*^block*/id)arg1 ;
-(void)writeInitialSyncCompletedRecordIfNeeded;
-(void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
-(void)setExitRecordID:(CKRecordID *)arg1 ;
-(NSNumber *)saltZoneCreatedOverride;
-(void)setSaltZoneCreatedOverride:(NSNumber *)arg1 ;
-(NSNumber *)subscriptionCreatedOverride;
-(void)setSubscriptionCreatedOverride:(NSNumber *)arg1 ;
@end

