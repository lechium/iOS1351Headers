//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TMMonotonicClock-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface TMMonotonicClock : NSObject <TMMonotonicClock>
{
    double _lastCoarseMonotonicTime;	// 8 = 0x8
    unsigned long long _lastCoarseMonotonicTimeMachTime;	// 16 = 0x10
    double _cachedMonotonicTime;	// 24 = 0x18
    unsigned long long _cachedMachTime;	// 32 = 0x20
    double _cachedUncertainty;	// 40 = 0x28
    unsigned long long _lastWake;	// 48 = 0x30
    double _syncInterval;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQ;	// 64 = 0x40
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQ; // @synthesize workQ=_workQ;
- (_Bool)isMachTimeValid:(unsigned long long)arg1;	// IMP=0x000000010000fc68
@property(readonly, nonatomic) unsigned long long lastWake;
@property(readonly, nonatomic) double coarseMonotonicTime;
@property(readonly, nonatomic) unsigned long long machTime;
- (void)montonicTimeForMachTime:(unsigned long long)arg1 toQueue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f494
- (void)dealloc;	// IMP=0x000000010000f44c
- (id)initWithSyncInterval:(double)arg1;	// IMP=0x000000010000f398
- (id)init;	// IMP=0x000000010000f308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

