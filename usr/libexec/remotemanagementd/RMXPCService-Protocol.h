//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSString, NSURL, RMGenericAuthenticationCredential;

@protocol RMXPCService
- (void)fetchConfigurationsWithTypes:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)sendStatusForSubscriptionsWithIdentifiers:(NSArray *)arg1 toManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)queryForStatusSubscriptionsWithIdentifiers:(NSArray *)arg1 fromManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)sendStatusForKeyPaths:(NSArray *)arg1 toManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)queryForStatusWithKeyPaths:(NSArray *)arg1 fromManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)sendStatusData:(NSData *)arg1 toManagementSourceWithIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deviceChannelEnrollmentExistsWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)syncWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)unenrollWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)enrollUserChannelWithURI:(NSURL *)arg1 authenticationCredential:(RMGenericAuthenticationCredential *)arg2 withDataSeparation:(_Bool)arg3 passcodeData:(NSData *)arg4 completionHandler:(void (^)(NSString *, NSError *))arg5;
- (void)enrollDeviceChannelWithURI:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
@end
