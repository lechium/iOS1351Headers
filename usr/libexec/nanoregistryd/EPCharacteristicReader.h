//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CBCentralManagerPrivateDelegate-Protocol.h"
#import "CBPeripheralDelegate-Protocol.h"
#import "EPResourceOwnerDelegate-Protocol.h"

@class CBCharacteristic, CBUUID, EPCentralManager, EPPeripheralConnector, EPPeripheralObserver, NSData, NSMutableArray, NSString;
@protocol EPCharacteristicReaderDelegate, OS_dispatch_source;

@interface EPCharacteristicReader : NSObject <CBCentralManagerDelegate, CBCentralManagerPrivateDelegate, CBPeripheralDelegate, EPResourceOwnerDelegate>
{
    EPCentralManager *_central;	// 8 = 0x8
    EPPeripheralObserver *_peripheral;	// 16 = 0x10
    EPPeripheralConnector *_connector;	// 24 = 0x18
    CBUUID *_serviceUUID;	// 32 = 0x20
    CBUUID *_characteristicUUID;	// 40 = 0x28
    NSMutableArray *_services;	// 48 = 0x30
    CBCharacteristic *_characteristic;	// 56 = 0x38
    id <EPCharacteristicReaderDelegate> _delegate;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_readSequenceTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_characteristicDiscoveryTimer;	// 80 = 0x50
    double _timeout;	// 88 = 0x58
    _Bool _waitingForRead;	// 96 = 0x60
    long long _readAttemptCounter;	// 104 = 0x68
    _Bool _invalidated;	// 112 = 0x70
    NSData *_readData;	// 120 = 0x78
    unsigned long long _state;	// 128 = 0x80
}

+ (id)stringForEPCharacteristicReaderState:(unsigned long long)arg1;	// IMP=0x00000001000a08b0
- (void).cxx_destruct;	// IMP=0x00000001000a0940
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *readData; // @synthesize readData=_readData;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000001000a045c
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x000000010009fff8
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x000000010009fbdc
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x000000010009fbd8
- (void)resourceAvailabilityDidChange:(id)arg1;	// IMP=0x000000010009fbcc
- (void)update;	// IMP=0x000000010009f870
- (void)invalidate;	// IMP=0x000000010009f780
- (void)read;	// IMP=0x000000010009f664
- (void)_updateStateWithNewState:(unsigned long long)arg1;	// IMP=0x000000010009f0b4
- (void)_readFinishedWithError:(id)arg1 withData:(id)arg2;	// IMP=0x000000010009edec
- (void)_characteristicDiscoveryTimedOut;	// IMP=0x000000010009ed54
- (void)_readSequenceTimedOut;	// IMP=0x000000010009ec5c
- (id)newDispatchTimerOfDuration:(double)arg1 withTimeoutBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010009eb70
- (id)initWithDelegate:(id)arg1 timeout:(double)arg2 peripheral:(id)arg3 serviceUUID:(id)arg4 characteristicUUID:(id)arg5;	// IMP=0x000000010009e85c
- (id)initWithDelegate:(id)arg1 peripheral:(id)arg2 serviceUUID:(id)arg3 characteristicUUID:(id)arg4;	// IMP=0x000000010009e7bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

