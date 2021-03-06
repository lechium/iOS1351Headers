//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString;

@protocol CTXPCServiceCapabilitiesInterface
- (void)wifiCallingCTFollowUpComplete:(NSDictionary *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 removePhoneServicesDevice:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 addPhoneServicesDevice:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)getPhoneServicesDeviceInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getPhoneServicesDeviceList:(void (^)(NSDictionary *, NSError *))arg1;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 recheckPhoneServicesAccountStatus:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 getSystemCapabilities:(void (^)(NSDictionary *, NSError *))arg2;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 setCapability:(NSString *)arg2 enabled:(_Bool)arg3 info:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 getCapability:(NSString *)arg2 completion:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 canSetCapability:(NSString *)arg2 completion:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
@end

