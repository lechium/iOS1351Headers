//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSURL, NSUUID, SFClientGetDeviceAssetsParams, SFClientSubCredentialParams, SFContactInfo, SFDevice, SFPeopleSuggesterParams;

@protocol SDXPCClientInterface
- (void)wifiPasswordSharingAvailabilityWithCompletion:(void (^)(unsigned int, NSError *))arg1;
- (void)triggerProximityAutoFillDetectedWithURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)triggerHomeKitDeviceDetectedWithURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)testContinuityKeyboardBegin:(_Bool)arg1;
- (void)showDevicePickerWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setupDevice:(SFDevice *)arg1 homeIdentifier:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)setAudioRoutingScore:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)retriggerProximitySetup:(void (^)(NSError *))arg1;
- (void)retriggerProximityPairing:(void (^)(NSError *))arg1;
- (void)repairDevice:(SFDevice *)arg1 flags:(unsigned int)arg2 completion:(void (^)(NSError *))arg3;
- (void)reenableProxCardType:(unsigned char)arg1 completion:(void (^)(NSError *))arg2;
- (void)preventExitForLocaleReason:(NSString *)arg1;
- (void)preheatXPCConnection;
- (void)openSetupURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getPeopleSuggestions:(SFPeopleSuggesterParams *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getDeviceAssets:(SFClientGetDeviceAssetsParams *)arg1 completion:(void (^)(SFClientGetDeviceAssetsResults *, NSError *))arg2;
- (void)findContact:(SFContactInfo *)arg1 completion:(void (^)(SFContactInfo *, NSError *))arg2;
- (void)displayStringForContactIdentifier:(NSString *)arg1 deviceIdentifier:(NSUUID *)arg2 completion:(void (^)(NSString *, _Bool, NSError *))arg3;
- (void)displayNameForEmailHash:(NSString *)arg1 phoneHash:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)contactIDForEmailHash:(NSString *)arg1 phoneHash:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)broadwayPresentCardWithCode:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)subCredentialPresentCardWithParams:(SFClientSubCredentialParams *)arg1 completion:(void (^)(NSError *))arg2;
- (void)appleIDInfoWithCompletion:(void (^)(NSString *, NSData *, NSError *))arg1;
- (void)activityStateWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (void)activateAssertionWithIdentifier:(NSString *)arg1;
@end

