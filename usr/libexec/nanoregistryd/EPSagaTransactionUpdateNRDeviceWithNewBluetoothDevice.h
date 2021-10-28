//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPTransaction-Protocol.h"

@class EPRoutingSlipEntry, NSString;
@protocol EPTransactionDelegate;

@interface EPSagaTransactionUpdateNRDeviceWithNewBluetoothDevice : NSObject <EPTransaction>
{
    id <EPTransactionDelegate> _delegate;	// 8 = 0x8
    EPRoutingSlipEntry *_routingSlipEntry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100013eac
@property(retain, nonatomic) EPRoutingSlipEntry *routingSlipEntry; // @synthesize routingSlipEntry=_routingSlipEntry;
@property(nonatomic) __weak id <EPTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x0000000100013d98
- (void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;	// IMP=0x00000001000137e4
- (id)_deviceCollection:(id)arg1 diffToUpdateBluetoothId:(id)arg2 ofDevice:(id)arg3;	// IMP=0x00000001000133c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
