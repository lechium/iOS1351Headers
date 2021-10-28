//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavdLocationProviderDelegate-Protocol.h"

@class CLInUseAssertion, CLLocation, GEOLocationShifter, NSMutableArray, NSString;
@protocol NavdLocationProvider, OS_dispatch_queue, OS_dispatch_source;

@interface NavdLocationManager : NSObject <NavdLocationProviderDelegate>
{
    id <NavdLocationProvider> _locationProvider;	// 8 = 0x8
    CLInUseAssertion *_inUseAssertion;	// 16 = 0x10
    NSMutableArray *_observers;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_observersQueue;	// 32 = 0x20
    _Bool _updatingLocations;	// 40 = 0x28
    GEOLocationShifter *_locationShifter;	// 48 = 0x30
    unsigned long long _numberOfRetriesForLocation;	// 56 = 0x38
    CLLocation *_pivotLocation;	// 64 = 0x40
    CLLocation *_currentLocation;	// 72 = 0x48
    CLLocation *_candidateStaleLocation;	// 80 = 0x50
    int _transportTypeToRequestAccuracyFor;	// 88 = 0x58
    NSMutableArray *_locationHandlers;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_serialQueue;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_staleLocationTimer;	// 112 = 0x70
}

+ (id)sharedInstance;	// IMP=0x0000000100008d78
- (void).cxx_destruct;	// IMP=0x000000010000b684
@property(nonatomic) unsigned long long numberOfRetriesForLocation; // @synthesize numberOfRetriesForLocation=_numberOfRetriesForLocation;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;	// IMP=0x000000010000b670
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x000000010000b4cc
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x000000010000b148
- (void)_q_processErrorWhenUpdatingCurrentLocation:(id)arg1;	// IMP=0x000000010000b04c
- (void)_q_processCandidateLocation:(id)arg1;	// IMP=0x000000010000ab88
- (void)_q_goodCandidateLocation:(id)arg1 shouldUpdatePivot:(_Bool)arg2;	// IMP=0x000000010000a9d8
- (void)_q_badCandidateLocation:(id)arg1;	// IMP=0x000000010000a96c
- (void)_q_createActivityForLocationUpdate;	// IMP=0x000000010000a714
- (void)_q_locationRefreshActivityFired;	// IMP=0x000000010000a674
- (void)_q_createActivityForStaleLocationUse:(id)arg1;	// IMP=0x000000010000a55c
- (void)_q_createActivityToUseStaleLocation:(id)arg1 fireAtAbsoluteTime:(double)arg2;	// IMP=0x000000010000a360
- (void)_q_cancelStaleLocationTimer;	// IMP=0x000000010000a330
- (void)_q_staleLocationUseActivityFired:(id)arg1;	// IMP=0x000000010000a214
- (void)_q_updateDesiredAccuracyBasedOnCadidateDistanceToPivot:(double)arg1 candidateDistanceToCurrent:(double)arg2;	// IMP=0x000000010000a04c
- (double)_q_desiredAccuracyForTransportType:(int)arg1 motionType:(unsigned long long)arg2;	// IMP=0x0000000100009d34
- (_Bool)_q_pivotShouldBeUpdatedDistanceToCandidate:(double)arg1;	// IMP=0x0000000100009c68
- (_Bool)_q_isNewLocation:(id)arg1 tolerableWithLocation:(id)arg2 distance:(double)arg3;	// IMP=0x0000000100009b90
- (void)getCurrentLocationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009888
- (void)_notifyObserversWithLocation:(id)arg1 error:(id)arg2;	// IMP=0x00000001000095d0
- (void)removeObserver:(id)arg1;	// IMP=0x000000010000953c
- (void)addObserver:(id)arg1;	// IMP=0x00000001000094a8
@property(readonly, nonatomic) double desiredAccuracy;
- (void)stopLocationUpdate;	// IMP=0x0000000100009430
- (void)_q_stopLocationUpdate;	// IMP=0x00000001000092e4
- (void)startLocationUpdate;	// IMP=0x000000010000927c
- (void)_q_startLocationUpdate;	// IMP=0x00000001000090e0
- (void)dealloc;	// IMP=0x0000000100009088
- (id)initWithLocationProvider:(id)arg1;	// IMP=0x0000000100008e8c
- (id)init;	// IMP=0x0000000100008e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
