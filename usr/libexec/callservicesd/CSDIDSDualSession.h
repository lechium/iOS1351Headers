//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSDIDSSession.h"

#import "CSDIDSDualSessionProviderDelegate-Protocol.h"

@class CSDIDSTransport, NSNumber, NSString;
@protocol CSDIDSDualSessionDelegate, CSDIDSDualSessionProvider;

@interface CSDIDSDualSession : CSDIDSSession <CSDIDSDualSessionProviderDelegate>
{
    _Bool _initiator;	// 8 = 0x8
    _Bool _hasStartedConnecting;	// 9 = 0x9
    _Bool _hasConnected;	// 10 = 0xa
    int _endedReason;	// 12 = 0xc
    int _state;	// 16 = 0x10
    id <CSDIDSDualSessionDelegate> _delegate;	// 24 = 0x18
    NSNumber *_remoteProtocolVersionNumber;	// 32 = 0x20
    id <CSDIDSDualSessionProvider> _sessionProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010006bfc4
@property(readonly, nonatomic) id <CSDIDSDualSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) NSNumber *remoteProtocolVersionNumber; // @synthesize remoteProtocolVersionNumber=_remoteProtocolVersionNumber;
@property(nonatomic) _Bool hasConnected; // @synthesize hasConnected=_hasConnected;
@property(nonatomic) _Bool hasStartedConnecting; // @synthesize hasStartedConnecting=_hasStartedConnecting;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isInitiator) _Bool initiator; // @synthesize initiator=_initiator;
@property(nonatomic) int endedReason; // @synthesize endedReason=_endedReason;
@property(nonatomic) __weak id <CSDIDSDualSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionProvider:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000010006bdbc
- (void)sessionProvider:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000010006bc9c
- (void)sessionProvider:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000010006bb7c
- (void)sessionProvider:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x000000010006ba5c
- (void)sessionProvider:(id)arg1 endedWithReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x000000010006b5c4
- (void)sessionProvider:(id)arg1 invitationSentToPushTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;	// IMP=0x000000010006b468
- (void)sessionProviderStarted:(id)arg1;	// IMP=0x000000010006b2d4
- (void)end;	// IMP=0x000000010006b1e8
- (void)reconnectSession;	// IMP=0x000000010006b110
- (void)_declineInvitationWithData:(id)arg1 alwaysSendData:(_Bool)arg2;	// IMP=0x000000010006af64
- (void)declineInvitation;	// IMP=0x000000010006aea4
- (void)_cancelInvitationWithData:(id)arg1 reason:(int)arg2 alwaysSendData:(_Bool)arg3;	// IMP=0x000000010006ac04
- (void)cancelInvitation;	// IMP=0x000000010006ab40
- (void)_acceptInvitationWithData:(id)arg1 alwaysSendData:(_Bool)arg2;	// IMP=0x000000010006a994
- (void)acceptInvitation;	// IMP=0x000000010006a8d4
- (void)_sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2 alwaysSendData:(_Bool)arg3;	// IMP=0x000000010006a734
- (void)sendInvitation;	// IMP=0x000000010006a670
- (void)sendData:(id)arg1;	// IMP=0x000000010006a4a4
@property(nonatomic) double invitationTimeout;
@property(readonly, nonatomic) CSDIDSTransport *transport;
- (void)setReceiverProtocolVersion:(int)arg1;	// IMP=0x000000010006a11c
@property(readonly, nonatomic) int remoteProtocolVersion;
@property(readonly, nonatomic) long long underlyingErrorCode;
- (id)propertiesDescription;	// IMP=0x0000000100069ed8
- (id)initAsReceiverWithSessionProvider:(id)arg1 remoteProtocolVersion:(int)arg2;	// IMP=0x0000000100069e3c
- (id)initAsInitiatorWithSessionProvider:(id)arg1;	// IMP=0x0000000100069e28
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteProtocolVersion:(id)arg3;	// IMP=0x0000000100069d1c
- (id)init;	// IMP=0x0000000100069c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
