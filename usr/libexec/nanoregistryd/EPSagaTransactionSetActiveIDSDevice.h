//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPTransaction-Protocol.h"
#import "NRRemoteObjectConnectivityObserver-Protocol.h"

@class EPRoutingSlipEntry, NSString, NSUUID;
@protocol AbstractTimer, EPServiceRegistry, EPTransactionDelegate;

@interface EPSagaTransactionSetActiveIDSDevice : NSObject <NRRemoteObjectConnectivityObserver, EPTransaction>
{
    _Bool _transactionComplete;	// 8 = 0x8
    id <AbstractTimer> _idsTimer;	// 16 = 0x10
    EPRoutingSlipEntry *_routingSlipEntry;	// 24 = 0x18
    NSUUID *_idsDeviceIdentifier;	// 32 = 0x20
    id <EPServiceRegistry> _serviceRegistry;	// 40 = 0x28
    _Bool _success;	// 48 = 0x30
    _Bool _waitForConnectivity;	// 49 = 0x31
    id <EPTransactionDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010004bb20
@property(nonatomic) __weak id <EPTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rollback;	// IMP=0x000000010004b8bc
- (void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x000000010004b780
- (void)transactionDidComplete;	// IMP=0x000000010004b6ac
- (void)checkIfIDSSwitched;	// IMP=0x000000010004b5d4
- (void)cancelWithError:(id)arg1;	// IMP=0x000000010004b554
- (void)remoteObjectIDSServiceAvailable:(id)arg1 withIDSDevice:(id)arg2;	// IMP=0x000000010004b548
- (void)idsTimerTimedOut;	// IMP=0x000000010004b390
- (void)switchTo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004aedc
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x000000010004aacc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

