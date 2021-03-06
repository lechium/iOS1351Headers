//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ICSelectorDelayer : NSObject
{
    _Bool _waitToFireUntilRequestsStop;	// 8 = 0x8
    _Bool _callOnMainThread;	// 9 = 0x9
    id _target;	// 16 = 0x10
    SEL _selector;	// 24 = 0x18
    double _delay;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_requestQueue;	// 40 = 0x28
    CDUnknownBlockType _fireBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100006838
@property(copy, nonatomic) CDUnknownBlockType fireBlock; // @synthesize fireBlock=_fireBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(nonatomic) _Bool callOnMainThread; // @synthesize callOnMainThread=_callOnMainThread;
@property(nonatomic) _Bool waitToFireUntilRequestsStop; // @synthesize waitToFireUntilRequestsStop=_waitToFireUntilRequestsStop;
@property double delay; // @synthesize delay=_delay;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void)_cancelFireRequests;	// IMP=0x0000000100006718
- (void)cancelPreviousFireRequests;	// IMP=0x000000010000668c
@property(readonly, nonatomic) _Bool isScheduledToFire;
- (void)callTargetSelector;	// IMP=0x0000000100006400
- (void)fireImmediately;	// IMP=0x00000001000062ec
- (void)requestFire;	// IMP=0x0000000100005fa8
- (void)dealloc;	// IMP=0x0000000100005ef0
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 delay:(double)arg3 waitToFireUntilRequestsStop:(_Bool)arg4 callOnMainThread:(_Bool)arg5;	// IMP=0x0000000100005db4

@end

