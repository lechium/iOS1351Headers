//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "WCM_Controller.h"

@class NSMutableArray;

@interface WCM_BTController : WCM_Controller
{
    _Bool _powerState;	// 8 = 0x8
    int _audioType;	// 12 = 0xc
    NSMutableArray *_btConnections;	// 16 = 0x10
}

@property(nonatomic) int audioType; // @synthesize audioType=_audioType;
@property(readonly, nonatomic) NSMutableArray *btConnections; // @synthesize btConnections=_btConnections;
@property(readonly, nonatomic) _Bool powerState; // @synthesize powerState=_powerState;
- (void)resetBtMetrics;	// IMP=0x000000010005c368
- (double)getBtRxPer;	// IMP=0x000000010005c350
- (double)getBtTxPer;	// IMP=0x000000010005c338
- (_Bool)isBTMetricsValid;	// IMP=0x000000010005c31c
- (unsigned long long)getBtActivePhy;	// IMP=0x000000010005c300
- (unsigned long long)getBtMaxPhyRate;	// IMP=0x000000010005c2e4
- (unsigned long long)getMovingAvgBTRssi;	// IMP=0x000000010005c2cc
- (void)updateCarplayBTScanParams:(_Bool)arg1 reason:(int)arg2;	// IMP=0x000000010005c2b0
- (void)updateCoexRxGainMode:(id)arg1;	// IMP=0x000000010005c298
- (void)updateMWSScanFrequencyTable:(id)arg1;	// IMP=0x000000010005c280
- (void)updateAntennaRSSIOffset;	// IMP=0x000000010005c26c
- (void)updateDefaultBTAntenna:(int)arg1;	// IMP=0x000000010005c254
- (void)updateAntennaSelectionPolicy:(int)arg1 param1:(int)arg2 param2:(int)arg3;	// IMP=0x000000010005c234
- (void)getCurrentAntennaSetting;	// IMP=0x000000010005c220
- (void)updatePreferredRole:(int)arg1;	// IMP=0x000000010005c208
- (void)updateDiversityAFHMapForC0B0:(id)arg1 C0B1:(id)arg2 C1B0:(id)arg3 C1B1:(id)arg4;	// IMP=0x000000010005c1e4
- (void)updatePreferredAFHMap:(id)arg1;	// IMP=0x000000010005c1cc
- (void)updateMWSFrameConfig:(id)arg1;	// IMP=0x000000010005c1b4
- (void)updateMWSChannelParameters:(id)arg1;	// IMP=0x000000010005c19c
- (void)updateAwakeMode:(_Bool)arg1;	// IMP=0x000000010005c184
- (void)updateMWSSignalingConfig;	// IMP=0x000000010005c170
- (void)updateWCI2Mode:(_Bool)arg1;	// IMP=0x000000010005c158
- (_Bool)isPagingInProgress;	// IMP=0x000000010005c13c
- (unsigned long long)getNumberOfLEDevice;	// IMP=0x000000010005c120
- (unsigned long long)getNumberOfLEADevice;	// IMP=0x000000010005c104
- (unsigned long long)getNumberOfHIDDevice;	// IMP=0x000000010005c0e8
- (unsigned long long)getNumberOfA2DPDevice;	// IMP=0x000000010005c0cc
- (unsigned long long)getNumberOfeSCODevice;	// IMP=0x000000010005c0b0
- (unsigned long long)getNumberOfSCODevice;	// IMP=0x000000010005c094
- (int)getBTRole;	// IMP=0x000000010005c07c
- (int)getBTState;	// IMP=0x000000010005c060
- (void)handlePowerState:(_Bool)arg1;	// IMP=0x000000010005bfd4
- (void)dealloc;	// IMP=0x000000010005bf18
- (id)init;	// IMP=0x000000010005be30

@end

