//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EFContentProtectionObserver-Protocol.h"
#import "EFLoggable-Protocol.h"
#import "MFMessageSummaryLoaderProvider-Protocol.h"
#import "MFNetworkActivityManagerDelegate-Protocol.h"
#import "MFPowerObserver-Protocol.h"
#import "MFUserAgent-Protocol.h"

@class AppBadgeController, DaemonFetchController, DaemonSnapshotInvalidator, EDActivityPersistence, EDCategorySubsystem, EDServer, EFProcessTransaction, EMBlockedSenderManager, FavoritesPersistence, MFApplicationShortcutProvider, MFAttachmentLibraryManager, MFMailMessageLibrary, MFMailPurgeableStorage, MFMailPurgeableStorageMonitor, MFMailboxProvider, MFNanoServer, MFNetworkActivityManager, MFPersistence_iOS, MFRemoteSearchProvider_iOS, NSString, NetworkActivityIndicator, SuggestionsDataProvider;
@protocol MFAccountsProvider, OS_dispatch_queue, OS_dispatch_semaphore;

@interface DaemonAppController : NSObject <MFUserAgent, MFMessageSummaryLoaderProvider, EFLoggable, MFNetworkActivityManagerDelegate, EFContentProtectionObserver, MFPowerObserver>
{
    MFAttachmentLibraryManager *_attachmentManager;	// 8 = 0x8
    MFMailMessageLibrary *_library;	// 16 = 0x10
    MFPersistence_iOS *_persistence;	// 24 = 0x18
    DaemonFetchController *_fetchController;	// 32 = 0x20
    EDServer *_server;	// 40 = 0x28
    MFNetworkActivityManager *_networkActivityManager;	// 48 = 0x30
    NetworkActivityIndicator *_networkActivityIndicator;	// 56 = 0x38
    int _notifyToken;	// 64 = 0x40
    SuggestionsDataProvider *_suggestionsDataProvider;	// 72 = 0x48
    MFMailboxProvider *_mailboxProvider;	// 80 = 0x50
    MFRemoteSearchProvider_iOS *_remoteSearchProvider;	// 88 = 0x58
    MFApplicationShortcutProvider *_appShortcutProvider;	// 96 = 0x60
    MFNanoServer *_nanoServer;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_contentProtectionSemaphore;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;	// 120 = 0x78
    EFProcessTransaction *_startupTransaction;	// 128 = 0x80
    id <MFAccountsProvider> _accountsProvider;	// 136 = 0x88
    MFMailPurgeableStorage *_purgeableStorage;	// 144 = 0x90
    FavoritesPersistence *_favoritesPersistence;	// 152 = 0x98
    EMBlockedSenderManager *_blockedSenderManager;	// 160 = 0xa0
    MFMailPurgeableStorageMonitor *_purgeableStorageMonitor;	// 168 = 0xa8
    AppBadgeController *_badgeController;	// 176 = 0xb0
    EDCategorySubsystem *_categorySubsystem;	// 184 = 0xb8
    DaemonSnapshotInvalidator *_snapshotInvalidator;	// 192 = 0xc0
}

+ (void)_unregisterPushTopics;	// IMP=0x0000000100015048
+ (void)_unregisterAllXPCActivities;	// IMP=0x0000000100014f58
+ (id)_startNonAcceptingServer;	// IMP=0x0000000100014748
+ (void)run;	// IMP=0x00000001000137d8
+ (id)sharedController;	// IMP=0x00000001000137cc
+ (id)log;	// IMP=0x00000001000136dc
- (void).cxx_destruct;	// IMP=0x00000001000161c4
@property(retain, nonatomic) DaemonSnapshotInvalidator *snapshotInvalidator; // @synthesize snapshotInvalidator=_snapshotInvalidator;
@property(retain, nonatomic) EDCategorySubsystem *categorySubsystem; // @synthesize categorySubsystem=_categorySubsystem;
@property(retain, nonatomic) AppBadgeController *badgeController; // @synthesize badgeController=_badgeController;
@property(retain, nonatomic) MFMailPurgeableStorageMonitor *purgeableStorageMonitor; // @synthesize purgeableStorageMonitor=_purgeableStorageMonitor;
@property(retain, nonatomic) EMBlockedSenderManager *blockedSenderManager; // @synthesize blockedSenderManager=_blockedSenderManager;
@property(readonly, nonatomic) MFNanoServer *nanoServer; // @synthesize nanoServer=_nanoServer;
@property(readonly, nonatomic) MFMailboxProvider *mailboxProvider; // @synthesize mailboxProvider=_mailboxProvider;
@property(retain, nonatomic) FavoritesPersistence *favoritesPersistence; // @synthesize favoritesPersistence=_favoritesPersistence;
@property(retain, nonatomic) MFMailPurgeableStorage *purgeableStorage; // @synthesize purgeableStorage=_purgeableStorage;
@property(retain, nonatomic) id <MFAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
- (void)systemDidWake;	// IMP=0x00000001000160b4
- (void)systemWillSleep;	// IMP=0x000000010001604c
- (void)assertionDidExpire;	// IMP=0x0000000100016048
- (void)_callMobileMailAppRemovalService;	// IMP=0x0000000100015d1c
- (void)_delayedStartupTasks;	// IMP=0x00000001000158f4
- (void)scheduleDelayedStartupTasks;	// IMP=0x00000001000157a0
- (id)messageSummaryLoaderForMessage:(id)arg1;	// IMP=0x0000000100015738
- (void)networkActivityEnded:(id)arg1;	// IMP=0x0000000100015718
- (void)networkActivityStarted:(id)arg1;	// IMP=0x00000001000156f8
- (_Bool)canUseSpotlightIndex;	// IMP=0x00000001000156f0
- (_Bool)canRegisterForAPSPush;	// IMP=0x00000001000156e8
- (_Bool)isAllowedToAccessProtectedData;	// IMP=0x00000001000156e0
- (id)sourceApplicationBundleIdentifier;	// IMP=0x00000001000156d0
- (_Bool)isMaild;	// IMP=0x00000001000156c8
- (_Bool)isMobileMail;	// IMP=0x00000001000156c0
- (_Bool)isForeground;	// IMP=0x00000001000156b8
- (void)autofetchAccount:(id)arg1 mailboxUid:(id)arg2;	// IMP=0x00000001000152e4
- (id)focusedMessage;	// IMP=0x00000001000152dc
- (void)resetPushStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001524c
- (id)defaultAttachmentManager;	// IMP=0x0000000100015230
- (_Bool)isFrontmost;	// IMP=0x0000000100015224
- (void)emptyTrashForAccount:(id)arg1;	// IMP=0x0000000100015220
- (_Bool)launchedToTest;	// IMP=0x0000000100015218
- (void)displayError:(id)arg1 forAccount:(id)arg2 mode:(int)arg3;	// IMP=0x0000000100015214
- (int)linesOfText;	// IMP=0x0000000100015204
- (int)linesOfText:(_Bool)arg1;	// IMP=0x000000010001511c
- (id)daemonInterface;	// IMP=0x0000000100015114
- (_Bool)_isAppForeground;	// IMP=0x0000000100014eec
- (void)_startBulletinDataProvider;	// IMP=0x0000000100014da4
- (void)_registerServices;	// IMP=0x0000000100014b78
- (void)_start;	// IMP=0x00000001000148d8
- (void)dealloc;	// IMP=0x00000001000146c8
@property(readonly, nonatomic) EDActivityPersistence *activityPersistence;
- (id)init;	// IMP=0x0000000100013ba0
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;	// IMP=0x0000000100013abc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
