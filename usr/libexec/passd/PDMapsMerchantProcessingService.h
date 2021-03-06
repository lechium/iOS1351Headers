//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDScheduledActivityClient-Protocol.h"

@class NSString, PDDatabaseManager, PDPaymentWebServiceCoordinator, PKPaymentTransactionProcessor;
@protocol OS_dispatch_queue;

@interface PDMapsMerchantProcessingService : NSObject <PDScheduledActivityClient>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PKPaymentTransactionProcessor *_transactionProcessor;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 24 = 0x18
    double _waitTime;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001a2e94
- (void)_processItem:(id)arg1;	// IMP=0x00000001001a2d84
- (id)_processingItemsForScheduledActivity;	// IMP=0x00000001001a2a80
- (void)_logScheduledActivityWithItems:(id)arg1;	// IMP=0x00000001001a2860
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00000001001a263c
- (void)start;	// IMP=0x00000001001a22c8
- (id)initWithDatabaseManager:(id)arg1 transactionProcessor:(id)arg2 webServiceCoordinator:(id)arg3;	// IMP=0x00000001001a21d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

