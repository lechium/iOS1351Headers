//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDateInterval, NSSet, NSString;

@protocol USUsageTrackingAgent
- (void)fetchBudgetsWithIdentifier:(NSString *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)checkStatusOfBudgets:(NSArray *)arg1 clientIdentifiers:(NSArray *)arg2 replyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)checkStatusOfAllBudgetsWithReplyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg1;
- (void)checkStatusOfBudgets:(NSArray *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSArray *, NSArray *, NSArray *, NSArray *, NSError *))arg3;
- (void)stopMonitoringAllBudgetsWithReplyHandler:(void (^)(NSError *))arg1;
- (void)stopMonitoringBudgets:(NSArray *)arg1 clientIdentifier:(NSString *)arg2 replyHandler:(void (^)(NSError *))arg3;
- (void)startMonitoringBudgets:(NSArray *)arg1 darwinNotificationName:(NSString *)arg2 notificationTimes:(NSSet *)arg3 clientIdentifier:(NSString *)arg4 replyHandler:(void (^)(NSError *))arg5;
- (void)fetchReportsDuringInterval:(NSDateInterval *)arg1 partitionInterval:(double)arg2 replyHandler:(void (^)(NSArray *, NSDictionary *, NSArray *, NSError *))arg3;
@end

