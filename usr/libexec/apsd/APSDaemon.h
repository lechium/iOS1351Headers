//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSCourierDelegate-Protocol.h"
#import "APSIDSProxyManagerDelegate-Protocol.h"

@class APSIDSProxyManager, APSTaskListener, NSDate, NSMutableDictionary, NSString, NSTimer, PCSimpleTimer;
@protocol OS_dispatch_source, OS_xpc_object;

@interface APSDaemon : NSObject <APSCourierDelegate, APSIDSProxyManagerDelegate>
{
    NSMutableDictionary *_environmentsToCouriers;	// 8 = 0x8
    PCSimpleTimer *_courierConnectTimer;	// 16 = 0x10
    void *_courierConnectTimerPowerAssertion;	// 24 = 0x18
    NSTimer *_inactivityTerminationTimer;	// 32 = 0x20
    APSIDSProxyManager *_proxyManager;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_sigTERMSource;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_sigUSR1Source;	// 56 = 0x38
    int _isConnectedToken;	// 64 = 0x40
    int _systemReadyToken;	// 68 = 0x44
    _Bool _systemReady;	// 72 = 0x48
    NSDate *_lastClientConnection;	// 80 = 0x50
    _Bool _hasEnabledCouriers;	// 88 = 0x58
    _Bool _systemIsShuttingDown;	// 89 = 0x59
    NSObject<OS_xpc_object> *_connection;	// 96 = 0x60
    NSString *_networkGuidanceString;	// 104 = 0x68
    APSTaskListener *_taskListener;	// 112 = 0x70
}

+ (void)setLaunchdLaunchSemaphoreEnabled:(_Bool)arg1;	// IMP=0x0000000100044b90
- (void).cxx_destruct;	// IMP=0x0000000100046cf8
@property(retain, nonatomic) NSString *networkGuidanceString; // @synthesize networkGuidanceString=_networkGuidanceString;
- (double)keepAliveIntervalForEnvironment:(id)arg1;	// IMP=0x0000000100046ae8
- (id)getConnectionServerForEnvironment:(id)arg1 connectionPortName:(id)arg2 processName:(id)arg3 portNameIsBundleId:(_Bool)arg4 peerConnection:(id)arg5;	// IMP=0x00000001000462f4
- (void)courierHasNoConnections:(id)arg1;	// IMP=0x000000010004619c
- (void)shouldUseInternetDidChange:(id)arg1;	// IMP=0x00000001000460ac
- (void)courierConnectionStatusDidChange:(id)arg1;	// IMP=0x0000000100045fbc
@property(readonly, retain, nonatomic) APSIDSProxyManager *proxyManager;
- (void)proxyManager:(id)arg1 incomingPresenceWithGuid:(id)arg2 token:(id)arg3 hwVersion:(id)arg4 swVersion:(id)arg5 swBuild:(id)arg6 certificate:(id)arg7 nonce:(id)arg8 signature:(id)arg9 environmentName:(id)arg10;	// IMP=0x0000000100045bc8
- (void)proxyManager:(id)arg1 canUseProxyChanged:(_Bool)arg2;	// IMP=0x00000001000459f0
- (void)_updateNetworkGuidance;	// IMP=0x000000010004549c
- (void)invalidateDeviceIdentity;	// IMP=0x0000000100045288
- (void)requestCourierConnections;	// IMP=0x0000000100045008
- (id)courierForEnvironmentName:(id)arg1;	// IMP=0x0000000100044ed8
- (id)courierForEnvironment:(id)arg1;	// IMP=0x0000000100044ec8
- (void)_setCourier:(id)arg1 forEnvironment:(id)arg2;	// IMP=0x0000000100044e78
- (void)_removeCourierForEnvironment:(id)arg1;	// IMP=0x0000000100044e68
- (void)_loadConnections;	// IMP=0x0000000100044b94
- (void)_inactivityTerminationTimerFired:(id)arg1;	// IMP=0x0000000100044af4
- (void)_clearInactivityTerminationTimer;	// IMP=0x0000000100044a50
- (void)_startInactivityTerminationTimerIfNecessary;	// IMP=0x0000000100044930
- (void)_enableAllCouriers;	// IMP=0x00000001000446d8
- (void)_connectCouriersTimerFired;	// IMP=0x00000001000445d8
- (void)_clearCourierConnectTimerAndPowerAssertion;	// IMP=0x0000000100044590
- (void)_updateCourierConnectTimerAndPowerAssertion;	// IMP=0x0000000100044244
- (void)receivedClientConnection;	// IMP=0x000000010004411c
- (void)updateSafeToSendFilterForce:(_Bool)arg1;	// IMP=0x0000000100043f30
- (_Bool)_systemIsReady;	// IMP=0x0000000100043ebc
- (void)_setupNotifyToken;	// IMP=0x0000000100043cc4
- (void)_performPeriodicSignal;	// IMP=0x00000001000439d0
- (void)_schedulePeriodicSignal;	// IMP=0x00000001000438d4
- (void)_receivedShutdownNotification;	// IMP=0x000000010004371c
- (id)_connectionsDebuggingState;	// IMP=0x00000001000436c0
- (void)dealloc;	// IMP=0x00000001000435e8
- (id)init;	// IMP=0x0000000100043018

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

