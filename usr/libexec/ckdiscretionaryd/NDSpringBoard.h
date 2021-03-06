//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface NDSpringBoard : NSObject
{
    BKSApplicationStateMonitor *_monitor;	// 8 = 0x8
    NSMutableDictionary *_observers;	// 16 = 0x10
    NSMutableDictionary *_appStates;	// 24 = 0x18
    NSMutableSet *_monitoredBundleIDs;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedSpringBoard;	// IMP=0x000000010000740c
- (void).cxx_destruct;	// IMP=0x00000001000083f0
- (_Bool)identifierIsForSpringBoardApplication:(id)arg1;	// IMP=0x00000001000082f8
- (_Bool)applicationIsForeground:(id)arg1;	// IMP=0x00000001000082c8
- (unsigned int)applicationStateForBundleID:(id)arg1;	// IMP=0x00000001000080c0
- (void)stopMonitoringBundleID:(id)arg1;	// IMP=0x0000000100007fbc
- (void)startMonitoringBundleID:(id)arg1;	// IMP=0x0000000100007e4c
- (void)removeObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100007d40
- (void)addObserver:(id)arg1 forApplication:(id)arg2;	// IMP=0x0000000100007b64
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x00000001000076a4
- (void)setupMonitor;	// IMP=0x00000001000075c0
- (id)init;	// IMP=0x0000000100007490

@end

