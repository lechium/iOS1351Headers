//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPTransaction-Protocol.h"

@class EPRoutingSlipEntry, NSString;
@protocol EPTransactionDelegate;

@interface EPSagaTransactionSendPing : NSObject <EPTransaction>
{
    _Bool _transactionComplete;	// 8 = 0x8
    EPRoutingSlipEntry *_routingSlipEntry;	// 16 = 0x10
    id <EPTransactionDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b56ac
@property(nonatomic) __weak id <EPTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transactionDidComplete;	// IMP=0x00000001000b55a8
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x00000001000b52b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

