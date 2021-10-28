//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudRemoteStore.h"

@class BookmarkHashGenerator, CKDatabase, CKRecord, CKRecordZone, CKRecordZoneID, NSMutableArray, NSOperationQueue;
@protocol CloudBookmarkStoreLocalStorage;

@interface CloudBookmarkStore : CloudRemoteStore
{
    CKDatabase *_threadUnsafeDatabase;	// 24 = 0x18
    CKRecordZone *_threadUnsafeBookmarksRecordZone;	// 32 = 0x20
    NSOperationQueue *_bookmarksOperationQueue;	// 40 = 0x28
    NSMutableArray *_threadUnsafePrepareRecordZoneCompletionHandlers;	// 48 = 0x30
    BookmarkHashGenerator *_threadUnsafeBookmarkHashGenerator;	// 56 = 0x38
    CKRecord *_threadUnsafeSyncRequirementsRecord;	// 64 = 0x40
    CKRecord *_threadUnsafeMigrationStateRecord;	// 72 = 0x48
    _Bool _threadUnsafeIncludesMigrationRecordInSaveBatch;	// 80 = 0x50
    id <CloudBookmarkStoreLocalStorage> _threadUnsafeLocalStorage;	// 88 = 0x58
}

+ (id)recordZoneSubscriptionID;	// IMP=0x000000010002f8dc
- (void).cxx_destruct;	// IMP=0x0000000100030d08
- (id)_zoneLogName;	// IMP=0x0000000100030cfc
- (id)_zoneID;	// IMP=0x0000000100030cf8
- (id)_operationQueue;	// IMP=0x0000000100030ce8
- (id)_database;	// IMP=0x0000000100030cd8
- (void)_fetchRecordsOnInternalQueueWithServerChangeToken:(id)arg1 inOperationGroup:(id)arg2 result:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000303c4
- (_Bool)_checkMigrationStateOnInternalQueueInRecord:(id)arg1 error:(id)arg2;	// IMP=0x0000000100030150
- (void)_setUpRecordZoneInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002f96c
- (void)_setUpRecordZoneInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002f8e8
- (void)setMinimumSyncAPIVersion:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002f1b4
- (void)_fetchMinimumSyncAPIVersionInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002e8b8
- (void)fetchMinimumSyncAPIVersionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e820
- (void)setRemoteMigrationState:(long long)arg1 deviceIdentifier:(id)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010002e010
- (void)_fetchRemoteMigrationInfoInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002cf2c
- (void)fetchRemoteMigrationInfoInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002ce94
- (void)fetchCachedRemoteMigrationInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002cc90
- (void)fetchMetadataZoneRecordsWithRecordChangedBlock:(CDUnknownBlockType)arg1 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002c2a4
- (id)_hashGeneratorForEncryptionInfoRecord:(id)arg1;	// IMP=0x000000010002c1f0
- (void)_fetchEncryptionInfoInOperationGroup:(id)arg1 retryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002ba84
- (void)_fetchEncryptionInfoInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b9ec
- (void)_createEncryptionInfoRecordWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b708
- (void)fetchEncryptionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b348
@property(readonly, nonatomic) BookmarkHashGenerator *bookmarkHashGenerator;
- (void)_saveBookmarksRecordBatch:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 previouslySavedRecords:(id)arg4 previouslyDeletedRecordIDs:(id)arg5 retryManager:(id)arg6 mergeHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x0000000100028db0
- (void)_saveBookmarksRecordBatch:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 previouslySavedRecords:(id)arg4 previouslyDeletedRecordIDs:(id)arg5 mergeHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100028c84
- (void)_saveBookmarksRecordBatch:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 mergeHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100028b54
- (void)_saveOrLoadTopBookmarkInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100028340
- (void)_saveOrLoadTopBookmarkInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000282bc
- (void)_setUpEncryptionInfoAndTopBookmarkInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100027a24
- (void)_setUpEncryptionInfoAndTopBookmarkInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000279a0
- (void)_saveOrLoadRecord:(id)arg1 inOperationGroup:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100027464
- (void)_prepareBookmarksRecordZoneOnInternalQueueAfterExternalCompletionHandlersHaveBeenStashedInvalidatingCachedZone:(_Bool)arg1 createIfNeeded:(_Bool)arg2 retryManager:(id)arg3 inOperationGroup:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100026754
- (void)_prepareBookmarksRecordZoneInvalidatingCachedZone:(_Bool)arg1 createIfNeeded:(_Bool)arg2 inOperationGroup:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100026128
- (void)_prepareBookmarksRecordZoneCreatingIfNeeded:(_Bool)arg1 inOperationGroup:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000260cc
- (void)_prepareBookmarksRecordZoneInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100026078
- (void)deleteBookmarksZoneInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100025b8c
- (void)saveBookmarksRecordBatch:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 mergeHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010002576c
- (void)fetchNumberOfDevicesInSyncCircleWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010002553c
- (void)fetchBookmarksRecordChangesSinceServerChangeToken:(id)arg1 inOperationGroup:(id)arg2 recordChangedBlock:(CDUnknownBlockType)arg3 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100024e84
- (void)fetchAllBookmarkRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024a3c
- (void)saveBookmarksZoneSubscriptionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024760
- (void)fetchBookmarksZoneSubscriptionStatusCreatingZoneIfNeeded:(_Bool)arg1 inOperationGroup:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000240dc
- (void)setUpBookmarksRecordZoneCreatingIfNeeded:(_Bool)arg1 inOperationGroup:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100024084
- (void)setUpBookmarksRecordZoneInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100024030
- (void)clearCachedRecordZone;	// IMP=0x0000000100023f20
- (void)fetchUserIdentityInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000239a0
- (id)createSubscriptionRequestOperationGroupWithQualityOfService:(long long)arg1 xpcActivity:(id)arg2;	// IMP=0x0000000100023984
- (id)createMigrationFromDAVOperationGroupWithXPCActivity:(id)arg1;	// IMP=0x0000000100023968
- (id)createMigrationStateCheckOperationGroupWithXPCActivity:(id)arg1 qualityOfService:(long long)arg2;	// IMP=0x0000000100023950
- (id)initWithLocalStorage:(id)arg1;	// IMP=0x0000000100023694
- (id)init;	// IMP=0x000000010002367c
@property(nonatomic) _Bool includesMigrationRecordInSaveBatch; // @synthesize includesMigrationRecordInSaveBatch=_threadUnsafeIncludesMigrationRecordInSaveBatch;
@property(readonly, nonatomic) CKRecordZoneID *bookmarksRecordZoneID;
@property(readonly, nonatomic) id <CloudBookmarkStoreLocalStorage> localStorage; // @synthesize localStorage=_threadUnsafeLocalStorage;

@end
