//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLMotionStateMediatorProtocol-Protocol.h"

@class NSString;

@interface CLMotionStateMediatorAdapter : CLNotifierServiceAdapter <CLMotionStateMediatorProtocol>
{
}

+ (id)getSilo;	// IMP=0x0000000100230f44
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0000000100230f20
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100cccc30
+ (_Bool)isSupported;	// IMP=0x0000000100231f10
- (CDUnknownBlockType)syncgetActivityOverride;	// IMP=0x0000000100231ca8
- (void)didTimeoutGeoFence;	// IMP=0x0000000100231ab4
- (void)didExitGeoFence;	// IMP=0x000000010023189c
- (void)userDismissedWorkoutAlert;	// IMP=0x00000001002317a0
- (void)setWorkoutSuggestedStopTimeout:(double)arg1;	// IMP=0x0000000100231650
- (void)removeClient:(byref id)arg1 prepareSessionEndForSessionType:(long long)arg2;	// IMP=0x00000001002313c8
- (void)addClient:(byref id)arg1 prepareSessionEndForSessionType:(long long)arg2;	// IMP=0x00000001002311e0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00000001002311a4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100231160
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010023112c
- (struct CLMotionStateMediator *)adaptee;	// IMP=0x00000001002310f0
- (void)endService;	// IMP=0x00000001002310cc
- (void)beginService;	// IMP=0x0000000100231000
- (id)init;	// IMP=0x0000000100230fbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
