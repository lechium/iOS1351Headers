//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CRVehicle, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol CRCarKitService
- (void)fetchSessionInstrumentClusterURLsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchInstrumentClusterURLsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)vehicleIdentifierForCertificateSerial:(NSData *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)handleCarPlayDiagnosticsWithDeviceScreenshotURL:(NSURL *)arg1 carScreenshotURL:(NSURL *)arg2 attachmentURLs:(NSArray *)arg3 activeBundleIdentifier:(NSString *)arg4 reply:(void (^)(void))arg5;
- (void)isCarPlayAllowedWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)handleCarPlayRestrictionChangedWithReply:(void (^)(void))arg1;
- (void)isEnhancedIntegrationEnabledWithCertificateSerial:(NSData *)arg1 reply:(void (^)(unsigned long long, NSError *))arg2;
- (void)isPairedWithCertificateSerial:(NSData *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)allowsConnectionsForCertificateSerial:(NSData *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)allowsConnectionsForWiFiUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)saveWiFiCredentialsForAccessoryConnectionIdentifier:(unsigned long long)arg1 credentials:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSString *, NSError *))arg3;
- (void)isBluetoothInCarWithReply:(void (^)(_Bool, NSString *, NSError *))arg1;
- (void)handleDidDisconnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)handleDidConnectBluetoothAddress:(NSString *)arg1 reply:(void (^)(_Bool, NSString *, NSError *))arg2;
- (void)hasVehiclesWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)fetchAllVehiclesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)removeVehicle:(CRVehicle *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)saveVehicle:(CRVehicle *)arg1 reply:(void (^)(CRVehicle *, NSError *))arg2;
@end

