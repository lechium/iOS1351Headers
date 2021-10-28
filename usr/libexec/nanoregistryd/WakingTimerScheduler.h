//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable, WakingTimer;
@protocol OS_dispatch_source;

@interface WakingTimerScheduler : NSObject
{
    _Bool _dispatchTimerScheduled;	// 8 = 0x8
    unsigned int _systemPowerConnection;	// 12 = 0xc
    unsigned int _systemPowerNotifier;	// 16 = 0x10
    NSHashTable *_timers;	// 24 = 0x18
    WakingTimer *_timerWithEarliestDeadline;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_dispatchTimer;	// 40 = 0x28
    NSDate *_requestedWakeDate;	// 48 = 0x30
    struct IONotificationPort *_systemPowerPort;	// 56 = 0x38
}

+ (void)cancelScheduledWake:(id)arg1;	// IMP=0x00000001000623ec
+ (unsigned long long)now;	// IMP=0x000000010006198c
+ (id)sharedInstance;	// IMP=0x0000000100061474
+ (id)timerQueue;	// IMP=0x0000000100060dc0
- (void).cxx_destruct;	// IMP=0x0000000100062808
@property(nonatomic) struct IONotificationPort *systemPowerPort; // @synthesize systemPowerPort=_systemPowerPort;
@property(nonatomic) unsigned int systemPowerNotifier; // @synthesize systemPowerNotifier=_systemPowerNotifier;
@property(nonatomic) unsigned int systemPowerConnection; // @synthesize systemPowerConnection=_systemPowerConnection;
@property(retain, nonatomic) NSDate *requestedWakeDate; // @synthesize requestedWakeDate=_requestedWakeDate;
@property(nonatomic) _Bool dispatchTimerScheduled; // @synthesize dispatchTimerScheduled=_dispatchTimerScheduled;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(nonatomic) WakingTimer *timerWithEarliestDeadline; // @synthesize timerWithEarliestDeadline=_timerWithEarliestDeadline;
@property(retain, nonatomic) NSHashTable *timers; // @synthesize timers=_timers;
- (void)systemPowerChanged:(unsigned int)arg1 notificationID:(void *)arg2;	// IMP=0x0000000100062638
- (void)cancelScheduledWake;	// IMP=0x00000001000625ec
- (void)scheduleWakeWithDelayBeforeFireTime:(unsigned long long)arg1 gracePeriod:(double)arg2;	// IMP=0x000000010006212c
- (void)clearDispatchTimer;	// IMP=0x00000001000620f0
- (void)scheduleTimerWithEarliestDeadline:(id)arg1 now:(unsigned long long)arg2;	// IMP=0x0000000100061f44
- (void)evaluateTimers:(unsigned long long)arg1;	// IMP=0x0000000100061a00
- (void)evaluateTimers;	// IMP=0x00000001000619a4
- (void)handleTimeEvent;	// IMP=0x0000000100061994
- (void)cancelTimer:(id)arg1;	// IMP=0x00000001000617c0
- (void)scheduleTimer:(id)arg1;	// IMP=0x0000000100061510
- (id)init;	// IMP=0x0000000100060e30

@end
