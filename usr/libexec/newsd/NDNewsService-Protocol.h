//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate;
@protocol NTHeadlineAnalyticsElementProviding, NTTodayResultOperationInfoProviding;

@protocol NDNewsService <NSObject>
- (void)markAnalyticsElement:(id <NTHeadlineAnalyticsElementProviding>)arg1 asReadAtDate:(NSDate *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)markAnalyticsElements:(NSArray *)arg1 asSeenAtDate:(NSDate *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)fetchLatestResultsWithParameters:(id <NTTodayResultOperationInfoProviding>)arg1 completion:(void (^)(NTTodayResults *, NSDictionary *, NSObject<NTTodayResultOperationFetchInfoProviding> *, NSError *, _Bool))arg2;
@end
