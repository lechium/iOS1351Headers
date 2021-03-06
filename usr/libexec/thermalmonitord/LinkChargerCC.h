//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class AggDThermalMonitor;

@interface LinkChargerCC : ComponentControl <tGraphDataSource>
{
    unsigned int pmuPowerService;	// 120 = 0x78
    double _targetTimeCloaking;	// 128 = 0x80
    double _targetTimeCharging;	// 136 = 0x88
    double _defaultTargetTimeCloaking;	// 144 = 0x90
    double _defaultTargetTimeCharging;	// 152 = 0x98
    double _targetTimeWirelessMatCloaking;	// 160 = 0xa0
    double _targetTimeWirelessMatCharging;	// 168 = 0xa8
    double _remainingTimeInterval;	// 176 = 0xb0
    double _remainingInitialNoCloakTime;	// 184 = 0xb8
    int _skipFirstChargeThreshold;	// 192 = 0xc0
    int _chargerType;	// 196 = 0xc4
    _Bool _currentlyCloaked;	// 200 = 0xc8
    _Bool _isOnCharger;	// 201 = 0xc9
    AggDThermalMonitor *_aggdController;	// 208 = 0xd0
    double _previousTimeStamp;	// 216 = 0xd8
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x00000001000141e0
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100014100
- (int)numberOfFields;	// IMP=0x00000001000140c8
- (void)setChargerType:(int)arg1;	// IMP=0x00000001000140b8
- (_Bool)canSystemSleep;	// IMP=0x0000000100013fa4
- (_Bool)isOnCharger;	// IMP=0x0000000100013f94
- (_Bool)isCurrentlyCloaked;	// IMP=0x0000000100013f84
- (void)refreshTGraphTelemetry;	// IMP=0x0000000100013f60
- (_Bool)updateCloakingState:(_Bool)arg1;	// IMP=0x0000000100013dcc
- (void)defaultAction;	// IMP=0x0000000100013934
- (id)initWithParams:(struct __CFDictionary *)arg1 aggdController:(id)arg2;	// IMP=0x00000001000136ac

@end

