//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLinkManager.h"

#import "CBCentralManagerDelegate-Protocol.h"
#import "CBScalablePipeManagerDelegate-Protocol.h"
#import "NRLinkDelegate-Protocol.h"

@class CBCentralManager, CBScalablePipeManager, NSArray, NSMutableDictionary, NSMutableSet, NSString, NWEndpoint;
@protocol NRLinkManagerBluetoothDelegate;

@interface NRLinkManagerBluetooth : NRLinkManager <NRLinkDelegate, CBScalablePipeManagerDelegate, CBCentralManagerDelegate>
{
    _Bool _pipeRegistering;	// 8 = 0x8
    _Bool _pipeRegistered;	// 9 = 0x9
    _Bool _pipeRegisteredOnce;	// 10 = 0xa
    _Bool _pipeRegistrationCycleInProgress;	// 11 = 0xb
    _Bool _noBTCallbackSimCrashGenerated;	// 12 = 0xc
    _Bool _datagramPipeRequested;	// 13 = 0xd
    _Bool _datagramPipeRegistering;	// 14 = 0xe
    _Bool _datagramPipeRegistered;	// 15 = 0xf
    _Bool _urgentPipeRegistering;	// 16 = 0x10
    _Bool _urgentPipeRegistered;	// 17 = 0x11
    _Bool _pipeUnregistering;	// 18 = 0x12
    _Bool _urgentPipeUnregistering;	// 19 = 0x13
    _Bool _hasPendingPipeRegisterRequest;	// 20 = 0x14
    _Bool _hasPendingUrgentPipeRegisterRequest;	// 21 = 0x15
    _Bool _shouldUseClientServerEndpointTypes;	// 22 = 0x16
    NSMutableSet *_links;	// 24 = 0x18
    NWEndpoint *_defaultDeviceEndpoint;	// 32 = 0x20
    CBScalablePipeManager *_pipeManager;	// 40 = 0x28
    CBCentralManager *_centralManager;	// 48 = 0x30
    NSArray *_peripherals;	// 56 = 0x38
    unsigned long long _registrationUpdateCounter;	// 64 = 0x40
    NSMutableDictionary *_connectedUrgentPipes;	// 72 = 0x48
    NSMutableSet *_connectedPipes;	// 80 = 0x50
    id <NRLinkManagerBluetoothDelegate> _bluetoothManagerDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010000f834
@property(nonatomic) _Bool shouldUseClientServerEndpointTypes; // @synthesize shouldUseClientServerEndpointTypes=_shouldUseClientServerEndpointTypes;
@property(nonatomic) __weak id <NRLinkManagerBluetoothDelegate> bluetoothManagerDelegate; // @synthesize bluetoothManagerDelegate=_bluetoothManagerDelegate;
@property(retain, nonatomic) NSMutableSet *connectedPipes; // @synthesize connectedPipes=_connectedPipes;
@property(retain, nonatomic) NSMutableDictionary *connectedUrgentPipes; // @synthesize connectedUrgentPipes=_connectedUrgentPipes;
@property(nonatomic) _Bool hasPendingUrgentPipeRegisterRequest; // @synthesize hasPendingUrgentPipeRegisterRequest=_hasPendingUrgentPipeRegisterRequest;
@property(nonatomic) _Bool hasPendingPipeRegisterRequest; // @synthesize hasPendingPipeRegisterRequest=_hasPendingPipeRegisterRequest;
@property(nonatomic) _Bool urgentPipeUnregistering; // @synthesize urgentPipeUnregistering=_urgentPipeUnregistering;
@property(nonatomic) _Bool pipeUnregistering; // @synthesize pipeUnregistering=_pipeUnregistering;
@property(nonatomic) _Bool urgentPipeRegistered; // @synthesize urgentPipeRegistered=_urgentPipeRegistered;
@property(nonatomic) _Bool urgentPipeRegistering; // @synthesize urgentPipeRegistering=_urgentPipeRegistering;
@property(nonatomic) _Bool datagramPipeRegistered; // @synthesize datagramPipeRegistered=_datagramPipeRegistered;
@property(nonatomic) _Bool datagramPipeRegistering; // @synthesize datagramPipeRegistering=_datagramPipeRegistering;
@property(nonatomic) _Bool datagramPipeRequested; // @synthesize datagramPipeRequested=_datagramPipeRequested;
@property(nonatomic) unsigned long long registrationUpdateCounter; // @synthesize registrationUpdateCounter=_registrationUpdateCounter;
@property(nonatomic) _Bool noBTCallbackSimCrashGenerated; // @synthesize noBTCallbackSimCrashGenerated=_noBTCallbackSimCrashGenerated;
@property(nonatomic) _Bool pipeRegistrationCycleInProgress; // @synthesize pipeRegistrationCycleInProgress=_pipeRegistrationCycleInProgress;
@property(nonatomic) _Bool pipeRegisteredOnce; // @synthesize pipeRegisteredOnce=_pipeRegisteredOnce;
@property(nonatomic) _Bool pipeRegistered; // @synthesize pipeRegistered=_pipeRegistered;
@property(nonatomic) _Bool pipeRegistering; // @synthesize pipeRegistering=_pipeRegistering;
@property(retain, nonatomic) NSArray *peripherals; // @synthesize peripherals=_peripherals;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) CBScalablePipeManager *pipeManager; // @synthesize pipeManager=_pipeManager;
@property(retain, nonatomic) NWEndpoint *defaultDeviceEndpoint; // @synthesize defaultDeviceEndpoint=_defaultDeviceEndpoint;
@property(retain, nonatomic) NSMutableSet *links; // @synthesize links=_links;
- (void)checkEnabledDevices;	// IMP=0x000000010000f1dc
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000010000f16c
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000010000f0fc
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x000000010000f098
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000010000f05c
- (void)handleCMStateChange:(long long)arg1;	// IMP=0x000000010000ef40
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x000000010000e704
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x000000010000e43c
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x000000010000e21c
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x000000010000dec4
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x000000010000ddc8
- (void)cyclePipeRegistration;	// IMP=0x000000010000dd5c
- (void)handleSPMStateChange:(long long)arg1;	// IMP=0x000000010000d958
- (void)unregisterUrgentPipe;	// IMP=0x000000010000d800
- (void)registerUrgentPipeIfNeeded;	// IMP=0x000000010000d554
- (void)unregisterPipe;	// IMP=0x000000010000d3ec
- (void)registerPipe;	// IMP=0x000000010000d140
- (void)linkPeerIsAsleep:(id)arg1 isAsleep:(_Bool)arg2;	// IMP=0x000000010000d084
- (void)linkDidReceiveData:(id)arg1 data:(id)arg2;	// IMP=0x000000010000ce48
- (void)linkIsUnavailable:(id)arg1;	// IMP=0x000000010000cba0
- (void)linkIsSuspended:(id)arg1;	// IMP=0x000000010000c9c4
- (void)linkIsReady:(id)arg1;	// IMP=0x000000010000c730
- (void)linkIsAvailable:(id)arg1;	// IMP=0x000000010000c2f0
- (_Bool)setMPKLLoggingWithEnabled:(_Bool)arg1;	// IMP=0x000000010000c18c
- (void)pipeisAvailable:(id)arg1;	// IMP=0x000000010000b960
- (void)setLinkRequirementsForNRUUID:(id)arg1 inputBPS:(unsigned int)arg2 outputBPS:(unsigned int)arg3 packetsPS:(unsigned int)arg4;	// IMP=0x000000010000b794
- (void)disconnectFromPeripherals;	// IMP=0x000000010000b554
- (void)startBluetoothWatchdog;	// IMP=0x000000010000b414
- (_Bool)hasConnectedPeripheral;	// IMP=0x000000010000b2b4
- (void)registerDatagramPipeIfApplicable;	// IMP=0x000000010000b270
- (void)unregisterDatagramPipe;	// IMP=0x000000010000b114
- (void)registerDatagramPipe;	// IMP=0x000000010000ae10
- (long long)getCBScalablePipeEndpointType;	// IMP=0x000000010000ad80
- (void)connectToPeripherals;	// IMP=0x000000010000aba0
- (void)setup;	// IMP=0x000000010000a9f0
- (void)resetConnectedUrgentPipes;	// IMP=0x000000010000a9ac
- (id)copyStatusString;	// IMP=0x000000010000a7c4
- (id)copyName;	// IMP=0x000000010000a7b8
- (void)dealloc;	// IMP=0x000000010000a71c
- (void)invalidateManager;	// IMP=0x000000010000a608
- (void)cancel;	// IMP=0x000000010000a434
- (id)initManagerWithQueue:(id)arg1 managerDelegate:(id)arg2 bluetoothManagerDelegate:(id)arg3;	// IMP=0x000000010000a1c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

