//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPlatformImplementation-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol CPLEngineSyncManagerImplementation <CPLPlatformImplementation>
- (void)prepareForClose;
- (void)endClientWork:(NSString *)arg1;
- (void)beginClientWork:(NSString *)arg1;
- (void)setSyncSessionShouldBeForeground:(_Bool)arg1;
- (void)didFinishSyncSession;
- (void)syncSessionDidFailWithError:(NSError *)arg1;
- (void)syncSessionDidSucceed;
- (void)didProgress:(float)arg1 userInfo:(NSDictionary *)arg2 forState:(unsigned long long)arg3;
- (void)didMoveToState:(unsigned long long)arg1;
- (void)willStartSyncSession;
@end
