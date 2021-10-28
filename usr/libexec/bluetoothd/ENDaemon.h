//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BTCloudManagerDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class BTCloudManager, BTXPCTimer, CUSystemMonitor, ENSimulator, ENUserAlert, ExposureNotificationServerConfiguration, NSData, NSMutableOrderedSet, NSMutableSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENDaemon : NSObject <BTCloudManagerDelegate, UNUserNotificationCenterDelegate>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _btMonitorStarted;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    int _prefsChangedNotifyToken;	// 24 = 0x18
    unsigned long long _startTicks;	// 32 = 0x20
    unsigned long long _startTicksFull;	// 40 = 0x28
    unsigned long long _stateHandler;	// 48 = 0x30
    CUSystemMonitor *_systemMonitor;	// 56 = 0x38
    int _tccChangedNotifyToken;	// 64 = 0x40
    _Bool _tccDisabled;	// 68 = 0x44
    _Bool _updatePending;	// 69 = 0x45
    NSMutableSet *_xpcConnections;	// 72 = 0x48
    NSObject<OS_xpc_object> *_xpcListener;	// 80 = 0x50
    _Bool _btTracingStarted;	// 88 = 0x58
    _Bool _wasInRestrictedStatus;	// 89 = 0x59
    _Bool _wasInDifferentActiveRegion;	// 90 = 0x5a
    _Bool _prefCloudEnabled;	// 91 = 0x5b
    _Bool _prefEnabled;	// 92 = 0x5c
    _Bool _prefRequireSignature;	// 93 = 0x5d
    _Bool _prefServerForceDisable;	// 94 = 0x5e
    _Bool _prefSimulatorEnabled;	// 95 = 0x5f
    _Bool _prefTCCAllowWithoutApps;	// 96 = 0x60
    _Bool _weeklySummaryActive;	// 97 = 0x61
    int _historyFileFD;	// 100 = 0x64
    unsigned int _lastENIN;	// 104 = 0x68
    unsigned int _usageUserEnabled;	// 108 = 0x6c
    unsigned int _usageUserDisabled;	// 112 = 0x70
    unsigned int _usageUserAlertShare;	// 116 = 0x74
    unsigned int _usageUserAlertDontShare;	// 120 = 0x78
    unsigned int _usageUserAlertReset;	// 124 = 0x7c
    unsigned int _usageUserAlertDontReset;	// 128 = 0x80
    unsigned int _usageManagerActivate;	// 132 = 0x84
    unsigned int _usageGetDiagnosisKeys;	// 136 = 0x88
    unsigned int _usageResetAllData;	// 140 = 0x8c
    unsigned int _usageExposureDetectFileActivate;	// 144 = 0x90
    unsigned int _usageExposureDetectFileAddKeys;	// 148 = 0x94
    unsigned int _usageExposureDetectFileFinish;	// 152 = 0x98
    unsigned int _usageExposureDetectFileGetExposures;	// 156 = 0x9c
    NSString *_btTracingAppID;	// 160 = 0xa0
    long long _overallStatus;	// 168 = 0xa8
    NSString *_prefSimulatorRPIPath;	// 176 = 0xb0
    NSMutableOrderedSet *_previouslyTrackedApps;	// 184 = 0xb8
    ENSimulator *_simulator;	// 192 = 0xc0
    NSString *_trackedAppID;	// 200 = 0xc8
    ENUserAlert *_userAlert;	// 208 = 0xd0
    UNUserNotificationCenter *_userNotificationCenter;	// 216 = 0xd8
    double _lastTEKRequestTimestamp;	// 224 = 0xe0
    NSData *_oldestRawKey;	// 232 = 0xe8
    BTXPCTimer *_weeklyNotificationTimer;	// 240 = 0xf0
    BTCloudManager *_cloudManager;	// 248 = 0xf8
    ExposureNotificationServerConfiguration *_serverConfiguration;	// 256 = 0x100
}

+ (long long)bluetoothPowerState;	// IMP=0x00000001000184dc
+ (id)sharedENDaemon;	// IMP=0x00000001000117d8
- (void).cxx_destruct;	// IMP=0x000000010001bc64
@property(nonatomic) unsigned int usageExposureDetectFileGetExposures; // @synthesize usageExposureDetectFileGetExposures=_usageExposureDetectFileGetExposures;
@property(nonatomic) unsigned int usageExposureDetectFileFinish; // @synthesize usageExposureDetectFileFinish=_usageExposureDetectFileFinish;
@property(nonatomic) unsigned int usageExposureDetectFileAddKeys; // @synthesize usageExposureDetectFileAddKeys=_usageExposureDetectFileAddKeys;
@property(nonatomic) unsigned int usageExposureDetectFileActivate; // @synthesize usageExposureDetectFileActivate=_usageExposureDetectFileActivate;
@property(nonatomic) unsigned int usageResetAllData; // @synthesize usageResetAllData=_usageResetAllData;
@property(nonatomic) unsigned int usageGetDiagnosisKeys; // @synthesize usageGetDiagnosisKeys=_usageGetDiagnosisKeys;
@property(nonatomic) unsigned int usageManagerActivate; // @synthesize usageManagerActivate=_usageManagerActivate;
@property(nonatomic) unsigned int usageUserAlertDontReset; // @synthesize usageUserAlertDontReset=_usageUserAlertDontReset;
@property(nonatomic) unsigned int usageUserAlertReset; // @synthesize usageUserAlertReset=_usageUserAlertReset;
@property(nonatomic) unsigned int usageUserAlertDontShare; // @synthesize usageUserAlertDontShare=_usageUserAlertDontShare;
@property(nonatomic) unsigned int usageUserAlertShare; // @synthesize usageUserAlertShare=_usageUserAlertShare;
@property(nonatomic) unsigned int usageUserDisabled; // @synthesize usageUserDisabled=_usageUserDisabled;
@property(nonatomic) unsigned int usageUserEnabled; // @synthesize usageUserEnabled=_usageUserEnabled;
@property(retain, nonatomic) ExposureNotificationServerConfiguration *serverConfiguration; // @synthesize serverConfiguration=_serverConfiguration;
@property(retain, nonatomic) BTCloudManager *cloudManager; // @synthesize cloudManager=_cloudManager;
@property(retain, nonatomic) BTXPCTimer *weeklyNotificationTimer; // @synthesize weeklyNotificationTimer=_weeklyNotificationTimer;
@property(nonatomic) unsigned int lastENIN; // @synthesize lastENIN=_lastENIN;
@property(retain, nonatomic) NSData *oldestRawKey; // @synthesize oldestRawKey=_oldestRawKey;
@property(nonatomic) double lastTEKRequestTimestamp; // @synthesize lastTEKRequestTimestamp=_lastTEKRequestTimestamp;
@property(nonatomic) _Bool weeklySummaryActive; // @synthesize weeklySummaryActive=_weeklySummaryActive;
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(retain, nonatomic) ENUserAlert *userAlert; // @synthesize userAlert=_userAlert;
@property(copy, nonatomic) NSString *trackedAppID; // @synthesize trackedAppID=_trackedAppID;
@property(retain, nonatomic) ENSimulator *simulator; // @synthesize simulator=_simulator;
@property(retain, nonatomic) NSMutableOrderedSet *previouslyTrackedApps; // @synthesize previouslyTrackedApps=_previouslyTrackedApps;
@property(nonatomic) _Bool prefTCCAllowWithoutApps; // @synthesize prefTCCAllowWithoutApps=_prefTCCAllowWithoutApps;
@property(copy, nonatomic) NSString *prefSimulatorRPIPath; // @synthesize prefSimulatorRPIPath=_prefSimulatorRPIPath;
@property(nonatomic) _Bool prefSimulatorEnabled; // @synthesize prefSimulatorEnabled=_prefSimulatorEnabled;
@property(nonatomic) _Bool prefServerForceDisable; // @synthesize prefServerForceDisable=_prefServerForceDisable;
@property(nonatomic) _Bool prefRequireSignature; // @synthesize prefRequireSignature=_prefRequireSignature;
@property(nonatomic) _Bool prefEnabled; // @synthesize prefEnabled=_prefEnabled;
@property(nonatomic) _Bool prefCloudEnabled; // @synthesize prefCloudEnabled=_prefCloudEnabled;
@property(nonatomic) _Bool wasInDifferentActiveRegion; // @synthesize wasInDifferentActiveRegion=_wasInDifferentActiveRegion;
@property(nonatomic) _Bool wasInRestrictedStatus; // @synthesize wasInRestrictedStatus=_wasInRestrictedStatus;
@property(nonatomic) long long overallStatus; // @synthesize overallStatus=_overallStatus;
@property(nonatomic) int historyFileFD; // @synthesize historyFileFD=_historyFileFD;
@property(copy, nonatomic) NSString *btTracingAppID; // @synthesize btTracingAppID=_btTracingAppID;
@property(nonatomic) _Bool btTracingStarted; // @synthesize btTracingStarted=_btTracingStarted;
- (void)xpcReportStatus;	// IMP=0x000000010001b8a8
- (void)xpcConnectionInvalidated:(id)arg1;	// IMP=0x000000010001b840
- (void)_xpcConnectionAccept:(id)arg1;	// IMP=0x000000010001b640
- (void)_xpcListenerEvent:(id)arg1;	// IMP=0x000000010001b4ec
- (void)_simulatorEnsureStopped;	// IMP=0x000000010001b440
- (void)_simulatorEnsureStarted;	// IMP=0x000000010001b1e8
- (void)historySave:(id)arg1;	// IMP=0x000000010001ab1c
- (id)historyLoad;	// IMP=0x000000010001a5fc
- (void)_historyEnsureStopped;	// IMP=0x000000010001a4ec
- (void)_historyEnsureStarted;	// IMP=0x000000010001a098
- (void)enabledToAnotherEnabledRegionChangedAlert;	// IMP=0x0000000100019860
- (id)activeApp;	// IMP=0x0000000100019858
- (void)_printServerConfiguration;	// IMP=0x0000000100019648
- (void)cloudManager:(id)arg1 exposureNotificationAppConfigurationChanged:(id)arg2;	// IMP=0x0000000100019534
- (void)cloudManager:(id)arg1 exposureNotificationServerConfigurationChanged:(id)arg2 gracePeriodExpired:(_Bool)arg3;	// IMP=0x000000010001905c
- (void)_cloudManagerEnsureStopped;	// IMP=0x0000000100018fc0
- (void)_cloudManagerEnsureStarted;	// IMP=0x0000000100018e4c
- (void)_bluetoothTracingEnsureStopped;	// IMP=0x0000000100018da0
- (void)_bluetoothTracingEnsureStarted;	// IMP=0x0000000100018604
- (void)bluetoothPowerStateChanged;	// IMP=0x000000010001853c
- (void)_bluetoothMonitorEnsureStopped;	// IMP=0x00000001000183ec
- (void)_bluetoothMonitorEnsureStarted;	// IMP=0x0000000100018224
- (_Bool)_bluetoothMonitorShouldRun;	// IMP=0x00000001000180c8
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100017b20
- (unsigned long long)_matchedKeyCountForPeriod:(unsigned long long)arg1 bundleID:(id)arg2;	// IMP=0x00000001000175b8
- (id)_createNotificationRequestWithSummaryForBundleID:(id)arg1;	// IMP=0x000000010001712c
- (void)postWeeklyNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100016ca4
- (id)_createNotificationRequestForBundleID:(id)arg1 withBody:(id)arg2;	// IMP=0x0000000100016798
- (void)postNotificationWithString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100016344
- (void)_update;	// IMP=0x0000000100016248
- (void)_scheduleUpdate;	// IMP=0x00000001000161d0
- (void)_switchActiveAppWithUserPermissionTo:(id)arg1;	// IMP=0x0000000100015a64
- (void)_removeTrackedApp:(id)arg1;	// IMP=0x000000010001582c
- (void)weeklyTriggerActivate:(unsigned int)arg1;	// IMP=0x000000010001520c
- (void)trackApp:(id)arg1;	// IMP=0x0000000100014f64
- (void)_tccChanged;	// IMP=0x00000001000142e4
- (void)setTCCDisabled:(_Bool)arg1;	// IMP=0x00000001000142d4
- (void)prefsChanged;	// IMP=0x00000001000137a8
- (void)notifyUserWithStatus:(long long)arg1;	// IMP=0x0000000100013088
- (void)_updateOverallStatus;	// IMP=0x0000000100012cac
- (long long)getOverallStatus;	// IMP=0x0000000100012c5c
- (void)_invalidate;	// IMP=0x0000000100012990
- (void)invalidate;	// IMP=0x00000001000128ac
- (void)_activate;	// IMP=0x0000000100012324
- (void)activate;	// IMP=0x000000010001219c
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100011ad4
@property(readonly, copy) NSString *description;
- (void)resetTEKDialogTracking;	// IMP=0x0000000100011a78
- (id)init;	// IMP=0x0000000100011844

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
