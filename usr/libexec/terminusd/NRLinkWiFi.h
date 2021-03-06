//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLink.h"

#import "NEIKEv2ListenerDelegate-Protocol.h"
#import "NWNetworkOfInterestManagerDelegate-Protocol.h"

@class NEIKEv2Listener, NEIKEv2Session, NRAnalyticsCmpnLinkWiFi, NSNumber, NSString, NSUUID, NWAddressEndpoint, NWNetworkOfInterestManager;

@interface NRLinkWiFi : NRLink <NEIKEv2ListenerDelegate, NWNetworkOfInterestManagerDelegate>
{
    unsigned int _ikeRetryCounter;	// 72 = 0x48
    unsigned int _startRetryCounter;	// 76 = 0x4c
    unsigned int _setupIPsecRetryCounter;	// 80 = 0x50
    unsigned int _symptomsAdvisoryCounter;	// 84 = 0x54
    int _notifyToken;	// 88 = 0x58
    NSNumber *_listenerPort;	// 96 = 0x60
    NWAddressEndpoint *_localOuterEndpoint;	// 104 = 0x68
    NWAddressEndpoint *_remoteOuterEndpoint;	// 112 = 0x70
    NEIKEv2Listener *_ikeListener;	// 120 = 0x78
    NEIKEv2Session *_ikeSessionClassC;	// 128 = 0x80
    NSString *_wifiInterfaceName;	// 136 = 0x88
    NWNetworkOfInterestManager *_symptomsNOIManager;	// 144 = 0x90
    NRAnalyticsCmpnLinkWiFi *_linkAnalytics;	// 152 = 0x98
    NSUUID *_randomUUIDForWiFiAssertion;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000001000154a8
@property(retain, nonatomic) NSUUID *randomUUIDForWiFiAssertion; // @synthesize randomUUIDForWiFiAssertion=_randomUUIDForWiFiAssertion;
@property(retain, nonatomic) NRAnalyticsCmpnLinkWiFi *linkAnalytics; // @synthesize linkAnalytics=_linkAnalytics;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NWNetworkOfInterestManager *symptomsNOIManager; // @synthesize symptomsNOIManager=_symptomsNOIManager;
@property(nonatomic) unsigned int symptomsAdvisoryCounter; // @synthesize symptomsAdvisoryCounter=_symptomsAdvisoryCounter;
@property(nonatomic) unsigned int setupIPsecRetryCounter; // @synthesize setupIPsecRetryCounter=_setupIPsecRetryCounter;
@property(nonatomic) unsigned int startRetryCounter; // @synthesize startRetryCounter=_startRetryCounter;
@property(nonatomic) unsigned int ikeRetryCounter; // @synthesize ikeRetryCounter=_ikeRetryCounter;
@property(retain, nonatomic) NSString *wifiInterfaceName; // @synthesize wifiInterfaceName=_wifiInterfaceName;
@property(retain, nonatomic) NEIKEv2Session *ikeSessionClassC; // @synthesize ikeSessionClassC=_ikeSessionClassC;
@property(retain, nonatomic) NEIKEv2Listener *ikeListener; // @synthesize ikeListener=_ikeListener;
@property(retain, nonatomic) NWAddressEndpoint *remoteOuterEndpoint; // @synthesize remoteOuterEndpoint=_remoteOuterEndpoint;
@property(retain, nonatomic) NWAddressEndpoint *localOuterEndpoint; // @synthesize localOuterEndpoint=_localOuterEndpoint;
@property(retain, nonatomic) NSNumber *listenerPort; // @synthesize listenerPort=_listenerPort;
- (_Bool)resume;	// IMP=0x00000001000151dc
- (_Bool)suspend;	// IMP=0x00000001000150f4
- (void)handleNotifyCode:(unsigned short)arg1 payload:(id)arg2;	// IMP=0x0000000100014fe0
- (_Bool)sendControlData:(id)arg1;	// IMP=0x0000000100014dc0
- (void)requestConfigurationForListener:(id)arg1 session:(id)arg2 sessionConfig:(id)arg3 childConfig:(id)arg4 validateAuthBlock:(CDUnknownBlockType)arg5 responseBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100014574
- (void)listener:(id)arg1 receivedNewSession:(id)arg2;	// IMP=0x0000000100014478
- (_Bool)setupIPsec;	// IMP=0x0000000100014234
- (void)setupIKECallbacksClassC;	// IMP=0x0000000100013de0
- (void)checkPeerAvailabilityWithForceAggressive:(_Bool)arg1;	// IMP=0x0000000100013bdc
- (void)didStopTrackingAllNOIs:(id)arg1;	// IMP=0x0000000100013b2c
- (void)didStartTrackingNOI:(id)arg1;	// IMP=0x0000000100013a6c
- (void)stopSymptomsMonitor;	// IMP=0x0000000100013840
- (void)startSymptomsMonitor;	// IMP=0x000000010001357c
- (void)stopSymptomsNOIManagerTracking;	// IMP=0x00000001000134b8
- (void)startSymptomsNOIManagerTracking;	// IMP=0x00000001000132a4
- (void)restartIKESessionClassC;	// IMP=0x00000001000131a4
- (void)setWiFiPowerAssertionState:(_Bool)arg1;	// IMP=0x00000001000131a0
- (_Bool)setupVirtualInterface;	// IMP=0x0000000100012cc4
- (_Bool)cancelWithReason:(id)arg1;	// IMP=0x00000001000128e4
- (_Bool)start;	// IMP=0x0000000100012710
- (unsigned short)metric;	// IMP=0x0000000100012708
- (id)copyDescriptionInner;	// IMP=0x0000000100012634
- (void)refreshCompanionProxyAgent;	// IMP=0x00000001000125ac
- (void)dealloc;	// IMP=0x000000010001252c
- (void)invalidateLink;	// IMP=0x0000000100012304
- (void)setIsPrimary:(_Bool)arg1;	// IMP=0x000000010001223c
- (void)invalidateIKESessionClassC;	// IMP=0x00000001000121d8
- (id)initLinkWithQueue:(id)arg1 linkDelegate:(id)arg2 nrUUID:(id)arg3 wifiInterfaceName:(id)arg4 localOuterEndpoint:(id)arg5 remoteOuterEndpoint:(id)arg6 listenerPort:(id)arg7;	// IMP=0x0000000100011e1c
- (id)copyStatusString;	// IMP=0x0000000100011c70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

