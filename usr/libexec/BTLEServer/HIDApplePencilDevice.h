//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HIDBluetoothDevice.h"

@class HIDKeyholeUserDevice, NSArray, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface HIDApplePencilDevice : HIDBluetoothDevice
{
    NSArray *_userDevices;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_hostReadySentSemaphore;	// 24 = 0x18
    float _preferredInterval;	// 32 = 0x20
    int _preferredSlaveLatency;	// 36 = 0x24
    HIDKeyholeUserDevice *_forceUserDevice;	// 40 = 0x28
    HIDKeyholeUserDevice *_deviceMgntUserDevice;	// 48 = 0x30
    NSSet *_forceInputReportSet;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    long long _btSyncPeriod;	// 72 = 0x48
    NSString *_loggingIdentifier;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010000a19c
@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_loggingIdentifier;
@property(nonatomic) long long btSyncPeriod; // @synthesize btSyncPeriod=_btSyncPeriod;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *forceInputReportSet; // @synthesize forceInputReportSet=_forceInputReportSet;
@property(readonly, nonatomic) HIDKeyholeUserDevice *deviceMgntUserDevice; // @synthesize deviceMgntUserDevice=_deviceMgntUserDevice;
@property(readonly, nonatomic) HIDKeyholeUserDevice *forceUserDevice; // @synthesize forceUserDevice=_forceUserDevice;
@property(nonatomic) int preferredSlaveLatency; // @synthesize preferredSlaveLatency=_preferredSlaveLatency;
@property(nonatomic) float preferredInterval; // @synthesize preferredInterval=_preferredInterval;
- (void)mtWillPowerOn;	// IMP=0x000000010000a0a0
- (void)logHwFwVersions;	// IMP=0x0000000100009d34
- (void)piconetClockNotification:(id)arg1;	// IMP=0x0000000100009af8
- (void)handleInputReportData:(id)arg1 reportID:(unsigned char)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x0000000100009958
- (int)setReportData:(id)arg1 reportID:(unsigned char)arg2 reportType:(int)arg3 error:(id *)arg4;	// IMP=0x0000000100009764
- (void)dealloc;	// IMP=0x000000010000970c
- (void)stop;	// IMP=0x000000010000960c
- (id)initWithProperties:(id)arg1 reports:(id)arg2 loggingIdentifier:(id)arg3;	// IMP=0x0000000100009178
- (id)initWithProperties:(id)arg1 reports:(id)arg2;	// IMP=0x0000000100009114
- (id)desiredConnectionParameters;	// IMP=0x000000010000900c
- (void)notifyDidStop;	// IMP=0x0000000100008f74
- (void)notifyDidStart;	// IMP=0x0000000100008dc4
- (void)start;	// IMP=0x0000000100008b58
- (id)newUserDevices:(id)arg1;	// IMP=0x000000010000893c
- (id)newForceDevice:(id)arg1 keyholeID:(unsigned char)arg2;	// IMP=0x00000001000088c0
- (id)newRadioDevice:(id)arg1 keyholeID:(unsigned char)arg2;	// IMP=0x000000010000884c
- (id)newInertialSensorDevice:(id)arg1 keyholeID:(unsigned char)arg2;	// IMP=0x00000001000087d4
- (id)newDeviceMgntDevice:(id)arg1 keyholeID:(unsigned char)arg2;	// IMP=0x00000001000085c0
- (id)newUserDevice:(id)arg1 descriptor:(void *)arg2 descriptorLength:(long long)arg3 keyholeID:(unsigned char)arg4;	// IMP=0x0000000100008504

@end
