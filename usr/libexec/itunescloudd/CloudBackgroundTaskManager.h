//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface CloudBackgroundTaskManager : NSObject
{
    NSMapTable *_jobNameToSelectorMap;	// 8 = 0x8
}

+ (id)sharedTaskManager;	// IMP=0x00000001000c0dc4
- (void).cxx_destruct;	// IMP=0x00000001000c2b18
- (_Bool)_cellularDataAllowedForJaliscoMedia;	// IMP=0x00000001000c2a7c
- (_Bool)_cellularDataAllowedForJaliscoApps;	// IMP=0x00000001000c2a28
- (id)_nextJaliscoAppsPollTimeKey;	// IMP=0x00000001000c2a1c
- (id)_nextJaliscoMediaPollTimeKey;	// IMP=0x00000001000c2a10
- (id)_nextEvaluateSyncRulesThrottleOperationTimeKey;	// IMP=0x00000001000c2a04
- (id)_nextEvaluateSyncRulesOperationTimeKey;	// IMP=0x00000001000c29f8
- (double)_throttledDeferredEvaluateKeepLocalTime;	// IMP=0x00000001000c2934
- (id)_homeSharingPrefsNumberForKey:(id)arg1;	// IMP=0x00000001000c2914
- (void)_setHomeSharingPrefsNumber:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001000c28c0
- (id)_baseBtaJobForPeriodicPollCellularDataAllowed:(_Bool)arg1;	// IMP=0x00000001000c2848
- (id)_baseBtaJobForDeferredPush;	// IMP=0x00000001000c27ec
- (void)_handleJobNamed:(const char *)arg1 satisfied:(_Bool)arg2 invalid:(_Bool)arg3;	// IMP=0x00000001000c26a8
- (void)_unscheduleJobNamed:(const char *)arg1;	// IMP=0x00000001000c25e4
- (void)_scheduleJobNamed:(const char *)arg1 withStartTime:(id)arg2 baseBtaJob:(id)arg3;	// IMP=0x00000001000c2438
- (void)_initializeBTAHandlers;	// IMP=0x00000001000c2068
- (void)_handleJaliscoMediaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00000001000c1c98
- (void)_handleJaliscoMediaPeriodicPollJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00000001000c14dc
- (void)_handleSagaDeferredPushUpdateJobSatisfied:(_Bool)arg1 invalidRequest:(_Bool)arg2;	// IMP=0x00000001000c110c
- (void)unscheduleJaliscoMediaDeferredPushUpate;	// IMP=0x00000001000c10f8
- (void)scheduleJaliscoMediaDeferredPushUpate;	// IMP=0x00000001000c1034
- (void)unscheduleJaliscoMediaPeriodicPoll;	// IMP=0x00000001000c1020
- (void)scheduleJaliscoMediaPeriodicPoll;	// IMP=0x00000001000c0f60
- (void)unscheduleSagaDeferredPushUpate;	// IMP=0x00000001000c0f4c
- (void)scheduleSagaDeferredPushUpate;	// IMP=0x00000001000c0e88
- (id)init;	// IMP=0x00000001000c0e30

@end
