//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CXCallFailureContext, NSData, NSDate, NSString, NSUUID, TUHandle;
@protocol CSDIDSChatDelegate, CXVideoAspectRatioDescriptor;

@protocol CSDIDSChat <NSObject>
- (void)sendDataUnreliably:(NSData *)arg1;
- (void)cancelInvitationWithDeclinedElsewhere;
- (void)cancelInvitationWithAnsweredElsewhere;
- (void)end;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (void)answerWithVideoAspectRatioDescriptor:(id <CXVideoAspectRatioDescriptor>)arg1;
- (void)startWithVideoAspectRatioDescriptor:(id <CXVideoAspectRatioDescriptor>)arg1 inviteCompletion:(void (^)(NSArray *, _Bool))arg2;
@property(nonatomic, copy) NSUUID *localSenderIdentityUUID;
@property(nonatomic) _Bool shouldSuppressInCallUI;
@property(nonatomic) _Bool remoteMomentsAvailable;
- (_Bool)isRemoteMomentsAvailable;
@property(nonatomic) _Bool remoteUplinkMuted;
- (_Bool)isRemoteUplinkMuted;
@property(nonatomic) _Bool relaying;
- (_Bool)isRelaying;
@property(nonatomic) _Bool sendingVideo;
- (_Bool)isSendingVideo;
@property(nonatomic) _Bool sendingAudioData;
- (_Bool)isSendingAudioData;
@property(nonatomic) _Bool sendingAudio;
- (_Bool)isSendingAudio;
@property(nonatomic) _Bool muted;
- (_Bool)isMuted;
@property(nonatomic, copy) NSUUID *upgradeSessionUUID;
- (_Bool)isConnected;
@property(nonatomic, readonly) CXCallFailureContext *failureContext;
@property(nonatomic, readonly) long long endedReason;
@property(nonatomic, readonly) unsigned long long initialLinkType;
@property(nonatomic, readonly) NSString *remoteFromID;
@property(nonatomic, readonly) NSString *crossDeviceIdentifier;
@property(nonatomic, readonly) long long outputAudioPowerSpectrumToken;
@property(nonatomic, readonly) long long inputAudioPowerSpectrumToken;
@property(nonatomic, readonly) long long videoStreamToken;
@property(nonatomic, readonly) _Bool mayRequireBreakBeforeMake;
@property(nonatomic) _Bool video;
- (_Bool)isVideo;
- (_Bool)isOutgoing;
@property(nonatomic, readonly) NSDate *dateEnded;
@property(nonatomic, readonly) NSDate *dateConnected;
@property(nonatomic, readonly) NSDate *dateStartedConnecting;
@property(nonatomic, readonly) _Bool hasSentInvitation;
@property(nonatomic, readonly) TUHandle *handle;
@property(nonatomic, readonly) NSString *sessionUUID;
@property(nonatomic, readonly) NSUUID *UUID;
@property(nonatomic) __weak id <CSDIDSChatDelegate> delegate;

// Remaining properties
@property(nonatomic, readonly) _Bool connected;
@property(nonatomic, readonly) _Bool outgoing;
@end

