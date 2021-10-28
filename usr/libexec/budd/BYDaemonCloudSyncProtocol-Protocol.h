//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol BYDaemonCloudSyncProtocol <NSObject>
- (void)cloudSyncProgressUpdate:(long long)arg1 completedClients:(long long)arg2 errors:(NSArray *)arg3 completion:(void (^)(void))arg4;
- (void)isSyncInProgress:(void (^)(_Bool, double))arg1;
- (void)cancelSync:(void (^)(void))arg1;
- (void)startSync:(void (^)(void))arg1;
- (void)needsToSync:(void (^)(unsigned long long))arg1;
@end
