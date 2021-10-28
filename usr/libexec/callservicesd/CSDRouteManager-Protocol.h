//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TUCall, TURoute;

@protocol CSDRouteManager <NSObject>
@property(readonly, nonatomic, getter=isAnyBluetoothHeadphoneRouteAvailableForAnyCall) _Bool anyBluetoothHeadphoneRouteAvailableForAnyCall;
@property(readonly, nonatomic, getter=isAnyRouteAvailableWithOtherConnectedDevicesForAnyCall) _Bool anyRouteAvailableWithOtherConnectedDevicesForAnyCall;
@property(readonly, nonatomic, getter=isAnyVehicleRouteAvailableForAnyCall) _Bool anyVehicleRouteAvailableForAnyCall;
@property(readonly, nonatomic, getter=isCarPlayRouteAvailable) _Bool carPlayRouteAvailable;
@property(readonly, nonatomic, getter=isCarModeActive) _Bool carModeActive;
@property(readonly, nonatomic, getter=isAnyPreferredRouteAvailableAndActiveForAnyCall) _Bool anyPreferredRouteAvailableAndActiveForAnyCall;
@property(readonly, nonatomic, getter=isAnyPreferredRouteAvailableForAnyCall) _Bool anyPreferredRouteAvailableForAnyCall;
- (_Bool)isAnyVehicleRouteAvailableForCall:(TUCall *)arg1;
- (TURoute *)preferredAndActiveRouteForCall:(TUCall *)arg1;
- (_Bool)isAnyPreferredRouteAvailableAndActiveForCall:(TUCall *)arg1;
- (TURoute *)preferredRouteForCall:(TUCall *)arg1;
- (_Bool)isAnyPreferredRouteAvailableForCall:(TUCall *)arg1;
- (_Bool)isAnyRouteAvailableWithUniqueIdentifier:(NSString *)arg1 forCall:(TUCall *)arg2;
@end
