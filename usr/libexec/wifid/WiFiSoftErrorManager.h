//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WiFiSoftErrorManager : NSObject
{
    struct __WiFiManager *_manager;	// 8 = 0x8
    struct __WiFiDeviceManager *_deviceManager;	// 16 = 0x10
    unsigned int _softErrorInProcessFlags;	// 24 = 0x18
    struct __CFRunLoop *_runLoop;	// 32 = 0x20
    struct __CFString *_runLoopMode;	// 40 = 0x28
    NSMutableArray *_wifiToggleErrors;	// 48 = 0x30
    NSMutableArray *_noNetworkFoundErrors;	// 56 = 0x38
    NSMutableArray *_autoJoinDelayErrors;	// 64 = 0x40
    NSMutableArray *_txDataStallErrors;	// 72 = 0x48
    NSMutableArray *_rxDataStallErrors;	// 80 = 0x50
    double _lastReportedSoftErrorTs;	// 88 = 0x58
    double _lastReportedDisconnect;	// 96 = 0x60
    double _reportingTimeout;	// 104 = 0x68
    struct softErrorCounters _errorCounters;	// 112 = 0x70
    struct mitigationAttemptInfo _mitigationInfo;	// 176 = 0xb0
    _Bool _isInternalBuild;	// 272 = 0x110
    _Bool _isReportingDisabled;	// 273 = 0x111
    long long _primaryInterfaceRssi;	// 280 = 0x118
    long long _primaryInterfaceCca;	// 288 = 0x120
    long long _primaryInterfaceSnr;	// 296 = 0x128
    unsigned int _primaryInterfaceTxFail[5];	// 304 = 0x130
    unsigned int _primaryInterfaceTxFrms[5];	// 324 = 0x144
    unsigned int _primaryInterfaceRxFrms[5];	// 344 = 0x158
    unsigned char _primaryInterfaceStatsHistoryIdx;	// 364 = 0x16c
}

- (void).cxx_destruct;	// IMP=0x000000010000e5c8
- (id)copySoftErrorEventDescription:(int)arg1;	// IMP=0x000000010000e4f8
- (unsigned int)softErrorTypeIndex:(int)arg1;	// IMP=0x000000010000e414
- (void)recordMitigation:(int)arg1;	// IMP=0x000000010000e2fc
- (_Bool)isEventMitigationEnabled:(int)arg1;	// IMP=0x000000010000e24c
- (void)supressSoftErrorMitigation:(int)arg1;	// IMP=0x000000010000e1bc
- (void)enableSoftErrorMitigation:(int)arg1;	// IMP=0x000000010000e128
- (void)initEventMitigation;	// IMP=0x000000010000e0dc
- (_Bool)supressEventDetectionProcesssing:(int)arg1 deviceContext:(void *)arg2;	// IMP=0x000000010000e050
- (_Bool)supressTapToRadar:(int)arg1 deviceContext:(void *)arg2;	// IMP=0x000000010000df10
- (_Bool)getReachabilityStatus;	// IMP=0x000000010000ddd4
- (_Bool)isLQAIndicatingTxStall;	// IMP=0x000000010000dd00
- (void)purgeOutdatedEvents:(id)arg1 currTime:(double)arg2;	// IMP=0x000000010000db40
- (void)launchTapToRadar:(int)arg1 displayString:(struct __CFString *)arg2;	// IMP=0x000000010000d810
- (_Bool)askToLaunchUserDisconnectRadar;	// IMP=0x000000010000d7a8
- (_Bool)askToLaunchTriggerDisconnectRadar:(struct __CFString *)arg1;	// IMP=0x000000010000d744
- (_Bool)askToLaunchTapToRadar:(int)arg1;	// IMP=0x000000010000d634
- (_Bool)shouldSupressErrorReporting:(int)arg1;	// IMP=0x000000010000d544
- (void)wifiSoftErrorPrepareAWDMetric:(int)arg1 context:(id)arg2;	// IMP=0x000000010000d490
- (void)wiFiSoftErrorGetStats:(int)arg1 context:(id)arg2 deviceContext:(void *)arg3;	// IMP=0x000000010000d338
- (void)populateTxFailHistory:(struct __CFArray *)arg1 failureHistoryArray:(unsigned int *)arg2 historyArraySz:(unsigned int)arg3;	// IMP=0x000000010000d244
- (_Bool)isTxStalled:(unsigned int *)arg1 rateType:(unsigned char)arg2 size:(unsigned int)arg3;	// IMP=0x000000010000d108
- (_Bool)wifiSoftErrorTxDataStallProcessHistory:(struct __CFDictionary *)arg1;	// IMP=0x000000010000cd14
- (struct softErrorCounters *)getErrorCounters;	// IMP=0x000000010000cd0c
- (void)wifiSoftErrorUserConfirmationUpdate:(int)arg1;	// IMP=0x000000010000cbb4
- (void)wifiSoftErrorUserConfirmationFlagSetting:(int)arg1;	// IMP=0x000000010000cbac
- (void)wifiSoftErrorCounterUpdate:(int)arg1;	// IMP=0x000000010000ca68
- (void)wifiSoftErrorMitigation:(int)arg1 mitigationContext:(void *)arg2;	// IMP=0x000000010000c884
- (void)WiFiSoftErrorReporting:(int)arg1 deviceContext:(void *)arg2 displayString:(struct __CFString *)arg3;	// IMP=0x000000010000c524
- (void)WiFiSoftErrorDriverLinkupEventhandler;	// IMP=0x000000010000c490
- (void)WiFiSoftErrorDriverAvailableEventhandler;	// IMP=0x000000010000c3b4
- (void)WiFiSoftErrorManagerLQMEventHandler:(id)arg1;	// IMP=0x000000010000c194
- (void)wifiSoftErrorAwdlEventNotificationHandler:(void *)arg1 eventData:(void *)arg2;	// IMP=0x000000010000c0f4
- (void)wifiSoftErrorUnexpectedClientAssertionHandler:(void *)arg1 eventData:(void *)arg2;	// IMP=0x000000010000c0dc
- (void)wifiSoftErrorUserDisconnectEventHandler:(void *)arg1;	// IMP=0x000000010000c0c4
- (void)wifiSoftErrorWiFiTriggerDisconnectEventHandler:(void *)arg1 eventData:(void *)arg2;	// IMP=0x000000010000c0ac
- (void)wifiSoftErrorTxDataStallEventHandler:(void *)arg1 eventData:(void *)arg2;	// IMP=0x000000010000bb00
- (void)wifiSoftErrorRxDataStallEventHandler:(void *)arg1 eventData:(void *)arg2;	// IMP=0x000000010000b6cc
- (void)wifiSoftErrorWiFiAutoJoinEventHandler:(void *)arg1;	// IMP=0x000000010000b138
- (void)wifiSoftErrorWiFiScanEventHandler:(void *)arg1;	// IMP=0x000000010000abc8
- (void)wifiSoftErrorWiFiToggleEventHandler:(int)arg1 deviceContext:(void *)arg2;	// IMP=0x000000010000a538
- (id)fetchSoftErrorContext:(void *)arg1 softErrorType:(int)arg2;	// IMP=0x000000010000a370
- (void)wifiSoftErrorsInProcessStateUnset:(int)arg1;	// IMP=0x000000010000a2c4
- (void)wifiSoftErrorsInProcessStateSet:(int)arg1;	// IMP=0x000000010000a218
- (void)wifiSoftErrorEventHandler:(void *)arg1 eventType:(int)arg2 eventData:(void *)arg3;	// IMP=0x0000000100009f58
- (void)initErrorArray:(int)arg1;	// IMP=0x0000000100009e38
- (void)updateReportingPreference;	// IMP=0x0000000100009de8
- (id)initWithWiFiManagerRef:(struct __WiFiManager *)arg1 runLoop:(struct __CFRunLoop *)arg2 runLoopMode:(struct __CFString *)arg3;	// IMP=0x0000000100009c80

@end
