//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSUUID;

@protocol IXClientDelegateProtocol <NSObject>
- (oneway void)_client_promiseWithUUID:(NSUUID *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorWithUUID:(NSUUID *)arg1 didCancelWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorWithUUID:(NSUUID *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(NSUUID *)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(NSUUID *)arg1;
@end
