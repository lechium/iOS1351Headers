//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol REPredictionServer <NSObject>
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(NSString *)arg1 actionIdentifier:(unsigned long long)arg2 completion:(void (^)(unsigned long long))arg3;
- (void)fetchFirstPerformedActionDate:(void (^)(NSDate *))arg1;
- (void)requestPredictedActionsWithCompletion:(void (^)(NSArray *, NSArray *))arg1;
@end
