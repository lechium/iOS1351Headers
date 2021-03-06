//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"
#import "CARNowRecordingObserving-Protocol.h"
#import "CARWorkspaceObserver-Protocol.h"
#import "UIStatusBarStateProvider-Protocol.h"
#import "UIStatusBarStyleDelegate_SpringBoardOnly-Protocol.h"

@class CARAutomaticDNDStatus, NSHashTable, NSNumber, NSString, NSTimer, STBatteryStatusDomain, STBatteryStatusDomainData, STTelephonyStatusDomain, STTelephonyStatusDomainData, STWifiStatusDomain, STWifiStatusDomainData;
@protocol CAREnvironment;

@interface CARStatusBarStateProvider : NSObject <BSInvalidatable, UIStatusBarStateProvider, UIStatusBarStyleDelegate_SpringBoardOnly, CARWorkspaceObserver, CARNowRecordingObserving>
{
    _Bool _inCallServiceActive;	// 8 = 0x8
    _Bool _isDNDWDActive;	// 9 = 0x9
    NSTimer *_timeUpdateTimer;	// 16 = 0x10
    NSHashTable *_stateObservers;	// 24 = 0x18
    id <CAREnvironment> _environment;	// 32 = 0x20
    NSNumber *_etcStatus;	// 40 = 0x28
    NSString *_activeBundleIdentifier;	// 48 = 0x30
    NSString *_nowRecordingBundleIdentifier;	// 56 = 0x38
    STTelephonyStatusDomain *_telephonyDomain;	// 64 = 0x40
    STTelephonyStatusDomainData *_telephonyData;	// 72 = 0x48
    STBatteryStatusDomain *_batteryDomain;	// 80 = 0x50
    STBatteryStatusDomainData *_batteryData;	// 88 = 0x58
    STWifiStatusDomain *_wifiDomain;	// 96 = 0x60
    STWifiStatusDomainData *_wifiData;	// 104 = 0x68
    CARAutomaticDNDStatus *_DNDStatus;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000010000a45c
@property(nonatomic) _Bool isDNDWDActive; // @synthesize isDNDWDActive=_isDNDWDActive;
@property(retain, nonatomic) CARAutomaticDNDStatus *DNDStatus; // @synthesize DNDStatus=_DNDStatus;
@property(retain, nonatomic) STWifiStatusDomainData *wifiData; // @synthesize wifiData=_wifiData;
@property(retain, nonatomic) STWifiStatusDomain *wifiDomain; // @synthesize wifiDomain=_wifiDomain;
@property(retain, nonatomic) STBatteryStatusDomainData *batteryData; // @synthesize batteryData=_batteryData;
@property(retain, nonatomic) STBatteryStatusDomain *batteryDomain; // @synthesize batteryDomain=_batteryDomain;
@property(copy, nonatomic) STTelephonyStatusDomainData *telephonyData; // @synthesize telephonyData=_telephonyData;
@property(retain, nonatomic) STTelephonyStatusDomain *telephonyDomain; // @synthesize telephonyDomain=_telephonyDomain;
@property(copy, nonatomic) NSString *nowRecordingBundleIdentifier; // @synthesize nowRecordingBundleIdentifier=_nowRecordingBundleIdentifier;
@property(copy, nonatomic) NSString *activeBundleIdentifier; // @synthesize activeBundleIdentifier=_activeBundleIdentifier;
@property(retain, nonatomic) NSNumber *etcStatus; // @synthesize etcStatus=_etcStatus;
@property(nonatomic) __weak id <CAREnvironment> environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) NSTimer *timeUpdateTimer; // @synthesize timeUpdateTimer=_timeUpdateTimer;
@property(nonatomic) _Bool inCallServiceActive; // @synthesize inCallServiceActive=_inCallServiceActive;
- (void)nowRecordingObserver:(id)arg1 updatedNowRecordingBundleIdentifier:(id)arg2;	// IMP=0x000000010000a330
- (void)workspace:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;	// IMP=0x000000010000a2e0
- (long long)overriddenRequestedStyleFromStyle:(long long)arg1;	// IMP=0x000000010000a2d8
- (int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;	// IMP=0x000000010000a1b8
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;	// IMP=0x000000010000a1b4
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;	// IMP=0x000000010000a1ac
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;	// IMP=0x000000010000a1a8
- (void)invalidate;	// IMP=0x000000010000a168
- (void)_getTTRData:(CDStruct_41b839a7 *)arg1;	// IMP=0x000000010000a108
- (_Bool)_radarItemEnabled;	// IMP=0x000000010000a058
- (_Bool)_radarItemVisible;	// IMP=0x0000000100009fd4
- (void)_getDNDWDData:(CDStruct_41b839a7 *)arg1;	// IMP=0x0000000100009f78
- (void)_dndStatusUpdated:(_Bool)arg1;	// IMP=0x0000000100009ee0
- (void)_getETCData:(CDStruct_41b839a7 *)arg1;	// IMP=0x0000000100009e40
- (void)_updateETCStateWithSession:(id)arg1;	// IMP=0x0000000100009de0
- (void)_etcChanged:(id)arg1;	// IMP=0x0000000100009d0c
- (void)_getBatteryData:(CDStruct_41b839a7 *)arg1;	// IMP=0x0000000100009c48
- (void)_batteryDataUpdatedWithData:(id)arg1;	// IMP=0x0000000100009b88
- (int)_statusBarNetworkTypeForSystemStatusNetworkType:(unsigned long long)arg1;	// IMP=0x0000000100009b64
- (void)_getTelephonyData:(CDStruct_41b839a7 *)arg1;	// IMP=0x0000000100009838
- (void)_telephonyDataUpdatedWithData:(id)arg1;	// IMP=0x0000000100009778
- (void)_wifiDataUpdatedWithData:(id)arg1;	// IMP=0x0000000100009668
- (void)_getTimeData:(CDStruct_41b839a7 *)arg1;	// IMP=0x00000001000095a0
- (void)_resetTimeUpdateTimer;	// IMP=0x00000001000094a8
- (CDStruct_41b839a7)_generateData;	// IMP=0x0000000100009408
- (void)_registerForNotifications;	// IMP=0x00000001000092f8
- (void)getStatusBarData:(CDStruct_41b839a7 *)arg1;	// IMP=0x0000000100009288
- (void)removeStatusBarStateObserver:(id)arg1;	// IMP=0x0000000100009278
- (void)addStatusBarStateObserver:(id)arg1;	// IMP=0x0000000100009268
- (void)updateStatusBarData;	// IMP=0x0000000100009130
- (void)_setupSystemStatusDomains;	// IMP=0x0000000100008c44
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000100008960

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

