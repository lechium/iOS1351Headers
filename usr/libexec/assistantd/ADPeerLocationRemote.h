//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADPeerConnectionDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class ADPeerConnection, CLLocationManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ADPeerLocationRemote : NSObject <ADPeerConnectionDelegate, CLLocationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADPeerConnection *_peerConnection;	// 16 = 0x10
    CLLocationManager *_locationManager;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_bestLocationTimer;	// 32 = 0x20
    CDUnknownBlockType _bestLocationCompletion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000a1d34
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000001000a1c90
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000001000a1bec
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x00000001000a1a44
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001000a19c8
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000001000a18c0
- (void)peerConnection:(id)arg1 handlePBSubclass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a17ac
- (void)_executeBestLocationCompletionWithLocationErrorWithCode:(long long)arg1;	// IMP=0x00000001000a173c
- (void)_executeBestLocationCompletionWithLocation:(id)arg1;	// IMP=0x00000001000a172c
- (void)_executeBestLocationCompletionWithLocation:(id)arg1 error:(id)arg2;	// IMP=0x00000001000a1404
- (void)_getBestLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a0fa8
- (_Bool)_hasActiveBestLocationRequest;	// IMP=0x00000001000a0f98
- (void)_startUpdatingLocation;	// IMP=0x00000001000a0ec0
- (void)_cancelBestLocationTimer;	// IMP=0x00000001000a0dfc
- (void)_startBestLocationTimer;	// IMP=0x00000001000a0b88
- (id)_locationManager;	// IMP=0x00000001000a0ad8
- (void)dealloc;	// IMP=0x00000001000a0a8c
- (id)init;	// IMP=0x00000001000a09c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

