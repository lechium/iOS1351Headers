//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AdvertisingIdentifierManagerDelegate-Protocol.h"
#import "WiProxScannerDelegate-Protocol.h"

@class AdvertisingIdentifierManager, NSArray, NSString, WiProxScanner;
@protocol AbstractTimer, InactiveWatchScannerDelegate;

@interface InactiveWatchScanner : NSObject <WiProxScannerDelegate, AdvertisingIdentifierManagerDelegate>
{
    _Bool _isRunning;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    unsigned char _activeWatchWristState;	// 10 = 0xa
    id <InactiveWatchScannerDelegate> _delegate;	// 16 = 0x10
    NSArray *_inactiveWatches;	// 24 = 0x18
    WiProxScanner *_wiProxScanner;	// 32 = 0x20
    id <AbstractTimer> _highDutyCycleScanningTimer;	// 40 = 0x28
    AdvertisingIdentifierManager *_advertisingIdentifierManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010000676c
@property(retain, nonatomic) AdvertisingIdentifierManager *advertisingIdentifierManager; // @synthesize advertisingIdentifierManager=_advertisingIdentifierManager;
@property(retain, nonatomic) id <AbstractTimer> highDutyCycleScanningTimer; // @synthesize highDutyCycleScanningTimer=_highDutyCycleScanningTimer;
@property(retain, nonatomic) WiProxScanner *wiProxScanner; // @synthesize wiProxScanner=_wiProxScanner;
@property(retain, nonatomic) NSArray *inactiveWatches; // @synthesize inactiveWatches=_inactiveWatches;
@property(nonatomic) unsigned char activeWatchWristState; // @synthesize activeWatchWristState=_activeWatchWristState;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(nonatomic) __weak id <InactiveWatchScannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void)shouldRollAdvertisingIdentifier;	// IMP=0x00000001000065f8
- (void)wiProxScannerFoundDevice:(id)arg1 withData:(id)arg2;	// IMP=0x0000000100006534
- (void)wiProxScannerChangedState;	// IMP=0x0000000100006528
- (void)startScanning;	// IMP=0x0000000100006300
- (void)highDutyCycleTimerFired;	// IMP=0x0000000100006220
- (void)scheduleHighDutyCycleScanningTimer;	// IMP=0x0000000100005fe0
- (void)updateScanningState;	// IMP=0x0000000100005f1c
- (void)stopRunning;	// IMP=0x0000000100005db0
- (void)startRunningWithInactiveWatches:(id)arg1 activeWatchWristState:(unsigned char)arg2;	// IMP=0x0000000100005c30
- (void)invalidate;	// IMP=0x0000000100005b2c
- (void)dealloc;	// IMP=0x0000000100005ad4
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000059a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

