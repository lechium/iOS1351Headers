//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MapsSuggestionsCanKicker, MapsSuggestionsETARequester, MapsSuggestionsETARequirements, MapsSuggestionsNetworkRequester, NavdDoomMapsSuggestionsUpdater;
@protocol OS_dispatch_queue;

@interface NavdVehicleBluetoothNotificationHandler : NSObject
{
    NavdDoomMapsSuggestionsUpdater *_updater;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_vehicleConnectionTriggerQueue;	// 16 = 0x10
    int _vehicleConnectionToken;	// 24 = 0x18
    _Bool _isBluetoothConnected;	// 28 = 0x1c
    long long _entryDetectionLoopCount;	// 32 = 0x20
    _Bool _didOverrideETARequester;	// 40 = 0x28
    MapsSuggestionsETARequirements *_etaRequirements;	// 48 = 0x30
    MapsSuggestionsETARequester *_etaRequester;	// 56 = 0x38
    MapsSuggestionsNetworkRequester *_networkRequester;	// 64 = 0x40
    MapsSuggestionsCanKicker *_disconnectCanKicker;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010002397c
@property(retain, nonatomic) MapsSuggestionsCanKicker *disconnectCanKicker; // @synthesize disconnectCanKicker=_disconnectCanKicker;
@property(nonatomic) _Bool didOverrideETARequester; // @synthesize didOverrideETARequester=_didOverrideETARequester;
@property(retain, nonatomic) MapsSuggestionsNetworkRequester *networkRequester; // @synthesize networkRequester=_networkRequester;
@property(retain, nonatomic) MapsSuggestionsETARequester *etaRequester; // @synthesize etaRequester=_etaRequester;
@property(retain, nonatomic) MapsSuggestionsETARequirements *etaRequirements; // @synthesize etaRequirements=_etaRequirements;
- (void)fireNotificationForDestination:(id)arg1;	// IMP=0x000000010002340c
- (void)_processVehicleConnected;	// IMP=0x0000000100022948
- (void)_handleVehicleDisconnection;	// IMP=0x000000010002289c
- (void)start;	// IMP=0x0000000100021f9c
- (void)_cleanup;	// IMP=0x0000000100021f30
- (void)dealloc;	// IMP=0x0000000100021d30
- (id)initWithETARequester:(id)arg1;	// IMP=0x0000000100021c9c

@end
