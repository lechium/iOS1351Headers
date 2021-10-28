//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPSagaTransactionRoutingSlip.h"

@class EPRoutingSlipEntry;
@protocol EPServiceRegistry;

@interface EPSagaTransactionUnpairDevice : EPSagaTransactionRoutingSlip
{
    EPRoutingSlipEntry *_parentRoutingSlipEntry;	// 8 = 0x8
    EPRoutingSlipEntry *_routingSlipEntry;	// 16 = 0x10
    id <EPServiceRegistry> _serviceRegistry;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100074698
@property(retain, nonatomic) id <EPServiceRegistry> serviceRegistry; // @synthesize serviceRegistry=_serviceRegistry;
@property(retain, nonatomic) EPRoutingSlipEntry *routingSlipEntry; // @synthesize routingSlipEntry=_routingSlipEntry;
@property(retain, nonatomic) EPRoutingSlipEntry *parentRoutingSlipEntry; // @synthesize parentRoutingSlipEntry=_parentRoutingSlipEntry;
- (void)buildRoutingSlipEntries:(id)arg1 serviceRegistry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100072d34
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x000000010007271c
- (id)_deviceCollectionDiffWithPairingID:(id)arg1;	// IMP=0x0000000100072650
- (id)registry;	// IMP=0x0000000100072610

@end
