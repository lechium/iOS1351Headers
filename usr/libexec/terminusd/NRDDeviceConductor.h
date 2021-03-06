//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRBTLinkPreferencesAgentDelegate-Protocol.h"
#import "NRLinkDelegate-Protocol.h"
#import "NRLinkManagerBluetoothDelegate-Protocol.h"
#import "NRLinkManagerQuickRelayDelegate-Protocol.h"
#import "NRLinkManagerWiFiDelegate-Protocol.h"
#import "NRPhoneCallRelayAgentDelegate-Protocol.h"
#import "NRQuickRelayAgentDelegate-Protocol.h"

@class NRAnalyticsPhoneCallRelay, NRAnalyticsPreferWiFi, NRBTLinkPreferencesAgent, NRCompanionLinkViabilityAgent, NRDevicePreferencesManager, NRLink, NRQuickRelayAgent, NSData, NSMutableArray, NSMutableSet, NSString, NSUUID, NWAddressEndpoint;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NRDDeviceConductor : NSObject <NRLinkDelegate, NRLinkManagerWiFiDelegate, NRLinkManagerBluetoothDelegate, NRLinkManagerQuickRelayDelegate, NRPhoneCallRelayAgentDelegate, NRQuickRelayAgentDelegate, NRBTLinkPreferencesAgentDelegate>
{
    _Bool _isEnabled;	// 8 = 0x8
    _Bool _preferWiFiRequest;	// 9 = 0x9
    _Bool _deviceSetupInProgress;	// 10 = 0xa
    _Bool _bringUpWiFiImmediately;	// 11 = 0xb
    _Bool _wifiBringUpTimeoutSet;	// 12 = 0xc
    _Bool _preferwiFiTimeoutSet;	// 13 = 0xd
    _Bool _helloMessageSent;	// 14 = 0xe
    _Bool _helloMessageReceivedOnce;	// 15 = 0xf
    _Bool _disableRangeExtension;	// 16 = 0x10
    _Bool _disablePreferWiFi;	// 17 = 0x11
    _Bool _forceSendWiFiEndpointOnce;	// 18 = 0x12
    _Bool _pendingPreferWiFiRequest;	// 19 = 0x13
    _Bool _peerDeviceIsAsleep;	// 20 = 0x14
    _Bool _peerDeviceIsNearby;	// 21 = 0x15
    _Bool _hasPhoneCallRelayRequest;	// 22 = 0x16
    _Bool _hasQuickRelayRequest;	// 23 = 0x17
    _Bool _apsIsConnected;	// 24 = 0x18
    _Bool _hasReceivedFirstAPSIsConnectedUpdate;	// 25 = 0x19
    _Bool _didForceWoWMode;	// 26 = 0x1a
    _Bool _alwaysOnWiFiQueryComplete;	// 27 = 0x1b
    _Bool _alwaysOnWiFiUpdateSent;	// 28 = 0x1c
    _Bool _addedWhitelistPolicies;	// 29 = 0x1d
    unsigned char _lastPrimaryLinkType;	// 30 = 0x1e
    unsigned short _deviceLinkInnerVersion;	// 32 = 0x20
    NSUUID *_nrUUID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSMutableSet *_availableLinks;	// 56 = 0x38
    NSMutableArray *_requests;	// 64 = 0x40
    NRLink *_primaryLink;	// 72 = 0x48
    NWAddressEndpoint *_lastSentWiFiEndpoint;	// 80 = 0x50
    NSData *_lastSentWiFiSignature;	// 88 = 0x58
    NSMutableSet *_deviceMonitorConnections;	// 96 = 0x60
    NSMutableSet *_deviceSetupInProgressConnections;	// 104 = 0x68
    NRDevicePreferencesManager *_devicePreferencesManager;	// 112 = 0x70
    NRQuickRelayAgent *_quickRelayAgent;	// 120 = 0x78
    NRBTLinkPreferencesAgent *_btLinkPreferencesAgent;	// 128 = 0x80
    unsigned long long _peerDeviceIsNearbyUpdateCounter;	// 136 = 0x88
    NSUUID *_forcedWoWUUID;	// 144 = 0x90
    NSMutableArray *_addedWhitelistPolicyIDArray;	// 152 = 0x98
    NSString *_policyIdentifier;	// 160 = 0xa0
    unsigned long long _latestWiFiAddressUpdateMsgIdentifier;	// 168 = 0xa8
    unsigned long long _latestPreferWiFiRequestMsgIdentifier;	// 176 = 0xb0
    unsigned long long _latestPreferWiFiAckMsgIdentifier;	// 184 = 0xb8
    NSObject<OS_dispatch_source> *_idsPathWatcherSource;	// 192 = 0xc0
    NRAnalyticsPreferWiFi *_preferWiFiAnalytics;	// 200 = 0xc8
    NRAnalyticsPhoneCallRelay *_phoneCallRelayAnalytics;	// 208 = 0xd0
    NRCompanionLinkViabilityAgent *_companionLinkViabilityAgent;	// 216 = 0xd8
    unsigned long long _companionLinkViableCounter;	// 224 = 0xe0
    unsigned long long _rejectPreferWiFiRequestTime;	// 232 = 0xe8
}

+ (id)copyDeviceMonitorStatusForOrphanWithNRUUID:(id)arg1 replyDict:(id)arg2;	// IMP=0x000000010008d23c
+ (id)createDeviceMonitorDictWithNRUUID:(id)arg1 isNearby:(_Bool)arg2 isConnected:(_Bool)arg3 isCloudConnected:(_Bool)arg4 isAsleep:(_Bool)arg5 isClassCConnected:(_Bool)arg6 linkType:(unsigned char)arg7 replyDict:(id)arg8;	// IMP=0x000000010008cf90
- (void).cxx_destruct;	// IMP=0x000000010008bfc4
@property(nonatomic) unsigned long long rejectPreferWiFiRequestTime; // @synthesize rejectPreferWiFiRequestTime=_rejectPreferWiFiRequestTime;
@property(nonatomic) unsigned char lastPrimaryLinkType; // @synthesize lastPrimaryLinkType=_lastPrimaryLinkType;
@property(nonatomic) unsigned long long companionLinkViableCounter; // @synthesize companionLinkViableCounter=_companionLinkViableCounter;
@property(retain, nonatomic) NRCompanionLinkViabilityAgent *companionLinkViabilityAgent; // @synthesize companionLinkViabilityAgent=_companionLinkViabilityAgent;
@property(retain, nonatomic) NRAnalyticsPhoneCallRelay *phoneCallRelayAnalytics; // @synthesize phoneCallRelayAnalytics=_phoneCallRelayAnalytics;
@property(retain, nonatomic) NRAnalyticsPreferWiFi *preferWiFiAnalytics; // @synthesize preferWiFiAnalytics=_preferWiFiAnalytics;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *idsPathWatcherSource; // @synthesize idsPathWatcherSource=_idsPathWatcherSource;
@property(nonatomic) unsigned long long latestPreferWiFiAckMsgIdentifier; // @synthesize latestPreferWiFiAckMsgIdentifier=_latestPreferWiFiAckMsgIdentifier;
@property(nonatomic) unsigned long long latestPreferWiFiRequestMsgIdentifier; // @synthesize latestPreferWiFiRequestMsgIdentifier=_latestPreferWiFiRequestMsgIdentifier;
@property(nonatomic) unsigned long long latestWiFiAddressUpdateMsgIdentifier; // @synthesize latestWiFiAddressUpdateMsgIdentifier=_latestWiFiAddressUpdateMsgIdentifier;
@property(retain, nonatomic) NSString *policyIdentifier; // @synthesize policyIdentifier=_policyIdentifier;
@property(retain, nonatomic) NSMutableArray *addedWhitelistPolicyIDArray; // @synthesize addedWhitelistPolicyIDArray=_addedWhitelistPolicyIDArray;
@property(nonatomic) _Bool addedWhitelistPolicies; // @synthesize addedWhitelistPolicies=_addedWhitelistPolicies;
@property(nonatomic) _Bool alwaysOnWiFiUpdateSent; // @synthesize alwaysOnWiFiUpdateSent=_alwaysOnWiFiUpdateSent;
@property(nonatomic) _Bool alwaysOnWiFiQueryComplete; // @synthesize alwaysOnWiFiQueryComplete=_alwaysOnWiFiQueryComplete;
@property(retain, nonatomic) NSUUID *forcedWoWUUID; // @synthesize forcedWoWUUID=_forcedWoWUUID;
@property(nonatomic) _Bool didForceWoWMode; // @synthesize didForceWoWMode=_didForceWoWMode;
@property(nonatomic) _Bool hasReceivedFirstAPSIsConnectedUpdate; // @synthesize hasReceivedFirstAPSIsConnectedUpdate=_hasReceivedFirstAPSIsConnectedUpdate;
@property(nonatomic) _Bool apsIsConnected; // @synthesize apsIsConnected=_apsIsConnected;
@property(nonatomic) _Bool hasQuickRelayRequest; // @synthesize hasQuickRelayRequest=_hasQuickRelayRequest;
@property(nonatomic) _Bool hasPhoneCallRelayRequest; // @synthesize hasPhoneCallRelayRequest=_hasPhoneCallRelayRequest;
@property(nonatomic) unsigned long long peerDeviceIsNearbyUpdateCounter; // @synthesize peerDeviceIsNearbyUpdateCounter=_peerDeviceIsNearbyUpdateCounter;
@property(nonatomic) _Bool peerDeviceIsNearby; // @synthesize peerDeviceIsNearby=_peerDeviceIsNearby;
@property(nonatomic) _Bool peerDeviceIsAsleep; // @synthesize peerDeviceIsAsleep=_peerDeviceIsAsleep;
@property(nonatomic) _Bool pendingPreferWiFiRequest; // @synthesize pendingPreferWiFiRequest=_pendingPreferWiFiRequest;
@property(nonatomic) _Bool forceSendWiFiEndpointOnce; // @synthesize forceSendWiFiEndpointOnce=_forceSendWiFiEndpointOnce;
@property(nonatomic) _Bool disablePreferWiFi; // @synthesize disablePreferWiFi=_disablePreferWiFi;
@property(nonatomic) _Bool disableRangeExtension; // @synthesize disableRangeExtension=_disableRangeExtension;
@property(nonatomic) _Bool helloMessageReceivedOnce; // @synthesize helloMessageReceivedOnce=_helloMessageReceivedOnce;
@property(nonatomic) _Bool helloMessageSent; // @synthesize helloMessageSent=_helloMessageSent;
@property(nonatomic) _Bool preferwiFiTimeoutSet; // @synthesize preferwiFiTimeoutSet=_preferwiFiTimeoutSet;
@property(nonatomic) _Bool wifiBringUpTimeoutSet; // @synthesize wifiBringUpTimeoutSet=_wifiBringUpTimeoutSet;
@property(nonatomic) _Bool bringUpWiFiImmediately; // @synthesize bringUpWiFiImmediately=_bringUpWiFiImmediately;
@property(nonatomic) _Bool deviceSetupInProgress; // @synthesize deviceSetupInProgress=_deviceSetupInProgress;
@property(nonatomic) _Bool preferWiFiRequest; // @synthesize preferWiFiRequest=_preferWiFiRequest;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic, getter=getDeviceLinkInnerVersion) unsigned short deviceLinkInnerVersion; // @synthesize deviceLinkInnerVersion=_deviceLinkInnerVersion;
@property(retain, nonatomic) NRBTLinkPreferencesAgent *btLinkPreferencesAgent; // @synthesize btLinkPreferencesAgent=_btLinkPreferencesAgent;
@property(retain, nonatomic) NRQuickRelayAgent *quickRelayAgent; // @synthesize quickRelayAgent=_quickRelayAgent;
@property(retain, nonatomic) NRDevicePreferencesManager *devicePreferencesManager; // @synthesize devicePreferencesManager=_devicePreferencesManager;
@property(retain, nonatomic) NSMutableSet *deviceSetupInProgressConnections; // @synthesize deviceSetupInProgressConnections=_deviceSetupInProgressConnections;
@property(retain, nonatomic) NSMutableSet *deviceMonitorConnections; // @synthesize deviceMonitorConnections=_deviceMonitorConnections;
@property(retain, nonatomic) NSData *lastSentWiFiSignature; // @synthesize lastSentWiFiSignature=_lastSentWiFiSignature;
@property(retain, nonatomic) NWAddressEndpoint *lastSentWiFiEndpoint; // @synthesize lastSentWiFiEndpoint=_lastSentWiFiEndpoint;
@property(retain, nonatomic) NRLink *primaryLink; // @synthesize primaryLink=_primaryLink;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSMutableSet *availableLinks; // @synthesize availableLinks=_availableLinks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSUUID *nrUUID; // @synthesize nrUUID=_nrUUID;
- (void)measureBTLatencyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008bb44
- (id)wifiManager;	// IMP=0x000000010008bae8
- (void)handleAlwaysOnWiFiQueryComplete;	// IMP=0x000000010008bae4
- (void)removeDevicePreferencesManagerConnection:(id)arg1;	// IMP=0x000000010008ba44
- (void)setPolicyTrafficClasses:(id)arg1 forConnection:(id)arg2;	// IMP=0x000000010008b980
- (void)setLinkPreferences:(id)arg1 forConnection:(id)arg2;	// IMP=0x000000010008b8bc
- (void)removeDeviceMonitorConnection:(id)arg1;	// IMP=0x000000010008b81c
- (void)addDeviceMonitorConnection:(id)arg1;	// IMP=0x000000010008b77c
- (void)removeDeviceSetupInProgressConnection:(id)arg1;	// IMP=0x000000010008b688
- (void)addDeviceSetupInProgressConnection:(id)arg1;	// IMP=0x000000010008b594
- (void)reportEvent:(int)arg1;	// IMP=0x000000010008b584
- (void)reportEvent:(int)arg1 detailsFormat:(id)arg2;	// IMP=0x000000010008b4f0
- (void)reportEvent:(int)arg1 details:(id)arg2;	// IMP=0x000000010008b4e0
- (_Bool)preferWiFiRequestUnavailable;	// IMP=0x000000010008b304
- (_Bool)preferWiFiRequestAvailable;	// IMP=0x000000010008b02c
- (void)deviceHasBTLinkUpgradeRequest:(_Bool)arg1;	// IMP=0x000000010008ae88
- (void)deviceHasQuickRelayRequest:(id)arg1 hasQuickRelayRequest:(_Bool)arg2;	// IMP=0x000000010008ac44
- (void)apsIsConnected:(_Bool)arg1;	// IMP=0x000000010008ab28
- (void)deviceHasPhoneCallRelayRequest:(_Bool)arg1;	// IMP=0x000000010008a844
- (void)pipeDidConnectForNRUUID:(_Bool)arg1 nrUUID:(id)arg2;	// IMP=0x000000010008a5b0
- (void)linkPeerIsAsleep:(id)arg1 isAsleep:(_Bool)arg2;	// IMP=0x000000010008a514
- (void)linkDidReceiveData:(id)arg1 data:(id)arg2;	// IMP=0x0000000100089c04
- (void)linkIsUnavailable:(id)arg1;	// IMP=0x0000000100089720
- (void)linkIsSuspended:(id)arg1;	// IMP=0x0000000100089588
- (void)linkIsReady:(id)arg1;	// IMP=0x000000010008918c
- (void)linkIsAvailable:(id)arg1;	// IMP=0x0000000100088bc8
- (void)sendDeviceLinkStateOnLink:(id)arg1;	// IMP=0x0000000100088ae0
- (void)addStopQuickRelayRequest;	// IMP=0x0000000100088a28
- (unsigned int)cancelAllLinks;	// IMP=0x0000000100088844
- (void)removePoliciesForLink:(id)arg1;	// IMP=0x000000010008851c
- (void)setIPTunnelPolicyForLink:(id)arg1;	// IMP=0x00000001000853bc
- (void)setWhitelistPolicies;	// IMP=0x0000000100084b60
- (void)setupIDSPathWatcher;	// IMP=0x00000001000848b8
- (_Bool)addWhitelistPolicyWithUUID:(id)arg1 policyIDArray:(id)arg2 appName:(id)arg3;	// IMP=0x0000000100084538
- (void)resumeLinkOfType:(unsigned char)arg1;	// IMP=0x000000010008439c
- (void)suspendLinkOfType:(unsigned char)arg1;	// IMP=0x0000000100084238
- (void)sendHelloWithPreferredLink:(id)arg1 forced:(_Bool)arg2;	// IMP=0x000000010008413c
- (void)rejectPreferWiFiRequest:(id)arg1;	// IMP=0x0000000100083fbc
- (void)updatePrimaryLink;	// IMP=0x0000000100083d2c
- (void)serviceRequests;	// IMP=0x00000001000836f8
- (void)processRequest:(id)arg1;	// IMP=0x0000000100082634
- (_Bool)hasServiceRequestOfType:(unsigned char)arg1;	// IMP=0x00000001000824dc
- (void)removeRequestOfType:(unsigned char)arg1;	// IMP=0x0000000100082260
- (void)removeRequest:(id)arg1;	// IMP=0x00000001000821c0
- (void)addRequest:(id)arg1;	// IMP=0x0000000100081e54
- (void)refreshCompanionProxyAgent;	// IMP=0x0000000100081ce0
- (id)copyStatusString;	// IMP=0x00000001000816f0
- (void)enableWiFiAutojoin;	// IMP=0x0000000100081610
- (void)disableWiFiAutojoinIfApplicable;	// IMP=0x00000001000815a0
- (void)forceWoWMode;	// IMP=0x0000000100081400
- (_Bool)isDeviceNearby;	// IMP=0x00000001000813a0
- (_Bool)isAlwaysOnWiFiSupported;	// IMP=0x000000010008121c
- (void)setWiFiLinkBringUpTimeout;	// IMP=0x0000000100080fc8
- (void)setPreferWiFiTimeout;	// IMP=0x0000000100080dd4
- (_Bool)sendPreferWiFiRequest:(_Bool)arg1 immediately:(_Bool)arg2 removeIfFailed:(_Bool)arg3 preferLinkType:(unsigned char)arg4 isAck:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100080c7c
- (_Bool)sendWiFiEndpoint:(_Bool)arg1 removeIfFailed:(_Bool)arg2;	// IMP=0x0000000100080ba0
- (_Bool)isLastSentWiFiEndpointValid;	// IMP=0x0000000100080af8
- (void)setPreferWiFiAllowedForTesting:(_Bool)arg1;	// IMP=0x0000000100080908
- (void)setWiFiRangeExtensionAllowedForTesting:(_Bool)arg1;	// IMP=0x00000001000807f0
- (void)setWiFiState:(_Bool)arg1;	// IMP=0x00000001000805f0
- (void)setBringUpWiFiImmediatelyInner:(_Bool)arg1 timeout:(unsigned short)arg2 addSuspendBTRequest:(_Bool)arg3;	// IMP=0x0000000100080228
- (id)copyPrimaryLink;	// IMP=0x00000001000801f0
- (id)copyLinkOfType:(unsigned char)arg1;	// IMP=0x0000000100080094
- (void)addSuspendBluetoothRequestWhenWiFiAvailable;	// IMP=0x000000010007fa7c
- (void)updateDeviceMonitorConnections;	// IMP=0x000000010007f824
- (id)copyDeviceMonitorStatusWithReplyDict:(id)arg1;	// IMP=0x000000010007f62c
- (void)updateCompanionLinkViability;	// IMP=0x000000010007f318
- (void)startQuickRelayLinkIfApplicable;	// IMP=0x000000010007f1a4
- (void)cancelConductor;	// IMP=0x000000010007eb04
- (void)startConductor;	// IMP=0x000000010007e57c
- (id)initConductorWithNRUUID:(id)arg1 queue:(id)arg2;	// IMP=0x000000010007e198
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

