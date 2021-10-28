//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLLocationProviderProtocol-Protocol.h"

@class NSString;

@interface CLLocationProviderAdapter : CLNotifierServiceAdapter <CLLocationProviderProtocol>
{
}

- (id)syncgetName;	// IMP=0x0000000100243344
- (_Bool)syncgetLocationUnavailable;	// IMP=0x0000000100243320
- (_Bool)syncgetLocationPrivate:(struct CLDaemonLocationPrivate *)arg1;	// IMP=0x00000001002432ec
- (_Bool)syncgetLocation:(CDStruct_88736aa7 *)arg1;	// IMP=0x00000001002432b8
- (_Bool)syncgetNotification:(const int *)arg1 data:(struct NotificationData *)arg2;	// IMP=0x000000010024327c
- (void)sendSimulatedLocationUnavailable;	// IMP=0x0000000100243258
- (void)sendSimulatedLocation:(struct CLDaemonLocation)arg1;	// IMP=0x0000000100243224
- (void)setSimulationEnabled:(_Bool)arg1;	// IMP=0x00000001002431c0
- (void)shutdown;	// IMP=0x0000000100243170
- (void)start;	// IMP=0x0000000100243120
- (void)register:(byref id)arg1 forNotification:(int)arg2 distanceFilter:(double)arg3;	// IMP=0x0000000100242f90
- (void)updateNotification:(int)arg1 withRegistrationInfo:(id)arg2 forClient:(byref id)arg3;	// IMP=0x0000000100242e0c
- (struct CLLocationProvider *)locationProvider;	// IMP=0x0000000100242dd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
