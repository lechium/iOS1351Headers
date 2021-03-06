//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CommonProduct, NSArray, NSMutableArray, PowerlogSubkeyController;
@protocol OS_dispatch_queue;

@interface TGraphSampler : NSObject
{
    CommonProduct *productObj;	// 8 = 0x8
    NSMutableArray *listofComponentControl;	// 16 = 0x10
    NSMutableArray *listOfSupervisorControl;	// 24 = 0x18
    struct __CFArray *extratGraphDataSources;	// 32 = 0x20
    struct __CFString *tGraphDataString;	// 40 = 0x28
    _Bool isInternal;	// 48 = 0x30
    _Bool gotDataToLogToLiteMode;	// 49 = 0x31
    unsigned long long lastLogTimestamp;	// 56 = 0x38
    int previousThermalSensorValues[64];	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_powerlogQueue;	// 320 = 0x140
    PowerlogSubkeyController *_powerlogSubkeyController_Hotspots;	// 328 = 0x148
    PowerlogSubkeyController *_powerlogSubkeyController_Components;	// 336 = 0x150
    PowerlogSubkeyController *_powerlogSubkeyController_Sensors;	// 344 = 0x158
    PowerlogSubkeyController *_powerlogSubkeyController_MiscInternalState;	// 352 = 0x160
    PowerlogSubkeyController *_powerlogSubkeyController_MiscExternalState;	// 360 = 0x168
    PowerlogSubkeyController *_powerlogSubkeyController_LiteMode;	// 368 = 0x170
    PowerlogSubkeyController *_powerlogSubkeyController_HiP;	// 376 = 0x178
    PowerlogSubkeyController *_powerlogSubkeyController_Sensors_Components;	// 384 = 0x180
    NSMutableArray *_appleCareState;	// 392 = 0x188
    NSArray *_appleCareStateLastLogged;	// 400 = 0x190
}

+ (id)sharedInstance;	// IMP=0x00000001000170f4
- (void)logToPowerlog;	// IMP=0x0000000100018b54
- (void)updateAppleCareState:(int)arg1 value:(int)arg2;	// IMP=0x00000001000189e4
- (void)updatePowerLogLiteHiP:(BOOL)arg1 client:(BOOL)arg2;	// IMP=0x00000001000188b4
- (void)updatePowerlogLiteMode:(long long)arg1 pressureLevel:(long long)arg2;	// IMP=0x000000010001875c
- (void)updatePowerlogMiscState:(int)arg1 value:(int)arg2;	// IMP=0x00000001000185dc
- (void)genTGraphData;	// IMP=0x0000000100018054
- (void)genTGraphHeader;	// IMP=0x00000001000179f4
- (struct __CFString *)getTGraphData:(int)arg1;	// IMP=0x0000000100017964
- (void)setTGraphDataString:(struct __CFString *)arg1;	// IMP=0x0000000100017920
- (void)updateLiteModePowerLogDictionaryForSensors;	// IMP=0x0000000100017788
- (void)updatePowerLogDictionaryForSensors;	// IMP=0x000000010001765c
- (_Bool)shouldLogSensorForLiteMode:(struct __CFString *)arg1;	// IMP=0x0000000100017600
- (_Bool)shouldLogSensor:(struct __CFString *)arg1;	// IMP=0x0000000100017584
- (void)updateSubkeyController:(id)arg1 forControlList:(id)arg2;	// IMP=0x0000000100017438
- (void)addtGraphDataSource:(id)arg1;	// IMP=0x0000000100017424
- (void)dealloc;	// IMP=0x00000001000173d4
- (void)setProduct:(id)arg1 withComponents:(id)arg2 andHotspotSupervisors:(id)arg3;	// IMP=0x0000000100017370
- (id)init;	// IMP=0x0000000100017158

@end

