//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KmlSharingTransportDelegate-Protocol.h"

@class KeySigningRequest, KmlSharingConfig, KmlSharingTransport, NSData, NSError, NSString, SEEndPoint, SEEndPointAuthorizeResponse;
@protocol KmlOwnerSharingSessionDelegate, OS_dispatch_queue;

@interface KmlOwnerSharingSession : NSObject <KmlSharingTransportDelegate>
{
    long long _currentState;	// 8 = 0x8
    KmlSharingConfig *_sharingConfig;	// 16 = 0x10
    NSData *_sharingInvitation;	// 24 = 0x18
    KeySigningRequest *_signingRequest;	// 32 = 0x20
    NSData *_signedRequest;	// 40 = 0x28
    NSData *_entitlements;	// 48 = 0x30
    NSData *_keyConfig;	// 56 = 0x38
    NSData *_bindingAttestation;	// 64 = 0x40
    SEEndPoint *_ownerEndPoint;	// 72 = 0x48
    SEEndPointAuthorizeResponse *_epAuthResponse;	// 80 = 0x50
    KmlSharingTransport *_ksTransport;	// 88 = 0x58
    NSError *_sharingResult;	// 96 = 0x60
    NSData *_friendKeyId;	// 104 = 0x68
    NSString *_friendKeyIdStr;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 120 = 0x78
    NSString *_sharingInvitationId;	// 128 = 0x80
    id <KmlOwnerSharingSessionDelegate> _sessionDelegate;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000010003b5d0
@property(nonatomic) __weak id <KmlOwnerSharingSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(retain, nonatomic) NSString *sharingInvitationId; // @synthesize sharingInvitationId=_sharingInvitationId;
- (long long)sharingConfigState;	// IMP=0x000000010003b570
- (void)updateSharingConfig;	// IMP=0x000000010003b480
- (void)saveEntitlements;	// IMP=0x000000010003b1a0
- (id)updatePrivateDataAfterSigning;	// IMP=0x000000010003adfc
- (void)verifyAndSignTheRequest;	// IMP=0x000000010003a694
- (void)verifyAndParseIncomingMessage:(id)arg1 uuid:(id)arg2 messageType:(long long)arg3 from:(id)arg4 keyIdentifier:(id)arg5 bindingAttestation:(id)arg6;	// IMP=0x000000010003a1ec
- (id)buildSharingInvitation;	// IMP=0x000000010003a034
- (void)sendCancelResponse;	// IMP=0x0000000100039d88
- (void)setCurrentState_sync:(long long)arg1;	// IMP=0x00000001000395c4
- (void)setCurrentState:(long long)arg1;	// IMP=0x0000000100039558
- (void)handleSendMessageResult:(id)arg1;	// IMP=0x0000000100039384
- (void)handleTransportSetupResult:(id)arg1;	// IMP=0x0000000100039230
- (void)handleIncomingMessage:(id)arg1 metaData:(id)arg2 bindingAttestation:(id)arg3 keyIdentifier:(id)arg4 uuid:(id)arg5 messageType:(long long)arg6 targetDeviceType:(long long)arg7 remoteIdsIdentifier:(id)arg8;	// IMP=0x0000000100039054
- (void)cleanup;	// IMP=0x000000010003900c
- (unsigned char)slotIdentifierIndex;	// IMP=0x0000000100038fa8
- (long long)targetDevice;	// IMP=0x0000000100038f44
- (void)updateSharingRecordWithUpdater_sync:(id)arg1;	// IMP=0x0000000100038e70
- (void)cancelKeySharing;	// IMP=0x0000000100038c64
- (void)startKeySharingSession;	// IMP=0x0000000100038c54
- (id)createSharingInvitation;	// IMP=0x00000001000389d8
- (void)dealloc;	// IMP=0x0000000100038974
- (id)initWithConfig:(id)arg1 endpoint:(id)arg2 delegate:(id)arg3 regenerate:(_Bool)arg4;	// IMP=0x00000001000386b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

