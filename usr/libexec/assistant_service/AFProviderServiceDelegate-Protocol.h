//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, NSUUID, SABaseCommand;

@protocol AFProviderServiceDelegate <NSObject>
- (oneway void)prepareForAudioHandoffFailedWithCompletion:(void (^)(void))arg1;
- (oneway void)prepareForAudioHandoffWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)getPeerInfoForCommandId:(NSString *)arg1 completion:(void (^)(AFPeerInfo *))arg2;
- (oneway void)assistantServiceWillCrashForStuckSyncPluginAtPath:(NSString *)arg1;
- (oneway void)getTimeoutSuspendedWithReply:(void (^)(_Bool))arg1;
- (oneway void)handleCommand:(SABaseCommand *)arg1 completion:(void (^)(SABaseCommand *, NSError *))arg2;
- (oneway void)getStarkModeWithReply:(void (^)(_Bool))arg1;
- (oneway void)getCarDNDModeWithReply:(void (^)(_Bool))arg1;
- (oneway void)getLockStateWithReply:(void (^)(_Bool))arg1;
- (oneway void)dismissAssistant;
- (oneway void)openURL:(NSURL *)arg1 reply:(void (^)(_Bool))arg2;
- (oneway void)syncChunksWithPreAnchor:(NSString *)arg1 postAnchor:(NSString *)arg2 updates:(NSArray *)arg3 deletes:(NSArray *)arg4 validity:(NSString *)arg5 forRequestUUID:(NSUUID *)arg6 reply:(void (^)(_Bool))arg7;
@end

