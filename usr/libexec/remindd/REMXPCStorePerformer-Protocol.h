//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CKShare, CKShareMetadata, NSArray, NSData, NSDictionary, NSString, REMDistributedEvaluationCollectionOptions, REMObjectID, REMStoreInvocation, REMStoreSwiftInvocation;

@protocol REMXPCStorePerformer
- (void)requestToDeleteLocalDataWithCompletion:(void (^)(NSError *))arg1;
- (void)requestToDeleteSyncDataWithAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeOrphanedAccountWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)updateAccountWithACAccountID:(NSString *)arg1 restartDA:(_Bool)arg2 completion:(void (^)(_Bool, _Bool, NSError *))arg3;
- (void)updateAccountsAndFetchMigrationState:(_Bool)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)notifyOfUserInterestInSiriSuggestedReminder:(REMObjectID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)notifyOfInteractionWithPeople:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rejectCalDAVShareWithCalendarURL:(NSString *)arg1 acAccountID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)acceptCalDAVShareWithCalendarURL:(NSString *)arg1 acAccountID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)acceptShareWithMetadata:(CKShareMetadata *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)stopShare:(CKShare *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateShare:(CKShare *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createShareForObjectWithID:(REMObjectID *)arg1 completion:(void (^)(CKShare *, NSError *))arg2;
- (void)fetchShareForObjectWithID:(REMObjectID *)arg1 completion:(void (^)(CKShare *, NSError *))arg2;
- (void)saveAccountStorages:(NSArray *)arg1 listStorages:(NSArray *)arg2 reminderStorages:(NSArray *)arg3 changedKeys:(NSDictionary *)arg4 replicaManagers:(NSDictionary *)arg5 author:(NSString *)arg6 mode:(unsigned long long)arg7 synchronously:(_Bool)arg8 completion:(void (^)(NSError *))arg9;
- (void)compressedDistributedEvaluationDataWithOptions:(REMDistributedEvaluationCollectionOptions *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchReplicaManagersForAccountID:(REMObjectID *)arg1 bundleID:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)fetchReplicaManagerForAccountID:(REMObjectID *)arg1 completion:(void (^)(REMReplicaManagerSerializedData *, NSError *))arg2;
- (void)performSwiftInvocation:(REMStoreSwiftInvocation *)arg1 withParametersData:(NSData *)arg2 storages:(NSDictionary *)arg3 completion:(void (^)(REMStoreSwiftInvocationResult *, NSError *))arg4;
- (void)performInvocation:(REMStoreInvocation *)arg1 completion:(void (^)(REMStoreInvocationResult *, NSError *))arg2;
- (void)executeFetchRequest:(id)arg1 completion:(void (^)(REMFetchResult *, NSError *))arg2;
@end

