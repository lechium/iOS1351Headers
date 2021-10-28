//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPMassUnpairerDelegate-Protocol.h"
#import "EPTransaction-Protocol.h"

@class EPMassUnpairer, EPRoutingSlipEntry, NSString;
@protocol EPTransactionDelegate;

@interface EPSagaTransactionUnpairBluetoothDevice : NSObject <EPMassUnpairerDelegate, EPTransaction>
{
    id <EPTransactionDelegate> _delegate;	// 8 = 0x8
    EPMassUnpairer *_unpairer;	// 16 = 0x10
    EPRoutingSlipEntry *_routingSlipEntry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000de8f0
@property(retain, nonatomic) EPRoutingSlipEntry *routingSlipEntry; // @synthesize routingSlipEntry=_routingSlipEntry;
@property(retain, nonatomic) EPMassUnpairer *unpairer; // @synthesize unpairer=_unpairer;
@property(nonatomic) __weak id <EPTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unpairerBluetoothMayHaveFailed:(id)arg1;	// IMP=0x00000001000de75c
- (void)unpairer:(id)arg1 didFinishUnpairingDevices:(id)arg2;	// IMP=0x00000001000de690
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x00000001000de4e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
