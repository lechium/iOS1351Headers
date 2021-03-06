//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"
#import "NPDCardSetupReminderNotificationSchedulerDelegate-Protocol.h"
#import "NPDCompanionAgentClientDataSource-Protocol.h"
#import "NPDCompanionAgentClientDelegate-Protocol.h"
#import "NPDCompanionPassLibraryDataSource-Protocol.h"
#import "NPDCompanionPassSyncServiceDataSource-Protocol.h"
#import "NPDCompanionPassSyncServiceDelegate-Protocol.h"
#import "NPDPassLibraryDelegate-Protocol.h"
#import "NPKGizmoDatabaseMigrationDataSource-Protocol.h"
#import "NPKRemoteAdminConnectionServiceAgentDelegate-Protocol.h"
#import "NRDevicePropertyObserver-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class IDSService, NPDBulletinManager, NPDCardSetupReminderNotificationScheduler, NPDCompanionPassSyncService, NPDCompanionPaymentPassDatabase, NPDCompanionPeerPaymentStatusObserver, NPDDemoModePassCopier, NPDOutstandingPassDeletionStore, NPKCompanionCatalogManager, NPKGizmoDatabase, NPKRemoteAdminConnectionServiceAgent, NPKWorkQueue, NPSDomainAccessor, NPSManager, NSDate, NSHashTable, NSMutableArray, NSMutableSet, NSNumber, NSSet, NSString, NSTimer, NSXPCListener, PKPassLibrary, PSYSyncCoordinator;
@protocol OS_dispatch_source;

@interface NPKCompanionAgent : NSObject <IDSServiceDelegate, PSYSyncCoordinatorDelegate, NSXPCListenerDelegate, NPDCardSetupReminderNotificationSchedulerDelegate, NPKGizmoDatabaseMigrationDataSource, NPDCompanionPassLibraryDataSource, NPKRemoteAdminConnectionServiceAgentDelegate, NPDPassLibraryDelegate, NPDCompanionPassSyncServiceDelegate, NPDCompanionPassSyncServiceDataSource, NRDevicePropertyObserver, NPDCompanionAgentClientDelegate, NPDCompanionAgentClientDataSource>
{
    PKPassLibrary *_passLibrary;	// 8 = 0x8
    _Bool _shouldDropIDSMessages;	// 16 = 0x10
    _Bool _gizmoWaitingForRelevantPasses;	// 17 = 0x11
    _Bool _hasCandidateRelevantPasses;	// 18 = 0x12
    _Bool _wasLimitPush;	// 19 = 0x13
    IDSService *_generalService;	// 24 = 0x18
    IDSService *_relevancyService;	// 32 = 0x20
    NSNumber *_lastKnownResyncID;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_stopDroppingIDSMessagesTimer;	// 48 = 0x30
    NPKRemoteAdminConnectionServiceAgent *_remoteAdminConnectionServiceAgent;	// 56 = 0x38
    NSTimer *_stopMonitoringLocationTimer;	// 64 = 0x40
    NSSet *_lastSeenRelevantPassInfo;	// 72 = 0x48
    NSDate *_lastRelevantPassInfoSendDate;	// 80 = 0x50
    NSDate *_lastRelevantPassRequestDate;	// 88 = 0x58
    NPKGizmoDatabase *_gizmoDatabase;	// 96 = 0x60
    NPDCompanionPaymentPassDatabase *_companionPaymentPassDatabase;	// 104 = 0x68
    NPKCompanionCatalogManager *_companionCatalogManager;	// 112 = 0x70
    NPDBulletinManager *_bulletinManager;	// 120 = 0x78
    NPDCardSetupReminderNotificationScheduler *_bulletinScheduler;	// 128 = 0x80
    NPDCompanionPeerPaymentStatusObserver *_companionPeerPaymentStatusObserver;	// 136 = 0x88
    PSYSyncCoordinator *_pairedSyncCoordinator;	// 144 = 0x90
    NSXPCListener *_xpcListener;	// 152 = 0x98
    NSXPCListener *_libraryListener;	// 160 = 0xa0
    NPSManager *_npsManager;	// 168 = 0xa8
    NPSDomainAccessor *_npsDomainAccessor;	// 176 = 0xb0
    NSMutableArray *_performAfterDatabaseUnlocksAndPairedSyncAllowed;	// 184 = 0xb8
    NSMutableArray *_performAfterDatabaseUnlocks;	// 192 = 0xc0
    NPDOutstandingPassDeletionStore *_outstandingDeletionStore;	// 200 = 0xc8
    NPKWorkQueue *_workQueue;	// 208 = 0xd0
    NSMutableSet *_reconcileWorkQueues;	// 216 = 0xd8
    NSMutableArray *_watchOfferProvisioningCompletionHandlers;	// 224 = 0xe0
    NSHashTable *_activeConnectionsHashTable;	// 232 = 0xe8
    NPDCompanionPassSyncService *_passSyncService;	// 240 = 0xf0
    NPDDemoModePassCopier *_demoModePassCopier;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x000000010001f50c
@property(retain, nonatomic) NPDDemoModePassCopier *demoModePassCopier; // @synthesize demoModePassCopier=_demoModePassCopier;
@property(retain, nonatomic) NPDCompanionPassSyncService *passSyncService; // @synthesize passSyncService=_passSyncService;
@property(retain, nonatomic) NSHashTable *activeConnectionsHashTable; // @synthesize activeConnectionsHashTable=_activeConnectionsHashTable;
@property(retain, nonatomic) NSMutableArray *watchOfferProvisioningCompletionHandlers; // @synthesize watchOfferProvisioningCompletionHandlers=_watchOfferProvisioningCompletionHandlers;
@property(retain, nonatomic) NSMutableSet *reconcileWorkQueues; // @synthesize reconcileWorkQueues=_reconcileWorkQueues;
@property(retain) NPKWorkQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NPDOutstandingPassDeletionStore *outstandingDeletionStore; // @synthesize outstandingDeletionStore=_outstandingDeletionStore;
@property(retain, nonatomic) NSMutableArray *performAfterDatabaseUnlocks; // @synthesize performAfterDatabaseUnlocks=_performAfterDatabaseUnlocks;
@property(retain, nonatomic) NSMutableArray *performAfterDatabaseUnlocksAndPairedSyncAllowed; // @synthesize performAfterDatabaseUnlocksAndPairedSyncAllowed=_performAfterDatabaseUnlocksAndPairedSyncAllowed;
@property(retain) NPSDomainAccessor *npsDomainAccessor; // @synthesize npsDomainAccessor=_npsDomainAccessor;
@property(retain) NPSManager *npsManager; // @synthesize npsManager=_npsManager;
@property(retain) NSXPCListener *libraryListener; // @synthesize libraryListener=_libraryListener;
@property(retain) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(nonatomic) _Bool wasLimitPush; // @synthesize wasLimitPush=_wasLimitPush;
@property(retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator; // @synthesize pairedSyncCoordinator=_pairedSyncCoordinator;
@property(nonatomic) _Bool hasCandidateRelevantPasses; // @synthesize hasCandidateRelevantPasses=_hasCandidateRelevantPasses;
@property(retain, nonatomic) NPDCompanionPeerPaymentStatusObserver *companionPeerPaymentStatusObserver; // @synthesize companionPeerPaymentStatusObserver=_companionPeerPaymentStatusObserver;
@property(retain, nonatomic) NPDCardSetupReminderNotificationScheduler *bulletinScheduler; // @synthesize bulletinScheduler=_bulletinScheduler;
@property(retain, nonatomic) NPDBulletinManager *bulletinManager; // @synthesize bulletinManager=_bulletinManager;
@property(retain) NPKCompanionCatalogManager *companionCatalogManager; // @synthesize companionCatalogManager=_companionCatalogManager;
@property(retain) NPDCompanionPaymentPassDatabase *companionPaymentPassDatabase; // @synthesize companionPaymentPassDatabase=_companionPaymentPassDatabase;
@property(retain) NPKGizmoDatabase *gizmoDatabase; // @synthesize gizmoDatabase=_gizmoDatabase;
@property(nonatomic, getter=isGizmoWaitingForRelevantPasses) _Bool gizmoWaitingForRelevantPasses; // @synthesize gizmoWaitingForRelevantPasses=_gizmoWaitingForRelevantPasses;
@property(retain, nonatomic) NSDate *lastRelevantPassRequestDate; // @synthesize lastRelevantPassRequestDate=_lastRelevantPassRequestDate;
@property(retain, nonatomic) NSDate *lastRelevantPassInfoSendDate; // @synthesize lastRelevantPassInfoSendDate=_lastRelevantPassInfoSendDate;
@property(retain) NSSet *lastSeenRelevantPassInfo; // @synthesize lastSeenRelevantPassInfo=_lastSeenRelevantPassInfo;
@property(retain) NSTimer *stopMonitoringLocationTimer; // @synthesize stopMonitoringLocationTimer=_stopMonitoringLocationTimer;
@property(retain) NPKRemoteAdminConnectionServiceAgent *remoteAdminConnectionServiceAgent; // @synthesize remoteAdminConnectionServiceAgent=_remoteAdminConnectionServiceAgent;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *stopDroppingIDSMessagesTimer; // @synthesize stopDroppingIDSMessagesTimer=_stopDroppingIDSMessagesTimer;
@property(nonatomic) _Bool shouldDropIDSMessages; // @synthesize shouldDropIDSMessages=_shouldDropIDSMessages;
@property(retain, nonatomic) NSNumber *lastKnownResyncID; // @synthesize lastKnownResyncID=_lastKnownResyncID;
@property(retain, nonatomic) IDSService *relevancyService; // @synthesize relevancyService=_relevancyService;
@property(retain, nonatomic) IDSService *generalService; // @synthesize generalService=_generalService;
- (void)_handlePotentialMessageServiceEnabledChangeWithPreviousSettings:(unsigned long long)arg1 newSettings:(unsigned long long)arg2 uniqueID:(id)arg3;	// IMP=0x000000010001f01c
- (void)_handlePotentialTransactionServiceEnabledChangeWithPreviousSettings:(unsigned long long)arg1 newSettings:(unsigned long long)arg2 uniqueID:(id)arg3;	// IMP=0x000000010001edb0
- (void)notifySettingsChangedForPassWithUniqueID:(id)arg1 previousSettings:(unsigned long long)arg2 newSettings:(unsigned long long)arg3;	// IMP=0x000000010001ec20
- (void)handleUpdatedSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x000000010001e97c
- (_Bool)pairedDeviceIsBondi;	// IMP=0x000000010001e8b4
- (unsigned long long)versionForCompleteHash;	// IMP=0x000000010001e88c
- (void)_registerForFirstDeviceUnlockNotifications;	// IMP=0x000000010001e788
- (void)_performAfterFirstDeviceUnlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e49c
- (void)_performAfterFirstDeviceUnlockAndPairedSyncAllowed:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e150
- (void)_doPostUnlockPairedSyncAllowedWork;	// IMP=0x000000010001dcfc
- (void)_handleFirstDeviceUnlock;	// IMP=0x000000010001dc40
- (void)fetchCatalogIfChanged:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d88c
- (void)start;	// IMP=0x000000010001d888
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x000000010001d74c
- (void)passLibraryRequestsMigrateData:(id)arg1;	// IMP=0x000000010001d748
- (void)passLibrary:(id)arg1 requestsAdditionOfPasses:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d4a4
- (void)passLibrary:(id)arg1 requestsDeletionOfPassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001d3b4
- (id)paymentWebService;	// IMP=0x000000010001d360
- (id)secureElementIdentifiers;	// IMP=0x000000010001d35c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010001cd28
- (void)_reconcileDatabaseWithCompanionPassLibraryWithAddedPassHandler:(CDUnknownBlockType)arg1 updatedPassHandler:(CDUnknownBlockType)arg2 removedPassHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001ca20
- (void)_reconcileDatabaseWithPaymentPassDirectoryWithAddedPassHandler:(CDUnknownBlockType)arg1 updatedPassHandler:(CDUnknownBlockType)arg2 removedPassHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001c838
- (void)_reconcilePassesInDatabasePassingTest:(CDUnknownBlockType)arg1 withNewPassUniqueIDs:(id)arg2 passAccessor:(CDUnknownBlockType)arg3 addedPassHandler:(CDUnknownBlockType)arg4 updatedPassHandler:(CDUnknownBlockType)arg5 removedPassHandler:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010001b784
- (void)_checkHasCandidateRelevantPassesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001b528
- (void)_doSync;	// IMP=0x000000010001a9b4
- (void)_doFullSyncWithResyncID:(id)arg1;	// IMP=0x0000000100019d3c
- (_Bool)_shouldSyncPassFromCompanionPassLibrary:(id)arg1;	// IMP=0x0000000100019cc0
- (void)_resyncPassUniqueIDUpdates:(id)arg1 andRemovals:(id)arg2 withResyncID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100017a44
- (void)_removePassFromDatabaseWithID:(id)arg1;	// IMP=0x00000001000179cc
- (void)_removePendingAppleCardNotification;	// IMP=0x0000000100017888
- (void)_addPassToDatabaseAndPrepareForTransmissionToGizmo:(id)arg1 isUpdate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100016edc
- (double)gizmoScreenScale;	// IMP=0x0000000100016bb4
- (struct CGSize)gizmoScreenSize;	// IMP=0x00000001000167ec
- (void)_handleCompanionPassRemovedWithID:(id)arg1;	// IMP=0x0000000100016564
- (void)_handleCompanionPassUpdatedWithID:(id)arg1;	// IMP=0x000000010001618c
- (void)_handleCompanionPassAddedWithID:(id)arg1;	// IMP=0x0000000100015d84
- (void)_handleRemovalAndSendToGizmoForPassWithUniqueID:(id)arg1 syncID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015484
- (void)_handleUpdateAndSendToGizmoForPass:(id)arg1 syncID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100014b1c
- (void)_handleAddAndSendToGizmoForPass:(id)arg1 syncID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100013f88
- (id)serializedRemovePassWithUniqueID:(id)arg1 withNewLibraryHash:(id)arg2 omitHashForChunking:(_Bool)arg3 catalog:(id)arg4 syncID:(id)arg5 resyncID:(id)arg6;	// IMP=0x0000000100013d60
- (id)serializedUpdatePass:(id)arg1 fromPassWithManifestHash:(id)arg2 withNewLibraryHash:(id)arg3 omitHashForChunking:(_Bool)arg4 catalog:(id)arg5 syncID:(id)arg6 resyncID:(id)arg7;	// IMP=0x0000000100013ae0
- (id)serializedAddPass:(id)arg1 withNewLibraryHash:(id)arg2 omitHashForChunking:(_Bool)arg3 catalog:(id)arg4 syncID:(id)arg5 resyncID:(id)arg6;	// IMP=0x000000010001388c
- (id)serializedCatalog:(id)arg1;	// IMP=0x0000000100013804
- (id)serializedPass:(id)arg1;	// IMP=0x0000000100013788
- (void)handleRelevantPassesNeededRequest:(id)arg1;	// IMP=0x00000001000136d8
- (void)handleGizmoReceivedNewLibraryHashRequest:(id)arg1;	// IMP=0x00000001000135e8
- (void)handleGizmoInitiatedDeletePassRequest:(id)arg1;	// IMP=0x00000001000132ac
- (void)handleGizmoInitiatedAddPassRequest:(id)arg1;	// IMP=0x0000000100012d64
- (void)resyncNeededRequest:(id)arg1;	// IMP=0x0000000100012560
- (void)_fetchRelevantPassesAndNotifyGizmo;	// IMP=0x0000000100011f04
- (void)_handleBulletinDistributorWillSendBulletinToGizmoWithSectionID:(id)arg1;	// IMP=0x0000000100011dec
- (void)_handleRelevantPassesDidChange:(id)arg1;	// IMP=0x00000001000113d8
- (void)_handlePaymentOptionsDefaultsChanged;	// IMP=0x0000000100011398
- (void)_handlePassbookGlobalPreferencesChanged;	// IMP=0x000000010001106c
- (void)_handleStockholmPreferencesChanged;	// IMP=0x0000000100010e68
- (void)_handleAppSupportLoggingPreferencesChanged;	// IMP=0x0000000100010c68
- (void)_handleCompanionPaymentPassDatabaseChangedBroadcastUnconditionally:(_Bool)arg1;	// IMP=0x0000000100010374
- (void)_handleCompanionSyncDatabaseChanged:(id)arg1;	// IMP=0x000000010001023c
- (void)_handleCompanionPaymentPassDatabaseChanged:(id)arg1;	// IMP=0x000000010001013c
- (void)_migrateLoggingDefaults;	// IMP=0x0000000100010078
- (void)_handleCompanionPassLibraryChanged:(id)arg1;	// IMP=0x000000010000f49c
- (id)libraryHash;	// IMP=0x000000010000f42c
- (id)temporarilyRetainedPassLibrary;	// IMP=0x000000010000f354
@property(readonly) PKPassLibrary *passLibrary; // @dynamic passLibrary;
- (unsigned long long)companionPassSyncService:(id)arg1 settingsForPassWithUniqueID:(id)arg2;	// IMP=0x000000010000f268
- (void)companionPassSyncService:(id)arg1 receivedUpdatedSettings:(unsigned long long)arg2 forPassWithUniqueID:(id)arg3;	// IMP=0x000000010000f254
- (void)didReceiveCheckCompanionPeerPaymentState;	// IMP=0x000000010000f214
- (void)didReceivePaymentSetupRequestForApplicationName:(id)arg1;	// IMP=0x000000010000f040
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithCredentials:(id)arg2;	// IMP=0x000000010000eb80
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithBalances:(id)arg2;	// IMP=0x000000010000e6c0
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitAppletState:(id)arg2;	// IMP=0x000000010000e13c
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;	// IMP=0x000000010000def4
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;	// IMP=0x000000010000dc94
- (void)removeReminderNotificationForPassWithUniqueID:(id)arg1;	// IMP=0x000000010000dc28
- (void)postVerifyReminderNotificationForPassWithUniqueID:(id)arg1;	// IMP=0x000000010000da04
- (void)postAddReminderNotificationForPassWithUniqueID:(id)arg1;	// IMP=0x000000010000d688
- (_Bool)hasAnyWatchPaymentPasses;	// IMP=0x000000010000d610
- (id)pairedTerminalIdentifierForCompanionPaymentPassWithUniqueID:(id)arg1;	// IMP=0x000000010000d548
- (_Bool)hasWatchPaymentPassWithPairedTerminalIdentifier:(id)arg1;	// IMP=0x000000010000d4b8
- (_Bool)hasCompanionPaymentPassWithUniqueID:(id)arg1;	// IMP=0x000000010000d428
- (_Bool)hasWatchPaymentPassRequiringVerificationWithUniqueID:(id)arg1;	// IMP=0x000000010000d358
- (_Bool)hasWatchPaymentPassWithUniqueID:(id)arg1;	// IMP=0x000000010000d2c8
- (void)supportsMigrationSync;	// IMP=0x000000010000d2c4
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x000000010000d220
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x000000010000cf10
- (void)_stopDroppingIDSMessages;	// IMP=0x000000010000cea0
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000cc1c
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010000caa0
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010000c9b8
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x000000010000c8d0
- (void)_logDebugInformation;	// IMP=0x000000010000c178
- (void)_registerDarwinNotificationHandler;	// IMP=0x000000010000bf08
- (void)_registerDistributedNotificationHandler;	// IMP=0x000000010000b7f8
- (void)_createSyncServiceIfNecessary;	// IMP=0x000000010000b398
- (void)_doFullInitialization;	// IMP=0x000000010000a558
- (void)dealloc;	// IMP=0x000000010000a4a4
- (id)init;	// IMP=0x0000000100009e94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

