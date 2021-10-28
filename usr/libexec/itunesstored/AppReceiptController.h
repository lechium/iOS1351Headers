//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue;
@protocol OS_dispatch_queue;

@interface AppReceiptController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    ISOperationQueue *_operationQueue;	// 16 = 0x10
}

+ (id)sharedController;	// IMP=0x00000001001a00b4
+ (void)refreshAppReceipt:(id)arg1 connection:(id)arg2;	// IMP=0x000000010019f750
+ (void)refreshAllReceipts:(id)arg1 connection:(id)arg2;	// IMP=0x000000010019f2d8
+ (void)observeXPCServer:(id)arg1;	// IMP=0x000000010019f22c
+ (void)handleInvalidReceipt:(id)arg1 connection:(id)arg2;	// IMP=0x000000010019f1a0
+ (void)getApplicationReceiptPathWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010019eee8
+ (_Bool)connectionHasEntitlement:(id)arg1;	// IMP=0x000000010019ed00
- (void).cxx_destruct;	// IMP=0x00000001001a3fcc
- (_Bool)_wasInstalledByConfigurator:(id)arg1;	// IMP=0x00000001001a3e90
- (void)_setReceiptRevocationCheckIntervalCellular:(double)arg1;	// IMP=0x00000001001a3e7c
- (void)_setReceiptRevocationCheckInterval:(double)arg1;	// IMP=0x00000001001a3e68
- (void)_setLastReceiptRevocationCheckDate:(id)arg1;	// IMP=0x00000001001a3e18
- (void)_setCheckInterval:(double)arg1 forDefaultsKey:(struct __CFString *)arg2;	// IMP=0x00000001001a3bcc
- (void)_resetBackgroundTaskJobs;	// IMP=0x00000001001a3544
- (void)_performBackgroundReceiptRevocationCheckWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a3530
- (void)_performBackgroundReceiptRevocationCheck:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a2ef0
- (void)_performBackgroundReceiptRevocationCheckIfNeeded;	// IMP=0x00000001001a28c4
- (void)_performBackgroundCheckForJob:(id)arg1 jobName:(id)arg2;	// IMP=0x00000001001a22dc
- (id)_operationQueue;	// IMP=0x00000001001a224c
- (void)_postNotificationForExpiring:(id)arg1;	// IMP=0x00000001001a1918
- (void)_postNotificationForRevoked:(id)arg1;	// IMP=0x00000001001a101c
- (id)_nextCheckDateWithInterval:(double)arg1;	// IMP=0x00000001001a0e98
- (void)_handleInvalidReceipt:(id)arg1 forConnection:(id)arg2;	// IMP=0x00000001001a0870
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a0744
- (double)_checkIntervalWithDefault:(double)arg1 bagKey:(id)arg2 defaultsKey:(struct __CFString *)arg3;	// IMP=0x00000001001a0450
- (void)_addRevocationCheckJobWithDate:(id)arg1 identifier:(id)arg2 allowsCellular:(_Bool)arg3;	// IMP=0x00000001001a030c
- (double)_automaticRevocationCheckIntervalCellular;	// IMP=0x00000001001a0268
- (double)_automaticRevocationCheckInterval;	// IMP=0x00000001001a0244
- (void)_addOperation:(id)arg1;	// IMP=0x00000001001a01d0
- (void)start;	// IMP=0x00000001001a0168
- (void)repairApplicationSinfsForBundlesIfNecessary:(id)arg1;	// IMP=0x000000010019e584
- (void)dealloc;	// IMP=0x000000010019e4f4
- (id)init;	// IMP=0x000000010019dcec

@end
