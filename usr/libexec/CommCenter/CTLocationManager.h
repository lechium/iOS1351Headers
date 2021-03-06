//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSString;

@interface CTLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_manager;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
    _Bool _locationRequested;	// 24 = 0x18
    _Bool _locationAvailable;	// 25 = 0x19
    _Bool _locationServiceDenied;	// 26 = 0x1a
    _Bool _locationServiceAuthorized;	// 27 = 0x1b
    shared_ptr_b36635fa logger;	// 32 = 0x20
    queue_9c98cea5 _queue;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x0000000100a45678
- (id).cxx_construct;	// IMP=0x0000000100a46a6c
- (void).cxx_destruct;	// IMP=0x0000000100a46a28
@property(nonatomic) _Bool locationAvailable; // @synthesize locationAvailable=_locationAvailable;
@property(nonatomic) _Bool locationRequested; // @synthesize locationRequested=_locationRequested;
@property(copy) CLLocation *location; // @synthesize location=_location;
- (void)locationManager:(id)arg1 didVisit:(id)arg2;	// IMP=0x0000000100a4643c
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x0000000100a46368
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100a46148
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000100a45fb8
- (void)stopLocationMonitoringVisits;	// IMP=0x0000000100a45f44
- (void)startLocationMonitoringVisitsWithReason:(const char *)arg1;	// IMP=0x0000000100a45e8c
- (_Bool)isLocationServiceAuthorized;	// IMP=0x0000000100a45e84
- (_Bool)isLocationServiceDenied;	// IMP=0x0000000100a45e7c
- (id)copyLastKnownLocation;	// IMP=0x0000000100a45df8
- (_Bool)isLocationServiceEnabled;	// IMP=0x0000000100a45de4
- (void)stopLocationUpdates;	// IMP=0x0000000100a45d6c
- (void)startLocationUpdatesWithReason:(const char *)arg1;	// IMP=0x0000000100a45cb0
- (void)shouldUpdateLocation:(_Bool)arg1;	// IMP=0x0000000100a45b88
- (void)dealloc;	// IMP=0x0000000100a45b0c
- (id)initWithRegistry:(const shared_ptr_0fd4464b *)arg1;	// IMP=0x0000000100a45818

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

