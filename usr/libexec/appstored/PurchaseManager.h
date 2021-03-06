//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSPurchaseResponseProtocol-Protocol.h"
#import "PurchaseManagerInterface-Protocol.h"
#import "PushMessageConsumer-Protocol.h"

@class AMSPurchaseQueue, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface PurchaseManager : NSObject <AMSPurchaseResponseProtocol, PushMessageConsumer, PurchaseManagerInterface>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    TaskQueue *_taskQueue;	// 16 = 0x10
    AMSPurchaseQueue *_purchaseQueue;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000001001fbbd0
- (void).cxx_destruct;	// IMP=0x00000001001feab4
@property(retain, nonatomic) AMSPurchaseQueue *purchaseQueue; // @synthesize purchaseQueue=_purchaseQueue;
- (void)_processItemResponse:(id)arg1 inPurchaseBatch:(id)arg2 usingPurchaseInfo:(id)arg3;	// IMP=0x00000001001fe674
- (void)_processPurchaseBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fe38c
- (void)_processResultsForPurchaseBatch:(id)arg1 withTaskError:(id)arg2;	// IMP=0x00000001001fe030
- (void)_processPurchaseInfos:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fdb2c
- (void)_processPurchases:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fd70c
- (void)_processPurchase:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fcf8c
- (void)_processPurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fcb18
- (void)_preparePurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fc944
- (void)_macProcessPurchaseInfos:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fc6b8
- (void)_failPurchaseWithError:(id)arg1 usingPurchaseInfo:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fc598
- (void)_checkStoreQueue:(long long)arg1 withReason:(long long)arg2 usingPurchaseInfo:(id)arg3 purchaseBatch:(id)arg4;	// IMP=0x00000001001fc4f0
- (void)_cancelDownloadForStoreItem:(id)arg1 usingPurchaseInfo:(id)arg2;	// IMP=0x00000001001fc264
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00000001001fc144
- (void)processPurchases:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fbfb0
- (void)processPurchaseInfos:(id)arg1 requestToken:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fbe9c
- (void)processPurchaseInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fbdc0
- (id)prepareAndGroupPurchaseInfos:(id)arg1;	// IMP=0x00000001001fbdac
- (void)checkStoreQueue:(long long)arg1;	// IMP=0x00000001001fbd34
- (id)init;	// IMP=0x00000001001fbc3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

