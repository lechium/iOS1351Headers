//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class ASServicesMonitor, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ASServiceDaemon : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    unsigned long long _connectionCount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    ASServicesMonitor *_servicesMonitor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010000582c
- (void)_setUpEventHandlersForNotifyd;	// IMP=0x0000000100005744
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000052fc
- (void)resume;	// IMP=0x00000001000052ec
- (void)dealloc;	// IMP=0x0000000100005298
- (id)init;	// IMP=0x000000010000517c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

