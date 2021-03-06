//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WCM_WiFiController.h"

@class NSArray, NSDictionary, NSNumber;

@interface WCM_WiFiControllerIOS : WCM_WiFiController
{
    _Bool _lteCDRXTDDMode;	// 8 = 0x8
    _Bool _mCarPlaySessionInProgress;	// 9 = 0x9
    int _mCarPlayBTScanRelaxReason;	// 12 = 0xc
    NSNumber *_rxPriThreshold;	// 16 = 0x10
    NSArray *_channelsBlacklisted;	// 24 = 0x18
    NSArray *_channelsWCI2Enabled;	// 32 = 0x20
    NSArray *_channelsOCLDisabled;	// 40 = 0x28
    NSArray *_antennaConfig;	// 48 = 0x30
    NSArray *_antennaSelection;	// 56 = 0x38
    NSArray *_cdrxTDDEnabledChannels;	// 64 = 0x40
    NSDictionary *_frameConfiguration;	// 72 = 0x48
    double _cellularULCenterFreq;	// 80 = 0x50
    double _cellularULBandwidth;	// 88 = 0x58
    double _cellularULCenterFreq2;	// 96 = 0x60
    double _cellularULBandwidth2;	// 104 = 0x68
    NSNumber *_wifiAgcModeEnable;	// 112 = 0x70
}

@property(nonatomic) int mCarPlayBTScanRelaxReason; // @synthesize mCarPlayBTScanRelaxReason=_mCarPlayBTScanRelaxReason;
@property(nonatomic) _Bool mCarPlaySessionInProgress; // @synthesize mCarPlaySessionInProgress=_mCarPlaySessionInProgress;
@property(retain, nonatomic) NSNumber *wifiAgcModeEnable; // @synthesize wifiAgcModeEnable=_wifiAgcModeEnable;
@property(nonatomic) double cellularULBandwidth2; // @synthesize cellularULBandwidth2=_cellularULBandwidth2;
@property(nonatomic) double cellularULCenterFreq2; // @synthesize cellularULCenterFreq2=_cellularULCenterFreq2;
@property(nonatomic) double cellularULBandwidth; // @synthesize cellularULBandwidth=_cellularULBandwidth;
@property(nonatomic) double cellularULCenterFreq; // @synthesize cellularULCenterFreq=_cellularULCenterFreq;
@property(retain, nonatomic) NSDictionary *frameConfiguration; // @synthesize frameConfiguration=_frameConfiguration;
@property(retain, nonatomic) NSArray *cdrxTDDEnabledChannels; // @synthesize cdrxTDDEnabledChannels=_cdrxTDDEnabledChannels;
@property(retain, nonatomic) NSArray *antennaSelection; // @synthesize antennaSelection=_antennaSelection;
@property(retain, nonatomic) NSArray *antennaConfig; // @synthesize antennaConfig=_antennaConfig;
@property(retain, nonatomic) NSArray *channelsOCLDisabled; // @synthesize channelsOCLDisabled=_channelsOCLDisabled;
@property(retain, nonatomic) NSArray *channelsWCI2Enabled; // @synthesize channelsWCI2Enabled=_channelsWCI2Enabled;
@property(retain, nonatomic) NSArray *channelsBlacklisted; // @synthesize channelsBlacklisted=_channelsBlacklisted;
@property(retain, nonatomic) NSNumber *rxPriThreshold; // @synthesize rxPriThreshold=_rxPriThreshold;
@property(nonatomic) _Bool lteCDRXTDDMode; // @synthesize lteCDRXTDDMode=_lteCDRXTDDMode;
- (void)updateWiFieSCOHidActiveStatus:(int)arg1;	// IMP=0x000000010009c5ac
- (void)updateWiFiRCU1Mode:(id)arg1;	// IMP=0x000000010009c524
- (void)updateWiFiRCU1ULOFDMAstate:(_Bool)arg1;	// IMP=0x000000010009c490
- (void)updateWiFiBTULOFDMAstate:(_Bool)arg1;	// IMP=0x000000010009c3fc
- (void)updateMedtronicState:(int)arg1;	// IMP=0x000000010009c3ac
- (void)enableWifiLaaCoexMode;	// IMP=0x000000010009c198
- (void)setWifiAgcCoexMode:(id)arg1;	// IMP=0x000000010009c088
- (void)updateWifiEnvelopeParams;	// IMP=0x000000010009bec8
- (void)updateCellularFrequencyConfig:(id)arg1 withWiFiRangingDesenseFlag:(_Bool)arg2;	// IMP=0x000000010009b53c
- (void)updateMWSFrameConfig:(id)arg1;	// IMP=0x000000010009ac10
- (void)updateCarPlaySessionState:(_Bool)arg1 reason:(int)arg2;	// IMP=0x000000010009ab28
- (int)getCarPlayScanRelaxReason;	// IMP=0x000000010009aa98
- (_Bool)isCarPlaySessionInProgress;	// IMP=0x000000010009aa00
- (void)updateMWSSignalingConfig;	// IMP=0x000000010009a3d8
- (void)updateChannelsForTimeSharingMode:(id)arg1;	// IMP=0x000000010009a1b0
- (void)updateAntennaSelectionV2:(id)arg1;	// IMP=0x000000010009a0c4
- (void)updateAntennaSelection:(id)arg1;	// IMP=0x0000000100099fd8
- (void)updateAntennaPreference:(id)arg1 withCellPolicy:(id)arg2;	// IMP=0x0000000100099a70
- (void)updateRxPriorityThreshold:(id)arg1;	// IMP=0x0000000100099998
- (void)updateChannelsToDisableOCL:(id)arg1;	// IMP=0x00000001000998ac
- (void)updateChannelsToEnableWCI2:(id)arg1;	// IMP=0x00000001000997c0
- (void)updateChannelsToBlacklist:(id)arg1;	// IMP=0x00000001000996d4
- (id)getWiFiServiceSingletone;	// IMP=0x0000000100099678
- (void)handlePowerState:(_Bool)arg1;	// IMP=0x00000001000993ac
- (void)dealloc;	// IMP=0x00000001000991e8
- (id)init;	// IMP=0x0000000100098754

@end

