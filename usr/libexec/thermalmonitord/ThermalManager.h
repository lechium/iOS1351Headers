//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CommonProduct;

@interface ThermalManager : NSObject
{
    struct __CFRunLoop *localMainRunloop;	// 8 = 0x8
    int productName;	// 16 = 0x10
    CommonProduct *product;	// 24 = 0x18
    struct __CFDictionary *_plistConfig;	// 32 = 0x20
}

@property(readonly) struct __CFRunLoop *localMainRunloop; // @synthesize localMainRunloop;
- (_Bool)getPotentialForcedThermalPressureLevel;	// IMP=0x000000010000d518
- (void)canaryModeExitEarly:(int)arg1;	// IMP=0x000000010000d508
- (int)canaryTempThreshold;	// IMP=0x000000010000d4f8
- (int)canaryTempSensorIndex;	// IMP=0x000000010000d4e8
- (int)desiredLoopInterval;	// IMP=0x000000010000d4d8
- (_Bool)useTcalAdjust:(unsigned int)arg1;	// IMP=0x000000010000d4c8
- (struct __CFString *)getTGraphData:(int)arg1;	// IMP=0x000000010000d48c
- (void)initDataCollection;	// IMP=0x000000010000d3f8
- (int)canSystemSleep;	// IMP=0x000000010000d3d8
- (void)updateSystemPowerState:(_Bool)arg1;	// IMP=0x000000010000d3c8
- (void)updateSystemLoad:(_Bool)arg1;	// IMP=0x000000010000d26c
- (void)checkForArcOverride:(struct __SCPreferences *)arg1 key:(struct __CFString *)arg2;	// IMP=0x000000010000d1e8
- (void)checkForLifetimeServoOverride:(struct __SCPreferences *)arg1 key:(struct __CFString *)arg2;	// IMP=0x000000010000d14c
- (void)updatePrefs:(struct __SCPreferences *)arg1:(_Bool)arg2;	// IMP=0x000000010000be58
- (int)getModeratePressureVersion;	// IMP=0x000000010000be48
- (void)SaveProductString:(int)arg1;	// IMP=0x000000010000be40
- (void)probeAllSupervisorControlLoadingIndex;	// IMP=0x000000010000be30
- (void)initializeReadPrefs:(struct __SCPreferences *)arg1;	// IMP=0x000000010000be20
- (void)hintComponentControlTakeAction;	// IMP=0x000000010000be10
- (int)getProductTotalPowerSensors;	// IMP=0x000000010000be00
- (int)getProductTotalSensors;	// IMP=0x000000010000bdf0
- (struct iir_filter_t *)getProductFilterValues;	// IMP=0x000000010000bde0
- (unsigned long long)getMaxSensorValue;	// IMP=0x000000010000bdd0
- (unsigned int)getRequiredCalibrationResistorSamples;	// IMP=0x000000010000bdc0
- (int)getProductCalibrationSensorID;	// IMP=0x000000010000bdb0
- (int)getProductCalibrationDefault;	// IMP=0x000000010000bda0
- (void *)getConfigurationFor:(struct __CFString *)arg1;	// IMP=0x000000010000bd94
- (void)createNewProduct:(struct __CFRunLoop *)arg1;	// IMP=0x000000010000b4c8
- (void)createConnectionToCT;	// IMP=0x000000010000b4b8
- (void)dealloc;	// IMP=0x000000010000b470
- (id)initWithConfig:(struct __CFDictionary *)arg1;	// IMP=0x000000010000b428

@end
