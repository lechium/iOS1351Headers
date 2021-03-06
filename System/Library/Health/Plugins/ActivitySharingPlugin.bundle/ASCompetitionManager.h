/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:36 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASCloudKitManagerChangesObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/ASActivityDataManagerObserver.h>
#import <libobjc.A.dylib/ASActivitySharingManagerReadyObserver.h>
#import <libobjc.A.dylib/ASPeriodicUpdateRecordProvider.h>

@protocol OS_dispatch_queue;
@class ASAchievementManager, ASActivityDataManager, ASCloudKitManager, ASCompetitionBulletinManager, ASContactsManager, ASFriendListManager, ASPeriodicUpdateManager, ASRelationshipManager, HDProfile, ASCompetitionStore, ASAsyncTransactionQueue, NSObject, NSHashTable, NSSet, NSNumber, NSString;

@interface ASCompetitionManager : NSObject <ASCloudKitManagerChangesObserver, HDDatabaseProtectedDataObserver, ASActivityDataManagerObserver, ASActivitySharingManagerReadyObserver, ASPeriodicUpdateRecordProvider> {

	ASAchievementManager* _achievementManager;
	ASActivityDataManager* _activityDataManager;
	ASCloudKitManager* _cloudKitManager;
	ASCompetitionBulletinManager* _competitionBulletinManager;
	ASContactsManager* _contactsManager;
	ASFriendListManager* _friendListManager;
	ASPeriodicUpdateManager* _periodicUpdateManager;
	ASRelationshipManager* _relationshipManager;
	HDProfile* _profile;
	ASCompetitionStore* _competitionStore;
	ASAsyncTransactionQueue* _transactionQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	NSSet* _existingFriendUUIDsAwaitingMyCompetitionResponse;
	NSSet* _existingFriendUUIDsWithAcceptedCompetitionRequestsFromMe;
	NSSet* _existingFriendUUIDsWithCompletedCompetitions;
	NSSet* _friendUUIDsWithUpdatedCompetitions;
	NSNumber* _scoreCapCelebrationAnchor;
	BOOL _deviceParticipatesInAutomaticCompetitionManagement;
	BOOL _hasFetchedProtectedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isReadyToProcessChanges; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)recordsToSave;
-(id)recordIDsToDelete;
-(void)sendCompetitionRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acceptCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)ignoreCompetitionRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeCompetitionWithFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)updateAllActiveCompetitionsWithScores:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(BOOL)isReadyToProcessChanges;
-(void)cloudKitManager:(id)arg1 didBeginUpdatesForFetchWithType:(long long)arg2 ;
-(void)cloudKitManager:(id)arg1 didEndUpdatesForFetchWithType:(long long)arg2 ;
-(void)cloudKitManager:(id)arg1 didReceiveNewCompetitionListsForSelf:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(void)cloudKitManager:(id)arg1 didReceiveNewCompetitionLists:(id)arg2 moreComing:(BOOL)arg3 changesProcessedHandler:(/*^block*/id)arg4 ;
-(id)_localUserDefaultsDomainWithProfile:(id)arg1 ;
-(id)initWithIsWatch:(BOOL)arg1 ;
-(id)competitionsForFriendWithUUID:(id)arg1 ;
-(void)deleteCachedCompetitions;
-(void)_loadCachedCompetitionsAndNotifyObservers;
-(id)_loadOrCreateCurrentCompetitionListForFriendWithUUID:(id)arg1 ;
-(id)_archivedCompetitionListByMergingCurrentCompetitionList:(id)arg1 ;
-(void)_saveCurrentCompetitionList:(id)arg1 archivedCompetitionList:(id)arg2 contact:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_setActivityDataVisibleIfNecessaryForContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_updateScoresWithTodaySummary:(id)arg1 yesterdaySummary:(id)arg2 ;
-(void)_queue_handleNewRemoteCompetitionList:(id)arg1 contact:(id)arg2 ;
-(void)_queue_notifyObserversOfCompetitionUpdatesForFriendsWithUUIDs:(id)arg1 ;
-(void)_handleCompetitionRequestFromFriendWithUUID:(id)arg1 ;
-(void)_handleAcceptedCompetitionFromFriendWithUUID:(id)arg1 ;
-(void)_queue_showCompetitionEndedWithFriendWithUUID:(id)arg1 ;
-(void)_queue_completeCompetitionIfNecessaryForFriendWithUUID:(id)arg1 ;
-(id)_contactsWithActiveCompetitions;
-(id)_recordForCurrentCompetitionList:(id)arg1 contact:(id)arg2 ;
-(void)_queue_handleSavedCompetitionListRecords:(id)arg1 ;
-(id)_scoreCapCelebrationAnchorWithProfile:(id)arg1 ;
-(void)_queue_autoAcceptCompetitionRequestFromContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_showCompetitionRequestFromFriendWithUUID:(id)arg1 competition:(id)arg2 ;
-(id)_localCompetitionForRemoteCompetition:(id)arg1 friendUUID:(id)arg2 ;
-(void)_queue_showCompetitionAcceptedForFriendWithUUID:(id)arg1 competition:(id)arg2 ;
-(void)_queue_showScoreCapCelebrationForFriendsWithCappedInProgressCompetitions:(id)arg1 ;
-(void)_setScoreCapCelebrationAnchor:(id)arg1 ;
-(void)loadCachedCompetitions;
-(void)activityDataManager:(id)arg1 didUpdateTodaySummary:(id)arg2 yesterdaySummary:(id)arg3 ;
-(void)periodicUpdateManager:(id)arg1 didSaveRecords:(id)arg2 ;
-(void)periodicUpdateManager:(id)arg1 didFailToSaveRecords:(id)arg2 ;
@end

