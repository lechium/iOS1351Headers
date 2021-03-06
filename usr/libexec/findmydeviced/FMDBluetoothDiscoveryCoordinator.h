//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FMDBluetoothDiscoveryTokenDelegate-Protocol.h"

@class FMDDispatchTimer, NSDate, NSMutableArray, NSString;
@protocol FMDDeviceDiscovering, OS_dispatch_queue;

@interface FMDBluetoothDiscoveryCoordinator : NSObject <FMDBluetoothDiscoveryTokenDelegate>
{
    _Bool _isDiscoveryActive;	// 8 = 0x8
    CDUnknownBlockType _didEndDiscovery;	// 16 = 0x10
    CDUnknownBlockType _didStartDiscovery;	// 24 = 0x18
    CDUnknownBlockType _didDiscoverDevice;	// 32 = 0x20
    CDUnknownBlockType _didLoseDevice;	// 40 = 0x28
    NSObject<FMDDeviceDiscovering> *_discovery;	// 48 = 0x30
    NSMutableArray *_activeTokens;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_serialQueue;	// 64 = 0x40
    NSDate *_discoveryEndDate;	// 72 = 0x48
    FMDDispatchTimer *_discoveryTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100096984
@property(retain, nonatomic) FMDDispatchTimer *discoveryTimer; // @synthesize discoveryTimer=_discoveryTimer;
@property(retain, nonatomic) NSDate *discoveryEndDate; // @synthesize discoveryEndDate=_discoveryEndDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableArray *activeTokens; // @synthesize activeTokens=_activeTokens;
@property(retain, nonatomic) NSObject<FMDDeviceDiscovering> *discovery; // @synthesize discovery=_discovery;
@property(copy, nonatomic) CDUnknownBlockType didLoseDevice; // @synthesize didLoseDevice=_didLoseDevice;
@property(copy, nonatomic) CDUnknownBlockType didDiscoverDevice; // @synthesize didDiscoverDevice=_didDiscoverDevice;
@property(copy, nonatomic) CDUnknownBlockType didStartDiscovery; // @synthesize didStartDiscovery=_didStartDiscovery;
@property(copy, nonatomic) CDUnknownBlockType didEndDiscovery; // @synthesize didEndDiscovery=_didEndDiscovery;
@property(nonatomic) _Bool isDiscoveryActive; // @synthesize isDiscoveryActive=_isDiscoveryActive;
- (void)updateDisccovery;	// IMP=0x0000000100096374
- (void)scanningTimerFired;	// IMP=0x0000000100096158
- (void)startDiscoveryTimerWithDuration:(double)arg1;	// IMP=0x0000000100095f5c
- (void)didEndDiscoveryWithError:(id)arg1;	// IMP=0x0000000100095c84
- (void)discoveryRequestedStart:(id)arg1;	// IMP=0x0000000100095a94
- (void)discoveryRequestedStop:(id)arg1;	// IMP=0x0000000100095810
- (_Bool)isDiscoveryActive:(id)arg1;	// IMP=0x0000000100095804
- (id)newDiscovery;	// IMP=0x0000000100095738
- (id)initWithDiscovery:(id)arg1;	// IMP=0x00000001000953b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

