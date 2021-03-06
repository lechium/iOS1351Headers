//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_dispatch_source;

@interface GSDaemon : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_source> *_int_src;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_term_src;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_quit_src;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_hup_src;	// 32 = 0x20
    NSXPCListener *_listener;	// 40 = 0x28
}

+ (id)daemon;	// IMP=0x000000010000a200
- (void).cxx_destruct;	// IMP=0x000000010000b7ac
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000b508
- (void)invalidate;	// IMP=0x000000010000b430
- (int)resume;	// IMP=0x000000010000b3bc
- (void)_resume;	// IMP=0x000000010000a770
- (void)waitUntilDeviceIsUnlocked;	// IMP=0x000000010000a4a8
- (id)_registerSignal:(int)arg1 queue:(id)arg2;	// IMP=0x000000010000a3e4
- (id)init;	// IMP=0x000000010000a26c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

