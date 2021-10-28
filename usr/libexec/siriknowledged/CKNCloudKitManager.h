//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, CKAccountInfo, CKContainer, CKNCloudKitDataStore, CKRecordZone, CKRecordZoneSubscription, CKServerChangeToken, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CKNCloudKitManager : NSObject <APSConnectionDelegate>
{
    _Bool _cloudSyncEnabled;	// 8 = 0x8
    _Bool _hasSetUpRecordZoneSubscription;	// 9 = 0x9
    NSString *_supportedRecordType;	// 16 = 0x10
    APSConnection *_pushConnection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    CKAccountInfo *_accountInfo;	// 40 = 0x28
    CKContainer *_container;	// 48 = 0x30
    CKRecordZone *_recordZone;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_recordZoneSetupTimer;	// 64 = 0x40
    CKRecordZoneSubscription *_subscription;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_subscriptionSetupTimer;	// 80 = 0x50
    CKServerChangeToken *_serverChangeToken;	// 88 = 0x58
    CKNCloudKitDataStore *_dataStore;	// 96 = 0x60
    NSString *_applicationIdentifier;	// 104 = 0x68
}

+ (id)getApplicationIdentifierFromEntitlements;	// IMP=0x0000000100008958
+ (id)sharedManager;	// IMP=0x0000000100007f50
- (void).cxx_destruct;	// IMP=0x000000010000f60c
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) CKNCloudKitDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(nonatomic) _Bool hasSetUpRecordZoneSubscription; // @synthesize hasSetUpRecordZoneSubscription=_hasSetUpRecordZoneSubscription;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *subscriptionSetupTimer; // @synthesize subscriptionSetupTimer=_subscriptionSetupTimer;
@property(retain, nonatomic) CKRecordZoneSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *recordZoneSetupTimer; // @synthesize recordZoneSetupTimer=_recordZoneSetupTimer;
@property(retain, nonatomic) CKRecordZone *recordZone; // @synthesize recordZone=_recordZone;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) CKAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) NSString *supportedRecordType; // @synthesize supportedRecordType=_supportedRecordType;
@property(nonatomic) _Bool cloudSyncEnabled; // @synthesize cloudSyncEnabled=_cloudSyncEnabled;
- (void)_disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000f3f0
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000f358
- (void)_cancelSubscriptionSetupTimer;	// IMP=0x000000010000f314
- (void)_setupRecordZoneSubscriptionWithRetryInterval:(double)arg1;	// IMP=0x000000010000eb30
- (void)_setupRecordZoneSubscription;	// IMP=0x000000010000eaf8
- (void)removeValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e7c0
- (void)saveRecordsWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e4f0
- (void)saveRecords:(id)arg1 deleteRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000e394
- (void)_saveRecords:(id)arg1 recordIDsToDelete:(id)arg2 savePolicy:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000dd84
- (id)_createKeysForRecordsIDs:(id)arg1;	// IMP=0x000000010000dbd0
- (id)_createRecordsIDsForKeys:(id)arg1;	// IMP=0x000000010000d9b8
- (id)_createDictionaryFromRecords:(id)arg1;	// IMP=0x000000010000d77c
- (id)_createRecordsWithDictionary:(id)arg1;	// IMP=0x000000010000d360
- (void)_cleanUpRecordZonesAndSubscriptions;	// IMP=0x000000010000d318
- (void)_cleanUpRecordZoneSubscriptionsTimers;	// IMP=0x000000010000d2d8
- (void)_deleteRecordZoneWithID:(id)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cfb4
- (void)_createRecordZoneWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cbac
- (void)_cancelRecordZoneSetupTimer;	// IMP=0x000000010000cb60
- (void)_setupRecordZoneWithRetryInterval:(double)arg1;	// IMP=0x000000010000c3ec
- (void)_setupRecordZone;	// IMP=0x000000010000c34c
- (void)_resetZone;	// IMP=0x000000010000c2e4
- (void)_initializeZone;	// IMP=0x000000010000c120
- (id)_createCloudKitContainer;	// IMP=0x000000010000bf0c
- (void)fetchAllChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bc3c
- (void)fetchChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b810
- (void)_fetchChangesWithRetryCount:(unsigned long long)arg1;	// IMP=0x000000010000af40
- (void)_fetchChanges;	// IMP=0x000000010000af0c
- (void)_fetchChangesFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009d38
- (id)_underlyingErrorForError:(id)arg1 zoneID:(id)arg2;	// IMP=0x0000000100009a40
- (_Bool)_shouldSync;	// IMP=0x0000000100009a04
- (void)_setupAccountState;	// IMP=0x0000000100009980
- (void)_handleAccountStatusChange:(id)arg1;	// IMP=0x00000001000097b0
- (void)_setupAccount;	// IMP=0x0000000100009508
- (void)_cloudSyncPreferenceDidChange;	// IMP=0x00000001000092b0
- (void)_cloudKitAccountStatusChanged:(id)arg1;	// IMP=0x00000001000091bc
- (void)_handleCloudKitNotification:(id)arg1;	// IMP=0x0000000100008f08
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000100008ce0
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000100008b98
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100008a98
- (void)_disablePush;	// IMP=0x0000000100008904
- (void)_enablePush;	// IMP=0x00000001000087e8
- (void)disablePushNotifications;	// IMP=0x0000000100008780
- (void)enablePushNotifications;	// IMP=0x0000000100008718
- (void)dealloc;	// IMP=0x0000000100008634
- (id)init;	// IMP=0x0000000100007fec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
