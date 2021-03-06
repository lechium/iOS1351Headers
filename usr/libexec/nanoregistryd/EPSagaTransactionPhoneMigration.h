//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EPSagaTransactionRoutingSlip.h"

@class EPRoutingSlipEntry;
@protocol EPServiceRegistry;

@interface EPSagaTransactionPhoneMigration : EPSagaTransactionRoutingSlip
{
    EPRoutingSlipEntry *_parentRoutingSlipEntry;	// 8 = 0x8
    id <EPServiceRegistry> _serviceRegistry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001ab80
@property(retain, nonatomic) id <EPServiceRegistry> serviceRegistry; // @synthesize serviceRegistry=_serviceRegistry;
@property(retain, nonatomic) EPRoutingSlipEntry *parentRoutingSlipEntry; // @synthesize parentRoutingSlipEntry=_parentRoutingSlipEntry;
- (void)buildRoutingSlipEntries:(id)arg1 serviceRegistry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100019428
- (id)_deviceCollectionDiffWithPairingID:(id)arg1;	// IMP=0x000000010001905c
- (id)keymaster;	// IMP=0x000000010001901c
- (id)registry;	// IMP=0x0000000100018fdc

@end

