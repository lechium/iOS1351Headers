//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMFlowDivertSession.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface NESMDNSProxySession : NESMFlowDivertSession
{
    _Bool _installed;	// 8 = 0x8
    _Bool _externallyStopped;	// 9 = 0x9
    unsigned long long _pluginStartTicks;	// 16 = 0x10
    unsigned long long _restartIntervalSecs;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_restartTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000249a8
@property(retain, nonatomic) NSObject<OS_dispatch_source> *restartTimer; // @synthesize restartTimer=_restartTimer;
@property unsigned long long restartIntervalSecs; // @synthesize restartIntervalSecs=_restartIntervalSecs;
@property unsigned long long pluginStartTicks; // @synthesize pluginStartTicks=_pluginStartTicks;
@property _Bool externallyStopped; // @synthesize externallyStopped=_externallyStopped;
@property(getter=isInstalled) _Bool installed; // @synthesize installed=_installed;
- (void)handleUserLogin;	// IMP=0x00000001000248fc
- (void)sendSystemDNSSettings;	// IMP=0x0000000100024630
- (void)plugin:(id)arg1 didInitializeWithUUIDs:(id)arg2;	// IMP=0x000000010002462c
- (void)plugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x0000000100024564
- (void)uninstall;	// IMP=0x0000000100024494
- (void)install;	// IMP=0x000000010002428c
- (void)prepareNetwork;	// IMP=0x0000000100024244
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x00000001000241c8
- (void)handleStartMessage:(id)arg1;	// IMP=0x0000000100024160
- (void)setStatus:(int)arg1;	// IMP=0x0000000100023c40
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x0000000100023928
- (void)handleCaptiveNetworkPluginsChanged;	// IMP=0x000000010002386c
- (void)handleInstalledAppsChanged;	// IMP=0x00000001000237b0
- (void)handleNetworkConfigurationChange:(long long)arg1;	// IMP=0x00000001000236fc
- (void)createConnectParametersWithStartMessage:(id)arg1;	// IMP=0x00000001000235cc
- (void)resetProviderDesignatedRequirementInConfiguration:(id)arg1;	// IMP=0x0000000100023514
- (void)setProviderDesignatedRequirement:(id)arg1;	// IMP=0x00000001000234a8
- (id)providerDesignatedRequirement;	// IMP=0x0000000100023454
- (id)authenticationPluginBundleIdentifier;	// IMP=0x000000010002344c
- (id)providerBundleIdentifier;	// IMP=0x00000001000233f8
- (long long)agentPluginClass;	// IMP=0x00000001000233f0
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andPluginType:(id)arg4;	// IMP=0x00000001000232d4

@end
