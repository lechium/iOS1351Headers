//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KmlPairingTransportProtocol-Protocol.h"
#import "NFHCESessionDelegate-Protocol.h"
#import "NFLoyaltyAndPaymentSessionDelegate-Protocol.h"

@class NFHCESession, NFHardwareManager, NFLoyaltyAndPaymentSession, NSError, NSString, NSTimer;
@protocol KmlPairingTransportDelegate, NFSession, OS_dispatch_queue;

@interface KmlNfcPairingTransport : NSObject <NFHCESessionDelegate, NFLoyaltyAndPaymentSessionDelegate, KmlPairingTransportProtocol>
{
    long long _currentState;	// 8 = 0x8
    NFHardwareManager *_opNFManager;	// 16 = 0x10
    id <NFSession> _activeSession;	// 24 = 0x18
    NFHCESession *_activeHceSession;	// 32 = 0x20
    NFLoyaltyAndPaymentSession *_activeLoyaltyPaymentSession;	// 40 = 0x28
    _Bool _readInProgress;	// 48 = 0x30
    NSError *_errorToReport;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_readApduQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_nfcTransportQueue;	// 72 = 0x48
    NSTimer *_endTransactionTimer;	// 80 = 0x50
    id <KmlPairingTransportDelegate> delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100043ee8
@property(nonatomic) __weak id <KmlPairingTransportDelegate> delegate; // @synthesize delegate;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;	// IMP=0x0000000100043c6c
- (void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;	// IMP=0x00000001000439c0
- (void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;	// IMP=0x00000001000438bc
- (void)hceSession:(id)arg1 didReceiveAPDU:(id)arg2;	// IMP=0x0000000100043778
- (void)hceSessionDidEndUnexpectedly:(id)arg1;	// IMP=0x0000000100043520
- (void)hceSessionDidDisconnect:(id)arg1;	// IMP=0x0000000100043420
- (void)hceSessionDidConnect:(id)arg1;	// IMP=0x00000001000432f8
- (void)endTransaction_sync;	// IMP=0x00000001000432c0
- (void)startLoyaltyAndPaymentSession;	// IMP=0x0000000100042f90
- (void)readAPDU_sync;	// IMP=0x0000000100042df4
- (double)loyaltyAndPaymentTimeLimit;	// IMP=0x0000000100042d78
- (void)cleanup;	// IMP=0x0000000100042c84
- (void)startEndTransactionTimer;	// IMP=0x0000000100042a94
- (void)setCurrentState_sync:(long long)arg1;	// IMP=0x0000000100042320
- (void)setCurrentState:(long long)arg1;	// IMP=0x0000000100042288
- (void)reset;	// IMP=0x00000001000421ec
- (void)sendApdu:(id)arg1;	// IMP=0x0000000100042118
- (void)readApdu;	// IMP=0x0000000100042020
- (void)endTransaction;	// IMP=0x0000000100041fb8
- (void)startTransaction;	// IMP=0x0000000100041d84
- (void)endSession;	// IMP=0x0000000100041cf0
- (void)startSession;	// IMP=0x0000000100041abc
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100041918
- (id)init;	// IMP=0x00000001000418e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
