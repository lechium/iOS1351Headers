//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSEventMonitor.h"

#import "BKDeviceDelegate-Protocol.h"

@class BKDevice, NSString;
@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor : CSEventMonitor <BKDeviceDelegate>
{
    id <CSBiometricMatchMonitorDelegate> _delegate;	// 8 = 0x8
    BKDevice *_biometricDevice;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010003d2fc
- (void).cxx_destruct;	// IMP=0x000000010003db34
@property(retain, nonatomic) BKDevice *biometricDevice; // @synthesize biometricDevice=_biometricDevice;
@property(nonatomic) __weak id <CSBiometricMatchMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;	// IMP=0x000000010003d8a8
- (void)device:(id)arg1 matchEventOccurred:(id)arg2;	// IMP=0x000000010003d700
- (void)_stopMonitoring;	// IMP=0x000000010003d6fc
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x000000010003d6f8
- (_Bool)getLastBiometricMatchEvent:(_Bool *)arg1 atTime:(unsigned long long *)arg2;	// IMP=0x000000010003d4dc
- (void)startObserving;	// IMP=0x000000010003d4b8
- (id)init;	// IMP=0x000000010003d37c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

