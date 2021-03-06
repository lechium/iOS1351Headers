//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FLFollowUpController, TaskQueue;
@protocol OS_dispatch_queue;

@interface RestoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    TaskQueue *_restoreQueue;	// 16 = 0x10
    FLFollowUpController *_followUpController;	// 24 = 0x18
}

+ (id)accountForRestoreInstall:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100086444
+ (void)completeHardFailCoordinators:(id)arg1 resason:(id)arg2;	// IMP=0x0000000100085948
+ (id)sharedInstance;	// IMP=0x0000000100085448
- (void).cxx_destruct;	// IMP=0x000000010008f648
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
- (_Bool)_restoreAppID:(id)arg1 matches:(id)arg2;	// IMP=0x000000010008f590
- (void)_retryRestoresForAccount:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x000000010008e70c
- (_Bool)_restoreApp:(id)arg1 account:(id)arg2 isUserInitiated:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000010008e368
- (void)_processTokenFailuresAndPostFollowupOrPerformAuthWithUserInitiated:(_Bool)arg1;	// IMP=0x000000010008d070
- (void)_postFollowupForAccounts:(id)arg1;	// IMP=0x000000010008c7cc
- (void)_postFollowupForAppleID:(id)arg1 accountID:(id)arg2;	// IMP=0x000000010008c6ec
- (void)_performContentRestoreForRestoreInstalls:(id)arg1 batchInfo:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010008c1b0
- (void)_performContentRestoreBatchLookup:(id)arg1 batchInfo:(id)arg2 outError:(id *)arg3;	// IMP=0x000000010008b78c
- (long long)_pendingMetadataLookup;	// IMP=0x000000010008b5f8
- (_Bool)_isErrorAccountError:(id)arg1;	// IMP=0x000000010008b568
- (_Bool)_installErrorIsAccountError:(id)arg1;	// IMP=0x000000010008b4c0
- (_Bool)_installEntityHasAccountFailure:(id)arg1;	// IMP=0x000000010008b454
- (_Bool)_installHasAccountFailure:(id)arg1;	// IMP=0x000000010008b3f8
- (id)_hydrationTypeForAppInstallRestoreType:(long long)arg1;	// IMP=0x000000010008b3bc
- (void)_hydrateApp:(id)arg1;	// IMP=0x0000000100089e88
- (void)_handleMonitorStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100089bbc
- (void)_finishCompletedRestores:(_Bool)arg1 completeOrderedOnly:(_Bool)arg2;	// IMP=0x0000000100089a90
- (id)_restoreStateToDictionary;	// IMP=0x0000000100088d88
- (void)_createRetryActivityIfNeeded:(_Bool)arg1;	// IMP=0x0000000100088a38
- (void)_createCoordinatorUsing:(id)arg1 addProgress:(_Bool)arg2;	// IMP=0x0000000100088738
- (void)_completeHardFailures:(id)arg1;	// IMP=0x0000000100088650
- (void)_clearAllFollowUps;	// IMP=0x00000001000884b8
- (void)_clearFollowupForAccountID:(id)arg1;	// IMP=0x00000001000881e0
- (void)_boostrapWhenReadyWithReason:(id)arg1 targetAccountID:(id)arg2;	// IMP=0x0000000100087f9c
- (void)_bootstrapRestoresForBatchType:(long long)arg1 restoreInfo:(id)arg2 targetAccountID:(id)arg3;	// IMP=0x0000000100087308
- (void)_bootStrapRestoreJobs:(id)arg1 targetAccountID:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0000000100086df4
- (long long)_activeRestoreCount;	// IMP=0x0000000100086c60
- (long long)_activeSoftFailureCount;	// IMP=0x0000000100086acc
- (long long)_activeHardFailureCount;	// IMP=0x0000000100086938
- (void)retryRestoresForAccount:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x0000000100086398
- (id)restoreStateDictionary;	// IMP=0x000000010008627c
- (void)postFollowupForAppleID:(id)arg1 accountID:(id)arg2;	// IMP=0x00000001000861a0
- (void)hydrateApps:(id)arg1;	// IMP=0x0000000100085ffc
- (void)clearFollowupForAccountID:(id)arg1;	// IMP=0x00000001000858b0
- (void)bootStrapRestoreJobs:(id)arg1 targetAccountID:(id)arg2 userInitiated:(_Bool)arg3;	// IMP=0x00000001000857ac
- (id)authenticateForAppleID:(id)arg1 outError:(id *)arg2;	// IMP=0x00000001000854e4
- (id)init;	// IMP=0x00000001000852b0

@end

