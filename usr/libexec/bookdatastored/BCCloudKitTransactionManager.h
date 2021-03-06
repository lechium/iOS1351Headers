//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BCCloudKitTransactionDelegate-Protocol.h"
#import "BCCloudKitTransactionManagerService-Protocol.h"

@class BCCloudKitController, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BCCloudKitTransactionManager : NSObject <BCCloudKitTransactionDelegate, BCCloudKitTransactionManagerService>
{
    BCCloudKitController *_cloudKitController;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionAccessQueue;	// 16 = 0x10
    NSMutableDictionary *_transactions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002378c
@property(retain, nonatomic) NSMutableDictionary *transactions; // @synthesize transactions=_transactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionAccessQueue; // @synthesize transactionAccessQueue=_transactionAccessQueue;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
- (void)transactionCompleted:(id)arg1;	// IMP=0x0000000100023618
- (void)signalFetchChangesTransaction:(id)arg1;	// IMP=0x000000010002338c
- (void)signalSyncToCKTransactionForEntityName:(id)arg1 syncManager:(id)arg2;	// IMP=0x0000000100023164
- (void)signalDataChangeTransactionForEntityName:(id)arg1 notificationName:(id)arg2;	// IMP=0x0000000100022f3c
- (id)initWithCloudKitController:(id)arg1;	// IMP=0x0000000100022e5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

