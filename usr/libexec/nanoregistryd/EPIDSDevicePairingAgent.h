//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPIDSDevicePairingAgent-Protocol.h"
#import "NRRemoteObjectConnectivityObserver-Protocol.h"

@class NSArray, NSPointerArray, NSString;

@interface EPIDSDevicePairingAgent : NSObject <NRRemoteObjectConnectivityObserver, EPIDSDevicePairingAgent>
{
    NSArray *_remoteObjects;	// 8 = 0x8
    _Bool _isPaired;	// 16 = 0x10
    _Bool _isDisabled;	// 17 = 0x11
    NSPointerArray *_pairingAgentObservers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000498b0
- (void)remoteObjectIDSServiceAvailable:(id)arg1 withIDSDevice:(id)arg2;	// IMP=0x00000001000498a4
- (void)update;	// IMP=0x0000000100049664
- (void)disablePairingCheck:(_Bool)arg1;	// IMP=0x000000010004952c
- (void)removeIDSPairingAgentObserver:(id)arg1;	// IMP=0x000000010004948c
- (void)addIDSPairingAgentObserver:(id)arg1;	// IMP=0x0000000100049454
- (id)initWithRemoteObjects:(id)arg1;	// IMP=0x00000001000492c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

