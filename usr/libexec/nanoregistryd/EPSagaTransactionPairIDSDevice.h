//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPTransaction-Protocol.h"
#import "NRRemoteObjectConnectivityObserver-Protocol.h"

@class EPRoutingSlipEntry, EPSagaServiceOOBStash, NSString, NSUUID;
@protocol AbstractTimer, EPServiceRegistry, EPTransactionDelegate;

@interface EPSagaTransactionPairIDSDevice : NSObject <NRRemoteObjectConnectivityObserver, EPTransaction>
{
    _Bool _transactionComplete;	// 8 = 0x8
    _Bool _success;	// 9 = 0x9
    _Bool _finished;	// 10 = 0xa
    id <AbstractTimer> _idsTimer;	// 16 = 0x10
    EPRoutingSlipEntry *_routingSlipEntry;	// 24 = 0x18
    NSUUID *_idsDeviceIdentifier;	// 32 = 0x20
    id <EPServiceRegistry> _serviceRegistry;	// 40 = 0x28
    EPSagaServiceOOBStash *_oobKeyStash;	// 48 = 0x30
    id <EPTransactionDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100016ff4
@property(nonatomic) __weak id <EPTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x0000000100016238
- (void)transactionDidComplete;	// IMP=0x0000000100015ff0
- (void)remoteObjectIDSServiceAvailable:(id)arg1 withIDSDevice:(id)arg2;	// IMP=0x0000000100015fa4
- (void)checkIfIDSIsPaired;	// IMP=0x0000000100015e84
- (void)idsTimerTimedOut;	// IMP=0x0000000100015dc8
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x0000000100014e14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
