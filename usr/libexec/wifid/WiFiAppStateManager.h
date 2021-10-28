//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor;

@interface WiFiAppStateManager : NSObject
{
    struct __CFDictionary *_applications;	// 8 = 0x8
    struct __CFSet *_activeApplications;	// 16 = 0x10
    struct __CFSet *_backgroundApplications;	// 24 = 0x18
    struct __CFSet *_bundleIdsToMonitor;	// 32 = 0x20
    BKSApplicationStateMonitor *_applicationStateMonitor;	// 40 = 0x28
    void *_callbackContext;	// 48 = 0x30
    CDUnknownFunctionPointerType _callbackFunction;	// 56 = 0x38
    void *_bundleCallbackContext;	// 64 = 0x40
    CDUnknownFunctionPointerType _bundleCallbackFunction;	// 72 = 0x48
    struct __CFRunLoop *_runLoop;	// 80 = 0x50
    struct __CFString *_runLoopMode;	// 88 = 0x58
    void *_fgAppTrackerCallbackContext;	// 96 = 0x60
    CDUnknownFunctionPointerType _fgAppTrackerCallbackFunction;	// 104 = 0x68
    struct __CFString *_lastForegroundAppBundleID;	// 112 = 0x70
}

+ (id)sharedWiFiAppStateManager;	// IMP=0x00000001000fdf28
- (_Bool)_isMonitoringChangesForBundleID:(struct __CFString *)arg1;	// IMP=0x00000001000fef88
- (void)stopMonitoringBundleId:(struct __CFString *)arg1;	// IMP=0x00000001000fef70
- (void)startMonitoringBundleId:(struct __CFString *)arg1;	// IMP=0x00000001000fef58
- (_Bool)_appUsesBackgroundNetwork:(int)arg1;	// IMP=0x00000001000fef50
- (_Bool)_appUsesWiFiNetwork:(int)arg1;	// IMP=0x00000001000fef44
- (int)_getAppCapabilitiesForBundleID:(int)arg1;	// IMP=0x00000001000fedfc
- (void)_appStateChanged:(unsigned int)arg1 bundleID:(struct __CFString *)arg2 capabilities:(int)arg3;	// IMP=0x00000001000fed34
- (id)_getStringOfAppState:(unsigned int)arg1;	// IMP=0x00000001000fecd8
- (void)_setApplicationState:(struct __CFString *)arg1 active:(_Bool)arg2 underLock:(_Bool)arg3 capabilities:(int)arg4;	// IMP=0x00000001000fea3c
- (void)_registerApplication:(struct __CFString *)arg1 capabilities:(int)arg2;	// IMP=0x00000001000fe8e4
- (void)_unRegisterApplication:(struct __CFString *)arg1;	// IMP=0x00000001000fe82c
- (void)_applicationStateMonitorHandler:(struct __CFDictionary *)arg1;	// IMP=0x00000001000fe344
- (void)registerForegroundAppTrackerFunctionPtr:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x00000001000fe33c
- (void)registerBundleCallbackFunctionPtr:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x00000001000fe334
- (void)registerCallbackFunctionPtr:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x00000001000fe32c
- (void)dealloc;	// IMP=0x00000001000fe278
- (id)init;	// IMP=0x00000001000fdfac
- (void)unScheduleFromRunLoop:(struct __CFRunLoop *)arg1 runLoopMode:(struct __CFString *)arg2;	// IMP=0x00000001000fdfa4
- (void)scheduleWithRunLoop:(struct __CFRunLoop *)arg1 runLoopMode:(struct __CFString *)arg2;	// IMP=0x00000001000fdf9c

@end
