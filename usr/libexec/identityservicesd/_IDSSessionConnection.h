//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVConferenceDelegate-Protocol.h"

@class AVConference, NSMutableArray;
@protocol OS_dispatch_queue, _IDSSessionConnectionDelegate;

@interface _IDSSessionConnection : NSObject <AVConferenceDelegate>
{
    AVConference *_connection;	// 8 = 0x8
    NSMutableArray *_connectionInfos;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    id <_IDSSessionConnectionDelegate> _delegate;	// 32 = 0x20
    long long _callID;	// 40 = 0x28
    long long _connType;	// 48 = 0x30
    long long _localCell;	// 56 = 0x38
    long long _remoteCell;	// 64 = 0x40
    _Bool _connectionActive;	// 72 = 0x48
    _Bool _connectionEnableAudio;	// 73 = 0x49
}

- (void).cxx_destruct;	// IMP=0x0000000100420fb0
@property(nonatomic) __weak id <_IDSSessionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)remoteCell;	// IMP=0x0000000100420f30
- (long long)localCell;	// IMP=0x0000000100420f14
- (long long)connectionType;	// IMP=0x0000000100420ef8
- (long long)callID;	// IMP=0x0000000100420edc
- (unsigned int)natType;	// IMP=0x0000000100420ea0
- (_Bool)muted;	// IMP=0x0000000100420e78
- (void)setMuted:(_Bool)arg1;	// IMP=0x0000000100420e60
- (_Bool)getAudioEnabled;	// IMP=0x0000000100420e38
- (void)setAudioEnabled:(_Bool)arg1;	// IMP=0x0000000100420e20
- (void)sendData:(id)arg1;	// IMP=0x0000000100420a18
- (_Bool)stopConnection:(id *)arg1;	// IMP=0x0000000100420768
- (_Bool)startConnectionAsInitiator:(_Bool)arg1 peerProtocolVersion:(unsigned int)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010041fff8
- (void)createConnectionData:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010041dbe4
- (void)receivedRemoteConnectionData:(id)arg1;	// IMP=0x000000010041d430
- (long long)bestCallID;	// IMP=0x000000010041d0a0
- (id)connectionInfoForCallID:(long long)arg1;	// IMP=0x000000010041ce4c
- (id)connectionInfoWithState:(long long)arg1;	// IMP=0x000000010041cc34
- (void)dealloc;	// IMP=0x000000010041c87c
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010041c6b4
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;	// IMP=0x0000000100422994
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x0000000100422924
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x0000000100422898
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;	// IMP=0x000000010042280c
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x0000000100422780
- (void)serverDiedForConference:(id)arg1;	// IMP=0x0000000100422734
- (void)conference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x00000001004226d0
- (void)conference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x000000010042266c
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x00000001004225e0
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x0000000100422554
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;	// IMP=0x00000001004224fc
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;	// IMP=0x00000001004224a4
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;	// IMP=0x000000010042244c
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;	// IMP=0x0000000100421f94
- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withUserInfo:(id)arg3;	// IMP=0x00000001004214b8
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;	// IMP=0x0000000100421454
- (void)conference:(id)arg1 didReceiveData:(id)arg2 forCallID:(long long)arg3;	// IMP=0x0000000100421194
- (void)conference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(long long)arg3;	// IMP=0x0000000100421130
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x00000001004210b0
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x0000000100421030

@end
