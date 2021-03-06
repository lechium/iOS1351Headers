//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRBluetoothManagerDelegate;

@interface CRBluetoothManager : NSObject
{
    id <CRBluetoothManagerDelegate> _delegate;	// 8 = 0x8
}

+ (_Bool)hasPairedDeviceSupportingCarPlayWithAddress:(id)arg1;	// IMP=0x0000000100039940
+ (id)addressStringForData:(id)arg1;	// IMP=0x0000000100038fd8
- (void).cxx_destruct;	// IMP=0x0000000100039d2c
@property(nonatomic) __weak id <CRBluetoothManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bluetoothPowerStateChanged:(id)arg1;	// IMP=0x0000000100039ba4
@property(nonatomic, getter=isPowered) _Bool powered;
- (void)connectWithBluetoothAddress:(id)arg1;	// IMP=0x0000000100039ac0
- (unsigned long long)connectedServicesCountForBluetoothAddress:(id)arg1;	// IMP=0x00000001000398e4
- (_Bool)unpairWithBluetoothAddress:(id)arg1;	// IMP=0x0000000100039720
- (id)_deviceForBluetoothAddress:(id)arg1;	// IMP=0x0000000100039548
- (id)connectedBluetoothAddresses;	// IMP=0x0000000100039220
- (void)dealloc;	// IMP=0x00000001000391a8
- (id)init;	// IMP=0x00000001000390f4

@end

