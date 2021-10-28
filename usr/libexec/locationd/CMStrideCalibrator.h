//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CMStrideCalLocationFSMDelegate-Protocol.h"
#import "CMStrideCalibrationDatabaseDelegate-Protocol.h"

@class CLTimer, CMStrideCalLocationFSM, CMStrideCalibrationActivityBuffer, CMStrideCalibrationDatabase, CMStrideCalibrationElevationBuffer, CMStrideCalibrationStats, CMStrideCalibrationStepCountBuffer, NSMutableArray, NSString;
@protocol CLClientAuthorizationCacheProtocol, CLIntersiloUniverse, CLStreamingAwareLocationProviderProtocol;

@interface CMStrideCalibrator : NSObject <CMStrideCalibrationDatabaseDelegate, CMStrideCalLocationFSMDelegate>
{
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::__1::default_delete<CLOdometerNotifier_Type::Client>> fOdometerClient;	// 8 = 0x8
    struct CLServiceLocationProvider *fServiceLocationProvider;	// 16 = 0x10
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::__1::default_delete<CLServiceLocationProvider_Type::Client>> fServiceLocationClient;	// 24 = 0x18
    id <CLClientAuthorizationCacheProtocol> fClientAuthorizationCache;	// 32 = 0x20
    struct unique_ptr<CLStreamingAwareLocationProvider_Type::Client, std::__1::default_delete<CLStreamingAwareLocationProvider_Type::Client>> fStreamingAwareLocationClient;	// 40 = 0x28
    id <CLStreamingAwareLocationProviderProtocol> fStreamingAwareProxy;	// 48 = 0x30
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::__1::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 56 = 0x38
    struct unique_ptr<CLMotionState_Type::Client, std::__1::default_delete<CLMotionState_Type::Client>> fMotionStateClient;	// 64 = 0x40
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::__1::default_delete<CLCompanionNotifier_Type::Client>> fCompanionClient;	// 72 = 0x48
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::__1::default_delete<CLMotionStateMediator_Type::Client>> fMotionStateMediatorClient;	// 80 = 0x50
    id <CLIntersiloUniverse> fUniverse;	// 88 = 0x58
    CLTimer *fStopOpportunisticCalibrationTimer;	// 96 = 0x60
    CMStrideCalibrationActivityBuffer *fActivityBuffer;	// 104 = 0x68
    CMStrideCalibrationElevationBuffer *fElevationBuffer;	// 112 = 0x70
    CMStrideCalibrationStepCountBuffer *fStepsBuffer;	// 120 = 0x78
    CMStrideCalibrationStats *fStats;	// 128 = 0x80
    CMStrideCalibrationDatabase *fDatabase;	// 136 = 0x88
    CMStrideCalLocationFSM *fStrideCalLocationFSM;	// 144 = 0x90
    NSMutableArray *fLatestCalDataArray;	// 152 = 0x98
    shared_ptr_a3117978 fStepCountDb;	// 160 = 0xa0
    double fLastGoodLocFix;	// 176 = 0xb0
    long long fCurrentSession;	// 184 = 0xb8
}

- (id).cxx_construct;	// IMP=0x00000001003f8b30
- (void).cxx_destruct;	// IMP=0x00000001003f8a5c
- (id)copyHistory;	// IMP=0x00000001003f8a4c
- (void)updateUserHeight:(long long)arg1;	// IMP=0x00000001003f8a3c
- (void)updateCalibrationBins:(double)arg1;	// IMP=0x00000001003f81f8
- (_Bool)checkValidTrack:(id)arg1 associatedEntry:(const struct CLStepDistance *)arg2;	// IMP=0x00000001003f7b90
- (void)fsm:(id)arg1 didUpdateSource:(int)arg2;	// IMP=0x00000001003f7b8c
- (void)fsm:(id)arg1 didUpdateLocationAtTime:(double)arg2;	// IMP=0x00000001003f77cc
- (void)fsm:(id)arg1 didYieldTrack:(id)arg2;	// IMP=0x00000001003f7728
- (void)fsm:(id)arg1 didTransitionFromState:(int)arg2 toState:(int)arg3;	// IMP=0x00000001003f7504
- (void)strideCalibrationDatabase:(id)arg1 didInsertEntry:(CDStruct_9878d8f4)arg2;	// IMP=0x00000001003f7484
- (void)quitForcedLocationState;	// IMP=0x00000001003f736c
- (void)attemptForcedLocation;	// IMP=0x00000001003f6f74
- (void)checkForLocationStateTransition;	// IMP=0x00000001003f6b9c
- (_Bool)outOfSession;	// IMP=0x00000001003f6b8c
- (_Bool)inOutdoorPedestrianSession;	// IMP=0x00000001003f6b64
- (long long)currentSession;	// IMP=0x00000001003f6b5c
- (void)tick:(double)arg1;	// IMP=0x00000001003f6b28
- (void)addLatestCalData:(id)arg1;	// IMP=0x00000001003f69cc
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x00000001003f69bc
- (void)setSession:(long long)arg1;	// IMP=0x00000001003f6854
- (void)dealloc;	// IMP=0x00000001003f6770
- (id)initInUniverse:(id)arg1 stepCountDb:(shared_ptr_a3117978)arg2;	// IMP=0x00000001003f6304
- (void)authorizeLocationInReplay;	// IMP=0x0000000100691928
- (void)onLocationNotification:(const int *)arg1 data:(const struct NotificationData *)arg2;	// IMP=0x000000010069176c
- (void)onOdometerNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00000001006916dc
- (void)onMotionStateNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00000001006916ac
- (void)onStepCountNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0000000100691624
- (_Bool)isAuthorizedForLocation;	// IMP=0x00000001009355bc
- (void)checkLocationAuthorization;	// IMP=0x0000000100935480
- (void)tickleArrow;	// IMP=0x000000010093546c
- (void)stopLeechingLocation;	// IMP=0x0000000100935448
- (void)startLeechingLocation;	// IMP=0x0000000100935420
- (void)stopLocationUpdates;	// IMP=0x00000001009353bc
- (void)startLocationUpdates;	// IMP=0x0000000100935350
- (void)stopGpsOdometerUpdates;	// IMP=0x000000010093532c
- (void)startGpsOdometerUpdates;	// IMP=0x0000000100935304
- (void)stopGpsOdometerSpectatorUpdates;	// IMP=0x00000001009352e0
- (void)startGpsOdometerSpectatorUpdates;	// IMP=0x00000001009352b8
- (void)stopElevationSpectatorUpdates;	// IMP=0x0000000100935294
- (void)startElevationSpectatorUpdates;	// IMP=0x000000010093526c
- (void)stopElevationUpdates;	// IMP=0x0000000100935248
- (void)startElevationUpdates;	// IMP=0x0000000100935220
- (void)teardownCLNotifiers;	// IMP=0x0000000100935194
- (void)setupCLNotifiers;	// IMP=0x0000000100934b74
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x0000000100935754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
