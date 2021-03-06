//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDRouteManager-Protocol.h"
#import "TUAudioDeviceControllerDelegate-Protocol.h"

@class CARAutomaticDNDStatus, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSDRouteManager : NSObject <TUAudioDeviceControllerDelegate, CSDRouteManager>
{
    _Bool _carPlayDeviceConnected;	// 8 = 0x8
    _Bool _carModeActive;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSDictionary *_audioRouteCollections;	// 24 = 0x18
    CARAutomaticDNDStatus *_automaticCarDNDStatus;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000a581c
- (void).cxx_destruct;	// IMP=0x00000001000a8fb0
@property(nonatomic, getter=isCarModeActive) _Bool carModeActive; // @synthesize carModeActive=_carModeActive;
@property(retain, nonatomic) CARAutomaticDNDStatus *automaticCarDNDStatus; // @synthesize automaticCarDNDStatus=_automaticCarDNDStatus;
@property(nonatomic, getter=isCarPlayDeviceConnected) _Bool carPlayDeviceConnected; // @synthesize carPlayDeviceConnected=_carPlayDeviceConnected;
@property(copy, nonatomic) NSDictionary *audioRouteCollections; // @synthesize audioRouteCollections=_audioRouteCollections;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_updateCarPlayDeviceConnected;	// IMP=0x00000001000a8dc0
- (void)_initializeAutomaticCarDNDStatusIfNecessary;	// IMP=0x00000001000a8924
- (void)_initializeAudioRouteCollections;	// IMP=0x00000001000a84c4
- (_Bool)_isAnyAudioDevicePreferred;	// IMP=0x00000001000a82c0
- (id)_audioRouteCollectionForCall:(id)arg1;	// IMP=0x00000001000a8078
- (void)_updatePickableRoutes;	// IMP=0x00000001000a7f0c
- (void)_postNotificationName:(id)arg1;	// IMP=0x00000001000a7e70
- (void)audioDeviceControllerDeviceListChanged:(id)arg1;	// IMP=0x00000001000a7d6c
- (void)mediaServicesWereResetNotification:(id)arg1;	// IMP=0x00000001000a7bd4
- (void)carPlayIsConnectedChanged:(id)arg1;	// IMP=0x00000001000a7a4c
- (void)preferredExternalRouteDidChangeNotification:(id)arg1;	// IMP=0x00000001000a78c4
- (void)pickableRoutesDidChangeNotification:(id)arg1;	// IMP=0x00000001000a7754
@property(readonly, nonatomic, getter=isAnyVehicleRouteAvailableForAnyCall) _Bool anyVehicleRouteAvailableForAnyCall;
@property(readonly, nonatomic, getter=isCarPlayRouteAvailable) _Bool carPlayRouteAvailable;
@property(readonly, nonatomic, getter=isAnyBluetoothHeadphoneRouteAvailableForAnyCall) _Bool anyBluetoothHeadphoneRouteAvailableForAnyCall;
@property(readonly, nonatomic, getter=isAnyRouteAvailableWithOtherConnectedDevicesForAnyCall) _Bool anyRouteAvailableWithOtherConnectedDevicesForAnyCall;
- (_Bool)isAnyVehicleRouteAvailableForCall:(id)arg1;	// IMP=0x00000001000a6d10
- (id)preferredAndActiveRouteForCall:(id)arg1;	// IMP=0x00000001000a6b3c
@property(readonly, nonatomic, getter=isAnyPreferredRouteAvailableAndActiveForAnyCall) _Bool anyPreferredRouteAvailableAndActiveForAnyCall;
- (_Bool)isAnyPreferredRouteAvailableAndActiveForCall:(id)arg1;	// IMP=0x00000001000a66e0
- (id)preferredRouteForCall:(id)arg1;	// IMP=0x00000001000a64f4
@property(readonly, nonatomic, getter=isAnyPreferredRouteAvailableForAnyCall) _Bool anyPreferredRouteAvailableForAnyCall;
- (_Bool)isAnyPreferredRouteAvailableForCall:(id)arg1;	// IMP=0x00000001000a60d4
- (_Bool)isAnyRouteAvailableWithUniqueIdentifier:(id)arg1 forCall:(id)arg2;	// IMP=0x00000001000a5f38
- (void)dealloc;	// IMP=0x00000001000a5ec0
- (id)init;	// IMP=0x00000001000a58b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

