//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCPowerSiphoningControlDelegate-Protocol.h"

@class ACCPowerManager, ACCPowerSiphoningControl, NSString;

@interface ACCPlatformPowerInfo : NSObject <ACCPowerSiphoningControlDelegate>
{
    _Bool _isDeviceBatteryCharging;	// 8 = 0x8
    _Bool _isExternalChargerConnected;	// 9 = 0x9
    unsigned char _batteryChargeLevel;	// 10 = 0xa
    _Bool _isFirstSent_AvailableCurrent;	// 11 = 0xb
    _Bool _isFirstSent_DeviceBatteryCharging;	// 12 = 0xc
    _Bool _isFirstSent_ExternalChargerConnected;	// 13 = 0xd
    _Bool _isFirstSent_BatteryChargingState;	// 14 = 0xe
    _Bool _isFirstSent_BatteryChargeLevel;	// 15 = 0xf
    _Bool _isFirstSent_AccessoryChargingCurrent;	// 16 = 0x10
    _Bool _systemAsleep;	// 17 = 0x11
    _Bool _holdingApplePencilSleepAssertion;	// 18 = 0x12
    _Bool _powerUpdateSentDueToSleep;	// 19 = 0x13
    _Bool _requestSleepUpdate;	// 20 = 0x14
    unsigned short _availableCurrent;	// 22 = 0x16
    unsigned short _accessoryChargingCurrent;	// 24 = 0x18
    int _batteryChargingState;	// 28 = 0x1c
    NSString *_endpointUID;	// 32 = 0x20
    NSString *_connectionUID;	// 40 = 0x28
    ACCPowerManager *_accessoryPowerManager;	// 48 = 0x30
    ACCPowerSiphoningControl *_siphoningControl;	// 56 = 0x38
    unsigned long long _updateTypesBitmask;	// 64 = 0x40
    unsigned long long _oldUpdateTypesBitmask;	// 72 = 0x48
    NSString *_sleepNotificationClientUUID;	// 80 = 0x50
    NSString *_batteryNotificationClientUUID;	// 88 = 0x58
    NSString *_applePencilBatteryNotificationClientUUID;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010007474c
@property(nonatomic) _Bool requestSleepUpdate; // @synthesize requestSleepUpdate=_requestSleepUpdate;
@property(nonatomic) _Bool powerUpdateSentDueToSleep; // @synthesize powerUpdateSentDueToSleep=_powerUpdateSentDueToSleep;
@property(copy, nonatomic) NSString *applePencilBatteryNotificationClientUUID; // @synthesize applePencilBatteryNotificationClientUUID=_applePencilBatteryNotificationClientUUID;
@property(copy, nonatomic) NSString *batteryNotificationClientUUID; // @synthesize batteryNotificationClientUUID=_batteryNotificationClientUUID;
@property(nonatomic) _Bool holdingApplePencilSleepAssertion; // @synthesize holdingApplePencilSleepAssertion=_holdingApplePencilSleepAssertion;
@property(copy, nonatomic) NSString *sleepNotificationClientUUID; // @synthesize sleepNotificationClientUUID=_sleepNotificationClientUUID;
@property(nonatomic) _Bool systemAsleep; // @synthesize systemAsleep=_systemAsleep;
@property(readonly, nonatomic) _Bool isFirstSent_AccessoryChargingCurrent; // @synthesize isFirstSent_AccessoryChargingCurrent=_isFirstSent_AccessoryChargingCurrent;
@property(readonly, nonatomic) _Bool isFirstSent_BatteryChargeLevel; // @synthesize isFirstSent_BatteryChargeLevel=_isFirstSent_BatteryChargeLevel;
@property(readonly, nonatomic) _Bool isFirstSent_BatteryChargingState; // @synthesize isFirstSent_BatteryChargingState=_isFirstSent_BatteryChargingState;
@property(readonly, nonatomic) _Bool isFirstSent_ExternalChargerConnected; // @synthesize isFirstSent_ExternalChargerConnected=_isFirstSent_ExternalChargerConnected;
@property(readonly, nonatomic) _Bool isFirstSent_DeviceBatteryCharging; // @synthesize isFirstSent_DeviceBatteryCharging=_isFirstSent_DeviceBatteryCharging;
@property(readonly, nonatomic) _Bool isFirstSent_AvailableCurrent; // @synthesize isFirstSent_AvailableCurrent=_isFirstSent_AvailableCurrent;
@property(nonatomic) unsigned short accessoryChargingCurrent; // @synthesize accessoryChargingCurrent=_accessoryChargingCurrent;
@property(readonly, nonatomic) unsigned char batteryChargeLevel; // @synthesize batteryChargeLevel=_batteryChargeLevel;
@property(readonly, nonatomic) int batteryChargingState; // @synthesize batteryChargingState=_batteryChargingState;
@property(readonly, nonatomic) _Bool isExternalChargerConnected; // @synthesize isExternalChargerConnected=_isExternalChargerConnected;
@property(readonly, nonatomic) _Bool isDeviceBatteryCharging; // @synthesize isDeviceBatteryCharging=_isDeviceBatteryCharging;
@property(readonly, nonatomic) unsigned short availableCurrent; // @synthesize availableCurrent=_availableCurrent;
@property(nonatomic) unsigned long long oldUpdateTypesBitmask; // @synthesize oldUpdateTypesBitmask=_oldUpdateTypesBitmask;
@property(nonatomic) unsigned long long updateTypesBitmask; // @synthesize updateTypesBitmask=_updateTypesBitmask;
@property(readonly, nonatomic) ACCPowerSiphoningControl *siphoningControl; // @synthesize siphoningControl=_siphoningControl;
@property(readonly, nonatomic) ACCPowerManager *accessoryPowerManager; // @synthesize accessoryPowerManager=_accessoryPowerManager;
@property(readonly) NSString *connectionUID; // @synthesize connectionUID=_connectionUID;
@property(readonly) NSString *endpointUID; // @synthesize endpointUID=_endpointUID;
- (void)powerInfoChangeNotificationHandler:(id)arg1;	// IMP=0x00000001000737c4
- (void)systemHasPoweredOnNotificationHandler:(id)arg1;	// IMP=0x0000000100073354
- (void)systemWillSleepNotificationHandler:(id)arg1;	// IMP=0x0000000100072e6c
- (void)stopPowerUpdates;	// IMP=0x0000000100072cc8
- (void)startPowerUpdates;	// IMP=0x0000000100072564
- (_Bool)isOldUpdateTypeEnabled:(int)arg1;	// IMP=0x0000000100072528
- (_Bool)isUpdateTypeEnabled:(int)arg1;	// IMP=0x00000001000724ec
- (void)startSiphoningControl;	// IMP=0x0000000100072494
- (void)dealloc;	// IMP=0x0000000100072408
- (id)initWithEndpointUID:(id)arg1 andBitmask:(unsigned long long)arg2 andOldBitmask:(unsigned long long)arg3;	// IMP=0x00000001000722cc

@end

