//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TRDeviceSetupBrowserDelegate-Protocol.h"
#import "TRDeviceSetupPeripheralDelegate-Protocol.h"

@class NSMutableSet, NSString, TRDeviceSetupBrowser;
@protocol OS_dispatch_source, OS_os_transaction;

@interface DeviceSetupBrowser : NSObject <TRDeviceSetupBrowserDelegate, TRDeviceSetupPeripheralDelegate>
{
    _Bool _buddySetupDone;	// 8 = 0x8
    int _buddySetupDoneToken;	// 12 = 0xc
    _Bool _buddySetupDoneTokenIsValid;	// 16 = 0x10
    NSMutableSet *_discoveredPeripherals;	// 24 = 0x18
    double _lastTapTimeInterval;	// 32 = 0x20
    _Bool _scanning;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_scanningDurationTimer;	// 48 = 0x30
    TRDeviceSetupBrowser *_setupBrowser;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_setupTimeoutTimer;	// 64 = 0x40
    NSObject<OS_os_transaction> *_setupTransaction;	// 72 = 0x48
    double _scanningStartTimeInterval;	// 80 = 0x50
}

+ (id)sharedSetupBrowser;	// IMP=0x0000000100001a98
- (void).cxx_destruct;	// IMP=0x0000000100002d84
- (void)_startSetupTimeoutTimer;	// IMP=0x0000000100002c10
- (void)_endScanIfNecessary;	// IMP=0x0000000100002bf8
- (void)_endActualScan;	// IMP=0x0000000100002a9c
- (void)_cancelScanningDurationTimer;	// IMP=0x0000000100002a60
- (void)_beginActualScan;	// IMP=0x0000000100002968
- (void)endScan;	// IMP=0x0000000100002878
- (void)beginScan;	// IMP=0x0000000100002800
- (void)deviceSetupPeripheralSetupDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100002664
- (void)deviceSetupPeripheralSetupDidComplete:(id)arg1;	// IMP=0x0000000100002554
- (void)deviceSetupPeripheralDidTap:(id)arg1;	// IMP=0x00000001000021b0
- (void)deviceSetupBrowser:(id)arg1 didRemovePeripheral:(id)arg2;	// IMP=0x0000000100002020
- (void)deviceSetupBrowser:(id)arg1 didFindPeripheral:(id)arg2;	// IMP=0x0000000100001e84
- (void)deviceSetupBrowserDidChangeState:(id)arg1;	// IMP=0x0000000100001d8c
- (void)dealloc;	// IMP=0x0000000100001d10
- (id)init;	// IMP=0x0000000100001b04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
