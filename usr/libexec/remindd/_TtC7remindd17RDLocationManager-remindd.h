//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC7remindd17RDLocationManager.h"

#import "CLLocationManagerDelegate-Protocol.h"

@interface _TtC7remindd17RDLocationManager (remindd) <CLLocationManagerDelegate>
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x000000010025ec34
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x000000010025eb9c
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010025eb28
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;	// IMP=0x000000010025eaac
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x000000010025ea2c
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x000000010025ea20
@end

