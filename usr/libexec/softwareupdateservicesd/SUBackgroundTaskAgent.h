//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SUAutoInstallManager, SUManager, SUXPCAlarm;

@interface SUBackgroundTaskAgent : NSObject
{
    SUManager *_manager;	// 8 = 0x8
    SUAutoInstallManager *_autoInstallManager;	// 16 = 0x10
    SUXPCAlarm *_alarm;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100007ad4
- (void)_handleBackgroundAgentAutoScanNoReshedule:(const char *)arg1 parameters:(id)arg2;	// IMP=0x0000000100009720
- (void)_handleBackgroundAgentAutoScan:(const char *)arg1 parameters:(id)arg2;	// IMP=0x0000000100009580
- (void)_scheduleNewBackgroundAgentAutoScanForType:(int)arg1 jobName:(const char *)arg2 previousStartDate:(id)arg3 previousEndDate:(id)arg4;	// IMP=0x0000000100008fdc
- (void)_scheduleDelayEndAutoScanForType:(int)arg1 jobName:(const char *)arg2 scanDate:(id)arg3;	// IMP=0x0000000100008e64
- (void)_scheduleAutoScanForTypeIfNecessary:(int)arg1 jobName:(const char *)arg2;	// IMP=0x0000000100008d40
- (void)_handlePresentAutoUpdateBanner;	// IMP=0x0000000100008cc8
- (void)_handleAutoInstallExpirationTask:(const char *)arg1 parameters:(id)arg2;	// IMP=0x0000000100008c90
- (void)_handleAutoInstallStartInstall:(const char *)arg1 parameters:(id)arg2;	// IMP=0x0000000100008c80
- (void)_handleAutoInstallUnlockStartTask:(const char *)arg1 parameters:(id)arg2;	// IMP=0x0000000100008c48
- (void)cancelAutoInstallWindowEndTask;	// IMP=0x0000000100008c3c
- (void)cancelAutoInstallStartInstallTask;	// IMP=0x0000000100008c30
- (void)cancelAutoInstallUnlockWindowStartTask;	// IMP=0x0000000100008c24
- (void)scheduleAutoInstallExpirationTask:(id)arg1;	// IMP=0x0000000100008bc8
- (void)scheduleAutoInstallStartInstallTaskWithDate:(id)arg1;	// IMP=0x000000010000893c
- (void)scheduleAutoInstallStartInstallTask:(id)arg1;	// IMP=0x0000000100008900
- (void)scheduleAutoInstallUnlockWindowStartTask:(id)arg1;	// IMP=0x00000001000088a4
- (void)scheduleAutoInstallTaskAtDate:(id)arg1 jobName:(const char *)arg2 needsNetwork:(_Bool)arg3 needsPower:(_Bool)arg4;	// IMP=0x00000001000086fc
- (void)_handleAutodownloadWifiPeriodEndTask:(id)arg1;	// IMP=0x0000000100008630
- (void)cancelAutodownloadWifiPeriodEndTask;	// IMP=0x0000000100008624
- (void)scheduleAutodownloadWifiPeriodEndTaskIfNecessary;	// IMP=0x000000010000851c
- (void)scheduleAutodownloadWifiPeriodEndTask;	// IMP=0x00000001000083e8
- (void)_handleAutodownloadRetryTask:(id)arg1;	// IMP=0x0000000100008218
- (void)cancelInstallAlertRegistration;	// IMP=0x00000001000081dc
- (void)scheduleInstallAlertRegistration:(id)arg1;	// IMP=0x00000001000081cc
- (void)cancelPresentAutoUpdateBanner;	// IMP=0x00000001000081c0
- (void)schedulePresentAutoUpdateBanner;	// IMP=0x00000001000080e8
- (void)cancelAutodownloadRetryTask;	// IMP=0x00000001000080dc
- (void)scheduleAutodownloadRetryTaskIfNecessary;	// IMP=0x0000000100007f4c
- (void)scheduleAutodownloadRetryTaskFromDate:(id)arg1 toDate:(id)arg2 policy:(id)arg3;	// IMP=0x0000000100007d74
- (void)_addPowerRequirementsToRequest:(id)arg1;	// IMP=0x0000000100007d5c
- (void)cancelEmergencyAutoScanTask;	// IMP=0x0000000100007d50
- (void)scheduleEmergencyAutoScanTaskIfNecessary;	// IMP=0x0000000100007d38
- (void)cancelDelayEndAutoScan;	// IMP=0x0000000100007d2c
- (void)scheduleDelayEndAutoScan:(id)arg1;	// IMP=0x0000000100007d10
- (void)cancelDefaultAutoScanTask;	// IMP=0x0000000100007d04
- (void)scheduleDefaultAutoScanTaskIfNecessary;	// IMP=0x0000000100007cec
- (void)cancelAllAutoInstallTasks;	// IMP=0x0000000100007c98
- (void)scheduleAllAutoInstallUpdateTasks:(id)arg1;	// IMP=0x0000000100007c48
- (void)cancelAllAutodownloadTasks;	// IMP=0x0000000100007c14
- (void)cancelAllAutoscanTasks;	// IMP=0x0000000100007be0
- (void)cancelAllTasks;	// IMP=0x0000000100007b8c
- (void)scheduleAnyTasksIfNecessary;	// IMP=0x0000000100007b38
- (void)_printDetailsForJob:(const char *)arg1;	// IMP=0x0000000100007a54
- (void)_initBackgroundTaskAgent;	// IMP=0x0000000100007628
- (void)dealloc;	// IMP=0x00000001000075d8
- (id)init;	// IMP=0x0000000100007530

@end
