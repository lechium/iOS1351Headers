//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSUUID;

@protocol TUCallCapabilitiesXPCServerActions <NSObject>
- (oneway void)endEmergencyCallbackMode;
- (oneway void)cancelPinRequestFromPrimaryDevice;
- (oneway void)requestPinFromPrimaryDevice;
- (oneway void)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (oneway void)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID:(NSUUID *)arg1;
- (oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(_Bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setThumperCallingAllowed:(_Bool)arg1 onSecondaryDeviceWithID:(NSString *)arg2 forSenderIdentityWithUUID:(NSUUID *)arg3;
- (oneway void)setThumperCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setVoLTECallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setWiFiCallingRoamingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setWiFiCallingEnabled:(_Bool)arg1 forSenderIdentityWithUUID:(NSUUID *)arg2;
- (oneway void)setRelayCallingEnabled:(_Bool)arg1 forDeviceWithID:(NSString *)arg2;
- (oneway void)setRelayCallingEnabled:(_Bool)arg1;
@end

