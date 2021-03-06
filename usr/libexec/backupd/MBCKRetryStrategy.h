//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBRetryStrategy.h"

@class MBDebugContext, NSObject;
@protocol OS_dispatch_semaphore;

@interface MBCKRetryStrategy : MBRetryStrategy
{
    _Bool _shouldRetryWhenNetworkUnavailable;	// 40 = 0x28
    unsigned long long _consecutiveRetryCount;	// 48 = 0x30
    MBDebugContext *_debugContext;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_retrySemaphore;	// 64 = 0x40
}

+ (_Bool)couldRetryError:(id)arg1;	// IMP=0x00000001000a3d20
- (void).cxx_destruct;	// IMP=0x00000001000a5e60
@property(retain) NSObject<OS_dispatch_semaphore> *retrySemaphore; // @synthesize retrySemaphore=_retrySemaphore;
@property(nonatomic) _Bool shouldRetryWhenNetworkUnavailable; // @synthesize shouldRetryWhenNetworkUnavailable=_shouldRetryWhenNetworkUnavailable;
@property(retain, nonatomic) MBDebugContext *debugContext; // @synthesize debugContext=_debugContext;
- (unsigned long long)consecutiveRetryCount;	// IMP=0x00000001000a5df0
- (void)cancel;	// IMP=0x00000001000a5db0
- (_Bool)shouldContinueAfterError:(id)arg1 skippingDomain:(id)arg2;	// IMP=0x00000001000a5d08
- (_Bool)shouldRetryAfterError:(id)arg1;	// IMP=0x00000001000a5c8c
- (_Bool)shouldRetryAfterError:(id)arg1 hard:(_Bool)arg2;	// IMP=0x00000001000a5274
- (void)_incrementKey:(id)arg1;	// IMP=0x00000001000a5204
- (_Bool)_shouldForceRetry;	// IMP=0x00000001000a5158
- (_Bool)_shouldResetConsecutiveRetryCounter;	// IMP=0x00000001000a50d4
- (_Bool)_sleep:(double)arg1;	// IMP=0x00000001000a4e80
- (double)sleepIntervalAfterError:(id)arg1;	// IMP=0x00000001000a4914
- (_Bool)wouldRetry;	// IMP=0x00000001000a48d0
- (_Bool)canContinueAfterError:(id)arg1;	// IMP=0x00000001000a489c
- (_Bool)canRetryAfterError:(id)arg1;	// IMP=0x00000001000a42ac
- (void)setConsecutiveRetryCount:(unsigned long long)arg1;	// IMP=0x00000001000a4248
- (void)reset;	// IMP=0x00000001000a41b4
- (id)initWithDebugContext:(id)arg1 engine:(id)arg2;	// IMP=0x00000001000a3af8
- (id)initWithDebugContext:(id)arg1;	// IMP=0x00000001000a3ae8
- (id)initWithEngine:(id)arg1;	// IMP=0x00000001000a3a6c

@end

