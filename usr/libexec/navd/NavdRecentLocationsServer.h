//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEORecentLocationsXPCInterface-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface NavdRecentLocationsServer : NSObject <NSXPCListenerDelegate, GEORecentLocationsXPCInterface>
{
    NSMutableArray *_peers;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_peersQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000265cc
- (void)endServicingConnection:(id)arg1;	// IMP=0x0000000100026538
- (void)beginServicingConnection:(id)arg1;	// IMP=0x00000001000264a4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000261fc
- (void)requestRecentLocationsWithResponse:(CDUnknownBlockType)arg1;	// IMP=0x0000000100026004
- (id)init;	// IMP=0x0000000100025f0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

