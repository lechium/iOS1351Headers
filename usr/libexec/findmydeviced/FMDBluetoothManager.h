//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDAccessoryRegistryDataSource-Protocol.h"
#import "FMDBluetoothManaging-Protocol.h"

@class FMDBluetoothDiscoveryCoordinator, FMDSupportedAccessoryRegistry, NSMutableDictionary, NSString;
@protocol FMDBluetoothFrameworkBTManaging, FMDBluetoothManagerDelegate, OS_dispatch_queue;

@interface FMDBluetoothManager : NSObject <FMDAccessoryRegistryDataSource, FMDBluetoothManaging>
{
    FMDSupportedAccessoryRegistry *_supportedAccessoryRegistry;	// 8 = 0x8
    id <FMDBluetoothManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_bluetoothDiscoveryQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_bluetoothManagerQueue;	// 32 = 0x20
    FMDBluetoothDiscoveryCoordinator *_discoveryCoordinator;	// 40 = 0x28
    NSMutableDictionary *_bluetoothManagerDevicesByAddress;	// 48 = 0x30
    NSObject<FMDBluetoothFrameworkBTManaging> *_mockBluetoothManager;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000678c4
@property(retain, nonatomic) NSObject<FMDBluetoothFrameworkBTManaging> *mockBluetoothManager; // @synthesize mockBluetoothManager=_mockBluetoothManager;
@property(retain, nonatomic) NSMutableDictionary *bluetoothManagerDevicesByAddress; // @synthesize bluetoothManagerDevicesByAddress=_bluetoothManagerDevicesByAddress;
@property(retain, nonatomic) FMDBluetoothDiscoveryCoordinator *discoveryCoordinator; // @synthesize discoveryCoordinator=_discoveryCoordinator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothManagerQueue; // @synthesize bluetoothManagerQueue=_bluetoothManagerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothDiscoveryQueue; // @synthesize bluetoothDiscoveryQueue=_bluetoothDiscoveryQueue;
@property(nonatomic) __weak id <FMDBluetoothManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FMDSupportedAccessoryRegistry *supportedAccessoryRegistry; // @synthesize supportedAccessoryRegistry=_supportedAccessoryRegistry;
- (long long)profileForBluetoothManagerDevice:(id)arg1;	// IMP=0x00000001000676ec
- (id)bluetoothManagerDeviceForBluetoothDevice:(id)arg1;	// IMP=0x0000000100067548
- (id)bluetoothManager;	// IMP=0x000000010006749c
- (id)bluetoothDeviceForBLEDevice:(id)arg1;	// IMP=0x000000010006718c
- (void)updateBeaconsWithDevice:(id)arg1 active:(_Bool)arg2;	// IMP=0x0000000100066f10
- (void)didLoseDevice:(id)arg1;	// IMP=0x0000000100066f00
- (void)didDiscoverDevice:(id)arg1;	// IMP=0x0000000100066ef0
- (void)setInternalDeviceAudioChannels:(id)arg1 profile:(long long)arg2 active:(_Bool)arg3;	// IMP=0x0000000100066d8c
- (void)setAllAudioChannelsActive:(_Bool)arg1;	// IMP=0x0000000100066c68
- (void)setupDiscovery;	// IMP=0x0000000100066564
- (void)removeDeviceNotification:(id)arg1;	// IMP=0x0000000100066274
- (void)addDeviceNotification:(id)arg1;	// IMP=0x0000000100065f84
- (void)deviceNameChanged:(id)arg1;	// IMP=0x0000000100065d18
- (void)startMonitoringDevices;	// IMP=0x0000000100065bfc
- (void)getAccessoriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000657ec
- (_Bool)isDiscoveryActive;	// IMP=0x00000001000657a0
- (id)newDiscovery;	// IMP=0x0000000100065754
- (void)connectToDeviceAddress:(id)arg1;	// IMP=0x00000001000654b8
- (id)initWithMockBluetoothManager:(id)arg1;	// IMP=0x000000010006528c
- (id)init;	// IMP=0x000000010006527c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

