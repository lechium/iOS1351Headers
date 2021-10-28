//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DMDLostDeviceLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _locationServicesEnabled;	// 8 = 0x8
    _Bool _statusBarIconEnabled;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CLLocationManager *_locationManager;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    NSString *_originator;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_timeoutTimerDispatchSource;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x000000010005bbe0
- (void).cxx_destruct;	// IMP=0x000000010005d3f8
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimerDispatchSource; // @synthesize timeoutTimerDispatchSource=_timeoutTimerDispatchSource;
@property(nonatomic) _Bool statusBarIconEnabled; // @synthesize statusBarIconEnabled=_statusBarIconEnabled;
@property(nonatomic) _Bool locationServicesEnabled; // @synthesize locationServicesEnabled=_locationServicesEnabled;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_updateLostModeFileForOriginator:(id)arg1;	// IMP=0x000000010005ceec
- (void)_cleanupAfterResponseFromLocationManagerOrTimeout;	// IMP=0x000000010005ce2c
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010005cd60
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000010005cba8
@property(readonly, copy, nonatomic) NSString *lastLocationRequestedDateMessage;
- (void)clearLastLocationRequestedDate;	// IMP=0x000000010005c2b8
- (void)restoreLocationServicesSavedState;	// IMP=0x000000010005c250
- (void)saveLocationServicesStateAndForceOn;	// IMP=0x000000010005c1b4
- (void)getCurrentLocationForOriginator:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005bc7c
- (id)init;	// IMP=0x000000010005bb24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
