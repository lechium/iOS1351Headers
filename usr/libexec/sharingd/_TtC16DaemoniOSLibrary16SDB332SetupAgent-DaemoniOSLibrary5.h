//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC16DaemoniOSLibrary16SDB332SetupAgent.h"

#import "ACCBLEPairingProviderProtocol-Protocol.h"

@interface _TtC16DaemoniOSLibrary16SDB332SetupAgent (DaemoniOSLibrary5) <ACCBLEPairingProviderProtocol>
- (void)stopBatteryScanner;	// IMP=0x00000001002ba7d8
- (void)startBatteryScannerForPeripheral:(id)arg1;	// IMP=0x00000001002ba644
- (void)stopScanning;	// IMP=0x00000001002b9388
- (void)startScanning;	// IMP=0x00000001002b9100
- (void)blePairingDataUpdate:(id)arg1 pairType:(int)arg2 pairData:(id)arg3 accessory:(id)arg4 blePairingUUID:(id)arg5;	// IMP=0x00000001002b8c3c
- (void)blePairingInfoUpdate:(id)arg1 pairType:(int)arg2 pairInfoList:(id)arg3 accessory:(id)arg4 blePairingUUID:(id)arg5;	// IMP=0x00000001002b8550
- (void)blePairingStateUpdate:(id)arg1 validMask:(unsigned int)arg2 btRadioOn:(_Bool)arg3 pairingState:(int)arg4 pairingModeOn:(_Bool)arg5 accessory:(id)arg6 blePairingUUID:(id)arg7;	// IMP=0x00000001002b7c7c
- (void)blePairing:(id)arg1 accessoryDetached:(id)arg2 blePairingUUID:(id)arg3;	// IMP=0x00000001002b78dc
- (void)blePairing:(id)arg1 accessoryAttached:(id)arg2 blePairingUUID:(id)arg3 accInfoDict:(id)arg4 supportedPairTypes:(id)arg5;	// IMP=0x00000001002b75b4
- (void)resetUIUpdatesFlagWithUndimScreen:(_Bool)arg1;	// IMP=0x00000001002b6dbc
@end
