//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FudStateMachineDelegate-Protocol.h"

@class FudStorage, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_queue_attr, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface FudIpcDispatch : NSObject <FudStateMachineDelegate>
{
    FudStorage *storage;	// 8 = 0x8
    NSMutableDictionary *pendingDeviceAttachedEvents;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *workQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue_attr> *_attr;	// 32 = 0x20
    NSMutableDictionary *eventFlags;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *criticalSectionSemaphore;	// 48 = 0x30
    NSMutableArray *queuedEvents;	// 56 = 0x38
    _Bool isActive;	// 64 = 0x40
}

@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue;
- (void)dealloc;	// IMP=0x000000010000e0fc
- (void)accessoryDisconnected:(id)arg1 error:(id)arg2;	// IMP=0x000000010000ddc4
- (void)stepProgress:(int)arg1 stateMachine:(id)arg2 progress:(double)arg3 overallProgress:(double)arg4;	// IMP=0x000000010000d8ec
- (void)stepComplete:(int)arg1 stateMachine:(id)arg2 status:(_Bool)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x000000010000d090
- (void)queueUpEventForAccessory:(id)arg1 stateMachine:(id)arg2;	// IMP=0x000000010000ce90
- (void)stepWillBegin:(int)arg1 stateMachine:(id)arg2;	// IMP=0x000000010000cd48
- (id)getStorage;	// IMP=0x000000010000cd04
- (id)getPluginWithName:(id)arg1 forFilter:(id)arg2 delegate:(id)arg3 info:(id *)arg4 options:(id)arg5;	// IMP=0x000000010000ca88
- (int)getCommandForState:(int)arg1;	// IMP=0x000000010000ca30
- (_Bool)sendReplyToDictionary:(id)arg1 forCommand:(int)arg2 withStatus:(_Bool)arg3 withError:(id)arg4;	// IMP=0x000000010000c91c
- (_Bool)sendDeviceClassAttached:(id)arg1 toClient:(id)arg2;	// IMP=0x000000010000c800
- (void)releaseCriticalSectionLock;	// IMP=0x000000010000c7d0
- (void)aquireCriticalSectionLock;	// IMP=0x000000010000c78c
- (_Bool)shouldUnblockCriticalSectionAfterStep:(int)arg1 wasSuccessful:(_Bool)arg2;	// IMP=0x000000010000c77c
- (_Bool)shouldBlockCriticalSectionDuringStep:(int)arg1;	// IMP=0x000000010000c76c
- (void)enableStreamEventsForStateMachine:(id)arg1;	// IMP=0x000000010000c6bc
- (void)disableStreamEventsForStateMachine:(id)arg1;	// IMP=0x000000010000c614
- (_Bool)isStateMachineBusyInExclusionGroup:(id)arg1;	// IMP=0x000000010000c42c
- (_Bool)isStateMachineAcceptingNewStreamEvents:(id)arg1;	// IMP=0x000000010000c3c8
- (_Bool)isStateMachineForFilterAcceptingNewStreamEvents:(id)arg1;	// IMP=0x000000010000c34c
- (_Bool)dispatchStateMachineEvent:(id)arg1;	// IMP=0x000000010000ba38
- (void)addEventToQueue:(id)arg1 withFilter:(id)arg2 stateMachine:(id)arg3;	// IMP=0x000000010000b768
- (_Bool)dispatchStatelessEvent:(id)arg1;	// IMP=0x000000010000b590
- (_Bool)dispatchQueryEvent:(id)arg1;	// IMP=0x000000010000b244
- (_Bool)dispatchEvent:(id)arg1;	// IMP=0x000000010000b0f4
- (_Bool)setLastRemoteFindWithEvent:(id)arg1;	// IMP=0x000000010000afb4
- (_Bool)notifyAccessoryAttachedWithEvent:(id)arg1;	// IMP=0x000000010000ad38
- (_Bool)setupClientSessionWithEvent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000abe0
- (_Bool)registerClientWithEvent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000a8ec
- (_Bool)unregisterClientWithEvent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000a81c
- (_Bool)isEventQueryRequest:(id)arg1;	// IMP=0x000000010000a7b0
- (_Bool)isEventStateless:(id)arg1;	// IMP=0x000000010000a704
- (id)initWithStorage:(id)arg1;	// IMP=0x000000010000a608

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

