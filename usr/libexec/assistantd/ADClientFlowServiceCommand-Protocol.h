//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@protocol ADClientFlowServiceCommand <NSObject>
- (void)_ad_performWithTargetQueue:(NSObject<OS_dispatch_queue> *)arg1 replyHandler:(void (^)(id <SAAceCommand>, NSError *))arg2;
@end
