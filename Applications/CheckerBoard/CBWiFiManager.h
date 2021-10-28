//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CBWiFiNetworkInfo, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface CBWiFiManager : NSObject
{
    _Bool _wifiPoweredOn;	// 8 = 0x8
    _Bool _networkReconnectEnabled;	// 9 = 0x9
    _Bool _reconnecting;	// 10 = 0xa
    _Bool _scanning;	// 11 = 0xb
    _Bool _postedDidAssociateToEncryptedNetworkNotification;	// 12 = 0xc
    int _signalStrengthBars;	// 16 = 0x10
    int _signalStrengthRSSI;	// 20 = 0x14
    int _rssiThreshold;	// 24 = 0x18
    NSMutableArray *_filteredWiFiScanResults;	// 32 = 0x20
    NSMutableArray *_previousScanFilteredWiFiScanResults;	// 40 = 0x28
    NSMutableDictionary *_filteredNetworksDictionary;	// 48 = 0x30
    NSMutableDictionary *_previousScanFilteredNetworksDictionary;	// 56 = 0x38
    NSString *_currentNetworkSSID;	// 64 = 0x40
    NSMutableSet *_wifiScanRequestors;	// 72 = 0x48
    CBWiFiNetworkInfo *_lastGoodNetwork;	// 80 = 0x50
    CBWiFiNetworkInfo *_pendingLastGoodNetwork;	// 88 = 0x58
    NSTimer *_reconnectTimer;	// 96 = 0x60
    struct __WiFiManagerClient *_manager;	// 104 = 0x68
    struct __WiFiDeviceClient *_device;	// 112 = 0x70
    NSTimer *_scanTimer;	// 120 = 0x78
}

+ (id)sharedInstance;	// IMP=0x0000000100015f58
+ (id)networkScaledRSSIKey;	// IMP=0x0000000100015f48
- (void).cxx_destruct;	// IMP=0x000000010001c928
@property(nonatomic) _Bool postedDidAssociateToEncryptedNetworkNotification; // @synthesize postedDidAssociateToEncryptedNetworkNotification=_postedDidAssociateToEncryptedNetworkNotification;
@property(nonatomic) _Bool scanning; // @synthesize scanning=_scanning;
@property(retain, nonatomic) NSTimer *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(nonatomic) int rssiThreshold; // @synthesize rssiThreshold=_rssiThreshold;
@property(nonatomic) struct __WiFiDeviceClient *device; // @synthesize device=_device;
@property(nonatomic) struct __WiFiManagerClient *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool reconnecting; // @synthesize reconnecting=_reconnecting;
@property(retain, nonatomic) NSTimer *reconnectTimer; // @synthesize reconnectTimer=_reconnectTimer;
@property(retain, nonatomic) CBWiFiNetworkInfo *pendingLastGoodNetwork; // @synthesize pendingLastGoodNetwork=_pendingLastGoodNetwork;
@property(retain, nonatomic) CBWiFiNetworkInfo *lastGoodNetwork; // @synthesize lastGoodNetwork=_lastGoodNetwork;
@property(retain, nonatomic) NSMutableSet *wifiScanRequestors; // @synthesize wifiScanRequestors=_wifiScanRequestors;
@property(nonatomic, getter=attemptsNetworkReconnect) _Bool networkReconnectEnabled; // @synthesize networkReconnectEnabled=_networkReconnectEnabled;
@property(nonatomic, getter=isWiFiPoweredOn) _Bool wifiPoweredOn; // @synthesize wifiPoweredOn=_wifiPoweredOn;
@property(nonatomic) int signalStrengthRSSI; // @synthesize signalStrengthRSSI=_signalStrengthRSSI;
@property(nonatomic) int signalStrengthBars; // @synthesize signalStrengthBars=_signalStrengthBars;
@property(retain, nonatomic) NSString *currentNetworkSSID; // @synthesize currentNetworkSSID=_currentNetworkSSID;
@property(retain, nonatomic) NSMutableDictionary *previousScanFilteredNetworksDictionary; // @synthesize previousScanFilteredNetworksDictionary=_previousScanFilteredNetworksDictionary;
@property(retain, nonatomic) NSMutableDictionary *filteredNetworksDictionary; // @synthesize filteredNetworksDictionary=_filteredNetworksDictionary;
@property(retain, nonatomic) NSMutableArray *previousScanFilteredWiFiScanResults; // @synthesize previousScanFilteredWiFiScanResults=_previousScanFilteredWiFiScanResults;
@property(retain, nonatomic) NSMutableArray *filteredWiFiScanResults; // @synthesize filteredWiFiScanResults=_filteredWiFiScanResults;
- (void)_postDidAssociateToEncryptedNetworkNotificationWithError:(int)arg1;	// IMP=0x000000010001c638
- (void)_updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2;	// IMP=0x000000010001c430
- (void)_updateSignalStrength;	// IMP=0x000000010001c210
- (void)_associateToHiddenUnencryptedNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010001bf50
- (void)_associateToUnencryptedNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010001bbbc
- (void)_addWiFiEncryption:(int)arg1 toAssociationDict:(id)arg2;	// IMP=0x000000010001b5bc
- (int)_associateToNetwork:(struct _Apple80211 *)arg1 withSSID:(id)arg2 password:(id)arg3 encryption:(int)arg4 apMode:(int)arg5 joinBSSID:(id)arg6;	// IMP=0x000000010001b01c
- (int)_performDirectedScan:(struct _Apple80211 *)arg1 forNetworkSSID:(id)arg2;	// IMP=0x000000010001ad40
- (void)_performDirectedScan:(_Bool)arg1 AndAssociateToNetworkWithName:(id)arg2 password:(id)arg3 securityType:(id)arg4;	// IMP=0x000000010001a2ac
- (void)associateToHiddenEncryptedNetworkWithName:(id)arg1 password:(id)arg2 securityType:(id)arg3;	// IMP=0x000000010001a23c
- (void)associateToEncryptedNetworkWithName:(id)arg1 password:(id)arg2 securityType:(id)arg3;	// IMP=0x000000010001a1cc
- (void)associateToHiddenUnencryptedNetworkWithName:(id)arg1;	// IMP=0x000000010001a128
- (void)_associateToNetworkWithInfo:(id)arg1;	// IMP=0x0000000100019f88
- (void)associateToNetworkBySSID:(id)arg1;	// IMP=0x0000000100019ef4
- (void)associateToNetworkByIndex:(long long)arg1;	// IMP=0x0000000100019e78
- (_Bool)attemptingToAssociateToCurrentNetworkByIndex:(long long)arg1;	// IMP=0x0000000100019d88
- (void)_setTimeForNextScan:(double)arg1;	// IMP=0x0000000100019b20
- (void)_wifiDirectedScanCompleted:(struct __CFArray *)arg1;	// IMP=0x0000000100019814
- (void)_wifiScanCompleted:(struct __CFArray *)arg1;	// IMP=0x0000000100019688
- (void)_restartWiFiNetworkScan;	// IMP=0x00000001000195d0
- (void)_stopWiFiNetworkScan;	// IMP=0x0000000100019420
- (void)stopWiFiNetworkScanRequestFrom:(id)arg1;	// IMP=0x0000000100019208
- (id)_scanDictForNetworkSSID:(id)arg1;	// IMP=0x0000000100018fc8
- (void)_performDirectedScanForNetworkSSID:(id)arg1;	// IMP=0x0000000100018d58
- (void)_startWiFiNetworkScan;	// IMP=0x0000000100018a9c
- (void)startWiFiNetworkScanRequestFrom:(id)arg1;	// IMP=0x000000010001884c
- (void)_attemptReconnect;	// IMP=0x00000001000183f4
- (void)setAttemptsNetworkReconnect:(_Bool)arg1;	// IMP=0x000000010001832c
- (void)_powerStateDidChange;	// IMP=0x00000001000181e8
- (void)setPowered:(_Bool)arg1;	// IMP=0x0000000100018104
- (void)_forceWiFiOnIfNecessary;	// IMP=0x0000000100018028
- (void)_sortWiFiScanResultsAlphabetically:(id)arg1;	// IMP=0x0000000100017ec0
- (void)_dedupNetworkToHighestRSSI:(struct __WiFiNetwork *)arg1 withInfo:(id)arg2 toLookup:(id)arg3;	// IMP=0x0000000100017bec
- (void)_addNetwork:(struct __WiFiNetwork *)arg1 toLookup:(id)arg2;	// IMP=0x00000001000178a8
- (id)_securityTypeFromNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x000000010001780c
- (_Bool)_shouldIncludeNetwork:(struct __WiFiNetwork *)arg1;	// IMP=0x0000000100017750
- (id)_filteredLookupWithNetworks:(struct __CFArray *)arg1;	// IMP=0x00000001000175f8
- (_Bool)isAssociatedToNetwork;	// IMP=0x00000001000175a8
- (void)_updateCurrentNetwork;	// IMP=0x0000000100016dd4
- (void)_updateWiFiState;	// IMP=0x0000000100016d40
- (void)_registerWiFiNotifications;	// IMP=0x0000000100016948
- (void)_deregisterWiFiNotifications;	// IMP=0x000000010001684c
- (void)_setWiFiDevice:(struct __WiFiDeviceClient *)arg1;	// IMP=0x00000001000165a8
- (void)_updateWiFiDevice;	// IMP=0x00000001000163fc
- (struct __WiFiManagerClient *)_WiFiManager;	// IMP=0x000000010001614c
- (void)dealloc;	// IMP=0x00000001000160ac
- (id)init;	// IMP=0x0000000100015fc4

@end
