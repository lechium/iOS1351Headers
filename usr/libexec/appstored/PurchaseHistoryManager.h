//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushMessageConsumer-Protocol.h"

@class NSString, PurchaseHistoryDatabaseStore;
@protocol OS_dispatch_queue, PurchaseHistoryBagContract;

@interface PurchaseHistoryManager : NSObject <PushMessageConsumer>
{
    id <PurchaseHistoryBagContract> _bagContract;	// 8 = 0x8
    PurchaseHistoryDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    _Bool _currentlyUpdating;	// 32 = 0x20
}

+ (double)_updatePollingFrequencyInterval;	// IMP=0x0000000100190ed8
+ (double)_forcedRefreshInterval;	// IMP=0x0000000100190ccc
+ (id)sharedInstance;	// IMP=0x000000010018fd28
- (void).cxx_destruct;	// IMP=0x00000001001944c4
- (void)_sendUpdateRequestForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withAccount:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100193b7c
- (void)_sendItemsRequestForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withAccount:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001933d0
- (void)_updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withAccount:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100192d60
- (_Bool)_updateDatabaseWithDAAPResponse:(id)arg1 forAccountID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100192510
- (void)_handleAccountChangedNotification;	// IMP=0x0000000100192144
- (id)_getHideShowRequestContextToShowAllForAccount:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100191d7c
- (id)_getHideShowRequestContextToHideItem:(long long)arg1 forAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000100191944
- (id)_getUpdateRequestContextForAccountID:(long long)arg1 requestingAccount:(id)arg2 withPurchaseHistoryContext:(unsigned long long)arg3 withError:(id *)arg4;	// IMP=0x00000001001916b4
- (id)_getItemsRequestContextForAccountID:(long long)arg1 requestingAccount:(id)arg2 withPurchaseHistoryContext:(unsigned long long)arg3 withError:(id *)arg4;	// IMP=0x00000001001912a4
- (void)_beginObservingAccountChangeNotification;	// IMP=0x00000001001910dc
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0000000100190c00
- (void)updateWithContext:(unsigned long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001909d0
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001907d0
- (void)showAllWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001905fc
- (void)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100190420
- (void)executeQuery:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010018ff50
- (id)init;	// IMP=0x000000010018fdc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

