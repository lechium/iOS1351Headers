//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMSystemMonitorListener-Protocol.h"

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject <IMSystemMonitorListener>
{
    IMTimer *_getDependentHeartbeatTimer;	// 8 = 0x8
    NSMutableDictionary *_usersToHeartbeatDatesMap;	// 16 = 0x10
    _Bool _isSetup;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000010000b358
- (void).cxx_destruct;	// IMP=0x000000010000e3e4
- (void)systemDidWake;	// IMP=0x000000010000e3ac
- (void)_cleanupKeychain;	// IMP=0x000000010000e22c
- (_Bool)_fetchExpiryDatesIfNecessary;	// IMP=0x000000010000dbfc
- (void)accountsChanged;	// IMP=0x000000010000d428
- (void)_updateExpiry:(double)arg1 forUser:(id)arg2;	// IMP=0x000000010000ce0c
- (void)resetExpiryForUser:(id)arg1;	// IMP=0x000000010000cca4
- (void)_updateDependentRegistrations;	// IMP=0x000000010000ca34
- (void)_scheduleRescueHeartBeat;	// IMP=0x000000010000c820
- (_Bool)_scheduleDependentRegistrations;	// IMP=0x000000010000c4c8
- (void)invalidateTimer;	// IMP=0x000000010000c474
- (void)printInfo;	// IMP=0x000000010000bf30
- (void)dealloc;	// IMP=0x000000010000be78
- (id)_getNextExpirationDate;	// IMP=0x000000010000b85c
- (void)_heartBeat;	// IMP=0x000000010000b6f4
- (void)setup;	// IMP=0x000000010000b654
- (id)init;	// IMP=0x000000010000b520

@end
