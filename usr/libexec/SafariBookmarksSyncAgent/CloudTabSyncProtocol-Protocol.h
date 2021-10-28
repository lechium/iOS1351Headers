//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol CloudTabSyncProtocol <NSObject>
- (void)userAccountChanged;
- (void)deleteCloudTabsZoneWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)fetchDevicesWithCompletionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg1;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)deleteDevicesWithUUIDStrings:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(NSDictionary *)arg1 closeRequestUUIDString:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(NSDictionary *)arg1 deviceUUIDString:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)deleteDatabaseWithCompletionHandler:(void (^)(void))arg1;
@end
