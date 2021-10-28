//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NESMPowerManagerDelegate-Protocol.h"

@class NEConfiguration, NENetworkAgent, NEOnDemandRule, NEPolicySession, NESMPolicySession, NESMServer, NSArray, NSData, NSDate, NSError, NSMutableArray, NSNumber, NSString, NSUUID, NWMonitor, NWNetworkAgentRegistration, NWResolver;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface NESMSession : NSObject <NESMPowerManagerDelegate>
{
    NSString *_description;	// 8 = 0x8
    int _lastStopReason;	// 16 = 0x10
    NSError *_lastDisconnectError;	// 24 = 0x18
    _Bool _isOnDemand;	// 32 = 0x20
    _Bool _dnsRedirectionTransactionOutstanding;	// 33 = 0x21
    _Bool _restartPending;	// 34 = 0x22
    _Bool _disableOnDemand;	// 35 = 0x23
    _Bool _isDropPersistent;	// 36 = 0x24
    int _status;	// 40 = 0x28
    int _type;	// 44 = 0x2c
    NSMutableArray *_clients;	// 48 = 0x30
    NESMServer *_server;	// 56 = 0x38
    NEConfiguration *_configuration;	// 64 = 0x40
    NSData *_configurationSignature;	// 72 = 0x48
    NSUUID *_configurationUserUUID;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_messageQueue;	// 96 = 0x60
    NSNumber *_uid;	// 104 = 0x68
    NSNumber *_gid;	// 112 = 0x70
    unsigned long long _connectTime;	// 120 = 0x78
    long long _connectCount;	// 128 = 0x80
    long long _connectedCount;	// 136 = 0x88
    long long _disconnectedCount;	// 144 = 0x90
    unsigned long long _maxConnectTime;	// 152 = 0x98
    NESMPolicySession *_policySession;	// 160 = 0xa0
    long long _failedConnectCountWithinInterval;	// 168 = 0xa8
    NSDate *_firstFailedConnectTime;	// 176 = 0xb0
    NSDate *_lastStatusChangeTime;	// 184 = 0xb8
    NSString *_auxiliaryDataKey;	// 192 = 0xc0
    NEPolicySession *_controlPolicySession;	// 200 = 0xc8
    NEPolicySession *_highPolicySession;	// 208 = 0xd0
    NWNetworkAgentRegistration *_networkAgentRegistration;	// 216 = 0xd8
    NENetworkAgent *_networkAgent;	// 224 = 0xe0
    NWMonitor *_onDemandMonitor;	// 232 = 0xe8
    NEOnDemandRule *_matchedRule;	// 240 = 0xf0
    NSMutableArray *_networkAgentInterfaces;	// 248 = 0xf8
    NSArray *_registeredNetworkAgentInterfaces;	// 256 = 0x100
    long long _onDemandPauseLevelInternal;	// 264 = 0x108
    NSObject<OS_dispatch_source> *_onDemandPauseTimerSource;	// 272 = 0x110
    NSMutableArray *_staleOnDemandDNSKeys;	// 280 = 0x118
    NWResolver *_dnsRedirectionDetector;	// 288 = 0x120
    NSString *_lastPrimaryInterface;	// 296 = 0x128
    NSMutableArray *_onDemandDomainCache;	// 304 = 0x130
    NSObject<OS_xpc_object> *_startMessage;	// 312 = 0x138
    long long _defaultDropType;	// 320 = 0x140
}

+ (struct __CFDictionary *)copyDefaultRouteCacheIsIPv6:(_Bool)arg1;	// IMP=0x0000000100082f58
+ (struct __CFDictionary *)copyRouteCacheFromRoutes:(struct __CFArray *)arg1 isIPv6:(_Bool)arg2;	// IMP=0x0000000100082f4c
+ (id)sessionWithConfiguration:(id)arg1 andType:(int)arg2 andServer:(id)arg3;	// IMP=0x000000010007dd28
- (void).cxx_destruct;	// IMP=0x00000001000836c4
@property _Bool isDropPersistent; // @synthesize isDropPersistent=_isDropPersistent;
@property long long defaultDropType; // @synthesize defaultDropType=_defaultDropType;
@property _Bool disableOnDemand; // @synthesize disableOnDemand=_disableOnDemand;
@property(retain) NSObject<OS_xpc_object> *startMessage; // @synthesize startMessage=_startMessage;
@property _Bool restartPending; // @synthesize restartPending=_restartPending;
@property(retain) NSMutableArray *onDemandDomainCache; // @synthesize onDemandDomainCache=_onDemandDomainCache;
@property(retain) NSString *lastPrimaryInterface; // @synthesize lastPrimaryInterface=_lastPrimaryInterface;
@property _Bool dnsRedirectionTransactionOutstanding; // @synthesize dnsRedirectionTransactionOutstanding=_dnsRedirectionTransactionOutstanding;
@property(retain) NWResolver *dnsRedirectionDetector; // @synthesize dnsRedirectionDetector=_dnsRedirectionDetector;
@property(retain) NSMutableArray *staleOnDemandDNSKeys; // @synthesize staleOnDemandDNSKeys=_staleOnDemandDNSKeys;
@property NSObject<OS_dispatch_source> *onDemandPauseTimerSource; // @synthesize onDemandPauseTimerSource=_onDemandPauseTimerSource;
@property long long onDemandPauseLevelInternal; // @synthesize onDemandPauseLevelInternal=_onDemandPauseLevelInternal;
@property(retain) NSArray *registeredNetworkAgentInterfaces; // @synthesize registeredNetworkAgentInterfaces=_registeredNetworkAgentInterfaces;
@property(retain) NSMutableArray *networkAgentInterfaces; // @synthesize networkAgentInterfaces=_networkAgentInterfaces;
@property(retain) NEOnDemandRule *matchedRule; // @synthesize matchedRule=_matchedRule;
@property(retain) NWMonitor *onDemandMonitor; // @synthesize onDemandMonitor=_onDemandMonitor;
@property(retain) NENetworkAgent *networkAgent; // @synthesize networkAgent=_networkAgent;
@property(retain) NWNetworkAgentRegistration *networkAgentRegistration; // @synthesize networkAgentRegistration=_networkAgentRegistration;
@property(retain) NEPolicySession *highPolicySession; // @synthesize highPolicySession=_highPolicySession;
@property(retain) NEPolicySession *controlPolicySession; // @synthesize controlPolicySession=_controlPolicySession;
@property(retain) NSString *auxiliaryDataKey; // @synthesize auxiliaryDataKey=_auxiliaryDataKey;
@property(retain) NSDate *lastStatusChangeTime; // @synthesize lastStatusChangeTime=_lastStatusChangeTime;
@property(retain) NSDate *firstFailedConnectTime; // @synthesize firstFailedConnectTime=_firstFailedConnectTime;
@property long long failedConnectCountWithinInterval; // @synthesize failedConnectCountWithinInterval=_failedConnectCountWithinInterval;
@property(retain) NESMPolicySession *policySession; // @synthesize policySession=_policySession;
@property unsigned long long maxConnectTime; // @synthesize maxConnectTime=_maxConnectTime;
@property long long disconnectedCount; // @synthesize disconnectedCount=_disconnectedCount;
@property long long connectedCount; // @synthesize connectedCount=_connectedCount;
@property long long connectCount; // @synthesize connectCount=_connectCount;
@property unsigned long long connectTime; // @synthesize connectTime=_connectTime;
@property _Bool isOnDemand; // @synthesize isOnDemand=_isOnDemand;
@property(retain) NSNumber *gid; // @synthesize gid=_gid;
@property(retain, nonatomic, setter=setUID:) NSNumber *uid; // @synthesize uid=_uid;
@property(readonly) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSUUID *configurationUserUUID; // @synthesize configurationUserUUID=_configurationUserUUID;
@property(retain) NSData *configurationSignature; // @synthesize configurationSignature=_configurationSignature;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NESMServer *server; // @synthesize server=_server;
@property(readonly) int type; // @synthesize type=_type;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly) NSMutableArray *clients; // @synthesize clients=_clients;
- (id)getIDSNetworkAgentDomain;	// IMP=0x0000000100083388
- (_Bool)hasProviderWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100083380
- (void)checkPluginInstalledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100083370
- (void)startWithCommand:(id)arg1 isOnDemand:(_Bool)arg2;	// IMP=0x0000000100083128
- (void)invalidate;	// IMP=0x0000000100083114
- (void)handleCaptiveNetworkPluginsChanged;	// IMP=0x0000000100083110
- (void)handleNetworkDetectionNotification:(int)arg1;	// IMP=0x000000010008310c
- (void)handleInstalledAppsChanged;	// IMP=0x0000000100083108
- (void)handleNetworkConfigurationChange:(long long)arg1;	// IMP=0x0000000100083104
@property(readonly) _Bool isActive;
@property(readonly) NSString *pluginType;
- (void)stopIfNecessaryWithReason:(int)arg1;	// IMP=0x0000000100082c28
- (void)uninstall;	// IMP=0x0000000100082c24
- (void)uninstallOnQueue;	// IMP=0x0000000100082b98
- (void)installPended;	// IMP=0x0000000100082b94
- (void)installPendedOnQueue;	// IMP=0x0000000100082b08
- (void)install;	// IMP=0x0000000100082b04
- (void)installWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100082a0c
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x0000000100082828
- (void)handleUpdateConfiguration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081f14
@property(readonly) int SCNCStatus;
- (void)setupFromAuxiliaryData;	// IMP=0x0000000100081d94
@property(retain) NSError *lastDisconnectError;
@property int lastStopReason;
- (_Bool)handleAgentClientConnection:(id)arg1 WithMessage:(id)arg2;	// IMP=0x000000010008199c
- (_Bool)shouldBeIdleForStatus:(int)arg1;	// IMP=0x00000001000810bc
- (void)notifyChangedExtendedStatus;	// IMP=0x0000000100080f48
- (void)prepareNetwork;	// IMP=0x0000000100080d3c
- (void)satisfyPathResult:(id)arg1;	// IMP=0x0000000100080c74
- (void)handleNetworkPrepareResult:(id)arg1;	// IMP=0x0000000100080b80
- (id)copyExtendedStatus;	// IMP=0x0000000100080838
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x0000000100080834
- (void)handleSecuritySessionInfoRequest:(id)arg1;	// IMP=0x0000000100080830
- (void)handleChangeEventForFallback:(_Bool)arg1;	// IMP=0x000000010008082c
- (void)handleChangeEventForFallbackInterfaces:(id)arg1;	// IMP=0x0000000100080828
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x0000000100080578
- (void)handleDeviceUnlock;	// IMP=0x0000000100080574
- (void)handleDeviceLock;	// IMP=0x0000000100080570
- (void)handleUserLogin;	// IMP=0x000000010008056c
- (void)handleUserLogout;	// IMP=0x0000000100080568
- (void)handleUserSwitch;	// IMP=0x0000000100080564
- (void)handleWakeup;	// IMP=0x0000000100080560
- (void)handleSleepTime:(double)arg1;	// IMP=0x000000010008055c
- (_Bool)handleSleep;	// IMP=0x0000000100080554
- (_Bool)canSleep;	// IMP=0x000000010008054c
- (void)handleEstablishIPCMessage:(id)arg1;	// IMP=0x0000000100080548
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x00000001000804e0
- (void)handleStartMessage:(id)arg1;	// IMP=0x00000001000800a4
- (_Bool)startMessageStopCurrentSession:(id)arg1;	// IMP=0x000000010008002c
- (_Bool)startMessageIsOnDemand:(id)arg1;	// IMP=0x000000010007ffb4
- (void)handleGetStatusMessage:(id)arg1;	// IMP=0x000000010007ff24
- (void)handleInitializeState;	// IMP=0x000000010007ff20
- (void)handleCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010007f670
- (void)registerSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x000000010007f318
- (void)removeAllClients;	// IMP=0x000000010007f0e4
- (void)addClientConnection:(id)arg1;	// IMP=0x000000010007eb18
- (id)description;	// IMP=0x000000010007eb10
- (void)dealloc;	// IMP=0x000000010007e9b4
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2;	// IMP=0x000000010007e950
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 sessionQueue:(id)arg3 messageQueue:(id)arg4;	// IMP=0x000000010007e6f0
- (void)uninstallStaleDNSConfigurations;	// IMP=0x000000010006ad94
- (int)installDNSServers:(id)arg1 forService:(id)arg2;	// IMP=0x000000010006aa98
- (void)storeCurrentDNSConfigurationsForServiceID:(id)arg1;	// IMP=0x000000010006a95c
- (int)nextDNSServiceID;	// IMP=0x000000010006a91c
- (void)setOnDemandPauseLevel:(long long)arg1;	// IMP=0x000000010006a594
- (long long)onDemandPauseLevel;	// IMP=0x000000010006a588
- (void)handlePrimaryInterfaceChange;	// IMP=0x000000010006a57c
- (void)removeOnDemandObserver;	// IMP=0x000000010006a4dc
- (void)resetOnDemandConfigurationForce:(_Bool)arg1;	// IMP=0x0000000100069d94
- (id)copyDisconnectRulesFromRules:(id)arg1;	// IMP=0x0000000100069cc0
@property(readonly) _Bool isDisconnectOnDemandEnabled;
@property(readonly) _Bool isOnDemandEnabled;
- (id)networkDescriptionsForOnDemandRules;	// IMP=0x000000010006947c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100068c28
- (void)setupDomainCacheForEvaluateConnectionRule:(id)arg1;	// IMP=0x0000000100067f44
- (void)updateDomainCache;	// IMP=0x0000000100067d8c
- (void)startDNSRedirectionDetection;	// IMP=0x000000010006792c
- (void)removeDNSRedirectionDetector;	// IMP=0x000000010006788c
- (void)clearDomainCache;	// IMP=0x0000000100067770
- (void)resetOnDemandPolicies;	// IMP=0x0000000100066eb8
- (id)fetchCriticalOnDemandDomains;	// IMP=0x0000000100066e0c
- (void)clearNetworkAgentInterfaceNames;	// IMP=0x0000000100066cec
- (void)removeNetworkAgentInterfaceName:(id)arg1;	// IMP=0x0000000100066b90
- (void)addNetworkAgentInterfaceName:(id)arg1;	// IMP=0x00000001000669a0
- (void)resetNetworkAgent;	// IMP=0x000000010006536c
- (void)removeNetworkAgent;	// IMP=0x0000000100065220
- (void)removeOnDemandTimerSource;	// IMP=0x0000000100065194
- (void)resetNetworkAgentFileHandle;	// IMP=0x0000000100064b2c
- (void)setupNetworkAgent;	// IMP=0x000000010006416c
- (void)setAssertionHandlersOnAgent:(id)arg1;	// IMP=0x0000000100063e28
- (void)setStartHandlerOnAgent:(id)arg1;	// IMP=0x0000000100063be4

@end
