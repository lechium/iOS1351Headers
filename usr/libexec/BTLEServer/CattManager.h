//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, NSMutableArray, NSMutableDictionary, NSString;

@interface CattManager : NSObject <CBCentralManagerDelegate>
{
    CBCentralManager *_centralManager;	// 8 = 0x8
    NSMutableDictionary *_clientServiceManagerMap;	// 16 = 0x10
    NSMutableArray *_services;	// 24 = 0x18
    NSMutableArray *_cattPeripheral;	// 32 = 0x20
    NSMutableDictionary *_options;	// 40 = 0x28
}

+ (id)instance;	// IMP=0x000000010000e47c
- (void).cxx_destruct;	// IMP=0x000000010000f57c
@property(retain, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *cattPeripheral; // @synthesize cattPeripheral=_cattPeripheral;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableDictionary *clientServiceManagerMap; // @synthesize clientServiceManagerMap=_clientServiceManagerMap;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (id)centralManagerStateString;	// IMP=0x000000010000f460
- (void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3;	// IMP=0x000000010000f294
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000010000f108
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000010000efb0
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x000000010000edcc
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000010000ebb8
- (void)disconnectPeripheral:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010000e9f0
- (void)connectPeripheral:(id)arg1;	// IMP=0x000000010000e87c
- (id)init;	// IMP=0x000000010000e634
- (void)registerServices;	// IMP=0x000000010000e4e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
