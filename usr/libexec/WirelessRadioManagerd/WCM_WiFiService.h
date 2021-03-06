//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WCM_WiFiDelegate;

@interface WCM_WiFiService : NSObject
{
    id <WCM_WiFiDelegate> mDelegate;	// 8 = 0x8
    _Bool m_valid_rssi_measurement;	// 16 = 0x10
    _Bool m_valid_snr_measurement;	// 17 = 0x11
    _Bool m_valid_beacon_per;	// 18 = 0x12
    _Bool m_valid_tx_error_measurements;	// 19 = 0x13
    _Bool m_valid_rx_error_measurements;	// 20 = 0x14
    _Bool m_valid_fw_tx_error_measurements;	// 21 = 0x15
    long long m_rawRssi;	// 24 = 0x18
    long long m_Snr;	// 32 = 0x20
    long long m_sample_Size;	// 40 = 0x28
    long long m_cumRawRssi;	// 48 = 0x30
    long long m_avgRawRssi;	// 56 = 0x38
    long long m_txFrame;	// 64 = 0x40
    long long m_txRetrans;	// 72 = 0x48
    long long m_txFail;	// 80 = 0x50
    double m_txPer;	// 88 = 0x58
    double m_txRetryPercent;	// 96 = 0x60
    long long m_cumulative_txFrame;	// 104 = 0x68
    long long m_cumulative_txRetrans;	// 112 = 0x70
    long long m_cumulative_txFail;	// 120 = 0x78
    double m_cumulative_txPer;	// 128 = 0x80
    double m_movingAverage_txFrame;	// 136 = 0x88
    double m_movingAverage_txFail;	// 144 = 0x90
    double m_movingAverageTxPer;	// 152 = 0x98
    long long m_fw_txFrame;	// 160 = 0xa0
    long long m_fw_txRetrans;	// 168 = 0xa8
    long long m_fw_txFail;	// 176 = 0xb0
    double m_fw_txPer;	// 184 = 0xb8
    long long m_cumulative_fw_txFrame;	// 192 = 0xc0
    long long m_cumulative_fw_txRetrans;	// 200 = 0xc8
    long long m_cumulative_fw_txFail;	// 208 = 0xd0
    double m_cumulative_fw_txPer;	// 216 = 0xd8
    long long m_rxFrame;	// 224 = 0xe0
    long long m_rxRetrans;	// 232 = 0xe8
    long long m_movingAvgRxFrame;	// 240 = 0xf0
    long long m_movingAvgRxRetrans;	// 248 = 0xf8
    long long m_rxBeacons;	// 256 = 0x100
    long long m_rxBeaconSched;	// 264 = 0x108
    double m_beaconPer;	// 272 = 0x110
    double m_movAvg_beaconPer;	// 280 = 0x118
    double m_rxRetryRatio;	// 288 = 0x120
    _Bool m_beaconPerIsValid;	// 296 = 0x128
    double m_rxRetryPercent;	// 304 = 0x130
    double m_rxPrevRetryPercent;	// 312 = 0x138
    double m_rxMovingAvgRetryPercent;	// 320 = 0x140
    double m_rxScalingFactor;	// 328 = 0x148
    long long m_cca;	// 336 = 0x150
    int m_channelUtilization;	// 344 = 0x158
    int m_connectedStationCount;	// 348 = 0x15c
    _Bool m_apSupportsQbssLoad;	// 352 = 0x160
    float m_prevRxPhyRate;	// 356 = 0x164
    float m_txPhyRate;	// 360 = 0x168
    float m_txFBPhyRate;	// 364 = 0x16c
    float m_rxPhyRate;	// 368 = 0x170
    float m_minMovAvgBW;	// 372 = 0x174
    float m_maxMovAvgBW;	// 376 = 0x178
    unsigned char m_WoWEnabled;	// 380 = 0x17c
    int m_lqmRefCount;	// 384 = 0x180
    int m_wghtAvgRSSI;	// 388 = 0x184
    int m_wghtAvgSNR;	// 392 = 0x188
    int m_wghtAvgTXPhyRate;	// 396 = 0x18c
    int m_wghtAvgRXPhyRate;	// 400 = 0x190
    int m_txPacketLossBE;	// 404 = 0x194
    int m_txPacketLossBK;	// 408 = 0x198
    int m_txPacketLossVI;	// 412 = 0x19c
    int m_txPacketLossVO;	// 416 = 0x1a0
    int m_txThroughputEstBE;	// 420 = 0x1a4
    int m_txThroughputEstBK;	// 424 = 0x1a8
    int m_txThroughputEstVI;	// 428 = 0x1ac
    int m_txThroughputEstVO;	// 432 = 0x1b0
    int m_txPacketLifetimeBE;	// 436 = 0x1b4
    int m_txPacketLifetimeBK;	// 440 = 0x1b8
    int m_txPacketLifetimeVI;	// 444 = 0x1bc
    int m_txPacketLifetimeVO;	// 448 = 0x1c0
    int m_decisionVO;	// 452 = 0x1c4
    int m_decisionVI_BE;	// 456 = 0x1c8
    int m_prevBadVoiceCounter;	// 460 = 0x1cc
    int m_currentBadVoiceCounter;	// 464 = 0x1d0
    int m_prevGoodVoiceCounter;	// 468 = 0x1d4
    int m_currentGoodVoiceCounter;	// 472 = 0x1d8
    int m_prevBadVideoCounter;	// 476 = 0x1dc
    int m_currentBadVideoCounter;	// 480 = 0x1e0
    int m_prevGoodVideoCounter;	// 484 = 0x1e4
    int m_currentGoodVoideoCounter;	// 488 = 0x1e8
    int m_prevInvalidCounter;	// 492 = 0x1ec
    int m_currentInvalidCounter;	// 496 = 0x1f0
}

- (void)setWiFiResetFlag;	// IMP=0x00000001000a0660
- (unsigned int)getWghtAverageRXPhyRate;	// IMP=0x00000001000a0644
- (unsigned int)getWghtAverageTXPhyRate;	// IMP=0x00000001000a0628
- (int)getWghtAverageSNR;	// IMP=0x00000001000a060c
- (int)getWghtAverageRSSI;	// IMP=0x00000001000a05f0
- (void)setMedtronicState:(int)arg1;	// IMP=0x00000001000a05d8
- (_Bool)isLSMWiFiQualityGood;	// IMP=0x00000001000a0560
- (_Bool)isWiFiQualityGoodForProximityMode;	// IMP=0x00000001000a0388
- (_Bool)getAirplayStatus;	// IMP=0x00000001000a036c
- (int)getPointOfInterest;	// IMP=0x00000001000a0354
- (_Bool)deviceAssociatedOnPreferredNetwork;	// IMP=0x00000001000a0338
- (void)updateBEDecision:(int)arg1;	// IMP=0x00000001000a0314
- (int)getBEDecision;	// IMP=0x00000001000a02f8
- (int)getVoiceDecision;	// IMP=0x00000001000a02dc
- (void)updateVoiceDecision:(int)arg1;	// IMP=0x00000001000a02b8
- (void)updateInvalidCounter:(int)arg1;	// IMP=0x00000001000a0284
- (void)updateGoodVideoCounter:(int)arg1;	// IMP=0x00000001000a0250
- (void)updateBadVideoCounter:(int)arg1;	// IMP=0x00000001000a021c
- (void)updateGoodVoiceCounter:(int)arg1;	// IMP=0x00000001000a01e8
- (void)updateBadVoiceCounter:(int)arg1;	// IMP=0x00000001000a01b4
- (int)getInvalidCounter;	// IMP=0x00000001000a0168
- (int)getGoodVideoCounter;	// IMP=0x00000001000a0118
- (int)getBadVideoCounter;	// IMP=0x00000001000a00cc
- (int)getGoodVoiceCounter;	// IMP=0x00000001000a0080
- (int)getBadVoiceCounter;	// IMP=0x00000001000a0030
- (void)updateLifeTimeVO:(int)arg1;	// IMP=0x00000001000a000c
- (void)updateLifeTimeVI:(int)arg1;	// IMP=0x000000010009ffe8
- (void)updateLifeTimeBK:(int)arg1;	// IMP=0x000000010009ffc4
- (void)updateLifeTimeBE:(int)arg1;	// IMP=0x000000010009ffa0
- (int)getLifeTimeVO;	// IMP=0x000000010009ff84
- (int)getLifeTimeVI;	// IMP=0x000000010009ff68
- (int)getLifeTimeBK;	// IMP=0x000000010009ff4c
- (int)getLifeTimeBE;	// IMP=0x000000010009ff30
- (void)updateTxThroughputVO:(int)arg1;	// IMP=0x000000010009ff0c
- (void)updateTxThroughputVI:(int)arg1;	// IMP=0x000000010009fee8
- (void)updateTxThroughputBK:(int)arg1;	// IMP=0x000000010009fec4
- (void)updateTxThroughputBE:(int)arg1;	// IMP=0x000000010009fea0
- (int)getTxThroughputVO;	// IMP=0x000000010009fe84
- (int)getTxThroughputVI;	// IMP=0x000000010009fe68
- (int)getTxThroughputBK;	// IMP=0x000000010009fe4c
- (int)getTxThroughputBE;	// IMP=0x000000010009fe30
- (void)updateTxLossRateVO:(int)arg1;	// IMP=0x000000010009fe0c
- (void)updateTxLossRateVI:(int)arg1;	// IMP=0x000000010009fde8
- (void)updateTxLossRateBK:(int)arg1;	// IMP=0x000000010009fdc4
- (void)updateTxLossRateBE:(int)arg1;	// IMP=0x000000010009fda0
- (int)getTxLossRateVO;	// IMP=0x000000010009fd84
- (int)getTxLossRateVI;	// IMP=0x000000010009fd68
- (int)getTxLossRateBK;	// IMP=0x000000010009fd4c
- (int)getTxLossRateBE;	// IMP=0x000000010009fd30
- (void)makeSecondary;	// IMP=0x000000010009fd1c
- (void)makePrimary;	// IMP=0x000000010009fd08
- (void)disableWiFi;	// IMP=0x000000010009fcf4
- (_Bool)isWiFiPrimaryInterface;	// IMP=0x000000010009fcd8
- (void)setWoWState:(unsigned char)arg1;	// IMP=0x000000010009fcb4
- (_Bool)isWoWEnabled;	// IMP=0x000000010009fc88
- (_Bool)isWiFiNetworkCaptive;	// IMP=0x000000010009fc6c
- (void)resetStationCount:(int)arg1;	// IMP=0x000000010009fc40
- (void)updateStationCount:(int)arg1;	// IMP=0x000000010009fc10
- (void)updateChanUtilization:(int)arg1;	// IMP=0x000000010009fbcc
- (_Bool)isQBSSLoadValid;	// IMP=0x000000010009fbac
- (void)updateCCA:(long long)arg1;	// IMP=0x000000010009fb74
- (void)updateRxBeaconPer;	// IMP=0x000000010009f9d4
- (void)updateRxBeacons:(long long)arg1:(long long)arg2;	// IMP=0x000000010009f954
- (void)updatePhyRates:(long long)arg1:(long long)arg2:(long long)arg3;	// IMP=0x000000010009f878
- (void)updateRxStats:(long long)arg1:(long long)arg2;	// IMP=0x000000010009f7d0
- (long long)getRxPacket;	// IMP=0x000000010009f7a8
- (double)getRxRatio;	// IMP=0x000000010009f78c
- (double)getMovingAvgOfRxRetryPercent;	// IMP=0x000000010009f770
- (double)getRxRetryPercent;	// IMP=0x000000010009f754
- (void)updateRxRatio;	// IMP=0x000000010009f5f8
- (_Bool)isRxRatioValid;	// IMP=0x000000010009f598
- (_Bool)isRxPacketLossObserved;	// IMP=0x000000010009f554
- (void)updateFwTxPer;	// IMP=0x000000010009f458
- (void)updateFwTxStats:(long long)arg1:(long long)arg2:(long long)arg3;	// IMP=0x000000010009f334
- (void)resetWiFiBWEstimationState;	// IMP=0x000000010009f2d8
- (void)resetCumulativeCounters;	// IMP=0x000000010009f26c
- (_Bool)isCumulativeFwTxPerValid;	// IMP=0x000000010009f230
- (_Bool)isCumulativeTxPerValid;	// IMP=0x000000010009f1f4
- (_Bool)isFwTxPerValid;	// IMP=0x000000010009f194
- (void)updateTxPer;	// IMP=0x000000010009f06c
- (void)updateWeightedAverageMetrics:(int)arg1:(int)arg2:(unsigned int)arg3:(unsigned int)arg4;	// IMP=0x000000010009f018
- (void)updateTxStats:(long long)arg1:(long long)arg2:(long long)arg3;	// IMP=0x000000010009ee68
- (_Bool)isTxPerValid;	// IMP=0x000000010009edfc
- (_Bool)isRetryValid;	// IMP=0x000000010009eda0
- (_Bool)isBeaconSchedValid;	// IMP=0x000000010009ed80
- (_Bool)isBeaconPerValid;	// IMP=0x000000010009ed60
- (double)getBeaconPer;	// IMP=0x000000010009ed44
- (double)getAdjustedBeaconPer;	// IMP=0x000000010009ed00
- (double)getFwTxPer;	// IMP=0x000000010009ece4
- (double)getCumulativeFwTxPer;	// IMP=0x000000010009ecc8
- (double)getCumulativeTxPer;	// IMP=0x000000010009ecac
- (_Bool)isMovingAverageTxPerValid;	// IMP=0x000000010009ec58
- (double)getMovingAverageTxPer;	// IMP=0x000000010009ec3c
- (double)getTxRetryPercent;	// IMP=0x000000010009ebc0
- (double)getTxPer;	// IMP=0x000000010009eba4
- (double)getTxFail;	// IMP=0x000000010009eb84
- (int)getStationCountWithPendingData;	// IMP=0x000000010009eb68
- (int)getConnectedStationCount;	// IMP=0x000000010009eb2c
- (int)getChannelUtlization;	// IMP=0x000000010009eb10
- (long long)getCCA;	// IMP=0x000000010009eaf4
- (void)setSNR:(long long)arg1;	// IMP=0x000000010009ea98
- (void)setRSSI:(long long)arg1;	// IMP=0x000000010009e9e0
- (float)getL3Bandwidth:(float)arg1:(float)arg2;	// IMP=0x000000010009e8f4
- (float)getCalculatedAvailableTxPhyBandwidth;	// IMP=0x000000010009e758
- (float)getBWScallingFactor;	// IMP=0x000000010009e738
- (void)getMinMaxAvailableRxBandwidth:(CDStruct_889e84b8 *)arg1;	// IMP=0x000000010009e220
- (float)getCalculatedAvailableRxPhyBandwidth;	// IMP=0x000000010009e068
- (float)getEstimatedAvailableRxPhyBandwidth;	// IMP=0x000000010009dedc
- (float)getRxPhyRate;	// IMP=0x000000010009dec0
- (float)getprevRxPhyRate;	// IMP=0x000000010009dea4
- (float)getTxPhyRate;	// IMP=0x000000010009de88
- (float)calculatePhyRate;	// IMP=0x000000010009de30
- (long long)getSNR;	// IMP=0x000000010009de14
- (long long)getAvgRSSI;	// IMP=0x000000010009ddf8
- (long long)getRSSI;	// IMP=0x000000010009dddc
- (void)disableLQMUpdate;	// IMP=0x000000010009ddc8
- (_Bool)setLQMReportInterval:(int)arg1;	// IMP=0x000000010009dda4
- (void)enableLQMUpdate;	// IMP=0x000000010009dd90
- (void)initializeiRATMetrics;	// IMP=0x000000010009db70
- (void)setWifiBTeSCOHidStatus:(int)arg1;	// IMP=0x000000010009db58
- (void)setWiFiRCU1Mode:(id)arg1;	// IMP=0x000000010009db40
- (void)setWiFiRCU1ULOFDMAstate:(_Bool)arg1;	// IMP=0x000000010009db28
- (void)setWiFiBTULOFDMAstate:(_Bool)arg1;	// IMP=0x000000010009db10
- (void)setLAACoexConfigWifiDwellTime:(id)arg1;	// IMP=0x000000010009daf8
- (void)setLAACoexConfigScanThrottleMask:(id)arg1;	// IMP=0x000000010009dae0
- (void)setLAACoexConfigWci2TxDurationThreshold:(id)arg1;	// IMP=0x000000010009dac8
- (void)setLAACoexConfigEnableTxInd;	// IMP=0x000000010009dab4
- (void)setEnableAgcCoexMode:(id)arg1;	// IMP=0x000000010009da9c
- (void)setEnvelopeIndicationTimerFor2G:(id)arg1;	// IMP=0x000000010009da84
- (void)setEnableEnvelopeIndicationFor2G:(id)arg1;	// IMP=0x000000010009da6c
- (void)disableBtSharedAntenna:(_Bool)arg1 andReassociate:(_Bool)arg2;	// IMP=0x000000010009da50
- (void)setWiFiBTCoexActiveProfileFor2G:(long long)arg1 and5G:(long long)arg2;	// IMP=0x000000010009da34
- (void)setWiFiBTCoexProfile:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000010009da18
- (void)setCellularFrequencyConfig:(id)arg1;	// IMP=0x000000010009da00
- (void)setScanJoinRxProtectDuration:(id)arg1;	// IMP=0x000000010009d9e8
- (void)setTxOnIndication:(id)arg1;	// IMP=0x000000010009d9d0
- (void)setRxProtectAutoModeParamWeight:(id)arg1 andThresh:(id)arg2;	// IMP=0x000000010009d9b4
- (void)setRxProtectMode:(id)arg1;	// IMP=0x000000010009d99c
- (void)setChannelsForTimeSharingMode:(id)arg1;	// IMP=0x000000010009d984
- (void)setMaxDurationForCellularScanProtection:(id)arg1;	// IMP=0x000000010009d96c
- (void)setChannelsForCellularScanProtection:(id)arg1;	// IMP=0x000000010009d954
- (void)setAntennaSelectionV2:(id)arg1;	// IMP=0x000000010009d93c
- (void)setAntennaSelection:(id)arg1;	// IMP=0x000000010009d924
- (void)setAntennaCellPolicy:(id)arg1;	// IMP=0x000000010009d90c
- (void)setRxAntennaPreference:(id)arg1;	// IMP=0x000000010009d8f4
- (void)setTxAntennaPreference:(id)arg1;	// IMP=0x000000010009d8dc
- (void)setMWSSignalingConfig:(id)arg1;	// IMP=0x000000010009d8c4
- (void)setMWSFrameConfig:(id)arg1;	// IMP=0x000000010009d8ac
- (void)setMWSChannelParameters:(id)arg1;	// IMP=0x000000010009d894
- (void)setRxPriorityThreshold:(id)arg1;	// IMP=0x000000010009d87c
- (void)setChannelsToDisableOCL:(id)arg1;	// IMP=0x000000010009d864
- (void)setChannelsToEnableWCI2:(id)arg1;	// IMP=0x000000010009d84c
- (void)setChannelsToBlacklist:(id)arg1;	// IMP=0x000000010009d834
- (void)updateCurrentHostAPState:(_Bool)arg1 channel:(int)arg2 centerFreq:(unsigned int)arg3 bandwidth:(unsigned int)arg4;	// IMP=0x000000010009d7a4
- (void)setDelegate:(id)arg1;	// IMP=0x000000010009d780
- (long long)getNumberOfSpatialStreamOnAccessPoint;	// IMP=0x000000010009d72c
- (long long)getNumberOfSpatialStream;	// IMP=0x000000010009d6d8
- (int)getPhyMode;	// IMP=0x000000010009d684
- (_Bool)didWiFiDeviceReset;	// IMP=0x000000010009d630
- (int)getCarPlayScanRelaxReason;	// IMP=0x000000010009d5e0
- (void)updateCarPlaySessionState:(_Bool)arg1 reason:(int)arg2;	// IMP=0x000000010009d58c
- (_Bool)isCarPlaySessionInProgress;	// IMP=0x000000010009d538
- (_Bool)isSideCarInProgress;	// IMP=0x000000010009d4e4
- (_Bool)isAWDLInProgress;	// IMP=0x000000010009d490
- (_Bool)isAssociated;	// IMP=0x000000010009d43c
- (void)unregisterWiFiCallbacks;	// IMP=0x000000010009d3f0
- (void)registerWiFiCallbacks;	// IMP=0x000000010009d3a4
- (void)dealloc;	// IMP=0x000000010009d32c
- (id)init;	// IMP=0x000000010009d27c

@end

