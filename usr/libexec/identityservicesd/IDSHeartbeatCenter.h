//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMSystemMonitorListener-Protocol.h"

@class IMTimer, NSDate, NSMutableArray;

@interface IDSHeartbeatCenter : NSObject <IMSystemMonitorListener>
{
    NSMutableArray *_registrations;	// 8 = 0x8
    NSDate *_registrationHeartbeatDate;	// 16 = 0x10
    IMTimer *_registrationHeartbeatTimer;	// 24 = 0x18
    double _baseRegistrationHBI;	// 32 = 0x20
    _Bool _pendingHeartbeat;	// 40 = 0x28
    _Bool _listeningForRegStateChanges;	// 41 = 0x29
}

+ (id)sharedInstance;	// IMP=0x0000000100079a48
- (void).cxx_destruct;	// IMP=0x000000010007cb30
- (void)systemDidWake;	// IMP=0x000000010007caf8
- (void)removeRegistrationInfo:(id)arg1;	// IMP=0x000000010007c914
- (void)addRegistrationInfo:(id)arg1;	// IMP=0x000000010007c734
@property(readonly, nonatomic) double registrationHBI;
- (void)_bagReloaded:(id)arg1;	// IMP=0x000000010007c4f8
- (void)noteRegistrationStateChanged;	// IMP=0x000000010007c3f4
- (void)updateHeartbeat;	// IMP=0x000000010007c2b0
- (void)checkHeartbeat;	// IMP=0x000000010007c194
- (void)_stopRegistrationHeartbeat;	// IMP=0x000000010007bf9c
- (void)_startRegistrationHeartbeat;	// IMP=0x000000010007ba54
- (void)_updateRegistrationHeartbeat;	// IMP=0x000000010007b8fc
- (void)__reallyUpdateRegistrationHeartbeat;	// IMP=0x000000010007b808
- (id)_registrationsPendingHeartbeat;	// IMP=0x000000010007b258
- (double)_nextRegistrationHeartbeatTime;	// IMP=0x000000010007adac
- (_Bool)_registration:(id)arg1 needsRenewal:(double *)arg2;	// IMP=0x000000010007a7c0
- (void)_serverHeartBeatTimerHit:(id)arg1;	// IMP=0x000000010007a684
- (void)_serverHeartBeat:(id)arg1;	// IMP=0x0000000100079d04
- (id)init;	// IMP=0x0000000100079c10

@end
