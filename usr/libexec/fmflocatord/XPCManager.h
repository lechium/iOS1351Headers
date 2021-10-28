//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface XPCManager : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_nsxpcListener;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100031a50
- (void).cxx_destruct;	// IMP=0x0000000100031f5c
@property(retain, nonatomic) NSXPCListener *nsxpcListener; // @synthesize nsxpcListener=_nsxpcListener;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100031dec
- (void)initializeXPC;	// IMP=0x0000000100031ccc
- (void)dealloc;	// IMP=0x0000000100031c48
- (id)initSingleton;	// IMP=0x0000000100031bc0
- (id)init;	// IMP=0x0000000100031b68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
