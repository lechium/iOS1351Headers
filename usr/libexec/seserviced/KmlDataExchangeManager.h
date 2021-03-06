//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KmlPairingTransportDelegate-Protocol.h"

@class KmlCommandHandler, KmlSecureChannel, NSData, NSError, NSString;
@protocol KmlDataExchangeManagerDelegate, KmlPairingTransportProtocol, OS_dispatch_queue;

@interface KmlDataExchangeManager : NSObject <KmlPairingTransportDelegate>
{
    long long _currentState;	// 8 = 0x8
    KmlSecureChannel *_secureChannel;	// 16 = 0x10
    NSString *_pairingPassword;	// 24 = 0x18
    long long _requestToReportError;	// 32 = 0x20
    NSError *_dxmError;	// 40 = 0x28
    NSData *_opaqueAttestation;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dxManagerQueue;	// 56 = 0x38
    KmlCommandHandler *_commandHandler;	// 64 = 0x40
    id <KmlPairingTransportProtocol> _pairingTransport;	// 72 = 0x48
    id <KmlDataExchangeManagerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000010004111c
@property(nonatomic) __weak id <KmlDataExchangeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleIncomingApdu:(id)arg1 error:(id)arg2;	// IMP=0x000000010004102c
- (void)handleTransactionEndResult:(id)arg1;	// IMP=0x0000000100040cfc
- (void)handleTransactionStartResult:(id)arg1;	// IMP=0x0000000100040be0
- (void)handleSessionEndResult:(id)arg1;	// IMP=0x00000001000408e0
- (void)handleSessionStartResult:(id)arg1;	// IMP=0x00000001000405a0
- (id)handleBail:(id)arg1 continueReading:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000100040380
- (id)handleIncomingCommand:(id)arg1 continueReading:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x000000010003ff54
- (void)handleReceivedAPDU:(id)arg1;	// IMP=0x000000010003fcb0
- (void)reportErrorOnMessage:(long long)arg1;	// IMP=0x000000010003fc54
- (void)endProbing;	// IMP=0x000000010003fa9c
- (_Bool)startProbing;	// IMP=0x000000010003f988
- (void)cancelFirstPostPairingTransaction;	// IMP=0x000000010003f8f4
- (_Bool)startFirstPostPairingTransaction;	// IMP=0x000000010003f7a0
- (void)startMailboxConfiguration;	// IMP=0x000000010003f70c
- (id)getOpqueAttestation;	// IMP=0x000000010003f704
- (id)getOwnerKeyConfig;	// IMP=0x000000010003f698
- (void)reportKeyCreationFailed;	// IMP=0x000000010003f488
- (void)cancelOwnerPairing;	// IMP=0x000000010003f3ac
- (void)continueKeyExchangeWithDeviceCertificate:(id)arg1 instanceAttestation:(id)arg2 keyAttestation:(id)arg3 keyName:(id)arg4;	// IMP=0x000000010003f19c
- (_Bool)startOwnerPairing;	// IMP=0x000000010003f054
- (void)setCurrentState_sync:(long long)arg1;	// IMP=0x000000010003ea64
- (void)setCurrentState:(long long)arg1;	// IMP=0x000000010003e9cc
- (id)initWithDelegate:(id)arg1 pairingPassword:(id)arg2;	// IMP=0x000000010003e800
- (id)init;	// IMP=0x000000010003e7ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

