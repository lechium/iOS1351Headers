//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPResourceManager.h"

#import "CBCentralManagerDelegate-Protocol.h"
#import "CBCentralManagerPrivateDelegate-Protocol.h"

@class CBCentralManager, NSString;

@interface EPCentralManagerManager : EPResourceManager <CBCentralManagerDelegate, CBCentralManagerPrivateDelegate>
{
    CBCentralManager *_manager;	// 8 = 0x8
}

+ (id)stringForCBPeripheralState:(long long)arg1;	// IMP=0x000000010007e794
+ (Class)resourceClass;	// IMP=0x000000010007e09c
- (void).cxx_destruct;	// IMP=0x000000010007eca8
@property(readonly, nonatomic) CBCentralManager *manager; // @synthesize manager=_manager;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x000000010007eb48
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000010007ea28
- (void)centralManager:(id)arg1 didUpdatePeripheralConnectionState:(id)arg2;	// IMP=0x000000010007e7ec
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000010007e570
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x000000010007e388
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000010007e0b4
- (id)newManagerWithDelegate:(id)arg1;	// IMP=0x000000010007e0a8
- (void)destroyResource;	// IMP=0x000000010007df80
- (void)createResource;	// IMP=0x000000010007dde4
- (id)init;	// IMP=0x000000010007dd70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

