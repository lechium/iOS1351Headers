//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableSet, TestFlightFeedbackDatabaseStore;
@protocol OS_dispatch_queue;

@interface TestFlightFeedbackManager : NSObject
{
    NSMutableSet *_activeTaskPIDs;	// 8 = 0x8
    NSLock *_activeTaskPIDsLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    TestFlightFeedbackDatabaseStore *_databaseStore;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001001e2ab0
- (void).cxx_destruct;	// IMP=0x00000001001e8514
- (void)_validateMetadataForBundleID:(id)arg1;	// IMP=0x00000001001e83e8
- (void)_uploadPendingFeedback;	// IMP=0x00000001001e8060
- (void)_scheduleNextFeedbackSubmission:(id)arg1;	// IMP=0x00000001001e7f2c
- (void)_saveEntity:(id)arg1;	// IMP=0x00000001001e7e80
- (void)_runUploadTaskForEntity:(id)arg1;	// IMP=0x00000001001e7bd8
- (_Bool)_removeAppVersion:(id)arg1;	// IMP=0x00000001001e7a30
- (void)_purgeVersionIfNecessary:(id)arg1;	// IMP=0x00000001001e781c
- (id)_proxyForBetaAppWithBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001e7698
- (_Bool)_isFeedbackEnabledForBundleID:(id)arg1 andToken:(id)arg2;	// IMP=0x00000001001e74a8
- (void)_handleUploadTaskResult:(id)arg1;	// IMP=0x00000001001e6c50
- (void)_handleNetworkStateDidChangeNotification:(id)arg1;	// IMP=0x00000001001e6b9c
- (void)_handleFailedAttemptForTask:(id)arg1;	// IMP=0x00000001001e6900
- (id)_getDisplayNamesForBundleID:(id)arg1 andToken:(id)arg2;	// IMP=0x00000001001e66d4
- (id)_getAllAppVersionsForBundleID:(id)arg1;	// IMP=0x00000001001e6578
- (void)_deleteFeedbackWithDatabaseID:(long long)arg1;	// IMP=0x00000001001e646c
- (int)_backoffRandomAddition;	// IMP=0x00000001001e63cc
- (id)_backoffDelayForAttemptCount:(int)arg1;	// IMP=0x00000001001e62b8
- (id)_authenticateAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001e6018
- (void)validateMetadataForBundleIDs:(id)arg1;	// IMP=0x00000001001e5ef8
- (void)uploadPendingFeedback;	// IMP=0x00000001001e5e90
- (void)updateTestNotes:(id)arg1 forVersion:(id)arg2 andToken:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001e5acc
- (void)submitFeedback:(id)arg1 forToken:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e52b8
- (void)setLaunchScreenEnabled:(_Bool)arg1 forVersion:(id)arg2 andToken:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001e4f20
- (void)setLaunchInfo:(id)arg1 forToken:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e4b50
- (void)setFeedbackEnabled:(_Bool)arg1 forVersion:(id)arg2 andToken:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001e47b8
- (void)purgeUnusedBetaVersions;	// IMP=0x00000001001e474c
- (void)offerToShareFeedbackForCrashedAppWithBundleID:(id)arg1 andIncidentID:(id)arg2;	// IMP=0x00000001001e3e70
- (_Bool)isLaunchScreenEnabledForBundleID:(id)arg1 andToken:(id)arg2;	// IMP=0x00000001001e3bf8
- (_Bool)isFeedbackEnabledForBundleID:(id)arg1 andToken:(id)arg2;	// IMP=0x00000001001e3ac0
- (void)getLaunchInfoForVersion:(id)arg1 forToken:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e3854
- (void)getLaunchInfoForBundleID:(id)arg1 forToken:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e347c
- (void)getFeedbackMetadataForBundleID:(id)arg1 forToken:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001e3110
- (id)getEmailAddressForBundleID:(id)arg1 andToken:(id)arg2;	// IMP=0x00000001001e2e5c
- (id)getDisplayNamesForBundleID:(id)arg1 andToken:(id)arg2;	// IMP=0x00000001001e2cd0
- (id)init;	// IMP=0x00000001001e2b4c

@end

