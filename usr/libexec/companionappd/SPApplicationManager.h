//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface SPApplicationManager : NSObject
{
    _Bool _domainVerified;	// 8 = 0x8
    long long _installationMode;	// 16 = 0x10
    NSString *_currentXcodeControlledPlugin;	// 24 = 0x18
    NPSDomainAccessor *_watchKitAppsDomain;	// 32 = 0x20
    NSMutableDictionary *_continuouslyDiscoveredPlugins;	// 40 = 0x28
    CDUnknownBlockType _pluginsFoundBlock;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_pkPluginManagementQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_pkPluginCompletionQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_pkPluginBeginUsingTimerQueue;	// 72 = 0x48
    NSMutableDictionary *_pkPluginBeginUsingTimers;	// 80 = 0x50
    id _wkContinuousDiscoveryToken;	// 88 = 0x58
    id _domainUpdateLock;	// 96 = 0x60
    NSMutableSet *_companionAppIDsInstalledViaXcode;	// 104 = 0x68
    id _companionAppIDsInstalledViaXcodeLock;	// 112 = 0x70
    NSMutableSet *_extensionsKilledDueToAppDeath;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_extensionsKilledDueToAppDeathAccessQueue;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x000000010001d068
- (void).cxx_destruct;	// IMP=0x0000000100023830
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *extensionsKilledDueToAppDeathAccessQueue; // @synthesize extensionsKilledDueToAppDeathAccessQueue=_extensionsKilledDueToAppDeathAccessQueue;
@property(retain, nonatomic) NSMutableSet *extensionsKilledDueToAppDeath; // @synthesize extensionsKilledDueToAppDeath=_extensionsKilledDueToAppDeath;
@property(retain, nonatomic) id companionAppIDsInstalledViaXcodeLock; // @synthesize companionAppIDsInstalledViaXcodeLock=_companionAppIDsInstalledViaXcodeLock;
@property(retain, nonatomic) NSMutableSet *companionAppIDsInstalledViaXcode; // @synthesize companionAppIDsInstalledViaXcode=_companionAppIDsInstalledViaXcode;
@property(retain, nonatomic) id domainUpdateLock; // @synthesize domainUpdateLock=_domainUpdateLock;
@property(retain, nonatomic) id wkContinuousDiscoveryToken; // @synthesize wkContinuousDiscoveryToken=_wkContinuousDiscoveryToken;
@property(retain, nonatomic) NSMutableDictionary *pkPluginBeginUsingTimers; // @synthesize pkPluginBeginUsingTimers=_pkPluginBeginUsingTimers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginBeginUsingTimerQueue; // @synthesize pkPluginBeginUsingTimerQueue=_pkPluginBeginUsingTimerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginCompletionQueue; // @synthesize pkPluginCompletionQueue=_pkPluginCompletionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pkPluginManagementQueue; // @synthesize pkPluginManagementQueue=_pkPluginManagementQueue;
@property(copy, nonatomic) CDUnknownBlockType pluginsFoundBlock; // @synthesize pluginsFoundBlock=_pluginsFoundBlock;
@property(retain, nonatomic) NSMutableDictionary *continuouslyDiscoveredPlugins; // @synthesize continuouslyDiscoveredPlugins=_continuouslyDiscoveredPlugins;
@property _Bool domainVerified; // @synthesize domainVerified=_domainVerified;
@property(retain, nonatomic) NPSDomainAccessor *watchKitAppsDomain; // @synthesize watchKitAppsDomain=_watchKitAppsDomain;
@property(copy) NSString *currentXcodeControlledPlugin; // @synthesize currentXcodeControlledPlugin=_currentXcodeControlledPlugin;
@property long long installationMode; // @synthesize installationMode=_installationMode;
- (void)saveGizmoBuildVersion:(id)arg1;	// IMP=0x0000000100023644
- (id)savedGizmoBuildVersion;	// IMP=0x00000001000235a4
- (void)notifyInactiveForPluginWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000232bc
- (void)notifyActiveForPluginWithIdentifier:(id)arg1;	// IMP=0x000000010002306c
- (_Bool)pluginHasFinishedBeginUsing:(id)arg1;	// IMP=0x0000000100022fa8
- (void)markPluginWithIdentifierNeedsBeginUsing:(id)arg1;	// IMP=0x0000000100022d60
- (void)discoverPlugInForIdentifier:(id)arg1 found:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022a3c
- (void)discoverAllPlugIns:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022850
- (void)updateCoreDuetSession:(id)arg1;	// IMP=0x0000000100022428
- (void)clearXcodeWillInstallSockPuppetAppWithCompanionAppIDState:(id)arg1;	// IMP=0x0000000100022374
- (_Bool)willXcodeInstallSockPuppetAppWithCompanionAppID:(id)arg1;	// IMP=0x00000001000222ac
- (void)xcodeWillInstallSockPuppetAppWithCompanionAppID:(id)arg1;	// IMP=0x00000001000221f8
- (void)fetchInstalledApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022094
- (_Bool)applicationContainsWK1Application:(id)arg1;	// IMP=0x0000000100021f18
- (_Bool)applicationContainsWK2Application:(id)arg1;	// IMP=0x0000000100021e38
- (void)stopUsingPluginIfNecessary:(id)arg1;	// IMP=0x00000001000218e4
- (id)identifierForPluginProxy:(id)arg1;	// IMP=0x0000000100021850
- (id)pluginIdentifierForProtocolIdentifier:(id)arg1;	// IMP=0x000000010002166c
- (id)gizmoApplicationInfoWithIdentifier:(id)arg1;	// IMP=0x0000000100021580
- (id)gizmoPersistentDomain;	// IMP=0x0000000100021374
- (void)handleInstallationsReportedByLaunchServices:(id)arg1;	// IMP=0x0000000100020ff8
- (void)installedApplicationsChanged;	// IMP=0x0000000100020f80
- (_Bool)wasExtensionKilledDueToAppDeath:(id)arg1;	// IMP=0x0000000100020e8c
- (void)setExtension:(id)arg1 wasKilledDueToAppDeath:(_Bool)arg2;	// IMP=0x0000000100020cac
- (void)getOrBeginActivePlugInForApplication:(id)arg1 setupBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002044c
- (void)beginUsingPlugin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f008
- (void)waitForPreviousPluginToFinishEnding:(id)arg1 toComplete:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e594
- (void)callEndUsingCompletionsForPluginWithIdentifier:(id)arg1;	// IMP=0x000000010001dfac
- (void)registerForContinuousPluginDiscovery;	// IMP=0x000000010001d364
- (id)init;	// IMP=0x000000010001d0d4

@end

