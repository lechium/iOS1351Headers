//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOKeyBagProtectedDataDidBecomeAvailableObserver-Protocol.h"

@class GEONavdServer, MNNavigationServer, MNTimeballServer, NAVDaemonServer, NSString, NavdDoomHost, NavdRecentLocationsServer, NavdVehicleBluetoothNotificationHandler, RTRoutineManager;
@protocol OS_dispatch_source;

@interface NavdController : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver>
{
    GEONavdServer *_navigationServer;	// 8 = 0x8
    NAVDaemonServer *_predictionsTTLServer;	// 16 = 0x10
    MNNavigationServer *_navServer;	// 24 = 0x18
    NavdRecentLocationsServer *_recentLocationsServer;	// 32 = 0x20
    NavdDoomHost *_doomHost;	// 40 = 0x28
    NavdVehicleBluetoothNotificationHandler *_bluetoothNotificationHandler;	// 48 = 0x30
    RTRoutineManager *_routineManager;	// 56 = 0x38
    MNTimeballServer *_timeballServer;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_systemMemoryPressureWarningSource;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_systemMemoryPressureCriticalSource;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_processMemoryPressureCriticalSource;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_processMemoryPressureWarningSource;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010002bd18
- (void)_startListeningToMemoryPressureEvents;	// IMP=0x000000010002b974
- (void)dealloc;	// IMP=0x000000010002b8dc
- (void)start;	// IMP=0x000000010002b83c
- (void)protectedDataDidBecomeAvailable:(id)arg1;	// IMP=0x000000010002b760
- (void)_startDoomIfUnlocked;	// IMP=0x000000010002b654
- (void)_startTimeballServerIfNeeded;	// IMP=0x000000010002b520
- (void)_migrate;	// IMP=0x000000010002b2c4
- (void)_clearNavTracesDirectory;	// IMP=0x000000010002b0dc
- (void)_stopMonitoringSignificantLocationChanges;	// IMP=0x000000010002b02c
- (void)_turnOffCoreRoutineMonitoringOn3DTouchDevices;	// IMP=0x000000010002af80
- (void)_main;	// IMP=0x000000010002ae98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

