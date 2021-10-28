//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLDatabaseManager, BLDownloadPolicyManager;
@protocol BLOSTransactionCoordinating, BLPurchaseManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLPurchaseManager : NSObject
{
    id <BLPurchaseManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    BLDatabaseManager *_databaseManager;	// 24 = 0x18
    BLDownloadPolicyManager *_downloadPolicyManager;	// 32 = 0x20
    id <BLOSTransactionCoordinating> _transactionCoordinator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010003dc50
@property(nonatomic) __weak id <BLOSTransactionCoordinating> transactionCoordinator; // @synthesize transactionCoordinator=_transactionCoordinator;
@property(nonatomic) __weak BLDownloadPolicyManager *downloadPolicyManager; // @synthesize downloadPolicyManager=_downloadPolicyManager;
@property(nonatomic) __weak BLDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <BLPurchaseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)p_downloadIDForPermlink:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d7dc
- (void)p_downloadIDForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d29c
- (id)dq_writeArtworkWithURL:(id)arg1 downloadID:(id)arg2;	// IMP=0x000000010003d188
- (id)dq_writeSinf:(id)arg1 downloadID:(id)arg2;	// IMP=0x000000010003d060
- (id)dq_writeMetadata:(id)arg1 clientIdentifier:(id)arg2 downloadID:(id)arg3;	// IMP=0x000000010003cf08
- (void)dq_triggerDownloadForDownloadID:(id)arg1 urlToAsset:(id)arg2;	// IMP=0x000000010003cc60
- (void)dq_performDownloadDownloadMetadata:(id)arg1 downloadID:(id)arg2 clientIdentifier:(id)arg3 isRestoreItem:(_Bool)arg4;	// IMP=0x000000010003b5d0
- (void)_sendPurchaseFailureNotificationWithPurchase:(id)arg1 downloadID:(id)arg2;	// IMP=0x000000010003b390
- (void)dq_performPurchaseWithRequest:(id)arg1 downloadID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003a0b4
- (void)dq_performDownloadWithPermlink:(id)arg1 title:(id)arg2 clientIdentifier:(id)arg3 downloadID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100039348
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038904
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000380b8
- (void)purchaseWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037844
- (id)initWithDatabaseManager:(id)arg1 downloadPolicyManager:(id)arg2 transactionCoordinator:(id)arg3;	// IMP=0x0000000100037740

@end
