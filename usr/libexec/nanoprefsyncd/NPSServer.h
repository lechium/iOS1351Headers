//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "NPSServerProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class IDSService, NPProgressTracker, NPSDatabase, NPSDeviceRegistry, NPSFileBackupManager, NPSOSLogStateProvider, NPSSettings, NSDictionary, NSMutableDictionary, NSString, NSUUID, NSXPCListener, PSYServiceSyncSession, PSYSyncCoordinator;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface NPSServer : NSObject <PSYSyncCoordinatorDelegate, MCProfileConnectionObserver, IDSServiceDelegate, NSXPCListenerDelegate, NPSServerProtocol>
{
    NPSFileBackupManager *_fileBackupManager;	// 8 = 0x8
    PSYSyncCoordinator *_pairedSyncCoordinatorFirstSync;	// 16 = 0x10
    PSYSyncCoordinator *_pairedSyncCoordinatorRemainderSync;	// 24 = 0x18
    PSYServiceSyncSession *_activeSyncSession;	// 32 = 0x20
    unsigned long long _totalDataToSyncInBytes;	// 40 = 0x28
    unsigned long long _remainingDataToSyncInBytes;	// 48 = 0x30
    NSMutableDictionary *_syncSessionProgressDictionary;	// 56 = 0x38
    NSObject<OS_os_transaction> *_syncTransaction;	// 64 = 0x40
    NPProgressTracker *_syncProgressTracker;	// 72 = 0x48
    NPSOSLogStateProvider *_dumper;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workQueue;	// 88 = 0x58
    NPSSettings *_settings;	// 96 = 0x60
    NSXPCListener *_xpcListener;	// 104 = 0x68
    IDSService *_idsService;	// 112 = 0x70
    NPSDeviceRegistry *_deviceRegistry;	// 120 = 0x78
    NPSDatabase *_database;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_purgeTimer;	// 136 = 0x88
    NSDictionary *_allowedGroups;	// 144 = 0x90
    NSString *_currentlyUsedDomain;	// 152 = 0x98
    NSUUID *_activeDeviceID;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_mcDebounceSource;	// 168 = 0xa8
}

+ (void)setLaunchNotification:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000001000185fc
+ (void)setLaunchNotificationsEnabled:(_Bool)arg1;	// IMP=0x0000000100018550
+ (id)queueOneIdentifierForFileBackupMsg:(id)arg1;	// IMP=0x0000000100017b60
+ (id)queueOneIdentifierForManagedConfigurationMsg:(id)arg1;	// IMP=0x0000000100017900
+ (id)managedConfigurationData;	// IMP=0x0000000100016ea0
+ (_Bool)isManagedConfigurationSettingWhitelistedForKind:(id)arg1 feature:(id)arg2;	// IMP=0x0000000100016908
+ (id)managedConfigurationSettings;	// IMP=0x00000001000163d8
+ (id)queueOneIdentifierForUserDefaultsBackupMsg:(id)arg1;	// IMP=0x0000000100013c70
+ (id)queueOneIdentifierForUserDefaultsMsg:(id)arg1;	// IMP=0x0000000100012f08
+ (void)logManagedConfigurationDictionary:(id)arg1;	// IMP=0x000000010000ef24
+ (long long)purgeRetryDelay;	// IMP=0x000000010000b07c
+ (double)maxSendTimeout;	// IMP=0x000000010000b018
+ (_Bool)shouldAllowSyncOfItemWithSyncGroups:(id)arg1 allowedSyncGroups:(id)arg2;	// IMP=0x0000000100006000
- (void).cxx_destruct;	// IMP=0x00000001000188e4
@property(retain, nonatomic) NSObject<OS_dispatch_source> *mcDebounceSource; // @synthesize mcDebounceSource=_mcDebounceSource;
@property(retain, nonatomic) NSUUID *activeDeviceID; // @synthesize activeDeviceID=_activeDeviceID;
@property(retain, nonatomic) NSString *currentlyUsedDomain; // @synthesize currentlyUsedDomain=_currentlyUsedDomain;
@property(retain, nonatomic) NSDictionary *allowedGroups; // @synthesize allowedGroups=_allowedGroups;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *purgeTimer; // @synthesize purgeTimer=_purgeTimer;
@property(retain, nonatomic) NPSDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) NPSDeviceRegistry *deviceRegistry; // @synthesize deviceRegistry=_deviceRegistry;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NPSSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NPSOSLogStateProvider *dumper; // @synthesize dumper=_dumper;
@property(retain, nonatomic) NPProgressTracker *syncProgressTracker; // @synthesize syncProgressTracker=_syncProgressTracker;
@property(retain, nonatomic) NSObject<OS_os_transaction> *syncTransaction; // @synthesize syncTransaction=_syncTransaction;
@property(readonly, nonatomic) NSMutableDictionary *syncSessionProgressDictionary; // @synthesize syncSessionProgressDictionary=_syncSessionProgressDictionary;
@property(nonatomic) unsigned long long remainingDataToSyncInBytes; // @synthesize remainingDataToSyncInBytes=_remainingDataToSyncInBytes;
@property(nonatomic) unsigned long long totalDataToSyncInBytes; // @synthesize totalDataToSyncInBytes=_totalDataToSyncInBytes;
@property(retain, nonatomic) PSYServiceSyncSession *activeSyncSession; // @synthesize activeSyncSession=_activeSyncSession;
@property(retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinatorRemainderSync; // @synthesize pairedSyncCoordinatorRemainderSync=_pairedSyncCoordinatorRemainderSync;
@property(retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinatorFirstSync; // @synthesize pairedSyncCoordinatorFirstSync=_pairedSyncCoordinatorFirstSync;
- (void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(_Bool)arg3;	// IMP=0x00000001000181c4
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 cloudEnabled:(_Bool)arg5;	// IMP=0x0000000100017bf8
- (_Bool)retryFileBackupRestoreForFilePath:(id)arg1;	// IMP=0x00000001000179cc
- (id)sendManagedConfigurationSettings:(id)arg1 isInitialSync:(_Bool)arg2;	// IMP=0x0000000100017638
- (void)resyncManagedConfigurationIfNeededIsInitialSync:(_Bool)arg1;	// IMP=0x0000000100017424
- (void)resyncManagedConfigurationIfNeeded;	// IMP=0x0000000100017414
- (void)forceResyncManagedConfigurationIsInitialSync:(_Bool)arg1;	// IMP=0x000000010001733c
- (void)handleManagedConfigurationChangedNotification;	// IMP=0x0000000100016e38
- (void)debounceOnWorkerQueueWithblock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016a50
- (void)handleAppChangedRestrictions;	// IMP=0x00000001000169c0
- (void)applyStashedSettingsSyncMessages;	// IMP=0x0000000100016218
- (unsigned long long)sendWUDSettingsInDomain:(id)arg1 keys:(id)arg2 backupFile:(id)arg3;	// IMP=0x000000010001549c
- (unsigned long long)sendSettingsInDomain:(id)arg1 keys:(id)arg2 cloudEnabled:(_Bool)arg3 backupFile:(id)arg4;	// IMP=0x00000001000143fc
- (void)sendUserDefaultMsg:(id)arg1 forDomain:(id)arg2 includedKeys:(id)arg3 cloudEnabled:(_Bool)arg4 backupFile:(id)arg5;	// IMP=0x000000010001418c
- (id)newDefaultsMsgWithDomain:(id)arg1;	// IMP=0x000000010001410c
- (id)getCachedTimeStampFor:(id)arg1 key:(id)arg2 usePerGizmoCache:(_Bool)arg3;	// IMP=0x0000000100014030
- (_Bool)doesCurrentDeviceSupportGroupedTwoWayKeys;	// IMP=0x0000000100013fa4
- (id)sendSettingsBackupInDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 isInitialSync:(_Bool)arg4 backupFile:(id)arg5;	// IMP=0x00000001000131f8
- (id)sendSetting:(id)arg1 keys:(id)arg2 allowedSyncGroups:(id)arg3 messageIdentifier:(id *)arg4 messageData:(id *)arg5 cloudEnabled:(_Bool)arg6 backupFile:(id)arg7;	// IMP=0x0000000100012404
- (void)usingPrefsFromDomain:(id)arg1;	// IMP=0x00000001000123a8
- (id)backupPathForDomain:(id)arg1 container:(id)arg2;	// IMP=0x00000001000121cc
- (id)createDirectoryIfNeeded:(id)arg1;	// IMP=0x0000000100011fd4
- (id)restoreFileBackupForLocalFileURL:(id)arg1 originalFileURL:(id)arg2 isInitialSync:(_Bool)arg3;	// IMP=0x0000000100011940
- (id)restoreRemoteFilesFromBackup;	// IMP=0x0000000100011784
- (id)restoreRemoteSettingsFromBackup;	// IMP=0x0000000100011130
- (void)updateCacheForDomain:(id)arg1 keys:(id)arg2 twoWaySyncTimestamp:(id)arg3 isPerGizmo:(_Bool)arg4;	// IMP=0x0000000100010ed8
- (_Bool)deleteCacheForDomain:(id)arg1 isPerGizmo:(_Bool)arg2;	// IMP=0x0000000100010c58
- (_Bool)writeCache:(id)arg1 toDiskForDomain:(id)arg2 isPerGizmo:(_Bool)arg3;	// IMP=0x0000000100010944
- (id)readCacheFromDiskForDomain:(id)arg1 isPerGizmo:(_Bool)arg2;	// IMP=0x00000001000106f0
- (id)cachePathForDomain:(id)arg1 isPerGizmo:(_Bool)arg2;	// IMP=0x0000000100010534
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100010054
- (void)handleFullBackupMessage:(id)arg1 resourceURL:(id)arg2;	// IMP=0x000000010000fe8c
- (void)handleFileBackupMessage:(id)arg1 resourceURL:(id)arg2 backupFile:(id)arg3;	// IMP=0x000000010000fc50
- (void)handleFileBackupMessage:(id)arg1;	// IMP=0x000000010000faf4
- (void)handleUserDefaultsBackupMsgData:(id)arg1 backupFile:(id)arg2;	// IMP=0x000000010000f280
- (void)handleUserDefaultsBackupMsg:(id)arg1;	// IMP=0x000000010000f128
- (void)handleRestoreOfSyncingUserDefaultsMsg:(id)arg1 backupFile:(id)arg2;	// IMP=0x000000010000de08
- (_Bool)handleWhitelistedUserDefaultsMsg:(id)arg1 messageData:(id)arg2 overwriteNewerTimestamps:(_Bool)arg3 backupFile:(id)arg4;	// IMP=0x000000010000c9b8
- (void)handleUserDefaultsMsgData:(id)arg1 backupFile:(id)arg2;	// IMP=0x000000010000c8a0
- (void)handleUserDefaultsMsg:(id)arg1;	// IMP=0x000000010000c748
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x000000010000c410
- (void)resendMessagesForMessageID:(id)arg1;	// IMP=0x000000010000bcf4
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000b688
- (id)sendMessageData:(id)arg1 messageType:(int)arg2 queueOneIdentifier:(id)arg3 identifier:(id *)arg4 urgentPriorityOverride:(_Bool)arg5 cloudEnabled:(_Bool)arg6;	// IMP=0x000000010000b170
- (id)sendMessageData:(id)arg1 messageType:(int)arg2 queueOneIdentifier:(id)arg3 identifier:(id *)arg4 cloudEnabled:(_Bool)arg5;	// IMP=0x000000010000b0e8
- (_Bool)checkActiveDeviceChangedVersion;	// IMP=0x000000010000a9d0
- (void)handleActiveDeviceChangedVersionNotification;	// IMP=0x000000010000a9c4
- (void)performFirstLaunchIntoNewBuildTasks;	// IMP=0x0000000100009930
- (id)systemBuildVersion;	// IMP=0x0000000100009898
- (void)startPrefsSyncWithGroups:(id)arg1 backupWriter:(id)arg2;	// IMP=0x0000000100007a58
- (void)registerSyncMessageWithIdentifier:(id)arg1 size:(unsigned long long)arg2;	// IMP=0x00000001000079c0
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x00000001000070dc
- (void)supportsMigrationSync;	// IMP=0x00000001000070d8
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100007060
- (void)profileConnectionDidReceiveDefaultsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100006fe8
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100006f70
- (void)_completeActiveSyncSessionWithError:(id)arg1;	// IMP=0x0000000100006e40
- (void)syncCompletedWithError:(id)arg1 withDevice:(id)arg2;	// IMP=0x0000000100006d50
- (void)registerInitialSyncMessage:(id)arg1 ofSize:(unsigned long long)arg2 orReportInitialSyncFailureWithError:(id)arg3;	// IMP=0x0000000100006ce0
- (void)setHasPerformedInitialSync:(_Bool)arg1 updateBuildVersion:(_Bool)arg2 withDevice:(id)arg3;	// IMP=0x00000001000065a8
- (_Bool)hasPairedDevice;	// IMP=0x0000000100006598
- (_Bool)hasPerformedInitialSync;	// IMP=0x000000010000650c
- (void)performFirstUnlockTasks;	// IMP=0x00000001000063f8
- (void)performMigration;	// IMP=0x0000000100006214
- (void)dealloc;	// IMP=0x0000000100005fb4
- (void)invalidate;	// IMP=0x0000000100005ea4
@property(readonly, nonatomic) NPSFileBackupManager *fileBackupManager; // @synthesize fileBackupManager=_fileBackupManager;
- (void)initCore:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005718
- (void)resetIfActiveDeviceChanged;	// IMP=0x0000000100005658
- (id)init;	// IMP=0x0000000100005270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

