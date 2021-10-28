//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLTrackingAvoidanceServiceStateContext : NSObject
{
    _Bool serviceEnabled;	// 8 = 0x8
    _Bool highThermalState;	// 9 = 0x9
    _Bool airplaneMode;	// 10 = 0xa
    _Bool batterySaverMode;	// 11 = 0xb
    _Bool locationServicesEnabled;	// 12 = 0xc
    _Bool settingsUpdatedAndRestartRequired;	// 13 = 0xd
    _Bool locationSimulationInProgress;	// 14 = 0xe
    _Bool allowSimulatedEvents;	// 15 = 0xf
}

@property(nonatomic) _Bool allowSimulatedEvents; // @synthesize allowSimulatedEvents;
@property(nonatomic) _Bool locationSimulationInProgress; // @synthesize locationSimulationInProgress;
@property(nonatomic) _Bool settingsUpdatedAndRestartRequired; // @synthesize settingsUpdatedAndRestartRequired;
@property(nonatomic) _Bool locationServicesEnabled; // @synthesize locationServicesEnabled;
@property(nonatomic) _Bool batterySaverMode; // @synthesize batterySaverMode;
@property(nonatomic) _Bool airplaneMode; // @synthesize airplaneMode;
@property(nonatomic) _Bool highThermalState; // @synthesize highThermalState;
@property(nonatomic) _Bool serviceEnabled; // @synthesize serviceEnabled;
- (id)init;	// IMP=0x0000000100a8f4b4

@end
