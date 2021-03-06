//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class LiveFSService, NSDictionary, NSObject, NSString;

@protocol LiveFSMountDelegate
- (void)LiveMountService:(LiveFSService *)arg1 ejectDisk:(NSObject *)arg2 reply:(void (^)(NSError *))arg3;
- (void)LiveMountService:(LiveFSService *)arg1 addDisk:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)LiveMountService:(LiveFSService *)arg1 addVolume:(NSString *)arg2 atServer:(NSString *)arg3 credentialType:(long long)arg4 credential:(NSDictionary *)arg5 reply:(void (^)(NSError *))arg6;
- (void)LiveMountService:(LiveFSService *)arg1 sharesAtServer:(NSString *)arg2 credentialType:(long long)arg3 credential:(NSDictionary *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)LiveMountService:(LiveFSService *)arg1 ejectVolumeCluster:(NSString *)arg2 withFlags:(unsigned int)arg3 reply:(void (^)(NSError *))arg4;
- (void)LiveMountService:(LiveFSService *)arg1 ejectVolume:(NSObject *)arg2 named:(NSString *)arg3 withFlags:(unsigned int)arg4 reply:(void (^)(NSError *))arg5;
- (void)LiveMountService:(LiveFSService *)arg1 ejectVolume:(NSObject *)arg2 named:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
@end

