//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSArray, NSData, NSMutableDictionary, NSString, NSThread, NSTimer;
@protocol OS_dispatch_queue;

@interface WiFiIDSSyncEngine : NSObject <IDSServiceDelegate>
{
    _Bool _isWaitingForIdsMessageDelivery;	// 8 = 0x8
    _Bool _isWaitingForIdsSendResponse;	// 9 = 0x9
    _Bool _isKeychainUnlocked;	// 10 = 0xa
    int _connectionState;	// 12 = 0xc
    IDSService *_idsService;	// 16 = 0x10
    NSThread *_wifidMainThread;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialIdsDispatchQ;	// 32 = 0x20
    struct __WiFiManager *_manager;	// 40 = 0x28
    long long _role;	// 48 = 0x30
    struct __WiFiNetwork *_currentNetwork;	// 56 = 0x38
    NSArray *_knownNetworks;	// 64 = 0x40
    NSArray *_receivedKnownNetworks;	// 72 = 0x48
    unsigned long long _didReSendIdsMessage;	// 80 = 0x50
    NSString *_pairedDeviceDestinationID;	// 88 = 0x58
    NSTimer *_coalesceKnownNetworksSyncTimer;	// 96 = 0x60
    NSTimer *_waitForReAssociationTimer;	// 104 = 0x68
    NSData *_lastSyncedKnownNetworksData;	// 112 = 0x70
    NSData *_lastSyncedCompanionAssistedAutoJoinData;	// 120 = 0x78
    NSData *_lastSyncedCompanionLocaleData;	// 128 = 0x80
    NSString *_lastSyncedKnownNetworksDataGUID;	// 136 = 0x88
    NSString *_lastSyncedCompanionAssistedAutoJoinDataGUID;	// 144 = 0x90
    NSString *_lastSyncedCompanionLocaleGUID;	// 152 = 0x98
    NSString *_countryCodeStr;	// 160 = 0xa0
    unsigned long long _idsSendFailureCount;	// 168 = 0xa8
    CDUnknownBlockType _stateChangeCallback;	// 176 = 0xb0
    void *_stateChangeContext;	// 184 = 0xb8
    NSMutableDictionary *_bssidGuessingDictionary;	// 192 = 0xc0
    NSMutableDictionary *_authGuessingDictionary;	// 200 = 0xc8
}

@property(retain, nonatomic) NSMutableDictionary *authGuessingDictionary; // @synthesize authGuessingDictionary=_authGuessingDictionary;
@property(retain, nonatomic) NSMutableDictionary *bssidGuessingDictionary; // @synthesize bssidGuessingDictionary=_bssidGuessingDictionary;
@property(nonatomic) int connectionState; // @synthesize connectionState=_connectionState;
@property(nonatomic) void *stateChangeContext; // @synthesize stateChangeContext=_stateChangeContext;
@property(copy, nonatomic) CDUnknownBlockType stateChangeCallback; // @synthesize stateChangeCallback=_stateChangeCallback;
@property _Bool isKeychainUnlocked; // @synthesize isKeychainUnlocked=_isKeychainUnlocked;
@property unsigned long long idsSendFailureCount; // @synthesize idsSendFailureCount=_idsSendFailureCount;
@property(retain, nonatomic) NSString *countryCodeStr; // @synthesize countryCodeStr=_countryCodeStr;
@property(retain, nonatomic) NSString *lastSyncedCompanionLocaleGUID; // @synthesize lastSyncedCompanionLocaleGUID=_lastSyncedCompanionLocaleGUID;
@property(retain, nonatomic) NSString *lastSyncedCompanionAssistedAutoJoinDataGUID; // @synthesize lastSyncedCompanionAssistedAutoJoinDataGUID=_lastSyncedCompanionAssistedAutoJoinDataGUID;
@property(retain, nonatomic) NSString *lastSyncedKnownNetworksDataGUID; // @synthesize lastSyncedKnownNetworksDataGUID=_lastSyncedKnownNetworksDataGUID;
@property(retain, nonatomic) NSData *lastSyncedCompanionLocaleData; // @synthesize lastSyncedCompanionLocaleData=_lastSyncedCompanionLocaleData;
@property(retain, nonatomic) NSData *lastSyncedCompanionAssistedAutoJoinData; // @synthesize lastSyncedCompanionAssistedAutoJoinData=_lastSyncedCompanionAssistedAutoJoinData;
@property(retain, nonatomic) NSData *lastSyncedKnownNetworksData; // @synthesize lastSyncedKnownNetworksData=_lastSyncedKnownNetworksData;
@property(retain, nonatomic) NSTimer *waitForReAssociationTimer; // @synthesize waitForReAssociationTimer=_waitForReAssociationTimer;
@property(retain, nonatomic) NSTimer *coalesceKnownNetworksSyncTimer; // @synthesize coalesceKnownNetworksSyncTimer=_coalesceKnownNetworksSyncTimer;
@property(copy, nonatomic) NSString *pairedDeviceDestinationID; // @synthesize pairedDeviceDestinationID=_pairedDeviceDestinationID;
@property unsigned long long didReSendIdsMessage; // @synthesize didReSendIdsMessage=_didReSendIdsMessage;
@property _Bool isWaitingForIdsSendResponse; // @synthesize isWaitingForIdsSendResponse=_isWaitingForIdsSendResponse;
@property _Bool isWaitingForIdsMessageDelivery; // @synthesize isWaitingForIdsMessageDelivery=_isWaitingForIdsMessageDelivery;
@property(nonatomic) NSArray *receivedKnownNetworks; // @synthesize receivedKnownNetworks=_receivedKnownNetworks;
@property(retain, nonatomic) NSArray *knownNetworks; // @synthesize knownNetworks=_knownNetworks;
@property(nonatomic) struct __WiFiNetwork *currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property long long role; // @synthesize role=_role;
@property struct __WiFiManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialIdsDispatchQ; // @synthesize serialIdsDispatchQ=_serialIdsDispatchQ;
@property(retain, nonatomic) NSThread *wifidMainThread; // @synthesize wifidMainThread=_wifidMainThread;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (id)getCorresponding5GhzSsidInPlistFor2GhzNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010013e4d8
- (void)incrementGuessingFailedCountForScannedNetworkWithBssid:(id)arg1;	// IMP=0x000000010013e228
- (unsigned char)isNetworkKnown:(id)arg1;	// IMP=0x000000010013e190
- (unsigned char)canAttemptAssociationBasedOnBssidGuessingForScannedNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010013dc28
- (void)removeFromKnownNetworkGuessingDictionaryTheNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010013d9dc
- (void)addToKnownNetworkGuessingDictionaryTheNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010013d648
- (void)updateBssidGuessingDictForBssid:(id)arg1 guessingFailureCountDict:(id)arg2 forNetworkSsid:(id)arg3;	// IMP=0x000000010013d514
- (void)createKnownNetworkGuessingDictionary;	// IMP=0x000000010013d2f8
- (void)releaseKnownNetworkGuessingDictionary;	// IMP=0x000000010013d2d0
- (void)notifyStateChanged;	// IMP=0x000000010013d244
- (void)processReceivedLocaleString:(id)arg1;	// IMP=0x000000010013d1f8
- (void)processReceivedAutoJoinAssist:(id)arg1;	// IMP=0x000000010013cda4
- (void)sendLocaleToGizmo:(id)arg1;	// IMP=0x000000010013cc28
- (void)sendCurrentCompanionNetwork;	// IMP=0x000000010013c928
- (void)companionReAssociationWaitTimerFired:(id)arg1;	// IMP=0x000000010013c8f0
- (void)currentNetworkChanged;	// IMP=0x000000010013c56c
- (void)subscribeToKeychainChanges;	// IMP=0x000000010013c2f0
- (void)checkForWiFiPasswordChange;	// IMP=0x000000010013bf48
- (void)keychainAccessibleNow;	// IMP=0x000000010013bea0
- (void)syncKnownWiFiNetworks:(id)arg1;	// IMP=0x000000010013b860
- (void)knownNetworksListChanged;	// IMP=0x000000010013b5cc
- (void)processReceivedKnownNetworks:(id)arg1;	// IMP=0x000000010013aa50
- (void)updateGuessedNetworkCredentials:(struct __WiFiNetwork *)arg1 password:(struct __CFString *)arg2;	// IMP=0x000000010013a784
- (long long)isRxdNetwork:(id)arg1 equalToPlistNetwork:(struct __WiFiNetwork *)arg2;	// IMP=0x000000010013a534
- (_Bool)doesNetworkContainBssidForGuessing2GhzNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010013a474
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000100139f7c
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0000000100139ecc
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000100139e1c
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0000000100139c04
- (void)pairedDeviceConnectionChanged:(id)arg1;	// IMP=0x0000000100139b00
- (void)updatePairedDeviceID:(id)arg1;	// IMP=0x0000000100139920
- (void)updateConnectionState:(id)arg1 waitUntilDone:(unsigned char)arg2;	// IMP=0x0000000100139690
- (id)copyPairedDestinationID;	// IMP=0x00000001001394a4
- (void)reSendIdsMessage:(long long)arg1;	// IMP=0x0000000100139380
- (void)sendToGizmoOfDataType:(long long)arg1;	// IMP=0x0000000100138f70
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100138cc8
- (void)checkIfSoftwareUpdateStateEntered:(unsigned short)arg1;	// IMP=0x0000000100138bd4
- (void)enteredCompatibilityState:(id)arg1;	// IMP=0x0000000100138b58
- (void)registerForSoftwareUpdateTrigger;	// IMP=0x0000000100138a5c
- (void)registerForInitialSyncTrigger;	// IMP=0x00000001001388bc
- (void)setUpIDS;	// IMP=0x0000000100138724
- (void)dealloc;	// IMP=0x0000000100138658
- (void)initializeWithWiFiManager:(struct __WiFiManager *)arg1;	// IMP=0x0000000100138420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

