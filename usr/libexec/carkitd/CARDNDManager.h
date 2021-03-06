//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARDNDAssertionTrapDelegate-Protocol.h"
#import "CARDNDGeofencingObserverDelegate-Protocol.h"
#import "CARDNDStateDelegate-Protocol.h"
#import "CARSessionObserving-Protocol.h"
#import "DNDModeAssertionUpdateListener-Protocol.h"

@class CARAutomaticDNDStatus, CARDNDAlerts, CARDNDAssertionTrap, CARDNDGeofencingObserver, CARDNDStateObserver, CARSessionStatus, CRVehicleStore, DNDModeAssertionService, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface CARDNDManager : NSObject <CARDNDStateDelegate, CARSessionObserving, CARDNDGeofencingObserverDelegate, CARDNDAssertionTrapDelegate, DNDModeAssertionUpdateListener>
{
    _Bool _expectedDNDTermination;	// 8 = 0x8
    double _vehicleQueryInitiatedTimestamp;	// 16 = 0x10
    _Bool _activatedByUserAction;	// 24 = 0x18
    _Bool _expectedBuddyTermination;	// 25 = 0x19
    NSTimer *_userDisableTimer;	// 32 = 0x20
    DNDModeAssertionService *_assertionService;	// 40 = 0x28
    CARDNDStateObserver *_stateMachine;	// 48 = 0x30
    CARDNDAlerts *_alertManager;	// 56 = 0x38
    CARAutomaticDNDStatus *_preferences;	// 64 = 0x40
    CARSessionStatus *_sessionStatus;	// 72 = 0x48
    CARDNDAssertionTrap *_assertionTrap;	// 80 = 0x50
    CRVehicleStore *_vehicleStore;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_CARDNDQueue;	// 96 = 0x60
    unsigned long long _nextUnlockAction;	// 104 = 0x68
    unsigned long long _nextLockAction;	// 112 = 0x70
    unsigned long long _lastKnownVehicularState;	// 120 = 0x78
    unsigned long long _lastKnownVehicularHints;	// 128 = 0x80
    double _lastKnownReportTime;	// 136 = 0x88
    unsigned long long _firstRideVehicleHints;	// 144 = 0x90
    CARDNDGeofencingObserver *_geofencingObserver;	// 152 = 0x98
    NSObject<OS_os_transaction> *_idleExitTransaction;	// 160 = 0xa0
}

+ (id)sharedManager;	// IMP=0x0000000100031560
- (void).cxx_destruct;	// IMP=0x0000000100036f28
@property(retain, nonatomic) NSObject<OS_os_transaction> *idleExitTransaction; // @synthesize idleExitTransaction=_idleExitTransaction;
@property(nonatomic) _Bool expectedBuddyTermination; // @synthesize expectedBuddyTermination=_expectedBuddyTermination;
@property(retain, nonatomic) CARDNDGeofencingObserver *geofencingObserver; // @synthesize geofencingObserver=_geofencingObserver;
@property(nonatomic) unsigned long long firstRideVehicleHints; // @synthesize firstRideVehicleHints=_firstRideVehicleHints;
@property(nonatomic) double lastKnownReportTime; // @synthesize lastKnownReportTime=_lastKnownReportTime;
@property(nonatomic) unsigned long long lastKnownVehicularHints; // @synthesize lastKnownVehicularHints=_lastKnownVehicularHints;
@property(nonatomic) unsigned long long lastKnownVehicularState; // @synthesize lastKnownVehicularState=_lastKnownVehicularState;
@property(nonatomic) _Bool activatedByUserAction; // @synthesize activatedByUserAction=_activatedByUserAction;
@property(nonatomic) unsigned long long nextLockAction; // @synthesize nextLockAction=_nextLockAction;
@property(nonatomic) unsigned long long nextUnlockAction; // @synthesize nextUnlockAction=_nextUnlockAction;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *CARDNDQueue; // @synthesize CARDNDQueue=_CARDNDQueue;
@property(nonatomic) __weak CRVehicleStore *vehicleStore; // @synthesize vehicleStore=_vehicleStore;
@property(retain, nonatomic) CARDNDAssertionTrap *assertionTrap; // @synthesize assertionTrap=_assertionTrap;
@property(retain, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(retain, nonatomic) CARAutomaticDNDStatus *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) CARDNDAlerts *alertManager; // @synthesize alertManager=_alertManager;
@property(retain, nonatomic) CARDNDStateObserver *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) DNDModeAssertionService *assertionService; // @synthesize assertionService=_assertionService;
@property(retain, nonatomic) NSTimer *userDisableTimer; // @synthesize userDisableTimer=_userDisableTimer;
- (void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2;	// IMP=0x0000000100036d2c
- (void)_userDisabledTimerFired:(id)arg1;	// IMP=0x0000000100036c88
- (void)_scheduleUserDisabledTimerWithInterval:(double)arg1;	// IMP=0x0000000100036ae4
- (void)_cancelUserDisabledTimer;	// IMP=0x0000000100036a8c
- (void)_endIdleExitTransaction;	// IMP=0x0000000100036a08
- (void)_beginIdleExitTransaction;	// IMP=0x000000010003696c
- (void)_processVehicleState:(id)arg1;	// IMP=0x0000000100035cfc
- (_Bool)_firstRideCompleted;	// IMP=0x0000000100035c68
- (_Bool)_firstRideStarted;	// IMP=0x0000000100035bd4
- (_Bool)_userEligibleForDNDBuddy;	// IMP=0x00000001000358a8
@property(readonly, nonatomic) _Bool shouldOptIntoBluetooth;
- (_Bool)_completedBTDriveWithinOnboardingWindow;	// IMP=0x00000001000356d4
- (void)_disableDNDUntilEndOfDrive;	// IMP=0x0000000100035320
- (void)_DNDAssertionInvalidated:(id)arg1;	// IMP=0x0000000100034e90
- (void)_terminateDND;	// IMP=0x0000000100034d68
- (void)_scheduleVehicleQuery;	// IMP=0x0000000100034d04
- (id)_internalText;	// IMP=0x0000000100034a9c
- (void)_transitionToState:(unsigned long long)arg1 vehicularHints:(unsigned long long)arg2 operatorState:(unsigned long long)arg3;	// IMP=0x0000000100033e6c
- (void)_showDNDMiniBuddyNow;	// IMP=0x0000000100033a00
- (void)_scheduleBuddyAtAnAppropriateTimeWithAction:(unsigned long long)arg1;	// IMP=0x00000001000337f0
- (void)_resetDNDBuddyPresentation:(_Bool)arg1;	// IMP=0x0000000100033614
- (void)_checkVehicleState;	// IMP=0x00000001000335d4
- (void)_setDNDActive:(_Bool)arg1 withStartingGeofence:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100032fa4
- (void)_setDNDActive:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032dd4
- (void)assertionTrap:(id)arg1 didBecomeActive:(_Bool)arg2;	// IMP=0x0000000100032bec
- (void)geofencingObserver:(id)arg1 didUpdateRegionState:(long long)arg2;	// IMP=0x0000000100032b04
- (void)stateMachineDidObserveIdealBuddyPresentationTime:(id)arg1;	// IMP=0x0000000100032738
- (void)stateMachine:(id)arg1 didObserveLockStatusChange:(_Bool)arg2;	// IMP=0x0000000100032498
- (void)stateMachine:(id)arg1 receivedFMDMode:(_Bool)arg2;	// IMP=0x000000010003243c
- (void)stateMachine:(id)arg1 receivedAirplaneMode:(_Bool)arg2;	// IMP=0x00000001000323e0
- (void)stateMachine:(id)arg1 receivedVehicleState:(id)arg2;	// IMP=0x0000000100032318
@property(readonly, nonatomic) _Bool restrictionsEnabled;
@property(readonly, nonatomic) _Bool isCurrentlyInGeofencedRegion;
@property(readonly, nonatomic, getter=isDNDValid) _Bool DNDValid;
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0000000100032020
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0000000100031e2c
@property(readonly, nonatomic) _Bool showsInternalAlerts;
- (void)dealloc;	// IMP=0x0000000100031ca8
- (id)initWithAssertionService:(id)arg1 vehicleState:(id)arg2 alertManager:(id)arg3 preferences:(id)arg4 carSessionStatus:(id)arg5 geoFencingObserver:(id)arg6 assertionTrap:(id)arg7;	// IMP=0x0000000100031798

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

