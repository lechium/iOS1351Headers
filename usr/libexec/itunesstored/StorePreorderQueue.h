//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

@interface StorePreorderQueue : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ISOperationQueue *_operationQueue;	// 24 = 0x18
}

+ (void)registerManagerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010012244c
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00000001001223b0
+ (void)getPreordersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100121ee4
+ (void)checkQueueWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100121cb4
+ (void)cancelPreordersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100121560
+ (id)sharedPreorderQueue;	// IMP=0x0000000100120918
- (void)_sendChangeNotificationForKinds:(id)arg1;	// IMP=0x0000000100124028
- (id)_preorderQueryWithAccountID:(id)arg1 database:(id)arg2;	// IMP=0x0000000100123fd0
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100123e2c
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100123cb4
- (void)_handleLoadQueueFinish:(id)arg1;	// IMP=0x00000001001232f8
- (void)_handleCheckQueueFinish:(id)arg1;	// IMP=0x0000000100122e8c
- (id)_copyPreorderAccountIdentifiers;	// IMP=0x0000000100122c5c
- (id)_clientForConnection:(id)arg1;	// IMP=0x0000000100122adc
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00000001001228a0
- (void)removePreordersWithPreorderIdentifiers:(id)arg1;	// IMP=0x0000000100121190
- (void)checkPreorderQueue;	// IMP=0x0000000100120e2c
- (void)addPreordersWithItems:(id)arg1 accountID:(id)arg2;	// IMP=0x00000001001209c4
- (void)dealloc;	// IMP=0x0000000100120858
- (id)init;	// IMP=0x0000000100120758

@end

