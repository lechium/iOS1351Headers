//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAVConcreteEndpoint, MRAVConcreteRoutingDiscoverySession, NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRDAVHostedRoutingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;	// 16 = 0x10
    MRAVConcreteRoutingDiscoverySession *_discoverySession;	// 24 = 0x18
    NSHashTable *_weakObservers;	// 32 = 0x20
    NSMutableDictionary *_externalDeviceMap;	// 40 = 0x28
    NSMutableArray *_externalDeviceGraveyard;	// 48 = 0x30
    id _discoverySessionOutputDevicesToken;	// 56 = 0x38
    NSArray *_outputDevices;	// 64 = 0x40
    NSDictionary *_concreteOutputDevices;	// 72 = 0x48
    NSArray *_endpoints;	// 80 = 0x50
    MRAVConcreteEndpoint *_localEndpoint;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100030f8c
@property(retain, nonatomic) MRAVConcreteEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(retain, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) NSDictionary *concreteOutputDevices; // @synthesize concreteOutputDevices=_concreteOutputDevices;
@property(retain, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(retain, nonatomic) id discoverySessionOutputDevicesToken; // @synthesize discoverySessionOutputDevicesToken=_discoverySessionOutputDevicesToken;
@property(retain, nonatomic) NSMutableArray *externalDeviceGraveyard; // @synthesize externalDeviceGraveyard=_externalDeviceGraveyard;
@property(retain, nonatomic) NSMutableDictionary *externalDeviceMap; // @synthesize externalDeviceMap=_externalDeviceMap;
@property(retain, nonatomic) NSHashTable *weakObservers; // @synthesize weakObservers=_weakObservers;
@property(retain, nonatomic) MRAVConcreteRoutingDiscoverySession *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerCalloutQueue; // @synthesize observerCalloutQueue=_observerCalloutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)_onQueue_removeExternalDeviceWithEndpointIdentifier:(id)arg1;	// IMP=0x0000000100030d78
- (void)_processDiscoveryObserverChanges;	// IMP=0x0000000100030acc
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x0000000100030200
- (void)_onQueue_reloadGroups;	// IMP=0x000000010002f1e4
- (id)_onQueue_makeHostedExternalDeviceForEndpoint:(id)arg1 didCreate:(_Bool *)arg2;	// IMP=0x000000010002ee34
- (id)_onQueue_determineGroupLeaderForOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000010002e214
- (id)_allObservers;	// IMP=0x000000010002e0f4
- (id)endpointForOutputDeviceIdentifier:(id)arg1;	// IMP=0x000000010002dde8
- (void)_handleEndpointOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x000000010002dd80
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x000000010002dab4
- (void)_handleObserverDiscoveryModeDidChangeNotification:(id)arg1;	// IMP=0x000000010002daa8
- (void)removeObserver:(id)arg1;	// IMP=0x000000010002d9fc
- (void)addObserver:(id)arg1;	// IMP=0x000000010002d950
- (id)makeEndpointWithOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000010002d6c8
- (id)externalDeviceForEndpoint:(id)arg1;	// IMP=0x000000010002d56c
@property(readonly, nonatomic) unsigned int discoveryMode;
@property(readonly, nonatomic) NSArray *availableConcreteOutputDevices;
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
@property(readonly, nonatomic) NSArray *availableEndpoints;
@property(readonly, nonatomic) _Bool devicePresenceDetected;
- (void)dealloc;	// IMP=0x000000010002d100
- (id)init;	// IMP=0x000000010002cc18

@end

