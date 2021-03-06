//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;

@interface ACCTransportServer : NSObject <NSXPCListenerDelegate>
{
    int _token;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMutableSet *_clientConnections;	// 24 = 0x18
}

+ (id)sharedServer;	// IMP=0x00000001000d7954
- (void).cxx_destruct;	// IMP=0x00000001000d7a18
@property(retain, nonatomic) NSMutableSet *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (id)clientInfoForConnectionWithUUID:(id)arg1;	// IMP=0x00000001000d77c0
- (void)propertiesDidChange:(id)arg1 forEndpointWithUUID:(id)arg2 previousProperties:(id)arg3 connectionUUID:(id)arg4;	// IMP=0x00000001000d75ec
- (void)propertiesDidChange:(id)arg1 forConnectionWithUUID:(id)arg2 previousProperties:(id)arg3;	// IMP=0x00000001000d743c
- (void)authStateDidChange:(int)arg1 forConnectionWithUUID:(id)arg2 previousAuthState:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(_Bool)arg5 connectionWasAuthenticated:(_Bool)arg6;	// IMP=0x00000001000d728c
- (_Bool)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 toClient:(id)arg4;	// IMP=0x00000001000d6fd0
- (_Bool)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3;	// IMP=0x00000001000d6f0c
- (void)suspendServer;	// IMP=0x00000001000d6dfc
- (void)startServer;	// IMP=0x00000001000d6cec
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000d6298
- (void)dealloc;	// IMP=0x00000001000d624c
- (id)init;	// IMP=0x00000001000d618c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

