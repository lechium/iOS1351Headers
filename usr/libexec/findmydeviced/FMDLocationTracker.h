//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, FMDLocator, FMDTrackedLocationsStore, NSDate, NSDictionary, NSString, PCPersistentTimer;
@protocol FMDLocationManaging, FMDLocationTrackerDelegate;

@interface FMDLocationTracker : NSObject <CLLocationManagerDelegate>
{
    _Bool _trackNotifyEnabled;	// 8 = 0x8
    unsigned char _locationTrackerType;	// 9 = 0x9
    _Bool _trackingStarted;	// 10 = 0xa
    double _minSLCAccuracyThreshold;	// 16 = 0x10
    NSDictionary *_locateParams;	// 24 = 0x18
    long long _trackingStatus;	// 32 = 0x20
    long long _maxLocations;	// 40 = 0x28
    double _keepAlive;	// 48 = 0x30
    double _periodicCheckInterval;	// 56 = 0x38
    double _minDistanceBetweenLocations;	// 64 = 0x40
    double _minTimeBetweenLocations;	// 72 = 0x48
    double _minTimeBetweenServerCalls;	// 80 = 0x50
    NSObject<FMDLocationTrackerDelegate> *_delegate;	// 88 = 0x58
    CLLocation *_lastLocation;	// 96 = 0x60
    NSObject<FMDLocationManaging> *_locManager;	// 104 = 0x68
    FMDLocator *_locator;	// 112 = 0x70
    PCPersistentTimer *_fallbackRetryTimer;	// 120 = 0x78
    NSDate *_lastFallbackRetryTime;	// 128 = 0x80
    FMDTrackedLocationsStore *_trackedLocationsStore;	// 136 = 0x88
}

+ (id)stringForLocationTrackerType:(unsigned char)arg1;	// IMP=0x00000001000a4fc0
- (void).cxx_destruct;	// IMP=0x00000001000a83cc
@property(retain, nonatomic) FMDTrackedLocationsStore *trackedLocationsStore; // @synthesize trackedLocationsStore=_trackedLocationsStore;
@property(retain, nonatomic) NSDate *lastFallbackRetryTime; // @synthesize lastFallbackRetryTime=_lastFallbackRetryTime;
@property(retain, nonatomic) PCPersistentTimer *fallbackRetryTimer; // @synthesize fallbackRetryTimer=_fallbackRetryTimer;
@property(retain, nonatomic) FMDLocator *locator; // @synthesize locator=_locator;
@property(retain, nonatomic) NSObject<FMDLocationManaging> *locManager; // @synthesize locManager=_locManager;
@property(copy, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) _Bool trackingStarted; // @synthesize trackingStarted=_trackingStarted;
@property(nonatomic) __weak NSObject<FMDLocationTrackerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned char locationTrackerType; // @synthesize locationTrackerType=_locationTrackerType;
@property(nonatomic) double minTimeBetweenServerCalls; // @synthesize minTimeBetweenServerCalls=_minTimeBetweenServerCalls;
@property(nonatomic) double minTimeBetweenLocations; // @synthesize minTimeBetweenLocations=_minTimeBetweenLocations;
@property(nonatomic) double minDistanceBetweenLocations; // @synthesize minDistanceBetweenLocations=_minDistanceBetweenLocations;
@property(nonatomic) double periodicCheckInterval; // @synthesize periodicCheckInterval=_periodicCheckInterval;
@property(nonatomic) double keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) long long maxLocations; // @synthesize maxLocations=_maxLocations;
@property(nonatomic) _Bool trackNotifyEnabled; // @synthesize trackNotifyEnabled=_trackNotifyEnabled;
@property(nonatomic) long long trackingStatus; // @synthesize trackingStatus=_trackingStatus;
@property(retain, nonatomic) NSDictionary *locateParams; // @synthesize locateParams=_locateParams;
@property(nonatomic) double minSLCAccuracyThreshold; // @synthesize minSLCAccuracyThreshold=_minSLCAccuracyThreshold;
- (void)_loadTrackingInfo;	// IMP=0x00000001000a7f04
- (void)_storeTrackingInfo;	// IMP=0x00000001000a7b14
- (void)_updateFallbackRetryTimerUsingLocation:(id)arg1;	// IMP=0x00000001000a7280
- (id)fallbackTimerXPCTransactionName;	// IMP=0x00000001000a7244
- (void)_updateFallbackRetryTimer;	// IMP=0x00000001000a70d4
- (void)_stopFallbackRetryTimer;	// IMP=0x00000001000a6f8c
- (void)_startLocateCycleWithLocatorPublishingBlock:(CDUnknownBlockType)arg1 andStoppedLocatingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a6610
- (void)_stopTracking;	// IMP=0x00000001000a6334
- (void)_startTracking;	// IMP=0x00000001000a6038
- (id)newLocationManager;	// IMP=0x00000001000a5fcc
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000a5f6c
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000001000a5710
@property(readonly, nonatomic) _Bool isTrackingOn;
- (void)recordLocation:(id)arg1 ofType:(unsigned char)arg2;	// IMP=0x00000001000a563c
- (void)actOnTrackedLocationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a55c8
- (void)didAddNewTrackedLocation:(id)arg1;	// IMP=0x00000001000a554c
- (void)deleteLocationTrackingInfoAndStopTracking;	// IMP=0x00000001000a54f4
- (void)updateLocationTrackingInfoWithTrackingStatus:(long long)arg1 minSLCAccuracyThreshold:(double)arg2 locateParams:(id)arg3 trackNotifyEnabled:(_Bool)arg4 maxLocations:(long long)arg5 keepAlive:(double)arg6 periodicCheckInterval:(double)arg7 minDistanceBetweenLocations:(double)arg8 minTimeBetweenLocations:(double)arg9 minTimeBetweenServerCalls:(double)arg10;	// IMP=0x00000001000a5300
- (void)deregisterDelegate:(id)arg1;	// IMP=0x00000001000a5274
- (void)registerDelegate:(id)arg1;	// IMP=0x00000001000a5220
- (void)dealloc;	// IMP=0x00000001000a5124
- (id)initWithType:(unsigned char)arg1;	// IMP=0x00000001000a5078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
