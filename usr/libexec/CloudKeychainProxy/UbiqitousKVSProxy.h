//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKDLockListener-Protocol.h"
#import "XPCNotificationListener-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, NSURL;
@protocol CKDAccount, CKDLockMonitor, CKDStore, OS_dispatch_queue;

@interface UbiqitousKVSProxy : NSObject <XPCNotificationListener, CKDLockListener>
{
    id currentiCloudToken;	// 8 = 0x8
    int callbackMethod;	// 16 = 0x10
    _Bool _seenKVSStoreChange;	// 20 = 0x14
    _Bool _ensurePeerRegistration;	// 21 = 0x15
    _Bool _ensurePeerRegistrationEnqueuedButNotStarted;	// 22 = 0x16
    _Bool _shadowEnsurePeerRegistration;	// 23 = 0x17
    _Bool _inCallout;	// 24 = 0x18
    NSObject<CKDStore> *_store;	// 32 = 0x20
    NSObject<CKDAccount> *_account;	// 40 = 0x28
    NSObject<CKDLockMonitor> *_lockMonitor;	// 48 = 0x30
    NSURL *_persistenceURL;	// 56 = 0x38
    NSMutableSet *_alwaysKeys;	// 64 = 0x40
    NSMutableSet *_firstUnlockKeys;	// 72 = 0x48
    NSMutableSet *_unlockedKeys;	// 80 = 0x50
    NSMutableSet *_pendingKeys;	// 88 = 0x58
    NSMutableSet *_shadowPendingKeys;	// 96 = 0x60
    NSString *_dsid;	// 104 = 0x68
    NSString *_accountUUID;	// 112 = 0x70
    NSMutableSet *_pendingSyncPeerIDs;	// 120 = 0x78
    NSMutableSet *_shadowPendingSyncPeerIDs;	// 128 = 0x80
    NSMutableSet *_pendingSyncBackupPeerIDs;	// 136 = 0x88
    NSMutableSet *_shadowPendingSyncBackupPeerIDs;	// 144 = 0x90
    NSMutableArray *_freshnessCompletions;	// 152 = 0x98
    unsigned long long _nextFreshnessTime;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_ckdkvsproxy_queue;	// 176 = 0xb0
    CDUnknownBlockType _shadowFlushBlock;	// 184 = 0xb8
}

+ (id)withAccount:(id)arg1 store:(id)arg2 lockMonitor:(id)arg3 persistence:(id)arg4;	// IMP=0x000000010000b520
- (void).cxx_destruct;	// IMP=0x0000000100008fac
@property(copy) CDUnknownBlockType shadowFlushBlock; // @synthesize shadowFlushBlock=_shadowFlushBlock;
@property(retain) NSObject<OS_dispatch_queue> *ckdkvsproxy_queue; // @synthesize ckdkvsproxy_queue=_ckdkvsproxy_queue;
@property(retain) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property unsigned long long nextFreshnessTime; // @synthesize nextFreshnessTime=_nextFreshnessTime;
@property(retain, nonatomic) NSMutableArray *freshnessCompletions; // @synthesize freshnessCompletions=_freshnessCompletions;
@property _Bool inCallout; // @synthesize inCallout=_inCallout;
@property _Bool shadowEnsurePeerRegistration; // @synthesize shadowEnsurePeerRegistration=_shadowEnsurePeerRegistration;
@property _Bool ensurePeerRegistrationEnqueuedButNotStarted; // @synthesize ensurePeerRegistrationEnqueuedButNotStarted=_ensurePeerRegistrationEnqueuedButNotStarted;
@property _Bool ensurePeerRegistration; // @synthesize ensurePeerRegistration=_ensurePeerRegistration;
@property(retain, nonatomic) NSMutableSet *shadowPendingSyncBackupPeerIDs; // @synthesize shadowPendingSyncBackupPeerIDs=_shadowPendingSyncBackupPeerIDs;
@property(retain, nonatomic) NSMutableSet *pendingSyncBackupPeerIDs; // @synthesize pendingSyncBackupPeerIDs=_pendingSyncBackupPeerIDs;
@property(retain, nonatomic) NSMutableSet *shadowPendingSyncPeerIDs; // @synthesize shadowPendingSyncPeerIDs=_shadowPendingSyncPeerIDs;
@property(retain, nonatomic) NSMutableSet *pendingSyncPeerIDs; // @synthesize pendingSyncPeerIDs=_pendingSyncPeerIDs;
@property(retain, nonatomic) NSString *accountUUID; // @synthesize accountUUID=_accountUUID;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSMutableSet *shadowPendingKeys; // @synthesize shadowPendingKeys=_shadowPendingKeys;
@property(retain, nonatomic) NSMutableSet *pendingKeys; // @synthesize pendingKeys=_pendingKeys;
@property _Bool seenKVSStoreChange; // @synthesize seenKVSStoreChange=_seenKVSStoreChange;
@property(retain, nonatomic) NSMutableSet *unlockedKeys; // @synthesize unlockedKeys=_unlockedKeys;
@property(retain, nonatomic) NSMutableSet *firstUnlockKeys; // @synthesize firstUnlockKeys=_firstUnlockKeys;
@property(retain, nonatomic) NSMutableSet *alwaysKeys; // @synthesize alwaysKeys=_alwaysKeys;
@property(readonly) NSURL *persistenceURL; // @synthesize persistenceURL=_persistenceURL;
@property(readonly) NSObject<CKDLockMonitor> *lockMonitor; // @synthesize lockMonitor=_lockMonitor;
@property(readonly) NSObject<CKDAccount> *account; // @synthesize account=_account;
@property(readonly) NSObject<CKDStore> *store; // @synthesize store=_store;
- (void)processPendingKeysForCurrentLockState;	// IMP=0x0000000100008d68
- (void)processKeyChangedEvent:(id)arg1;	// IMP=0x0000000100008a24
- (id)copyValues:(id)arg1;	// IMP=0x000000010000890c
- (id)pendKeysAndGetPendingForCurrentLockState:(id)arg1;	// IMP=0x00000001000088d0
- (id)pendingKeysForCurrentLockState;	// IMP=0x0000000100008888
- (void)intersectWithCurrentLockState:(id)arg1;	// IMP=0x0000000100008818
- (id)pendKeysAndGetNewlyPended:(id)arg1;	// IMP=0x0000000100008754
- (id)keysForCurrentLockState;	// IMP=0x000000010000866c
- (void)unlocked;	// IMP=0x0000000100008614
- (void)locked;	// IMP=0x00000001000085bc
- (void)storeAccountChanged;	// IMP=0x0000000100008564
- (void)storeKeysChanged:(id)arg1 initial:(_Bool)arg2;	// IMP=0x00000001000084d4
- (void)handleNotification:(const char *)arg1;	// IMP=0x000000010000847c
- (void)_queue_kvsStoreChange;	// IMP=0x0000000100008404
- (void)_queue_unlocked;	// IMP=0x0000000100008304
- (void)_queue_locked;	// IMP=0x000000010000824c
- (void)requestEnsurePeerRegistration;	// IMP=0x00000001000081ec
- (_Bool)hasPendingKey:(id)arg1;	// IMP=0x0000000100008120
- (_Bool)hasSyncPendingFor:(id)arg1;	// IMP=0x00000001000080a0
- (void)requestSyncWithPeerIDs:(id)arg1 backupPeerIDs:(id)arg2;	// IMP=0x0000000100007ef0
- (_Bool)hasPendingSyncIDs;	// IMP=0x0000000100007ea4
- (_Bool)hasPendingShadowSyncIDs;	// IMP=0x0000000100007e54
- (_Bool)hasPendingNonShadowSyncIDs;	// IMP=0x0000000100007e08
- (void)doSyncWithAllPeers;	// IMP=0x0000000100007d68
- (void)doSyncWithPendingPeers;	// IMP=0x0000000100007cc8
- (void)doEnsurePeerRegistration;	// IMP=0x0000000100007c0c
- (void)handlePendingEnsurePeerRegistrationRequests:(_Bool)arg1;	// IMP=0x0000000100007bb0
- (void)sendKeysCallout:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007b1c
- (void)calloutWith:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007a84
- (void)doAfterFlush:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007a38
- (void)_queue_storeAccountChanged;	// IMP=0x00000001000078e0
- (void)_queue_storeKeysChanged:(id)arg1 initial:(_Bool)arg2;	// IMP=0x0000000100007670
- (void)_queue_handleNotification:(const char *)arg1;	// IMP=0x00000001000075f8
- (void)registerKeys:(id)arg1 forAccount:(id)arg2;	// IMP=0x0000000100007224
- (void)removeKeys:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000001000070bc
- (void)registerAtTimeKeys:(id)arg1;	// IMP=0x0000000100006f2c
- (id)copyAllKeyInterests;	// IMP=0x0000000100006ebc
- (void)waitForSyncDone:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000100006d54
- (void)waitForSynchronization:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006b70
- (void)setObjectsFromDictionary:(id)arg1;	// IMP=0x0000000100006b64
- (void)setStoreObjectsFromDictionary:(id)arg1;	// IMP=0x000000010000675c
- (void)perfCounters:(CDUnknownBlockType)arg1;	// IMP=0x00000001000066f0
- (void)persistState;	// IMP=0x00000001000065b0
@property(retain, nonatomic) NSDictionary *persistentData;
- (void)dealloc;	// IMP=0x0000000100005fb8
- (void)_queue_processAllItems;	// IMP=0x0000000100005e44
- (id)copyAsDictionary;	// IMP=0x0000000100005df8
- (id)objectForKey:(id)arg1;	// IMP=0x0000000100005d78
- (void)synchronizeStore;	// IMP=0x0000000100005d38
- (void)clearStore;	// IMP=0x0000000100005cf8
@property(readonly, copy) NSString *description;
- (id)initWithAccount:(id)arg1 store:(id)arg2 lockMonitor:(id)arg3 persistence:(id)arg4;	// IMP=0x0000000100005770

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

