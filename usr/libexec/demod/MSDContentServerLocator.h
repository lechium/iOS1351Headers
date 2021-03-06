//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSDContentServerLocatorDelegate-Protocol.h"
#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class MSDTargetDevice, NSMutableSet, NSNetServiceBrowser, NSString;

@interface MSDContentServerLocator : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate, MSDContentServerLocatorDelegate>
{
    MSDTargetDevice *_device;	// 8 = 0x8
    NSMutableSet *_delegates;	// 16 = 0x10
    NSMutableSet *_netServices;	// 24 = 0x18
    NSNetServiceBrowser *_browser;	// 32 = 0x20
    NSString *_bonjourName;	// 40 = 0x28
    unsigned long long _pingFailCount;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000010004219c
- (void).cxx_destruct;	// IMP=0x0000000100044494
@property unsigned long long pingFailCount; // @synthesize pingFailCount=_pingFailCount;
@property(retain) NSString *bonjourName; // @synthesize bonjourName=_bonjourName;
@property(retain) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(retain) NSMutableSet *netServices; // @synthesize netServices=_netServices;
@property(retain) NSMutableSet *delegates; // @synthesize delegates=_delegates;
@property(retain) MSDTargetDevice *device; // @synthesize device=_device;
- (void)netServiceDidResolveAddress:(id)arg1;	// IMP=0x00000001000442ac
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0000000100044108
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;	// IMP=0x0000000100044028
- (void)contentServerDidDisappear;	// IMP=0x0000000100043f5c
- (void)contentServerDidAppear:(id)arg1 port:(id)arg2;	// IMP=0x0000000100043d3c
- (void)updateHubHostNameFromNetService:(id)arg1;	// IMP=0x00000001000436e4
- (void)triggerLogicSyncingWithDemoUnit;	// IMP=0x000000010004331c
- (_Bool)tryAlternativeHubHostNameToRecoverConnection;	// IMP=0x0000000100043164
- (void)startLogicSyncingIfTimeIsUp;	// IMP=0x0000000100043034
- (void)incrementPingFailCountAndScheduleLogicSyncIfNeeded;	// IMP=0x0000000100042d70
- (void)resetPingFailCountAndSaveHubLastOnlineTime;	// IMP=0x0000000100042ca0
- (void)startLocatingContentServerIfNeeded;	// IMP=0x00000001000427d8
- (void)unregisterContentServerLocatorDelegate:(id)arg1;	// IMP=0x00000001000425c4
- (void)registerContentServerLocatorDelegate:(id)arg1;	// IMP=0x0000000100042334
- (id)init;	// IMP=0x0000000100042208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

