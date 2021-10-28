//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PCSSyncingProtocol-Protocol.h"

@class AccountsModel, NSOperationQueue, NSUserDefaults, PCSDelayedAction, PCSIDSSyncing, PCSKeySyncing, PCSMobileBackup, PCSUserRegistry;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface PCSSyncing : NSObject <PCSSyncingProtocol>
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    PCSUserRegistry *_registry;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_registryQueue;	// 24 = 0x18
    PCSKeySyncing *_manager;	// 32 = 0x20
    AccountsModel *_accounts;	// 40 = 0x28
    PCSDelayedAction *_triggerWatchSyncingAction;	// 48 = 0x30
    NSOperationQueue *_serialOperationQueue;	// 56 = 0x38
    PCSIDSSyncing *_syncing;	// 64 = 0x40
    NSUserDefaults *_settings;	// 72 = 0x48
    PCSMobileBackup *_mobileBackup;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_keyrollSchedulerSource;	// 88 = 0x58
    NSObject<OS_xpc_object> *_scheduledKeyrollActivity;	// 96 = 0x60
}

+ (id)defaultPCSSyncing;	// IMP=0x000000010001ce50
- (void).cxx_destruct;	// IMP=0x0000000100023aa4
@property(retain) NSObject<OS_xpc_object> *scheduledKeyrollActivity; // @synthesize scheduledKeyrollActivity=_scheduledKeyrollActivity;
@property(retain) NSObject<OS_dispatch_source> *keyrollSchedulerSource; // @synthesize keyrollSchedulerSource=_keyrollSchedulerSource;
@property(retain) PCSMobileBackup *mobileBackup; // @synthesize mobileBackup=_mobileBackup;
@property(retain) NSUserDefaults *settings; // @synthesize settings=_settings;
@property(retain) PCSIDSSyncing *syncing; // @synthesize syncing=_syncing;
@property(retain) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(retain) PCSDelayedAction *triggerWatchSyncingAction; // @synthesize triggerWatchSyncingAction=_triggerWatchSyncingAction;
@property(retain) AccountsModel *accounts; // @synthesize accounts=_accounts;
@property(retain) PCSKeySyncing *manager; // @synthesize manager=_manager;
@property(retain) NSObject<OS_dispatch_queue> *registryQueue; // @synthesize registryQueue=_registryQueue;
@property(retain) PCSUserRegistry *registry; // @synthesize registry=_registry;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)keyRollPending:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100023914
- (void)manateeStatus:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022fa8
- (void)fetchStats:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022f18
- (void)userDBBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022e60
- (void)mobileBackupRecordIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022da8
- (void)escrowRecordIDs:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022d30
- (void)deleteThisDevice:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022cc8
- (void)triggerUserRegistryCheck:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022c78
- (void)restoreMobileBackup:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022288
- (void)fetchAllDeviceKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000221cc
- (void)checkSyncingForPeer:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000100022158
- (void)triggerDaily:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000220f4
- (void)requestKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022060
- (void)syncKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021fc0
- (void)getAllClients:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021dbc
- (void)queuedCheckRegistry:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000219f0
- (void)notifyEvent:(id)arg1;	// IMP=0x0000000100021928
- (void)notifyDailyEvent;	// IMP=0x00000001000216d0
- (struct _PCSIdentitySetData *)identityCopySet;	// IMP=0x00000001000214bc
- (void)createIdentity:(id)arg1 roll:(_Bool)arg2 sync:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0000000100020d68
- (void)triggerSyncingWithEscrowProxy:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ff1c
- (void)triggerKeyRolling;	// IMP=0x000000010001f5b4
- (id)getServicesToRoll;	// IMP=0x000000010001f344
- (void)actuallyScheduleRollAttempt;	// IMP=0x000000010001f234
- (void)scheduleRollAttempt;	// IMP=0x000000010001f1f8
- (long long)attemptTimer;	// IMP=0x000000010001f128
- (_Bool)shouldRoll;	// IMP=0x000000010001f044
- (void)checkForBackupStateChange;	// IMP=0x000000010001ea9c
- (void)recordEpochForKeyroll;	// IMP=0x000000010001ea1c
- (id)getRollEpoch;	// IMP=0x000000010001e8dc
- (void)mobileBackupStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e85c
- (void)clearNextSyncNegativeCache;	// IMP=0x000000010001e814
- (void)notifyInternalEvent:(id)arg1;	// IMP=0x000000010001e25c
- (void)triggerWatchSyncing:(CDUnknownBlockType)arg1;	// IMP=0x000000010001dc64
- (void)notifyKeyRegistry;	// IMP=0x000000010001da78
- (void)triggerWatchSyncing;	// IMP=0x000000010001da38
- (void)setupMetrics;	// IMP=0x000000010001d838
- (void)setupActivity;	// IMP=0x000000010001d72c
- (id)initWithPCSKeySyncing:(id)arg1;	// IMP=0x000000010001d07c
- (id)initForTesting;	// IMP=0x000000010001cf44

@end
