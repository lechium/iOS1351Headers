//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLIntersiloService.h>

#import "CLTransitMacMonitorProtocol-Protocol.h"

@class CLLocation, NSMutableArray, NSMutableSet, NSString;
@protocol CLTransitMacTileDataProviderProtocol, CLWifiServiceProtocol;

@interface CLTransitMacMonitor : CLIntersiloService <CLTransitMacMonitorProtocol>
{
    id <CLWifiServiceProtocol> _wifiServiceProxy;	// 8 = 0x8
    struct unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 16 = 0x10
    id <CLTransitMacTileDataProviderProtocol> _transitMacTileDataProviderProxy;	// 24 = 0x18
    struct unique_ptr<CLFilteredLocationController_Type::Client, std::__1::default_delete<CLFilteredLocationController_Type::Client>> _locationClient;	// 32 = 0x20
    unsigned long long _currentState;	// 40 = 0x28
    NSMutableSet *_clients;	// 48 = 0x30
    NSMutableArray *_observedTransitAccessPointsCache;	// 56 = 0x38
    CLLocation *_mostRecentLocation;	// 64 = 0x40
}

+ (_Bool)isSupported;	// IMP=0x0000000100a26914
+ (id)getSilo;	// IMP=0x0000000100a26858
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100a26834
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100d03944
- (id).cxx_construct;	// IMP=0x0000000100a28828
- (void).cxx_destruct;	// IMP=0x0000000100a287c4
@property(retain, nonatomic) CLLocation *mostRecentLocation; // @synthesize mostRecentLocation=_mostRecentLocation;
@property(retain, nonatomic) NSMutableArray *observedTransitAccessPointsCache; // @synthesize observedTransitAccessPointsCache=_observedTransitAccessPointsCache;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0000000100a285cc
- (void)onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0000000100a27f04
- (void)processNewAccessPoints:(const vector_94cb9693 *)arg1 transitTileResults:(id)arg2;	// IMP=0x0000000100a27490
- (void)stopMonitoringTransitStateForClient:(byref id)arg1;	// IMP=0x0000000100a27188
- (void)startMonitoringTransitStateForClient:(byref id)arg1;	// IMP=0x0000000100a27080
- (void)endService;	// IMP=0x0000000100a26f10
- (void)beginService;	// IMP=0x0000000100a2691c
- (id)init;	// IMP=0x0000000100a268d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

