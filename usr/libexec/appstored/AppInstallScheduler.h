//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, NSMutableSet, TaskQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AppInstallScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    _Bool _ignorePolicyNotifications;	// 16 = 0x10
    NSMutableSet *_pollReasons;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_pollSource;	// 32 = 0x20
    TaskQueue *_bootstrapQueue;	// 40 = 0x28
    AppInstallsDatabaseStore *_databaseStore;	// 48 = 0x30
    _Bool _unlockedOnce;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x00000001001e8bec
- (void).cxx_destruct;	// IMP=0x00000001001eccf8
- (_Bool)_checkIfInstallShouldBeAllowedToStart:(id)arg1 withPackage:(id)arg2;	// IMP=0x00000001001ec418
- (void)_scheduleNextOptimalDownloadWindow;	// IMP=0x00000001001ebfc4
- (void)_runOnceAfterUnlockChecks;	// IMP=0x00000001001ebeec
- (void)_requestPollWithReason:(unsigned long long)arg1;	// IMP=0x00000001001ebe30
- (void)_repairInconsistentInstallationState;	// IMP=0x00000001001eb918
- (void)_registerPolicyStateMonitors;	// IMP=0x00000001001eb778
- (void)_pollForPendingInstallations;	// IMP=0x00000001001eaf24
- (void)_handlePollEventWithReasons:(id)arg1;	// IMP=0x00000001001eadc8
- (void)_handleMonitorStateDidChangeNotification:(id)arg1;	// IMP=0x00000001001e9b14
- (void)_bootstrapSystemApps;	// IMP=0x00000001001e9350
- (void)_bootstrapStoreApps;	// IMP=0x00000001001e934c
- (id)_activeInstallationDictionary;	// IMP=0x00000001001e8fe4
- (void)scheduleNextOptimalDownloadWindow;	// IMP=0x00000001001e8f7c
- (void)requestPollWithReason:(unsigned long long)arg1;	// IMP=0x00000001001e8f70
- (id)initWithDatabaseStore:(id)arg1;	// IMP=0x00000001001e8cb8
- (id)init;	// IMP=0x00000001001e8c58

@end

