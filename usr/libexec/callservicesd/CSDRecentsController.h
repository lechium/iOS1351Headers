//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDCallCenterObserverDelegate-Protocol.h"
#import "TUCallProviderManagerDelegate-Protocol.h"

@class CHManager, CSDIncomingCallFilter, NSMutableArray, NSMutableDictionary, NSString, TUCallProviderManager;
@protocol CSDCallCenterObserver, CSDTransactionManager, CSDUserNotificationDelegate, OS_dispatch_queue;

@interface CSDRecentsController : NSObject <TUCallProviderManagerDelegate, CSDCallCenterObserverDelegate>
{
    CSDIncomingCallFilter *_incomingCallFilter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSDCallCenterObserver> _callCenterObserver;	// 24 = 0x18
    id <CSDTransactionManager> _transactionManager;	// 32 = 0x20
    CHManager *_recentsManager;	// 40 = 0x28
    TUCallProviderManager *_callProviderManager;	// 48 = 0x30
    id <CSDUserNotificationDelegate> _delegate;	// 56 = 0x38
    NSMutableArray *_transactionObjectsAwaitingCallHistory;	// 64 = 0x40
    NSMutableDictionary *_cachedCalls;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000c2fbc
@property(readonly, nonatomic) NSMutableDictionary *cachedCalls; // @synthesize cachedCalls=_cachedCalls;
@property(readonly, nonatomic) NSMutableArray *transactionObjectsAwaitingCallHistory; // @synthesize transactionObjectsAwaitingCallHistory=_transactionObjectsAwaitingCallHistory;
@property(readonly, nonatomic) __weak id <CSDUserNotificationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
@property(readonly, nonatomic) CHManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(readonly, nonatomic) id <CSDTransactionManager> transactionManager; // @synthesize transactionManager=_transactionManager;
@property(readonly, nonatomic) id <CSDCallCenterObserver> callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CSDIncomingCallFilter *incomingCallFilter; // @synthesize incomingCallFilter=_incomingCallFilter;
- (void)callCenterObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x00000001000c2cec
- (void)providersChangedForProviderManager:(id)arg1;	// IMP=0x00000001000c2870
- (void)_markReadRecentCallsMatchingHandle:(id)arg1;	// IMP=0x00000001000c257c
- (void)_endTransactionForObjectAfterCallHistoryDatabaseChanges:(id)arg1;	// IMP=0x00000001000c2274
- (id)_callHistoryTransactionObjectWithIdentifier:(id)arg1;	// IMP=0x00000001000c21f8
- (_Bool)_canAddCallToCallHistory:(id)arg1;	// IMP=0x00000001000c2110
- (void)_handleCallHistoryChanged;	// IMP=0x00000001000c1f54
- (void)_addPendingCallToCallHistory:(id)arg1;	// IMP=0x00000001000c1df0
- (void)_addCallToCallHistory:(id)arg1;	// IMP=0x00000001000c1ca4
- (void)updateBytesOfDataUsed:(long long)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 callHistoryIdentifier:(id)arg3;	// IMP=0x00000001000c19ec
- (void)clearNotificationsIfNecessary;	// IMP=0x00000001000c18bc
- (void)_callConnected:(id)arg1;	// IMP=0x00000001000c16e4
- (void)_callHistoryChanged:(id)arg1;	// IMP=0x00000001000c1574
- (void)dealloc;	// IMP=0x00000001000c14fc
- (id)initWithCallCenterObserver:(id)arg1 transactionManager:(id)arg2 queue:(id)arg3;	// IMP=0x00000001000c1200
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000c115c
- (id)init;	// IMP=0x00000001000c1124

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
