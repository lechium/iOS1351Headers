//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APSTopicGroup, NSMutableSet, NSString, PCPersistentTimer;
@protocol APSTopicManagerDelegate;

@interface APSTopicManager : NSObject
{
    APSTopicGroup *_groups[3];	// 8 = 0x8
    NSMutableSet *_alsInhibitedTopics;	// 32 = 0x20
    PCPersistentTimer *_pendingFilterTimer;	// 40 = 0x28
    id <APSTopicManagerDelegate> _delegate;	// 48 = 0x30
    _Bool _isPowerEfficientToSendFilter;	// 56 = 0x38
    _Bool _globalALSBudgetSaturated;	// 57 = 0x39
    _Bool _pendingServerUpdate;	// 58 = 0x3a
}

- (void).cxx_destruct;	// IMP=0x0000000100042fc4
@property(nonatomic) __weak id <APSTopicManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *logString;
- (id)logStringForCategory:(long long)arg1;	// IMP=0x0000000100042cec
- (void)performFilterBlock:(CDUnknownBlockType)arg1 forCategory:(long long)arg2;	// IMP=0x0000000100042ad4
- (void)_scheduleServerUpdate:(_Bool)arg1 withTimer:(_Bool)arg2;	// IMP=0x0000000100042ac4
- (void)_scheduleServerUpdate:(_Bool)arg1 withTimer:(_Bool)arg2 shortInterval:(_Bool)arg3;	// IMP=0x00000001000427b4
- (void)_pendingFilterTimerFired;	// IMP=0x00000001000426d4
- (void)_processPendingChangeIfNeeded;	// IMP=0x0000000100042604
- (void)_clearPendingFilterTimer;	// IMP=0x00000001000425cc
- (void)_processTopicChangeImmediately:(_Bool)arg1 alertDelegate:(_Bool)arg2;	// IMP=0x0000000100042084
- (void)removeFromALSInhibitedTopics:(id)arg1;	// IMP=0x0000000100041f30
- (void)addToALSInhibitedTopics:(id)arg1;	// IMP=0x0000000100041dc4
- (void)setGlobalALSBudgetSaturated:(_Bool)arg1;	// IMP=0x0000000100041cbc
- (void)setIsPowerEfficientToSendFilter:(_Bool)arg1;	// IMP=0x0000000100041bac
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 forCategory:(long long)arg4;	// IMP=0x0000000100041b2c
- (long long)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 forCategory:(long long)arg4 pretend:(_Bool)arg5;	// IMP=0x0000000100041778
- (_Bool)_categoryShouldTriggerUpdate:(long long)arg1;	// IMP=0x0000000100041768
@property(readonly, nonatomic) _Bool hasListeningTopics;
- (id)hasTopicHash:(id)arg1;	// IMP=0x00000001000415c8
- (id)hasOpportunisticTopicHash:(id)arg1 forCategory:(long long)arg2;	// IMP=0x0000000100041520
- (id)hasOpportunisticTopicHash:(id)arg1;	// IMP=0x0000000100041470
- (id)hasRecentlyRemovedTopicHash:(id)arg1;	// IMP=0x00000001000413c0
- (id)hasIgnoredTopicHash:(id)arg1;	// IMP=0x0000000100041310
- (id)hasEnabledTopicHash:(id)arg1;	// IMP=0x0000000100041260
- (void)dealloc;	// IMP=0x00000001000411b8
- (id)initWithEnvironment:(id)arg1;	// IMP=0x0000000100041100

@end

