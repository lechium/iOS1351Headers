//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class CUBluetoothClient, CUSystemMonitor, IDSService, NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPIdentity, SDStatusMonitor, SFBLEAdvertiser, SFBLEPipe, SFBLEScanner, SFSystemService, WPNearby;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDNearbyAgent : NSObject <IDSServiceDelegate>
{
    _Bool _activated;	// 8 = 0x8
    _Bool _activityCarPlayRegistered;	// 9 = 0x9
    int _activityLevelNotifyToken;	// 12 = 0xc
    unsigned char _activityLevel;	// 16 = 0x10
    _Bool _activityMonitorStarted;	// 17 = 0x11
    _Bool _activityMultipleUsersRegistered;	// 18 = 0x12
    int _activityPollSeconds;	// 20 = 0x14
    int _activityRecentSeconds;	// 24 = 0x18
    _Bool _activityScreenOn;	// 28 = 0x1c
    NSObject<OS_dispatch_source> *_activityTimer;	// 32 = 0x20
    _Bool _activityUIUnlocked;	// 40 = 0x28
    _Bool _activityUserActive;	// 41 = 0x29
    NSData *_bleAdvertisingAddress;	// 48 = 0x30
    NSData *_bleAudioRoutingScoreEncryptedData;	// 56 = 0x38
    NSData *_bleAuthTagOverride;	// 64 = 0x40
    NSMutableDictionary *_bleConnections;	// 72 = 0x48
    _Bool _bleDiagnosticAdvSuppressLogged;	// 80 = 0x50
    NSMutableSet *_bleDiagnosticModeClients;	// 88 = 0x58
    NSData *_bleHotspotEncryptedData;	// 96 = 0x60
    SFBLEAdvertiser *_bleNearbyActionAdvertiser;	// 104 = 0x68
    _Bool _bleNearbyActionAdvertiseActive;	// 112 = 0x70
    _Bool _bleNearbyActionAdvertiseDisabled;	// 113 = 0x71
    NSObject<OS_dispatch_source> *_bleNearbyActionAdvertiseLingerTimer;	// 120 = 0x78
    NSMutableDictionary *_bleNearbyActionDevices;	// 128 = 0x80
    _Bool _bleNearbyActionRSSILog;	// 136 = 0x88
    _Bool _bleNearbyActionScanAlways;	// 137 = 0x89
    _Bool _bleNearbyActionScanNever;	// 138 = 0x8a
    SFBLEScanner *_bleNearbyActionScanner;	// 144 = 0x90
    _Bool _bleNearbyInfoAdvertiseAlways;	// 152 = 0x98
    _Bool _bleNearbyInfoAdvertiseDisabled;	// 153 = 0x99
    double _bleNearbyInfoAdvertiseLingerSecs;	// 160 = 0xa0
    SFBLEAdvertiser *_bleNearbyInfoAdvertiser;	// 168 = 0xa8
    _Bool _bleNearbyInfoAdvertised;	// 176 = 0xb0
    NSObject<OS_dispatch_source> *_bleNearbyInfoAdvertiseLingerTimer;	// 184 = 0xb8
    _Bool _bleNearbyInfoAirDropUsable;	// 192 = 0xc0
    NSMutableDictionary *_bleNearbyInfoDevices;	// 200 = 0xc8
    _Bool _bleNearbyInfoRSSILog;	// 208 = 0xd0
    _Bool _bleNearbyInfoWiFiP2P;	// 209 = 0xd1
    SFBLEScanner *_bleNearbyInfoScanner;	// 216 = 0xd8
    WPNearby *_bleWPNearby;	// 224 = 0xe0
    _Bool _bleProximityEnabled;	// 232 = 0xe8
    NSDictionary *_bleProximityInfo;	// 240 = 0xf0
    NSDictionary *_bleProximityInfoOverride;	// 248 = 0xf8
    SFBLEScanner *_bleProximityPairingScanner;	// 256 = 0x100
    _Bool _bleProximityRSSILog;	// 264 = 0x108
    _Bool _btPipeEnabled;	// 265 = 0x109
    _Bool _btPipeForced;	// 266 = 0x10a
    SFBLEPipe *_btPipe;	// 272 = 0x110
    _Bool _caEnabled;	// 280 = 0x118
    int _caForce;	// 284 = 0x11c
    unsigned int _caMessageNoScans;	// 288 = 0x120
    unsigned int _caMessageScans;	// 292 = 0x124
    _Bool _caPhoneCalls;	// 296 = 0x128
    NSMutableSet *_caRequests;	// 304 = 0x130
    _Bool _caScanIfVeryActive;	// 312 = 0x138
    _Bool _caSingleDevice;	// 313 = 0x139
    NSData *_contactHashesCached;	// 320 = 0x140
    _Bool _contactHashesEnabled;	// 328 = 0x148
    unsigned long long _ddFastScanLastEndTicks;	// 336 = 0x150
    NSObject<OS_dispatch_source> *_ddFastScanTimer;	// 344 = 0x158
    NSMutableDictionary *_ddNearbyActionDevices;	// 352 = 0x160
    _Bool _ddNearbyActionEnabled;	// 360 = 0x168
    _Bool _ddNearbyActionScreenOff;	// 361 = 0x169
    NSMutableDictionary *_ddNearbyInfoDevices;	// 368 = 0x170
    _Bool _ddNearbyInfoEnabled;	// 376 = 0x178
    _Bool _ddNearbyInfoScreenOff;	// 377 = 0x179
    NSMutableDictionary *_ddProximityPairingDevices;	// 384 = 0x180
    _Bool _ddProximityPairingEnabled;	// 392 = 0x188
    _Bool _ddProximityPairingScreenOff;	// 393 = 0x189
    NSMutableSet *_ddRequests;	// 400 = 0x190
    unsigned long long _familyFlags;	// 408 = 0x198
    int _familyNotifyToken;	// 416 = 0x1a0
    int _idsAppleTVCountCache;	// 420 = 0x1a4
    NSArray *_idsBluetoothDevicesArray;	// 424 = 0x1a8
    NSSet *_idsBluetoothDevicesSet;	// 432 = 0x1b0
    NSArray *_idsBluetoothDeviceIDsForLEPipe;	// 440 = 0x1b8
    NSSet *_idsBluetoothDeviceIDsForMe;	// 448 = 0x1c0
    NSMutableDictionary *_idsBTtoIDSInfoMap;	// 456 = 0x1c8
    int _idsContinuityDeviceCountCache;	// 464 = 0x1d0
    NSArray *_idsDeviceArray;	// 472 = 0x1d8
    NSDictionary *_idsDeviceBTDictionary;	// 480 = 0x1e0
    int _idsHasActiveWatchCache;	// 488 = 0x1e8
    int _idsHomePodCountCache;	// 492 = 0x1ec
    int _idsIsSignedInCache;	// 496 = 0x1f0
    int _idsMacCountCache;	// 500 = 0x1f4
    int _idsShouldAdvertiseNearbyInfo;	// 504 = 0x1f8
    int _idsShouldEncryptActivityLevel;	// 508 = 0x1fc
    IDSService *_idsService;	// 512 = 0x200
    _Bool _logProxAdvFields;	// 520 = 0x208
    NSUUID *_remoteAppServiceUUID;	// 528 = 0x210
    NSMutableDictionary *_services;	// 536 = 0x218
    NSMutableDictionary *_sessions;	// 544 = 0x220
    NSMutableDictionary *_setupSessions;	// 552 = 0x228
    _Bool _shareAudioEnabled;	// 560 = 0x230
    double _startTime;	// 568 = 0x238
    SDStatusMonitor *_statusMonitor;	// 576 = 0x240
    CUSystemMonitor *_systemMonitor;	// 584 = 0x248
    SFSystemService *_systemService;	// 592 = 0x250
    _Bool _unlockAdvertiseAlways;	// 600 = 0x258
    _Bool _unlockAdvertiseAggressive;	// 601 = 0x259
    _Bool _unlockAdvertiseEnabled;	// 602 = 0x25a
    _Bool _unlockAdvertiseBackground;	// 603 = 0x25b
    _Bool _unlockAdvertiseWatch;	// 604 = 0x25c
    _Bool _unlockAdvertiseWatchLocked;	// 605 = 0x25d
    NSObject<OS_dispatch_source> *_unlockTestClientTimer;	// 608 = 0x260
    NSMutableDictionary *_idDevices;	// 616 = 0x268
    _Bool _idEnabled;	// 624 = 0x270
    int _idIdentitiesChangedNotifyToken;	// 628 = 0x274
    NSArray *_idIdentityArray;	// 632 = 0x278
    NSObject<OS_dispatch_source> *_idMaintenanceTimer;	// 640 = 0x280
    _Bool _systemWillPowerDown;	// 648 = 0x288
    _Bool _autoUnlockActive;	// 649 = 0x289
    _Bool _boostNearbyInfo;	// 650 = 0x28a
    int _audioRoutingScore;	// 652 = 0x28c
    unsigned int _hotspotInfo;	// 656 = 0x290
    NSData *_bleAuthTag;	// 664 = 0x298
    CUBluetoothClient *_btConnectedDeviceMonitor;	// 672 = 0x2a0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 680 = 0x2a8
    RPIdentity *_idSelfIdentity;	// 688 = 0x2b0
}

+ (id)sharedNearbyAgent;	// IMP=0x0000000100228d60
- (void).cxx_destruct;	// IMP=0x000000010024b370
@property(readonly, nonatomic) RPIdentity *idSelfIdentity; // @synthesize idSelfIdentity=_idSelfIdentity;
@property(nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) CUBluetoothClient *btConnectedDeviceMonitor; // @synthesize btConnectedDeviceMonitor=_btConnectedDeviceMonitor;
@property(nonatomic) _Bool boostNearbyInfo; // @synthesize boostNearbyInfo=_boostNearbyInfo;
@property(readonly, nonatomic) NSData *bleAuthTag; // @synthesize bleAuthTag=_bleAuthTag;
@property(nonatomic) int audioRoutingScore; // @synthesize audioRoutingScore=_audioRoutingScore;
@property(nonatomic) _Bool autoUnlockActive; // @synthesize autoUnlockActive=_autoUnlockActive;
- (void)_testPipePing;	// IMP=0x000000010024b1a8
- (void)testPipePing;	// IMP=0x000000010024b140
- (void)_systemHasPoweredOn;	// IMP=0x000000010024b0d0
- (void)_systemWillSleep;	// IMP=0x000000010024b05c
- (void)unlockStopTestServer;	// IMP=0x000000010024affc
- (void)unlockStartTestServer;	// IMP=0x000000010024af9c
- (void)unlockStopTestClient;	// IMP=0x000000010024af10
- (void)unlockStartTestClientWithDevice:(id)arg1;	// IMP=0x000000010024ab88
- (void)unlockUpdateAdvertising:(unsigned int)arg1 mask:(unsigned int)arg2;	// IMP=0x000000010024a9ac
- (void)_unlockDeviceFilterChangedForRequest:(id)arg1;	// IMP=0x000000010024a580
- (void)_unlockApproveBluetoothIDsChanged:(id)arg1;	// IMP=0x000000010024a3d8
- (void)_unlockReceivedFrameData:(id)arg1 peer:(id)arg2 device:(id)arg3;	// IMP=0x000000010024a108
- (void)_sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 direct:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100249f5c
- (void)sendUnlockDataDirect:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100249eec
- (void)sendUnlockData:(id)arg1 toBLEDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100249dd4
- (void)_stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x0000000100249cb8
- (void)stopUnlockBLEConnectionWithDevice:(id)arg1;	// IMP=0x0000000100249c20
- (void)_startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x00000001002499b8
- (void)startUnlockBLEConnectionWithDevice:(id)arg1 encrypted:(_Bool)arg2;	// IMP=0x000000010024990c
- (int)_setupSendData:(id)arg1 sessionIdentifier:(id)arg2 cnx:(id)arg3 clientSession:(id)arg4;	// IMP=0x00000001002492e0
- (int)_setupSendCreateSession:(id)arg1 cnx:(id)arg2;	// IMP=0x0000000100248f8c
- (int)_setupHandleSessionMessageType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4 session:(id)arg5;	// IMP=0x0000000100248838
- (int)_setupHandleSessionEncryptedFrame:(id)arg1 type:(unsigned char)arg2 cnx:(id)arg3;	// IMP=0x0000000100248328
- (int)_setupHandleSessionCreated:(id)arg1 data:(id)arg2;	// IMP=0x0000000100247e58
- (int)_setupHandleCreateSession:(id)arg1 data:(id)arg2;	// IMP=0x00000001002478f0
- (int)_sendMessage:(id)arg1 frameType:(unsigned char)arg2 service:(id)arg3 session:(id)arg4;	// IMP=0x0000000100246c68
- (void)sessionSendResponse:(id)arg1 session:(id)arg2;	// IMP=0x0000000100246c10
- (void)sessionSendRequest:(id)arg1 session:(id)arg2;	// IMP=0x00000001002469c0
- (void)sessionSendEvent:(id)arg1 session:(id)arg2;	// IMP=0x0000000100246554
- (void)sessionReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x0000000100246364
- (void)sessionStop:(id)arg1;	// IMP=0x0000000100246114
- (int)sessionStart:(id)arg1;	// IMP=0x0000000100245bac
- (void)serviceSendResponse:(id)arg1 service:(id)arg2;	// IMP=0x0000000100245b54
- (void)serviceSendRequest:(id)arg1 service:(id)arg2;	// IMP=0x0000000100245904
- (void)serviceSendEvent:(id)arg1 service:(id)arg2;	// IMP=0x00000001002458ac
- (void)serviceReceivedFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4;	// IMP=0x0000000100245710
- (void)serviceStop:(id)arg1;	// IMP=0x00000001002455dc
- (int)serviceStart:(id)arg1;	// IMP=0x0000000100245338
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0000000100244f78
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0000000100244eb0
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x0000000100244d80
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100244c78
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x0000000100244b8c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x0000000100244a78
- (int)_idsShouldEncryptActivityLevel;	// IMP=0x000000010024487c
- (_Bool)_idsShouldAdvertiseNearbyInfo;	// IMP=0x0000000100244570
- (void)_idsMeDeviceChanged;	// IMP=0x00000001002443d8
- (int)_idsMacCount;	// IMP=0x0000000100244258
- (_Bool)idsIsSignedIn;	// IMP=0x0000000100243f80
- (int)_idsHomePodCount;	// IMP=0x0000000100243dc4
- (_Bool)_idsHasActiveWatch;	// IMP=0x0000000100243bc4
- (void)idsDevicesAppendDescription:(id *)arg1;	// IMP=0x00000001002433b8
- (id)idsDeviceForBluetoothDeviceID:(id)arg1;	// IMP=0x0000000100243198
- (id)_idsDeviceArrayLocked;	// IMP=0x00000001002430f8
- (id)idsDeviceArray;	// IMP=0x000000010024308c
- (int)_idsContinuityDeviceCount;	// IMP=0x0000000100242f30
- (id)_idsBluetoothDeviceIDsForSMSRelay;	// IMP=0x0000000100242d64
- (id)_idsBluetoothDeviceIDsForSharingLocked;	// IMP=0x0000000100242bd8
- (id)_idsBluetoothDeviceIDsForSharing;	// IMP=0x0000000100242b6c
- (id)idsBluetoothDeviceIDsForWatches;	// IMP=0x00000001002429ac
- (id)idsBluetoothDeviceIDsForSharing;	// IMP=0x00000001002428e8
- (id)_idsBluetoothDeviceIDsForMe;	// IMP=0x0000000100242610
- (id)_idsBluetoothDeviceIDsForLEPipe;	// IMP=0x00000001002423a8
- (id)idsBluetoothDeviceIDsForLEPipe;	// IMP=0x000000010024231c
- (id)_idsBluetoothDeviceIDsForiMessage;	// IMP=0x0000000100242184
- (id)_idsBluetoothDeviceIDsForHomePods;	// IMP=0x0000000100241fc4
- (id)idsBluetoothDeviceIDsForAppleTVs;	// IMP=0x0000000100241e04
- (int)_idsAppleTVCount;	// IMP=0x0000000100241c84
- (void)idsAddCachedIDSIdentifierToDevice:(id)arg1;	// IMP=0x0000000100241aec
- (void)idsAddCachedIDSIdentifier:(id)arg1 device:(id)arg2;	// IMP=0x00000001002416ec
- (void)_idsEnsureStopped;	// IMP=0x00000001002415fc
- (void)_idsEnsureStarted;	// IMP=0x0000000100241538
- (unsigned char)_identificationDecryptActivityLevel:(unsigned char)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x000000010024138c
- (void)_identificationDecryptHotspotData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x0000000100241190
- (void)_identificationDecryptAudioRoutingScoreData:(id)arg1 device:(id)arg2 authTag:(id)arg3 identity:(id)arg4;	// IMP=0x0000000100240f94
- (_Bool)_identificationIdentifyDevice:(id)arg1;	// IMP=0x0000000100240c98
- (void)_identificationReIdentifySameAccountDevices:(id)arg1 type:(long long)arg2;	// IMP=0x00000001002408ac
- (void)_identificationReIdentify;	// IMP=0x0000000100240654
- (void)_identificationMaintenanceTimer;	// IMP=0x00000001002403d0
- (void)_identificationHandleDiscoveryStop;	// IMP=0x00000001002402e4
- (void)_identificationHandleDeviceLost:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000100240220
- (void)_identificationHandleDeviceFound:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000010023f7a4
- (void)_identificationGetIdentities;	// IMP=0x000000010023f22c
- (void)_identificationEnsureStopped;	// IMP=0x000000010023f16c
- (void)_identificationEnsureStarted;	// IMP=0x000000010023efb0
- (void)diagnosticMockLost:(id)arg1;	// IMP=0x000000010023ef10
- (void)diagnosticMockFound:(id)arg1;	// IMP=0x000000010023ee70
- (void)diagnosticMockChanged:(id)arg1;	// IMP=0x000000010023edcc
- (void)diagnosticBLEModeStop:(id)arg1;	// IMP=0x000000010023ed24
- (void)diagnosticBLEModeStart:(id)arg1;	// IMP=0x000000010023ec58
- (void)_deviceDiscoveryBLEScanStateChanged:(long long)arg1 type:(long long)arg2;	// IMP=0x000000010023eab0
- (void)_deviceDiscoveryBLEDeviceChanged:(id)arg1 type:(long long)arg2 changes:(unsigned int)arg3;	// IMP=0x000000010023e3e4
- (void)_deviceDiscoveryBLEDeviceLost:(id)arg1 type:(long long)arg2;	// IMP=0x000000010023e0a8
- (void)_deviceDiscoveryBLEDeviceFound:(id)arg1 type:(long long)arg2;	// IMP=0x000000010023d8ec
- (void)_deviceDiscoveryFastScanStop:(id)arg1 reset:(_Bool)arg2 reason:(id)arg3;	// IMP=0x000000010023d6a4
- (void)_deviceDiscoveryFastScanStart:(id)arg1 device:(id)arg2 reason:(id)arg3;	// IMP=0x000000010023d300
- (void)_deviceDiscoveryFastScanEvaluate:(id)arg1 device:(id)arg2;	// IMP=0x000000010023d118
- (void)deviceDiscoveryFastScanCancel:(id)arg1 reason:(id)arg2;	// IMP=0x000000010023d090
- (void)deviceDiscoveryFastScanTrigger:(id)arg1 reason:(id)arg2;	// IMP=0x000000010023d01c
- (void)deviceDiscoveryRequestUpdate:(id)arg1;	// IMP=0x000000010023cb08
- (void)deviceDiscoveryRequestStop:(id)arg1;	// IMP=0x000000010023c7d4
- (void)_deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x000000010023c1e4
- (void)deviceDiscoveryRequestStart:(id)arg1;	// IMP=0x000000010023c14c
- (void)coordinatedAlertRequestCancel:(id)arg1;	// IMP=0x000000010023c0a4
- (void)coordinatedAlertRequestFinish:(id)arg1;	// IMP=0x000000010023b544
- (void)coordinatedAlertRequestStart:(id)arg1;	// IMP=0x000000010023aba8
- (void)nearbyDidUpdateState:(id)arg1;	// IMP=0x000000010023aa0c
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;	// IMP=0x000000010023a85c
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;	// IMP=0x0000000100239f70
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;	// IMP=0x0000000100239bf0
- (unsigned int)_bleProximityUpdateNearbyInfoDevice:(id)arg1;	// IMP=0x0000000100239a98
- (unsigned int)_bleProximityUpdateNearbyActionDevice:(id)arg1;	// IMP=0x000000010023991c
- (unsigned int)_bleProximityUpdateDeviceCloseNearbyActionDevice:(id)arg1;	// IMP=0x0000000100239380
- (long long)bleProximityRSSIThreshold:(id)arg1;	// IMP=0x00000001002392d0
- (long long)bleProximityRSSIThresholdForType:(long long)arg1 device:(id)arg2;	// IMP=0x000000010023907c
- (id)bleProximityRSSIEstimatorInfo;	// IMP=0x000000010023903c
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2 allInfo:(id)arg3;	// IMP=0x0000000100238a58
- (id)bleProximityInfoForType:(id)arg1 device:(id)arg2;	// IMP=0x0000000100238964
- (id)bleProximityInfoForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x0000000100238840
- (id)bleProximityInfo;	// IMP=0x0000000100235cc0
- (void)bleProximityEstimatorsResetDeviceClose;	// IMP=0x0000000100235ac8
- (id)bleProximityEstimatorForActionType:(unsigned char)arg1 device:(id)arg2;	// IMP=0x0000000100235a5c
- (void)_bleUpdateScanner:(id)arg1 typeFlag:(unsigned long long)arg2;	// IMP=0x0000000100235150
- (void)_bleUpdateAuthTagIfNeeded;	// IMP=0x0000000100234f70
- (void)_bleAdvertisingAddressChanged;	// IMP=0x0000000100234d48
- (void)_btPipeHandleFrameType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000100234a38
- (void)_btPipeEnsureStopped;	// IMP=0x00000001002349a0
- (void)_btPipeEnsureStarted;	// IMP=0x0000000100234770
- (_Bool)_bleProximityPairingScannerShouldScan;	// IMP=0x0000000100234704
- (void)_bleProximityPairingScannerEnsureStopped;	// IMP=0x0000000100234508
- (void)_bleProximityPairingScannerEnsureStarted;	// IMP=0x0000000100233df4
- (_Bool)_bleNearbyInfoScannerShouldScan;	// IMP=0x0000000100233bf4
- (void)_bleNearbyInfoScannerEnsureStopped;	// IMP=0x0000000100233a00
- (void)_bleNearbyInfoScannerEnsureStarted;	// IMP=0x00000001002333ac
- (int)bleNearbyInfoSendFrameType:(unsigned char)arg1 serviceType:(unsigned char)arg2 data:(id)arg3 peer:(id)arg4 isSession:(_Bool)arg5;	// IMP=0x00000001002325a4
- (void)bleNearbyInfoStopConnectionToDevice:(id)arg1 owner:(id)arg2;	// IMP=0x0000000100232464
- (int)bleNearbyInfoStartConnectionToDevice:(id)arg1 owner:(id)arg2 connected:(_Bool *)arg3;	// IMP=0x00000001002321d8
- (int)_bleNearbyInfoReceivedFrameType:(unsigned char)arg1 src:(const char *)arg2 end:(const char *)arg3 cnx:(id)arg4;	// IMP=0x0000000100231610
- (void)_bleNearbyInfoReceivedData:(id)arg1 cnx:(id)arg2 peer:(id)arg3;	// IMP=0x0000000100230c90
- (void)_bleNearbyInfoAdvertiserLingerStart:(id)arg1;	// IMP=0x0000000100230a5c
- (_Bool)_bleNearbyInfoAdvertiserLingerIfNeeded;	// IMP=0x0000000100230a0c
- (unsigned char)_bleEncryptActivityLevel:(unsigned char)arg1;	// IMP=0x000000010023082c
- (void)_bleNearbyInfoAdvertiserUpdateAddHotspotInfo:(id)arg1;	// IMP=0x00000001002305a0
- (void)_bleNearbyInfoAdvertiserUpdateAddAudioRoutingScore:(id)arg1;	// IMP=0x00000001002302ec
- (void)_bleNearbyInfoAdvertiserUpdate;	// IMP=0x000000010022f8bc
- (_Bool)_bleNearbyInfoAdvertiserShouldAdvertise;	// IMP=0x000000010022f6a4
- (void)_bleNearbyInfoAdvertiserEnsureStopped;	// IMP=0x000000010022f5f0
- (void)_bleNearbyInfoAdvertiserEnsureStarted;	// IMP=0x000000010022f534
- (_Bool)_bleNearbyActionScannerShouldScan;	// IMP=0x000000010022f324
- (void)_bleNearbyActionScannerEnsureStopped;	// IMP=0x000000010022f130
- (void)_bleNearbyActionScannerEnsureStarted;	// IMP=0x000000010022eb28
- (_Bool)_bleNearbyActionAdvertiserShouldAdvertise;	// IMP=0x000000010022eae4
- (void)_bleNearbyActionAdvertiserEnsureStopped;	// IMP=0x000000010022ea2c
- (void)_bleNearbyActionAdvertiserEnsureStarted;	// IMP=0x000000010022dc74
- (void)activityStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010022db90
- (void)_activityMonitorWatchWristStateChanged:(id)arg1;	// IMP=0x000000010022da74
- (void)_activityMonitorUpdateUserActive:(_Bool)arg1;	// IMP=0x000000010022da3c
- (void)_activityMonitorUILockStatusChanged:(id)arg1;	// IMP=0x000000010022d8f4
- (void)_activityMonitorScreenStateChanged:(id)arg1;	// IMP=0x000000010022d7b4
- (void)_activityMonitorMultipleUsersLoggedInChanged:(id)arg1;	// IMP=0x000000010022d690
- (double)_activityMonitorLastUserEventDelta;	// IMP=0x000000010022d668
- (void)_activityMonitorCarPlayStatusChanged:(id)arg1;	// IMP=0x000000010022d544
- (unsigned char)_activityMonitorCurrentLevelAndNeedsPoll:(_Bool *)arg1 recentUserActivity:(_Bool *)arg2;	// IMP=0x000000010022d298
- (void)_activityMonitorUpdate;	// IMP=0x000000010022d11c
- (void)_activityMonitorEnsureStopped;	// IMP=0x000000010022cfe8
- (void)_activityMonitorEnsureStarted;	// IMP=0x000000010022cecc
- (void)_update;	// IMP=0x000000010022cbdc
- (void)update;	// IMP=0x000000010022cbac
- (void)prefsChanged;	// IMP=0x000000010022bacc
- (void)_handleBluetoothDeviceConnected:(id)arg1;	// IMP=0x000000010022b77c
- (void)_handleAppleIDChanged:(id)arg1;	// IMP=0x000000010022b684
- (void)_handleAirDropDiscoverableModeChanged:(id)arg1;	// IMP=0x000000010022b59c
- (void)_invalidate;	// IMP=0x000000010022b05c
- (void)invalidate;	// IMP=0x000000010022aff4
- (void)_activate;	// IMP=0x000000010022a84c
- (void)activate;	// IMP=0x000000010022a7d8
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000100228e48
- (id)sharedNearbyPipe;	// IMP=0x0000000100228dd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
