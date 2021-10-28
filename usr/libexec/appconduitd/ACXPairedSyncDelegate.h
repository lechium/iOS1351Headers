//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXPairedSyncAppInstallerDelegate-Protocol.h"
#import "PSYInitialSyncStateObserverDelegate-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class ACXPairedSyncAppInstaller, NSString, PSYInitialSyncStateObserver, PSYSyncCoordinator;

@interface ACXPairedSyncDelegate : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, ACXPairedSyncAppInstallerDelegate>
{
    PSYSyncCoordinator *_coordinator;	// 8 = 0x8
    PSYInitialSyncStateObserver *_stateObserver;	// 16 = 0x10
    ACXPairedSyncAppInstaller *_appInstaller;	// 24 = 0x18
}

+ (id)sharedSyncDelegate;	// IMP=0x0000000100005ee4
- (void).cxx_destruct;	// IMP=0x00000001000069fc
@property(readonly, nonatomic) ACXPairedSyncAppInstaller *appInstaller; // @synthesize appInstaller=_appInstaller;
@property(readonly, nonatomic) PSYInitialSyncStateObserver *stateObserver; // @synthesize stateObserver=_stateObserver;
@property(readonly, nonatomic) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)installCompleteForSyncSession:(id)arg1;	// IMP=0x000000010000699c
- (void)reportSystemAppInstallFailureForBundleID:(id)arg1;	// IMP=0x0000000100006930
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0000000100006704
- (void)supportsMigrationSync;	// IMP=0x0000000100006700
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x00000001000066e8
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x00000001000066d0
- (void)_syncDidCompleteForPairingIdentifier:(id)arg1 withDescription:(id)arg2;	// IMP=0x00000001000063c4
- (_Bool)syncingIsRestrictedForPairingID:(id)arg1;	// IMP=0x00000001000060f0
- (void)_startSystemAppInstallerWithSyncSession:(id)arg1 forConnection:(id)arg2;	// IMP=0x000000010000605c
- (id)init;	// IMP=0x0000000100005fa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
