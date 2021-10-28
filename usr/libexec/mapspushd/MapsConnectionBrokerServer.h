//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MapsConnectionBrokerEndpointProvider-Protocol.h"
#import "MapsConnectionBrokerEndpointRecorder-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MapsConnectionBrokerServer : NSObject <MapsConnectionBrokerEndpointRecorder, MapsConnectionBrokerEndpointProvider, NSXPCListenerDelegate>
{
    NSXPCListener *_endpointSourceListener;	// 8 = 0x8
    NSMutableArray *_endpointSourceConnections;	// 16 = 0x10
    NSXPCListener *_endpointConsumerListener;	// 24 = 0x18
    NSMutableArray *_endpointConsumerConnections;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_endpointQueue;	// 48 = 0x30
    NSMutableDictionary *_endpoints;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010000b3c4
- (void)listenerEndpointDidChange:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000010000b0a0
- (void)listenerEndpointForIdentifer:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000af8c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000a7f4
- (id)init;	// IMP=0x000000010000a638

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
