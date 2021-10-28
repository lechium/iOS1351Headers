//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLDuetMonitorServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CLDuetMonitor : CLIntersiloService <CLDuetMonitorServiceProtocol>
{
    NSMutableDictionary *_registeredEvents;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x000000010051e2a0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010051e27c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cde5d0
@property(retain, nonatomic) NSMutableDictionary *registeredEvents; // @synthesize registeredEvents=_registeredEvents;
- (void)notifyClient:(id)arg1 ofNowPlaying:(id)arg2;	// IMP=0x0000000100520760
- (void)notifyClient:(id)arg1 ofHomeKitAppView:(id)arg2;	// IMP=0x000000010052046c
- (void)notifyClient:(id)arg1 ofHomeKitAccessory:(id)arg2;	// IMP=0x00000001005200ec
- (void)notifyClient:(id)arg1 ofHomeKitScene:(id)arg2;	// IMP=0x000000010051fd98
- (void)notifyClient:(id)arg1 ofForegroundAppWithValue:(id)arg2;	// IMP=0x000000010051fb60
- (void)notifyClient:(id)arg1 ofEvent:(long long)arg2 withValue:(id)arg3;	// IMP=0x000000010051faac
- (long long)eventTypeFromNSNumber:(id)arg1;	// IMP=0x000000010051fa70
- (id)streamForEvent:(long long)arg1;	// IMP=0x000000010051fa40
- (id)predicateForEvent:(long long)arg1 withKeyPath:(id)arg2;	// IMP=0x000000010051f9a4
- (id)keypathForEvent:(long long)arg1;	// IMP=0x000000010051f900
- (void)stopMonitoringForClient:(byref id)arg1;	// IMP=0x000000010051f704
- (void)stopMonitoringEvent:(long long)arg1 withPredicate:(id)arg2 forClient:(byref id)arg3;	// IMP=0x000000010051f4e0
- (void)stopMonitoringEvents:(id)arg1 forClient:(byref id)arg2;	// IMP=0x000000010051f35c
- (void)registerWithDuetForEvent:(long long)arg1 andPredicate:(id)arg2;	// IMP=0x000000010051eed8
- (void)registerClient:(id)arg1 forEvent:(long long)arg2 withPredicate:(id)arg3;	// IMP=0x000000010051ecbc
- (void)stopMonitoringNowPlayingForClient:(byref id)arg1;	// IMP=0x000000010051ec40
- (void)startMonitoringNowPlayingForClient:(byref id)arg1;	// IMP=0x000000010051ebc4
- (void)stopMonitoringHomeKitAppViewForClient:(byref id)arg1;	// IMP=0x000000010051eb48
- (void)startMonitoringHomeKitAppViewForClient:(byref id)arg1;	// IMP=0x000000010051eacc
- (void)stopMonitoringHomeKitAccessoryForClient:(byref id)arg1;	// IMP=0x000000010051ea50
- (void)startMonitoringHomeKitAccessoryForClient:(byref id)arg1;	// IMP=0x000000010051e9d4
- (void)stopMonitoringHomeKitSceneForClient:(byref id)arg1;	// IMP=0x000000010051e958
- (void)startMonitoringHomeKitSceneForClient:(byref id)arg1;	// IMP=0x000000010051e8dc
- (void)stopMonitoringFirstWakeOfDayForClient:(byref id)arg1;	// IMP=0x000000010051e860
- (void)startMonitoringFirstWakeOfDayForClient:(byref id)arg1;	// IMP=0x000000010051e7e4
- (void)stopMonitoringBluetoothConnectedForClient:(byref id)arg1;	// IMP=0x000000010051e768
- (void)startMonitoringBluetoothConnectedForClient:(byref id)arg1;	// IMP=0x000000010051e6ec
- (void)stopMonitoringAudioOutputRouteConnectedForClient:(byref id)arg1;	// IMP=0x000000010051e670
- (void)startMonitoringAudioOutputRouteConnectedForClient:(byref id)arg1;	// IMP=0x000000010051e5f4
- (void)stopMonitoringForegroundAppLaunchWithPredicate:(id)arg1 forClient:(byref id)arg2;	// IMP=0x000000010051e598
- (void)startMonitoringForegroundAppLaunchWithPredicate:(id)arg1 forClient:(byref id)arg2;	// IMP=0x000000010051e53c
- (void)stopMonitoringForegroundAppLaunchForClient:(byref id)arg1;	// IMP=0x000000010051e4c0
- (void)startMonitoringForegroundAppLaunchForClient:(byref id)arg1;	// IMP=0x000000010051e448
- (id)init;	// IMP=0x000000010051e404
- (void)endService;	// IMP=0x000000010051e3c0
- (void)beginService;	// IMP=0x000000010051e368
- (void)dealloc;	// IMP=0x000000010051e318

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
