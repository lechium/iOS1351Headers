//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPSagaTransactionRoutingSlip.h"

#import "EPResourceOwnerDelegate-Protocol.h"

@class EPActiveDeviceAssertion, EPRoutingSlipEntry, NSString;
@protocol EPServiceRegistry, EPTransactionDelegate;

@interface EPSagaTransactionActiveWatchAssertion : EPSagaTransactionRoutingSlip <EPResourceOwnerDelegate>
{
    _Bool _rollback;	// 8 = 0x8
    id <EPTransactionDelegate> _delegate;	// 16 = 0x10
    EPRoutingSlipEntry *_parentRoutingSlipEntry;	// 24 = 0x18
    EPRoutingSlipEntry *_routingSlipEntry;	// 32 = 0x20
    id <EPServiceRegistry> _serviceRegistry;	// 40 = 0x28
    EPActiveDeviceAssertion *_assertion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000d354c
@property(nonatomic) _Bool rollback; // @synthesize rollback=_rollback;
@property(retain, nonatomic) EPActiveDeviceAssertion *assertion; // @synthesize assertion=_assertion;
@property(retain, nonatomic) id <EPServiceRegistry> serviceRegistry; // @synthesize serviceRegistry=_serviceRegistry;
@property(retain, nonatomic) EPRoutingSlipEntry *routingSlipEntry; // @synthesize routingSlipEntry=_routingSlipEntry;
@property(retain, nonatomic) EPRoutingSlipEntry *parentRoutingSlipEntry; // @synthesize parentRoutingSlipEntry=_parentRoutingSlipEntry;
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000d3488
- (id)delegate;	// IMP=0x00000001000d3468
- (void)buildRoutingSlipEntries:(id)arg1 serviceRegistry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d2728
- (void)invalidate;	// IMP=0x00000001000d26bc
- (void)resourceAvailabilityDidChange:(id)arg1;	// IMP=0x00000001000d24ac
- (void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x00000001000d21f0
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x00000001000d16d8
- (void)getBluetoothIDForPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d1494
- (id)keymaster;	// IMP=0x00000001000d1454
- (id)registry;	// IMP=0x00000001000d1414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

