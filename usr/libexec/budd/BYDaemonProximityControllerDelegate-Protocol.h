//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CUMessageSession, NSArray, NSData, NSError, NSString;

@protocol BYDaemonProximityControllerDelegate
- (void)proximititySetupCompleted:(NSError *)arg1;
- (void)receivedLanguages:(NSArray *)arg1 locale:(NSString *)arg2 model:(NSString *)arg3 deviceClass:(NSString *)arg4 accessibilitySettings:(NSData *)arg5;
- (void)proximityConnectionReconnected;
- (void)proximityConnectionTerminated;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionPreparing:(CUMessageSession *)arg1;
- (void)dismissProximityPinCode;
- (void)displayProximityPinCode:(NSString *)arg1 visual:(_Bool)arg2;
@end

