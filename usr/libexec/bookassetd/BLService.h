//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BLOSTransactionCoordinating-Protocol.h"
#import "BLPurchaseManagerDelegate-Protocol.h"
#import "BLServiceProtocol-Protocol.h"

@class BLBookInstallManager, BLDatabaseManager, BLDownloadManager, BLDownloadPolicyManager, BLPurchaseManager, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BLService : NSObject <BLPurchaseManagerDelegate, BLOSTransactionCoordinating, BLServiceProtocol>
{
    struct os_unfair_lock_s _transactionsUpdateLock;	// 8 = 0x8
    BLDownloadManager *_downloadManager;	// 16 = 0x10
    BLBookInstallManager *_installManager;	// 24 = 0x18
    BLDatabaseManager *_databaseManager;	// 32 = 0x20
    BLPurchaseManager *_purchaseManager;	// 40 = 0x28
    BLDownloadPolicyManager *_downloadPolicyManager;	// 48 = 0x30
    NSMutableDictionary *_transactionsMap;	// 56 = 0x38
    NSNumber *_currentAccountNumber;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000090e8
@property(retain, nonatomic) NSNumber *currentAccountNumber; // @synthesize currentAccountNumber=_currentAccountNumber;
@property(retain, nonatomic) NSMutableDictionary *transactionsMap; // @synthesize transactionsMap=_transactionsMap;
@property(retain, nonatomic) BLDownloadPolicyManager *downloadPolicyManager; // @synthesize downloadPolicyManager=_downloadPolicyManager;
@property(retain, nonatomic) BLPurchaseManager *purchaseManager; // @synthesize purchaseManager=_purchaseManager;
@property(retain, nonatomic) BLDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) BLBookInstallManager *installManager; // @synthesize installManager=_installManager;
@property(retain, nonatomic) BLDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)_storeChanged:(id)arg1;	// IMP=0x0000000100008f04
- (void)_cancelAllActiveDownloads;	// IMP=0x0000000100008bec
- (void)purchaseManager:(id)arg1 requestDownloadWithParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008b64
- (void)didFinishTransactionWithIdenfifier:(id)arg1;	// IMP=0x0000000100008acc
- (void)willStartTransactionWithIdentifier:(id)arg1;	// IMP=0x00000001000089bc
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008890
- (void)setValueSimulateDeviceOutOfSpace:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008740
- (void)resetAllCrashSimulationOverridesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008584
- (void)getCrashSimulationOverrideValuesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008398
- (void)setValueSimulateCrashAtInstallDuringFinish:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000826c
- (void)setValueSimulateCrashAtInstallDuringUnzip:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008140
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008014
- (void)setValueSimulateCrashAtInstallStart:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007ee8
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007d88
- (void)purchaseWithRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007be8
- (void)cancelAllActiveDownloadsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007a9c
- (void)cancelDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000795c
- (void)resumeDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000781c
- (void)pauseDownloadWithID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000076dc
- (void)requestDownloadsWithMetadata:(id)arg1 areRestore:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000001000070c4
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006f78
- (void)requestDownloadWithParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006e34
- (void)fetchDownloadFromDownloadID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006cf0
- (void)fetchDownloadListWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006bd0
- (void)cleanupOrphanedScratchDirectoriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006808
- (void)startPendingOperations;	// IMP=0x0000000100006650
- (void)performPreListenerStartupWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006088
- (void)dealloc;	// IMP=0x0000000100005fc4
- (id)init;	// IMP=0x0000000100005af4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

