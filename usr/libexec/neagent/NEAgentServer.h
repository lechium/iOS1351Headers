//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCListener;

@interface NEAgentServer : NSObject <LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSMutableArray *_activeSessions;	// 16 = 0x10
}

+ (id)sharedServer;	// IMP=0x00000001000042d4
- (void).cxx_destruct;	// IMP=0x0000000100004de0
@property(readonly, nonatomic) NSMutableArray *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x0000000100004db0
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x0000000100004d9c
- (void)pluginsWillUninstall:(id)arg1;	// IMP=0x0000000100004d88
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x0000000100004d74
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x0000000100004d60
- (void)handlePluginEvent:(int)arg1 pluginKitProxies:(id)arg2;	// IMP=0x0000000100004a10
- (void)handleAppEvent:(int)arg1 appProxies:(id)arg2;	// IMP=0x00000001000046c4
- (void)removeSession:(id)arg1;	// IMP=0x00000001000045a4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000044a0
- (void)start;	// IMP=0x0000000100004350
- (id)initPrivate;	// IMP=0x0000000100004270
- (id)init;	// IMP=0x0000000100004264

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

