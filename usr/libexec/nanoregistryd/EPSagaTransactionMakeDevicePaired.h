//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPTransaction-Protocol.h"

@class NSString;
@protocol EPServiceRegistry, EPTransactionDelegate;

@interface EPSagaTransactionMakeDevicePaired : NSObject <EPTransaction>
{
    id <EPServiceRegistry> _serviceRegistry;	// 8 = 0x8
    id <EPTransactionDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010005f554
@property(nonatomic) __weak id <EPTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x000000010005f1e8
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x000000010005ef0c
- (id)_makeIsPairedDeviceCollection:(id)arg1 diffWithPairingID:(id)arg2 pair:(_Bool)arg3;	// IMP=0x000000010005ecac
- (id)registry;	// IMP=0x000000010005ec74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

