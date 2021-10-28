//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIndoorXPCProvider.h"

#import "CLIndoorXPCProviderImplementation-Protocol.h"

@class NSString, ServiceState;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>
{
    ServiceState *_state;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010001bab4
@property(retain, nonatomic) ServiceState *state; // @synthesize state=_state;
- (void)gpsSignalQualityAvailable:(id)arg1;	// IMP=0x000000010001b828
- (void)gpsEstimateAvailable:(id)arg1;	// IMP=0x000000010001b5c0
- (void)outdoorLocationAvailable:(id)arg1;	// IMP=0x000000010001b090
- (void)stopUpdatingLocation;	// IMP=0x000000010001ad98
- (void)startUpdatingLocationAtLocation:(id)arg1;	// IMP=0x000000010001a80c
- (void)playbackDatarun:(id)arg1;	// IMP=0x000000010001a550
- (void)setApiKey:(id)arg1 onServer:(id)arg2;	// IMP=0x000000010001a4b4
- (void)setApiKey:(id)arg1;	// IMP=0x000000010001a418
- (void)withinQueueSetDelegate:(id)arg1;	// IMP=0x000000010001a280
- (void)setDelegate:(id)arg1;	// IMP=0x000000010001a18c
- (void)withinQueueReinitializeRemoteState;	// IMP=0x0000000100019fcc
- (void)withinQueueInvalidateState;	// IMP=0x0000000100019fbc
- (_Bool)withinQueueCanReinitializeRemoteState;	// IMP=0x0000000100019fa4
- (id)withinQueuePermanentShutdownReason;	// IMP=0x0000000100019f2c
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1;	// IMP=0x0000000100019f10
- (id)endpointName;	// IMP=0x0000000100019f04
- (id)remoteObjectProtocol;	// IMP=0x0000000100019ef8
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100019e40
- (id)initWithApiKey:(id)arg1 onServer:(id)arg2;	// IMP=0x0000000100019d94
- (id)initWithApiKey:(id)arg1;	// IMP=0x0000000100019ce8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
