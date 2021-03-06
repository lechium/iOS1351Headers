//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDLockHandlerDelegate-Protocol.h"
#import "SDSignalHandlerDelegate-Protocol.h"
#import "SPCoreSpotlightIndexerDelegate-Protocol.h"

@class NSString, SPCoreSpotlightIndexer;
@protocol OS_dispatch_queue;

@interface CSPrivateIndexController : NSObject <SPCoreSpotlightIndexerDelegate, SDLockHandlerDelegate, SDSignalHandlerDelegate>
{
    SPCoreSpotlightIndexer *_indexer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_indexQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_firstUnlockQueue;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    NSString *_indexPath;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000050d4
@property(retain, nonatomic) NSString *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *firstUnlockQueue; // @synthesize firstUnlockQueue=_firstUnlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *indexQueue; // @synthesize indexQueue=_indexQueue;
@property(retain, nonatomic) SPCoreSpotlightIndexer *indexer; // @synthesize indexer=_indexer;
- (_Bool)privateIndex;	// IMP=0x0000000100005064
- (void)willMKBLock;	// IMP=0x0000000100005024
- (void)didMKBLock;	// IMP=0x0000000100004fe4
- (void)didMKBUnlock;	// IMP=0x0000000100004fe0
- (void)didFirstUnlockSB;	// IMP=0x0000000100004fdc
- (void)dataMigrationCheckComplete;	// IMP=0x0000000100004f14
- (void)deviceStateWillChange;	// IMP=0x0000000100004f00
- (id)indexDirectory;	// IMP=0x0000000100004ef4
- (void)recordEngagementForBundleID:(id)arg1 uniqueIdentifier:(id)arg2 protectionClass:(id)arg3 userQuery:(id)arg4 date:(id)arg5;	// IMP=0x0000000100004ef0
- (id)disabledBundleSet;	// IMP=0x0000000100004ee8
- (_Bool)blacklistCheck:(id)arg1 withOptions:(long long)arg2;	// IMP=0x0000000100004ee0
- (id)taskForTopHitQueryWithQueryString:(id)arg1 queryContext:(id)arg2 eventHandler:(CDUnknownBlockType)arg3 resultsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100004ed8
- (void)updateApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004ecc
- (_Bool)setupHasComplete;	// IMP=0x0000000100004ec4
- (_Bool)indexingEnabled;	// IMP=0x0000000100004ebc
- (_Bool)deviceUnlocked;	// IMP=0x0000000100004ea8
- (_Bool)deviceFirstUnlockedInSB;	// IMP=0x0000000100004e94
- (_Bool)deviceFirstUnlockedInMKB;	// IMP=0x0000000100004e80
- (_Bool)unlockedSinceBoot;	// IMP=0x0000000100004e6c
- (void)didReceiveMemoryPressureNotification:(unsigned long long)arg1;	// IMP=0x0000000100004e08
- (void)didReceiveSignal:(unsigned long long)arg1;	// IMP=0x0000000100004dd0
- (id)initWithBundle:(id)arg1 directory:(id)arg2;	// IMP=0x0000000100004b14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

