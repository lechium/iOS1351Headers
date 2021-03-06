//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ADPeerInfo, AFRequestInfo, NSData;
@protocol SAAceCommand;

@protocol ADRemoteExecution
- (void)startListeningForRemote;
- (void)startRemoteRequest:(AFRequestInfo *)arg1 onPeer:(ADPeerInfo *)arg2 completion:(void (^)(_Bool))arg3;
- (void)startRemoteSerialzedCommandExecution:(NSData *)arg1 onPeer:(ADPeerInfo *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)startRemoteExecution:(id <SAAceCommand>)arg1 onPeer:(ADPeerInfo *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end

