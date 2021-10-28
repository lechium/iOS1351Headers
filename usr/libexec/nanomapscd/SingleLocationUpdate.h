//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLInUseAssertion, CLLocation, CLLocationManager, NSDate, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface SingleLocationUpdate : NSObject <CLLocationManagerDelegate>
{
    CLInUseAssertion *_assertion;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    CLLocation *_lastLocation;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    NSTimer *_timeout;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    double _desiredAccuracy;	// 64 = 0x40
    double _acceptableAccuracy;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010004f6c4
- (void)_completeWithLocation:(id)arg1 error:(id)arg2;	// IMP=0x000000010004f3b0
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010004f310
- (_Bool)_isLocationGoodEnough:(id)arg1;	// IMP=0x000000010004f250
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000010004f1cc
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x000000010004f1a4
- (void)_cleanup;	// IMP=0x000000010004f04c
- (void)_timeoutWithForcedCompletion:(_Bool)arg1 rescheduleInterval:(double)arg2 selector:(SEL)arg3;	// IMP=0x000000010004ef08
- (void)_finalTimeout;	// IMP=0x000000010004eef0
- (void)_firstTimeout;	// IMP=0x000000010004eea8
- (double)_timeSinceStart;	// IMP=0x000000010004ee84
@property(nonatomic) double acceptableAccuracy; // @synthesize acceptableAccuracy=_acceptableAccuracy;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
- (void)cancel;	// IMP=0x000000010004ed0c
- (void)requestSingleLocationUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e9b4
- (void)dealloc;	// IMP=0x000000010004e968

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
