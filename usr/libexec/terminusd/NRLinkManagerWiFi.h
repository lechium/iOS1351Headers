//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLinkManager.h"

#import "NRLinkDelegate-Protocol.h"

@class NEPolicySession, NRPreferWiFiAgent, NSData, NSMutableArray, NSMutableSet, NSString, NWAddressEndpoint;
@protocol NRLinkManagerWiFiDelegate;

@interface NRLinkManagerWiFi : NRLinkManager <NRLinkDelegate>
{
    _Bool _isWiFiAvailable;	// 8 = 0x8
    unsigned char _isWiFiEnabled;	// 9 = 0x9
    unsigned int _wifiInterfaceIndex;	// 12 = 0xc
    int _preferWiFiAsserts;	// 16 = 0x10
    int _clearedPreferWiFiAssertCounts;	// 20 = 0x14
    NWAddressEndpoint *_localWiFiEndpoint;	// 24 = 0x18
    NWAddressEndpoint *_peerWiFiEndpoint;	// 32 = 0x20
    NSData *_localWiFiSignature;	// 40 = 0x28
    NSData *_peerWiFiSignature;	// 48 = 0x30
    NSString *_wifiInterfaceName;	// 56 = 0x38
    struct __SCDynamicStore *_scdynamicStoreRef;	// 64 = 0x40
    NSString *_scdKeyIPv4;	// 72 = 0x48
    NSString *_scdKeyIPv6;	// 80 = 0x50
    NSMutableArray *_scdAddressArrayIPv4;	// 88 = 0x58
    NSMutableArray *_scdAddressArrayIPv6;	// 96 = 0x60
    unsigned long long _scdUpdateCounter;	// 104 = 0x68
    NSMutableSet *_links;	// 112 = 0x70
    id <NRLinkManagerWiFiDelegate> _wifiManagerDelegate;	// 120 = 0x78
    NRPreferWiFiAgent *_wifiAgent;	// 128 = 0x80
    NEPolicySession *_policySession;	// 136 = 0x88
    unsigned long long _enableWiFiCounter;	// 144 = 0x90
    unsigned long long _disableWiFiCounter;	// 152 = 0x98
    struct __WiFiManagerClient *_wifiClient;	// 160 = 0xa0
    struct __SCNetworkInterface *_wifiInterface;	// 168 = 0xa8
    NSMutableSet *_wifiAutojoinClients;	// 176 = 0xb0
}

+ (_Bool)deviceSupportsAlwaysOnWiFi;	// IMP=0x00000001000c0af0
+ (struct __WiFiManagerClient *)copySharedWiFiManagerClientRef;	// IMP=0x00000001000c0aa0
- (void).cxx_destruct;	// IMP=0x00000001000c0444
@property(nonatomic) int clearedPreferWiFiAssertCounts; // @synthesize clearedPreferWiFiAssertCounts=_clearedPreferWiFiAssertCounts;
@property(retain, nonatomic) NSMutableSet *wifiAutojoinClients; // @synthesize wifiAutojoinClients=_wifiAutojoinClients;
@property(nonatomic) struct __SCNetworkInterface *wifiInterface; // @synthesize wifiInterface=_wifiInterface;
@property(nonatomic) struct __WiFiManagerClient *wifiClient; // @synthesize wifiClient=_wifiClient;
@property(nonatomic) unsigned long long disableWiFiCounter; // @synthesize disableWiFiCounter=_disableWiFiCounter;
@property(nonatomic) unsigned long long enableWiFiCounter; // @synthesize enableWiFiCounter=_enableWiFiCounter;
@property(nonatomic) int preferWiFiAsserts; // @synthesize preferWiFiAsserts=_preferWiFiAsserts;
@property(nonatomic) unsigned char isWiFiEnabled; // @synthesize isWiFiEnabled=_isWiFiEnabled;
@property(retain, nonatomic) NEPolicySession *policySession; // @synthesize policySession=_policySession;
@property(retain, nonatomic) NRPreferWiFiAgent *wifiAgent; // @synthesize wifiAgent=_wifiAgent;
@property(nonatomic) __weak id <NRLinkManagerWiFiDelegate> wifiManagerDelegate; // @synthesize wifiManagerDelegate=_wifiManagerDelegate;
@property(retain, nonatomic) NSMutableSet *links; // @synthesize links=_links;
@property(nonatomic) unsigned long long scdUpdateCounter; // @synthesize scdUpdateCounter=_scdUpdateCounter;
@property(nonatomic) _Bool isWiFiAvailable; // @synthesize isWiFiAvailable=_isWiFiAvailable;
@property(retain, nonatomic) NSMutableArray *scdAddressArrayIPv6; // @synthesize scdAddressArrayIPv6=_scdAddressArrayIPv6;
@property(retain, nonatomic) NSMutableArray *scdAddressArrayIPv4; // @synthesize scdAddressArrayIPv4=_scdAddressArrayIPv4;
@property(retain, nonatomic) NSString *scdKeyIPv6; // @synthesize scdKeyIPv6=_scdKeyIPv6;
@property(retain, nonatomic) NSString *scdKeyIPv4; // @synthesize scdKeyIPv4=_scdKeyIPv4;
@property(nonatomic) struct __SCDynamicStore *scdynamicStoreRef; // @synthesize scdynamicStoreRef=_scdynamicStoreRef;
@property(retain, nonatomic) NSString *wifiInterfaceName; // @synthesize wifiInterfaceName=_wifiInterfaceName;
@property(nonatomic) unsigned int wifiInterfaceIndex; // @synthesize wifiInterfaceIndex=_wifiInterfaceIndex;
@property(retain, nonatomic) NSData *peerWiFiSignature; // @synthesize peerWiFiSignature=_peerWiFiSignature;
@property(retain, nonatomic) NSData *localWiFiSignature; // @synthesize localWiFiSignature=_localWiFiSignature;
@property(retain, nonatomic) NWAddressEndpoint *peerWiFiEndpoint; // @synthesize peerWiFiEndpoint=_peerWiFiEndpoint;
@property(retain, nonatomic) NWAddressEndpoint *localWiFiEndpoint; // @synthesize localWiFiEndpoint=_localWiFiEndpoint;
- (void)checkEnabledDevices;	// IMP=0x00000001000bfed0
- (void)setupSCDWatcher;	// IMP=0x00000001000bf928
- (void)processSCDUpdate:(id)arg1;	// IMP=0x00000001000bef4c
- (void)setupWiFiManager;	// IMP=0x00000001000bed48
- (_Bool)preferWiFiRequestUnavailable;	// IMP=0x00000001000bebac
- (_Bool)preferWiFiRequestAvailable;	// IMP=0x00000001000beac4
- (_Bool)isWiFiPoweredOn;	// IMP=0x00000001000bea9c
- (void)clearPreferWiFiAsserts;	// IMP=0x00000001000be918
- (_Bool)hasPreferWiFiAsserts;	// IMP=0x00000001000be8c0
- (void)disableWiFi;	// IMP=0x00000001000be774
- (int)getEffectiveWiFiClientType;	// IMP=0x00000001000be6f8
- (void)enableWiFi;	// IMP=0x00000001000be5b0
- (void)reportClientType:(int)arg1;	// IMP=0x00000001000be51c
- (void)unregisterDirectToCloudAgent;	// IMP=0x00000001000be518
- (void)registerDirectToCloudAgent;	// IMP=0x00000001000be514
- (void)setDirectToCloudAssertionState:(_Bool)arg1;	// IMP=0x00000001000be510
- (void)setWiFiState:(_Bool)arg1 forConductorUUID:(id)arg2;	// IMP=0x00000001000be3e4
- (void)interfaceUnavailable;	// IMP=0x00000001000be12c
- (void)interfaceAvailable;	// IMP=0x00000001000bdd4c
- (void)createLinkIfApplicable;	// IMP=0x00000001000bd938
- (id)createWiFiLinkForNRUUID:(id)arg1;	// IMP=0x00000001000bd78c
- (void)updateAvoidCompanionNotifyTokenIfNeeded;	// IMP=0x00000001000bd788
- (_Bool)updateWiFiSignatureFromNWI:(struct _nwi_ifstate *)arg1 addressFamily:(int)arg2;	// IMP=0x00000001000bd1cc
- (void)linkDidReceiveData:(id)arg1 data:(id)arg2;	// IMP=0x00000001000bd048
- (void)linkIsUnavailable:(id)arg1;	// IMP=0x00000001000bce8c
- (void)linkIsSuspended:(id)arg1;	// IMP=0x00000001000bcd0c
- (void)linkIsReady:(id)arg1;	// IMP=0x00000001000bcb8c
- (void)linkIsAvailable:(id)arg1;	// IMP=0x00000001000bc9d0
- (id)copyStatusString;	// IMP=0x00000001000bc608
- (id)copyName;	// IMP=0x00000001000bc5fc
- (void)dealloc;	// IMP=0x00000001000bc560
- (void)invalidateManager;	// IMP=0x00000001000bc424
- (void)cancel;	// IMP=0x00000001000bc1e0
- (id)initManagerWithQueue:(id)arg1 managerDelegate:(id)arg2 wifiManagerDelegate:(id)arg3;	// IMP=0x00000001000bbf08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

