//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCSessionDelegate-Protocol.h"
#import "AVCSessionParticipantDelegate-Protocol.h"
#import "CSDAVCSession-Protocol.h"

@class AVCSession, NSData, NSMutableDictionary, NSString;
@protocol CSDAVCSessionDelegate, OS_dispatch_queue;

@interface CSDAVCSession : NSObject <AVCSessionParticipantDelegate, AVCSessionDelegate, CSDAVCSession>
{
    _Bool _audioReady;	// 8 = 0x8
    AVCSession *_session;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <CSDAVCSessionDelegate> _delegate;	// 32 = 0x20
    NSMutableDictionary *_remoteParticipantsByIdentifier;	// 40 = 0x28
    NSMutableDictionary *_pendingRemovedParticipantsByID;	// 48 = 0x30
}

+ (id)defaultConfiguration;	// IMP=0x00000001000f7384
- (void).cxx_destruct;	// IMP=0x00000001000fa68c
@property(readonly, nonatomic) NSMutableDictionary *pendingRemovedParticipantsByID; // @synthesize pendingRemovedParticipantsByID=_pendingRemovedParticipantsByID;
@property(readonly, nonatomic) NSMutableDictionary *remoteParticipantsByIdentifier; // @synthesize remoteParticipantsByIdentifier=_remoteParticipantsByIdentifier;
@property(readonly, nonatomic) __weak id <CSDAVCSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) AVCSession *session; // @synthesize session=_session;
- (void)participant:(id)arg1 mediaPrioritiesDidChange:(id)arg2;	// IMP=0x00000001000fa4f4
- (void)participant:(id)arg1 remoteVideoEnabledDidChange:(_Bool)arg2;	// IMP=0x00000001000fa394
- (void)participant:(id)arg1 remoteAudioEnabledDidChange:(_Bool)arg2;	// IMP=0x00000001000fa234
- (void)session:(id)arg1 videoPaused:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000fa0a8
- (void)session:(id)arg1 videoEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000f9f1c
- (void)session:(id)arg1 audioEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000f9d90
- (void)session:(id)arg1 didUpdate:(_Bool)arg2 configuration:(id)arg3 error:(id)arg4;	// IMP=0x00000001000f9c3c
- (void)session:(id)arg1 removeParticipant:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000f9970
- (void)session:(id)arg1 addParticipant:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000f95f4
- (void)sessionServerDidDisconnect:(id)arg1;	// IMP=0x00000001000f952c
- (void)session:(id)arg1 didDetectError:(id)arg2;	// IMP=0x00000001000f9408
- (void)session:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x00000001000f92e4
- (void)session:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000f91b0
- (void)stop;	// IMP=0x00000001000f90ec
- (void)start;	// IMP=0x00000001000f9028
- (void)commitParticipantUpdates;	// IMP=0x00000001000f8f64
- (void)beginParticipantUpdates;	// IMP=0x00000001000f8ea0
- (void)setVideoQuality:(unsigned long long)arg1 visibility:(id)arg2 prominence:(id)arg3 forParticipantWithIdentifier:(unsigned long long)arg4;	// IMP=0x00000001000f8c10
- (void)setAudioAndVideoMuted:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000f8a40
- (void)setVideoEnabled:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000f8884
- (void)setAudioEnabled:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000f86c8
- (void)setDownlinkMuted:(_Bool)arg1 forParticipantWithIdentifier:(unsigned long long)arg2;	// IMP=0x00000001000f850c
- (void)removeParticipant:(id)arg1;	// IMP=0x00000001000f8110
- (void)addParticipant:(id)arg1 withVideoEnabled:(_Bool)arg2;	// IMP=0x00000001000f7d74
- (void)setRelaying:(_Bool)arg1;	// IMP=0x00000001000f7c0c
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property(nonatomic, getter=isAudioReady) _Bool audioReady; // @synthesize audioReady=_audioReady;
@property(readonly, nonatomic) long long maxVideoDecodesAllowed;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier;
@property(readonly, nonatomic) long long sessionToken;
@property(readonly, copy, nonatomic) NSData *localParticipantData;
- (id)initWithTransportToken:(id)arg1 delegate:(id)arg2 queue:(id)arg3 reportingHierarchyToken:(id)arg4;	// IMP=0x00000001000f71b0
- (id)initWithSessionCreationBlock:(CDUnknownBlockType)arg1 transportToken:(id)arg2 delegate:(id)arg3 queue:(id)arg4 reportingHierarchyToken:(id)arg5;	// IMP=0x00000001000f6fdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

