//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol LiveFSMount
- (void)LiveMountCredentialTypes:(void (^)(NSArray *))arg1;
- (void)LiveMountAddVolume:(NSString *)arg1 withListener:(NSXPCListenerEndpoint *)arg2 andWithDescription:(id)arg3 reply:(void (^)(NSError *))arg4;
- (void)LiveMountEjectDisk:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)LiveMountAddDisk:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)LiveMountAddVolume:(NSString *)arg1 atServer:(NSString *)arg2 credentialType:(long long)arg3 credential:(NSDictionary *)arg4 reply:(void (^)(NSError *))arg5;
- (void)LiveMountSharesAtServer:(NSString *)arg1 credentialType:(long long)arg2 credential:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)LiveMountEjectVolume:(NSString *)arg1 withFlags:(unsigned int)arg2 reply:(void (^)(NSError *))arg3;
- (void)LiveMountListenerForVolume:(NSString *)arg1 completionHandler:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
- (void)LiveMountListenerForVolume:(NSString *)arg1 reply:(void (^)(NSXPCListenerEndpoint *))arg2;
- (void)LiveMountList:(void (^)(NSDictionary *))arg1;
@end

