//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AXSSSwitchControlSettings, NSString;

@protocol AXSSInterDeviceConnectionListener
- (_Bool)canAdvertise;
- (void)highlightAsPotentialSlaveForDeviceWithName:(NSString *)arg1;
- (void)didBecomeIdle;
- (void)didDisconnectAsSlave;
- (void)didDisconnectAsMasterFromDeviceWithName:(NSString *)arg1;
- (void)didConnectAsSlaveWithSettings:(AXSSSwitchControlSettings *)arg1;
- (void)didConnectAsMasterToDeviceWithName:(NSString *)arg1;
@end
