//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIndoorXPCProvider.h"

#import "CLIndoorXPCProviderImplementation-Protocol.h"

@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>
{
}

- (void)onQueueNumFloors:(CDUnknownBlockType)arg1;	// IMP=0x0000000100015b04
- (void)numFloors:(CDUnknownBlockType)arg1;	// IMP=0x0000000100015900
- (void)onQueueShutdown;	// IMP=0x00000001000157d4
- (void)shutdown;	// IMP=0x000000010001569c
- (void)onQueueEraseEverything:(CDUnknownBlockType)arg1;	// IMP=0x0000000100015544
- (void)eraseEverything;	// IMP=0x0000000100015370
- (void)doSynchronousXPC:(CDUnknownBlockType)arg1 description:(const char *)arg2 waitForever:(_Bool)arg3;	// IMP=0x00000001000150b4
- (void)prefetchSynchronous:(id)arg1;	// IMP=0x0000000100014de0
- (void)onQueuePrefetch:(id)arg1 callback:(CDUnknownBlockType)arg2 when:(unsigned char)arg3;	// IMP=0x0000000100014ca4
- (void)prefetch:(id)arg1;	// IMP=0x00000001000149d0
- (void)retrieveLocationRelevancyDurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000147f8
- (void)withinQueueReinitializeRemoteState;	// IMP=0x00000001000147b4
- (_Bool)withinQueueCanReinitializeRemoteState;	// IMP=0x00000001000147ac
- (id)withinQueuePermanentShutdownReason;	// IMP=0x00000001000147a4
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1;	// IMP=0x0000000100014788
- (void)withinQueueInvalidateState;	// IMP=0x0000000100014784
- (id)endpointName;	// IMP=0x0000000100014778
- (id)remoteObjectProtocol;	// IMP=0x000000010001476c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

