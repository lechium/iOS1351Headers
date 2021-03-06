//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBScalablePipeManagerDelegate-Protocol.h"

@class CBScalablePipeManager, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface PDBluetoothCompanionLinkAssertion : NSObject <CBScalablePipeManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_bluetoothSerialQueue;	// 8 = 0x8
    NSUUID *_companionPeerIdentifier;	// 16 = 0x10
    _Bool _hasLoadedCompanionPeerIdentifier;	// 24 = 0x18
    _Bool _hasSetLinkRequirements;	// 25 = 0x19
    _Bool _isActive;	// 26 = 0x1a
    CBScalablePipeManager *_pipeManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000f3f0
- (void)_updateState;	// IMP=0x000000010000f20c
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x000000010000f208
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x000000010000f204
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x000000010000f200
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x000000010000f1fc
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x000000010000f1f0
- (void)invalidate;	// IMP=0x000000010000f198
- (void)acquire;	// IMP=0x000000010000f140
- (void)dealloc;	// IMP=0x000000010000ef70
- (id)init;	// IMP=0x000000010000ef08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

