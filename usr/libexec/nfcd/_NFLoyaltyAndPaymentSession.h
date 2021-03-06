//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_NFContactlessPaymentSession.h"

#import "NFHostCardAppletInterface-Protocol.h"

@class NFHostCardEmulationManager, NFLoyaltyAgent, NSMutableArray;

@interface _NFLoyaltyAndPaymentSession : _NFContactlessPaymentSession <NFHostCardAppletInterface>
{
    _Bool _emulationActive;	// 8 = 0x8
    NFLoyaltyAgent *_loyaltyAgent;	// 16 = 0x10
    NFHostCardEmulationManager *_hceManager;	// 24 = 0x18
    NSMutableArray *_events;	// 32 = 0x20
}

+ (id)validateEntitlements:(id)arg1;	// IMP=0x00000001000221c4
- (void)handleHostCardReaderDetected:(id)arg1;	// IMP=0x0000000100022a28
- (void)handleDeselect;	// IMP=0x00000001000229bc
- (id)handleAPDU:(id)arg1;	// IMP=0x0000000100022920
- (id)handleSelect:(id)arg1;	// IMP=0x00000001000228a8
- (void)supportPayment:(_Bool)arg1;	// IMP=0x0000000100022890
- (id)hostCardEmulationLog;	// IMP=0x0000000100022770
- (void)setHostCards:(id)arg1;	// IMP=0x00000001000226d8
- (_Bool)useFilteredApplets;	// IMP=0x0000000100022598
- (void)didEndSession:(id)arg1;	// IMP=0x00000001000224bc
- (void)dealloc;	// IMP=0x000000010002244c
- (id)initWithRemoteObject:(id)arg1 workQueue:(id)arg2 expressModeManager:(id)arg3 allowsBackgroundMode:(_Bool)arg4;	// IMP=0x00000001000223b8

@end

