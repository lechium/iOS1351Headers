//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CARLocationManager, CLLocation;

@protocol CARLocationManagerObserver <NSObject>
- (void)locationManager:(CARLocationManager *)arg1 didExitRegionIdentifier:(id)arg2;
- (void)locationManager:(CARLocationManager *)arg1 didEnterRegionIdentifier:(id)arg2;
- (void)locationManager:(CARLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;
@end

