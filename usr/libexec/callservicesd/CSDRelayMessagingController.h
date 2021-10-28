//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDRelayIDSMessengerDelegate-Protocol.h"
#import "CSDRelayIDSSessionMessengerDelegate-Protocol.h"

@class CSDRelayIDSSessionMessenger, CSDRelayPairedDeviceMessenger, IDSDevice, NSString;
@protocol CSDRelayMessagingControllerClientMessagingDelegate, CSDRelayMessagingControllerCommonMessagingDelegate, CSDRelayMessagingControllerDelegate, CSDRelayMessagingControllerHostMessagingDelegate, OS_dispatch_queue, TUCallContainerPrivate;

@interface CSDRelayMessagingController : NSObject <CSDRelayIDSMessengerDelegate, CSDRelayIDSSessionMessengerDelegate>
{
    id <CSDRelayMessagingControllerDelegate> _delegate;	// 8 = 0x8
    id <CSDRelayMessagingControllerClientMessagingDelegate> _clientMessagingDelegate;	// 16 = 0x10
    id <CSDRelayMessagingControllerHostMessagingDelegate> _hostMessagingDelegate;	// 24 = 0x18
    id <CSDRelayMessagingControllerCommonMessagingDelegate> _commonMessagingDelegate;	// 32 = 0x20
    CSDRelayIDSSessionMessenger *_sessionMessenger;	// 40 = 0x28
    CSDRelayPairedDeviceMessenger *_pairedDeviceMessenger;	// 48 = 0x30
    IDSDevice *_dialingIDSDevice;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    id <TUCallContainerPrivate> _callCenter;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000622cc
@property(readonly, nonatomic) id <TUCallContainerPrivate> callCenter; // @synthesize callCenter=_callCenter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSDevice *dialingIDSDevice; // @synthesize dialingIDSDevice=_dialingIDSDevice;
@property(readonly, nonatomic) CSDRelayPairedDeviceMessenger *pairedDeviceMessenger; // @synthesize pairedDeviceMessenger=_pairedDeviceMessenger;
@property(readonly, nonatomic) CSDRelayIDSSessionMessenger *sessionMessenger; // @synthesize sessionMessenger=_sessionMessenger;
@property(nonatomic) __weak id <CSDRelayMessagingControllerCommonMessagingDelegate> commonMessagingDelegate; // @synthesize commonMessagingDelegate=_commonMessagingDelegate;
@property(nonatomic) __weak id <CSDRelayMessagingControllerHostMessagingDelegate> hostMessagingDelegate; // @synthesize hostMessagingDelegate=_hostMessagingDelegate;
@property(nonatomic) __weak id <CSDRelayMessagingControllerClientMessagingDelegate> clientMessagingDelegate; // @synthesize clientMessagingDelegate=_clientMessagingDelegate;
@property(nonatomic) __weak id <CSDRelayMessagingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disconnectMessagingConnectionForCall:(id)arg1;	// IMP=0x0000000100062174
- (void)prepareToDisconnectMessagingConnectionForCall:(id)arg1;	// IMP=0x00000001000620e0
- (void)performBlockOnTransportAvailability:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000100062058
- (id)identifiersForSessionInvitationWithMessage:(id)arg1;	// IMP=0x0000000100061e2c
- (long long)timeoutForInvitationWithMessage:(id)arg1;	// IMP=0x0000000100061d80
- (id)bundleIdentifierForProvider:(id)arg1;	// IMP=0x0000000100061cd0
- (_Bool)shouldScreenTimeRestrictMessage:(id)arg1;	// IMP=0x0000000100061ad0
- (_Bool)shouldIgnoreSessionInviteWithMessage:(id)arg1 fromDestination:(id)arg2;	// IMP=0x00000001000612bc
- (_Bool)shouldProcessRelayMessageOfType:(int)arg1;	// IMP=0x0000000100061238
- (_Bool)shouldDeclineSessionInviteWithMessageWhenRelayIsDisabled:(id)arg1;	// IMP=0x000000010006122c
- (_Bool)shouldDeclineSecondSessionInviteWithMessage:(id)arg1;	// IMP=0x0000000100061220
- (_Bool)_shouldDeclineSessionInviteWithMessage:(id)arg1;	// IMP=0x00000001000611f8
- (void)messengerConnectionCouldNotEstablishLink:(id)arg1 forIdentifiers:(id)arg2 didStartConnecting:(_Bool)arg3;	// IMP=0x0000000100061158
- (void)messengerConnectionFailed:(id)arg1 forIdentifiers:(id)arg2 didStartConnecting:(_Bool)arg3;	// IMP=0x00000001000610b8
- (void)messengerConnectionEnded:(id)arg1 forIdentifiers:(id)arg2 didStartConnecting:(_Bool)arg3;	// IMP=0x0000000100061018
- (void)messenger:(id)arg1 handledMessage:(id)arg2 fromDestination:(id)arg3 device:(id)arg4;	// IMP=0x00000001000601f0
- (void)requestAnswerForRequest:(id)arg1 forCall:(id)arg2;	// IMP=0x000000010005ff60
- (void)sendUpdateSystemVolumeForCall:(id)arg1 volume:(float)arg2;	// IMP=0x000000010005fdbc
- (void)sendSuppressRingtoneMessageForCall:(id)arg1;	// IMP=0x000000010005fc64
- (void)sendSetUplinkMutedCallMessageForCall:(id)arg1 uplinkMuted:(_Bool)arg2;	// IMP=0x000000010005f9f8
- (void)sendSetTTYTypeCallMessageForCall:(id)arg1 ttyType:(int)arg2;	// IMP=0x000000010005f804
- (void)sendPlayDTMFToneForKeyMessageForCall:(id)arg1 DTMFKey:(unsigned char)arg2;	// IMP=0x000000010005f6f4
- (void)sendPickRouteMessageToHostForRoute:(id)arg1;	// IMP=0x000000010005f594
- (void)sendUpdateRemoteUplinkMutedCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005f3a0
- (void)sendPushRelayingCallsMessageToHostForSourceIdentifier:(id)arg1;	// IMP=0x000000010005f260
- (void)sendPullCallsMessageToHost;	// IMP=0x000000010005edc8
- (void)sendRequestCallStateMessageToHost;	// IMP=0x000000010005ece8
- (void)sendSendHardPauseDigitsMessageToHostForCall:(id)arg1;	// IMP=0x000000010005eb94
- (void)sendDisconnectAllCallsMessageToHostForDisconnectedCall:(id)arg1;	// IMP=0x000000010005e9f4
- (void)sendDisconnectCurrentCallAndActivateHeldMessageToHostForDisconnectedCall:(id)arg1;	// IMP=0x000000010005e854
- (void)sendHoldActiveAndAnswerCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005e3a0
- (void)sendEndHeldAndAnswerCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005e040
- (void)sendEndActiveAndAnswerCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005dce0
- (void)sendSwapCallsMessageToHost;	// IMP=0x000000010005dbb0
- (void)sendUngroupCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005d9e0
- (void)sendGroupCallMessageToHostForCall:(id)arg1 otherCall:(id)arg2;	// IMP=0x000000010005d7b8
- (void)sendUnholdCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005d5e8
- (void)sendHoldCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005d418
- (void)sendDisconnectCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005d224
- (void)sendAnswerCallMessageToHostForCall:(id)arg1;	// IMP=0x000000010005cce0
- (void)sendDialCallMessageToHostForCall:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005c560
- (void)sendUpdateRoutesMessageToClientForRoutes:(id)arg1;	// IMP=0x000000010005c344
- (void)sendInvitationSentMessageToClientForCall:(id)arg1;	// IMP=0x000000010005c174
- (void)sendNeedsManualInCallSoundsChangeMessageToClientForCall:(id)arg1;	// IMP=0x000000010005bf5c
- (void)sendUpdateCallContextMessageToClientForCallProviderManager:(id)arg1;	// IMP=0x000000010005bd70
- (void)sendPushCallsMessageToClientDestination:(id)arg1;	// IMP=0x000000010005b560
- (void)sendDialCallFailedForUniqueProxyIdentifier:(id)arg1 withDisconnectedReason:(int)arg2;	// IMP=0x000000010005b454
- (void)sendDialCallFailedForScreenTimeForUniqueProxyIdentifier:(id)arg1;	// IMP=0x000000010005b378
- (void)sendDialCallFailedForUniqueProxyIdentifier:(id)arg1;	// IMP=0x000000010005b29c
- (void)sendCallStartedConnectingMessageToClientForCall:(id)arg1;	// IMP=0x000000010005b0b8
- (void)sendUpdateRemoteCallStateMessageToClient;	// IMP=0x000000010005ae28
- (void)sendHardPauseAvailabilityMessageToClientForState:(int)arg1 digits:(id)arg2;	// IMP=0x000000010005acc8
- (void)sendResetStateMessageToClient;	// IMP=0x000000010005aa6c
- (void)sendPullRelayingCallsMessageToClient;	// IMP=0x000000010005a990
- (void)sendDeviceUnavailableMessageToClientForUniqueProxyIdentifier:(id)arg1;	// IMP=0x000000010005a894
- (void)sendUpdateCallModelMessageToClientForCall:(id)arg1;	// IMP=0x000000010005a68c
- (void)sendUpdateSupportsTTYWithVoiceCallMessageToClientForCall:(id)arg1;	// IMP=0x000000010005a498
- (void)sendUpdateRemoteUplinkMutedCallMessageToClientForCall:(id)arg1;	// IMP=0x000000010005a1e0
- (void)sendUpdateCallDisplayContextMessageToClientForCall:(id)arg1;	// IMP=0x0000000100059fa0
- (void)sendResetWantsHoldMusicMessageToClientForCall:(id)arg1;	// IMP=0x0000000100059dd0
- (void)sendCallConnectedMessageToClientForCall:(id)arg1;	// IMP=0x0000000100059bb4
- (void)sendCallDisconnectedMessageToClientForCall:(id)arg1;	// IMP=0x00000001000599d0
- (void)sendCallAnsweredElsewhereMessageToClientForCall:(id)arg1;	// IMP=0x0000000100059800
- (void)sendCallDialedMessageToClientForCall:(id)arg1;	// IMP=0x00000001000592b0
- (void)sendIncomingCallMessageToClientForCall:(id)arg1 cannotBeAnswered:(_Bool)arg2 cannotRelayAudioOrVideoOnPairedDevice:(_Bool)arg3;	// IMP=0x0000000100058998
- (void)_handleRetrievedLocalInviteDictionary:(id)arg1 forMessage:(id)arg2;	// IMP=0x00000001000587c0
- (id)_callsWithUniqueProxyIdentifiers:(id)arg1;	// IMP=0x00000001000585dc
- (_Bool)_shouldSendToPairedIDSDevice;	// IMP=0x0000000100058474
- (void)_updateDialingIDSDevice;	// IMP=0x0000000100057eec
- (void)_handleConferenceConnectionDidReceiveData:(id)arg1;	// IMP=0x0000000100057bfc
- (void)_handleConferenceConnectionDidClose:(id)arg1;	// IMP=0x0000000100057abc
- (void)_handleConferenceConnectionWillClose:(id)arg1;	// IMP=0x000000010005797c
- (long long)_relayInvitationTimeoutForTimeout:(long long)arg1;	// IMP=0x0000000100057974
- (void)dealloc;	// IMP=0x00000001000578fc
@property(readonly, copy) NSString *debugDescription;
- (id)initWithQueue:(id)arg1 callContainer:(id)arg2 sessionMessenger:(id)arg3;	// IMP=0x0000000100057664
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000575b0

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
