//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FavoritesPersistence, MFMessageBulletinsFilter, MFMessageResultsGenerator, NSLock, NSMapTable, NSMutableDictionary, NSMutableSet;
@protocol EDConversationSubscriptionProvider, EMVIPManager, MFMessageBulletinsObserverDelegate, OS_dispatch_queue;

@interface MFMessageBulletinsObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    MFMessageResultsGenerator *_queueResultsGenerator;	// 16 = 0x10
    _Bool _hasVIPs;	// 24 = 0x18
    _Bool _hasFavoriteMailboxes;	// 25 = 0x19
    _Bool _hasThreads;	// 26 = 0x1a
    NSMutableSet *_observedAccountIDs;	// 32 = 0x20
    NSMutableDictionary *_observedStoresByAccountID;	// 40 = 0x28
    NSLock *_observedStoresByAccountIDLock;	// 48 = 0x30
    MFMessageBulletinsFilter *_messageBulletinsFilter;	// 56 = 0x38
    NSLock *_summaryClientsLock;	// 64 = 0x40
    NSMapTable *_summaryClientsByReference;	// 72 = 0x48
    id <MFMessageBulletinsObserverDelegate> _delegate;	// 80 = 0x50
    id <EDConversationSubscriptionProvider> _conversationSubscriptionProvider;	// 88 = 0x58
    id <EMVIPManager> _vipManager;	// 96 = 0x60
    FavoritesPersistence *_favoritesPersistence;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001000a28f8
@property(readonly, nonatomic) FavoritesPersistence *favoritesPersistence; // @synthesize favoritesPersistence=_favoritesPersistence;
@property(readonly, nonatomic) id <EMVIPManager> vipManager; // @synthesize vipManager=_vipManager;
@property(readonly, nonatomic) id <EDConversationSubscriptionProvider> conversationSubscriptionProvider; // @synthesize conversationSubscriptionProvider=_conversationSubscriptionProvider;
@property(nonatomic) __weak id <MFMessageBulletinsObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleMessagesCompacted:(id)arg1;	// IMP=0x00000001000a2610
- (void)_handleFlagsChanged:(id)arg1;	// IMP=0x00000001000a2050
- (void)_handleMessagesAdded:(id)arg1;	// IMP=0x00000001000a1f74
- (void)_handleFavoriteMailboxesChanged:(id)arg1;	// IMP=0x00000001000a1f58
- (void)_handlePushedFoldersChanged:(id)arg1;	// IMP=0x00000001000a1f3c
- (void)_handleFoldersChanged:(id)arg1;	// IMP=0x00000001000a1c4c
- (void)_handleThreadsChanged:(id)arg1;	// IMP=0x00000001000a1a28
- (void)_handleVIPsChanged:(id)arg1;	// IMP=0x00000001000a1700
- (void)_handleAccountsChanged:(id)arg1;	// IMP=0x00000001000a1268
- (void)_handlePreferencesChanged:(id)arg1;	// IMP=0x00000001000a10f8
- (void)_handleAddressBookChanged;	// IMP=0x00000001000a0ff0
- (void)notifyMessagesAdded:(id)arg1 afterDate:(id)arg2 isSummaryDownload:(_Bool)arg3;	// IMP=0x00000001000a093c
- (void)updateMessage:(id)arg1 withSummary:(id)arg2;	// IMP=0x00000001000a07f0
- (void)cancelSummaryRequestsForAccountWithID:(id)arg1;	// IMP=0x00000001000a0584
- (void)cancelSummaryRequestForMessageWithExternalReference:(id)arg1;	// IMP=0x00000001000a04c4
- (void)_nts_invalidateClient:(id)arg1;	// IMP=0x00000001000a0334
- (void)requestSummaryForMessage:(id)arg1;	// IMP=0x00000001000a0298
- (void)requestSummaryWithClient:(id)arg1;	// IMP=0x00000001000a00f4
- (id)_nts_resultsGenerator;	// IMP=0x00000001000a0054
- (void)_notifyAccountsChanged:(id)arg1 hasVIPs:(_Bool)arg2 hasFavoriteMailboxes:(_Bool)arg3 hasThreads:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010009ff5c
- (_Bool)_nts_updateObservationWithAccounts:(id)arg1;	// IMP=0x000000010009f940
- (void)_nts_stopObservingAccountWithIDs:(id)arg1;	// IMP=0x000000010009f430
- (void)_nts_startObservingAccounts:(id)arg1;	// IMP=0x000000010009eee0
- (void)_stopObservingStore:(id)arg1;	// IMP=0x000000010009edf4
- (void)_startObservingStore:(id)arg1;	// IMP=0x000000010009ecf0
- (void)stop;	// IMP=0x000000010009eb60
- (void)start;	// IMP=0x000000010009e8c8
- (void)setTargetQueue:(id)arg1;	// IMP=0x000000010009e8bc
- (void)updateCutoffForMailboxesWithDate:(id)arg1;	// IMP=0x000000010009e824
- (_Bool)isObservingMailboxID:(id)arg1 inAccountID:(id)arg2;	// IMP=0x000000010009e564
- (id)messagesForAccountIDs:(id)arg1 count:(unsigned long long)arg2 clearedInfo:(id)arg3 sinceDate:(id)arg4;	// IMP=0x000000010009d290
- (id)activeBulletinsAccounts:(id *)arg1;	// IMP=0x000000010009cb74
- (_Bool)_hasFavoriteMailboxes;	// IMP=0x000000010009ca74
- (void)dealloc;	// IMP=0x000000010009c88c
- (id)initWithConversationSubscriptionProvider:(id)arg1 blockedSenderManager:(id)arg2 favoritesPersistence:(id)arg3;	// IMP=0x000000010009c54c

@end

