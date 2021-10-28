//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface RPPrivateDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    _Bool _prefPrivateDiscoveryEnabled;	// 10 = 0xa
    NSMutableSet *_xpcConnections;	// 16 = 0x10
    NSXPCListener *_xpcListener;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (id)sharedPrivateDaemon;	// IMP=0x000000010004e468
- (void).cxx_destruct;	// IMP=0x000000010004fe4c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x000000010004fd44
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010004faf8
- (void)removeDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f8a4
- (void)addDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f708
- (void)removeAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f4b4
- (void)addAdvertiser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004f318
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x000000010004f310
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004f308
- (void)prefsChanged;	// IMP=0x000000010004f2fc
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010004f2f4
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x000000010004f2f0
- (void)_processAnswerPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004f214
- (void)_processQueryPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004f138
- (void)_processAnnouncementPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004efc0
- (void)_processResponsePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004ee5c
- (void)_processProbePtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004ece4
- (void)_processPacketPtr:(const char *)arg1 end:(const char *)arg2;	// IMP=0x000000010004eb98
- (void)_ensureStopped;	// IMP=0x000000010004eb94
- (void)_ensureStarted;	// IMP=0x000000010004eb90
- (void)_update;	// IMP=0x000000010004eb6c
- (void)_invalidated;	// IMP=0x000000010004eaec
- (void)_invalidate;	// IMP=0x000000010004ea3c
- (void)invalidate;	// IMP=0x000000010004e9d4
- (void)activate;	// IMP=0x000000010004e888
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010004e54c
- (id)init;	// IMP=0x000000010004e4d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
