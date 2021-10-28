//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "PDNotificationStreamConsumer-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"

@class CLLocation, CLLocationManager, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSString, PDDatabaseManager, PDNotificationStreamManager, PDRemoteInterfacePresenter, SBSCardItemsController;
@protocol OS_dispatch_queue, OS_dispatch_source, PDRelevantPassProviderDelegate;

@interface PDRelevantPassProvider : NSObject <CLLocationManagerDelegate, PDScheduledActivityClient, PDNotificationStreamConsumer>
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_relevancySerialQueue;	// 16 = 0x10
    _Bool _startedObservingEvents;	// 24 = 0x18
    NSMutableDictionary *_pendingUpdates;	// 32 = 0x20
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 40 = 0x28
    CLLocationManager *_proximityManager;	// 48 = 0x30
    int _authorizationStatus;	// 56 = 0x38
    CLLocationManager *_backingManager;	// 64 = 0x40
    int _passbookAuthorizationStatus;	// 72 = 0x48
    CLLocation *_lastLocation;	// 80 = 0x50
    CLLocation *_roughLocation;	// 88 = 0x58
    NSDate *_locationSearchStartDate;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_locationSearchTimeout;	// 104 = 0x68
    int _locationSearchState;	// 112 = 0x70
    long long _locationSearchMode;	// 120 = 0x78
    NSArray *_lastBeacons;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_beaconSearchTimeout;	// 136 = 0x88
    int _beaconSearchState;	// 144 = 0x90
    unsigned long long _lastBacklightLevel;	// 152 = 0x98
    NSMutableSet *_dateRelevantCards;	// 160 = 0xa0
    NSMutableSet *_proxPendingCards;	// 168 = 0xa8
    SBSCardItemsController *_cardItemsController;	// 176 = 0xb0
    NSArray *_currentRelevantPassInfo;	// 184 = 0xb8
    PDNotificationStreamManager *_notificationManager;	// 192 = 0xc0
    id <PDRelevantPassProviderDelegate> _delegate;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000010006afc4
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(nonatomic) __weak id <PDRelevantPassProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x000000010006ad44
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010006ab3c
- (void)locationManager:(id)arg1 didFailRangingBeaconsForConstraint:(id)arg2 error:(id)arg3;	// IMP=0x000000010006a95c
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 satisfyingConstraint:(id)arg3;	// IMP=0x000000010006a7ec
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x000000010006a650
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000010006a4a8
- (_Bool)_locationIsNewEnoughAndHasGoodAccuracy:(id)arg1;	// IMP=0x000000010006a3dc
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x000000010006a200
- (id)createCurrentNotificationRegistrationState;	// IMP=0x000000010006a158
- (void)_sendGroups:(id)arg1;	// IMP=0x00000001000699c0
- (_Bool)_findMatchingLocation:(id *)arg1 beacon:(id *)arg2 forPass:(id)arg3 passStyleRadius:(double)arg4 usingNearbyLocations:(id)arg5;	// IMP=0x0000000100068c28
- (void)_updateAndSendRelevantCards;	// IMP=0x0000000100068400
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forBeacon:(id)arg3;	// IMP=0x000000010006834c
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forLocation:(id)arg3;	// IMP=0x0000000100068298
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forDate:(id)arg3;	// IMP=0x00000001000681e4
- (id)_groupForPass:(id)arg1 inGroups:(id)arg2;	// IMP=0x00000001000680c8
- (_Bool)_proxPendingPassExistsWithBeacon;	// IMP=0x0000000100067f68
- (_Bool)_proxPendingPassExistsWithLocation;	// IMP=0x0000000100067dfc
- (void)_addDateRelevantAndLocationPendingCardsForStyle:(long long)arg1 locationAvailable:(_Bool)arg2;	// IMP=0x000000010006795c
- (void)_clearBeaconSearchTimer;	// IMP=0x0000000100067920
- (void)_beginBeaconSearchTimer;	// IMP=0x00000001000676d0
- (void)_stopBeaconSearch;	// IMP=0x00000001000675d0
- (void)_handleNewBeacons:(id)arg1;	// IMP=0x00000001000674ac
- (_Bool)_isDoingBeaconSearch;	// IMP=0x000000010006749c
- (void)_startBeaconSearchIfNecessary;	// IMP=0x0000000100067388
- (void)_clearLocationSearchTimer;	// IMP=0x000000010006734c
- (void)_beginLocationSearchTimeout;	// IMP=0x00000001000670fc
- (void)_stopLocationSearch;	// IMP=0x0000000100067014
- (_Bool)_isDoingLocationSearch;	// IMP=0x0000000100067004
- (_Bool)_handleNewLocation:(id)arg1 forceAcceptance:(_Bool)arg2 from:(id)arg3;	// IMP=0x0000000100066dbc
- (void)_startLocationSearchIfNecessaryWithSearchMode:(long long)arg1;	// IMP=0x0000000100066b5c
- (void)_unscheduleEagerRecalculation;	// IMP=0x0000000100066944
- (void)_scheduleEagerRecalculationWithPasses:(id)arg1 fenceLocation:(_Bool)arg2 minRadius:(double)arg3 beaconUUIDs:(id)arg4;	// IMP=0x0000000100065f8c
- (_Bool)_shouldScheduleEagerRecalculation;	// IMP=0x0000000100065f64
- (void)_clearPersistedProximityInfo;	// IMP=0x0000000100065c70
- (void)_loadPersistedLocationInfoIfNecessary;	// IMP=0x0000000100065678
- (void)_reallyStartCardSearchUpdatingWithCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2 searchMode:(long long)arg3;	// IMP=0x0000000100065304
- (long long)updateTypeFromCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2 searchMode:(long long)arg3;	// IMP=0x00000001000652e4
- (void)_startCardSearchUpdatingWithCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2 searchMode:(long long)arg3;	// IMP=0x0000000100064fd4
- (void)_startCardSearchUpdatingWithCachedProximity:(_Bool)arg1 refreshingProximity:(_Bool)arg2;	// IMP=0x0000000100064fc4
- (void)_tearDownExitFenceTimerFired;	// IMP=0x0000000100064f20
- (void)_relevantCardExpirationTimerFired;	// IMP=0x0000000100064e8c
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0000000100064e04
- (void)requestWhenInUseAuthorizationIfNeeded;	// IMP=0x0000000100064d8c
@property(readonly, nonatomic) NSArray *currentRelevantPassInfo;
- (void)handleSignificantTimeChangedEvent;	// IMP=0x0000000100064b9c
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;	// IMP=0x0000000100064a60
- (void)startObservingEvents;	// IMP=0x000000010006480c
- (void)dealloc;	// IMP=0x0000000100064784
- (id)initWithDatabaseManager:(id)arg1 notificationManager:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000100064550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
