//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKDiscretionarySchedulerTask.h"

@class CKDiscretionaryOptions, NSDate, NSObject, NSString, _DASActivity;
@protocol OS_dispatch_queue, OS_os_activity;

@interface CKDiscretionaryDASSchedulerTask : CKDiscretionarySchedulerTask
{
    _Bool _requiresPastBuddy;	// 16 = 0x10
    _Bool _running;	// 17 = 0x11
    _Bool _rescheduling;	// 18 = 0x12
    NSString *_operationID;	// 24 = 0x18
    NSString *_group;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    CKDiscretionaryOptions *_options;	// 56 = 0x38
    NSDate *_startAfter;	// 64 = 0x40
    NSDate *_startBefore;	// 72 = 0x48
    CDUnknownBlockType _startHandler;	// 80 = 0x50
    CDUnknownBlockType _suspendHandler;	// 88 = 0x58
    _DASActivity *_dasActivity;	// 96 = 0x60
    NSObject<OS_os_activity> *_osActivity;	// 104 = 0x68
}

+ (unsigned long long)_priorityForState:(unsigned long long)arg1;	// IMP=0x0000000100004ae8
- (void).cxx_destruct;	// IMP=0x0000000100005994
@property(retain, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(retain, nonatomic) _DASActivity *dasActivity; // @synthesize dasActivity=_dasActivity;
@property(copy, nonatomic) CDUnknownBlockType suspendHandler; // @synthesize suspendHandler=_suspendHandler;
@property(copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
@property(nonatomic) _Bool rescheduling; // @synthesize rescheduling=_rescheduling;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSDate *startBefore; // @synthesize startBefore=_startBefore;
@property(retain, nonatomic) NSDate *startAfter; // @synthesize startAfter=_startAfter;
@property(retain, nonatomic) CKDiscretionaryOptions *options; // @synthesize options=_options;
@property(nonatomic) _Bool requiresPastBuddy; // @synthesize requiresPastBuddy=_requiresPastBuddy;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
- (void)_schedule;	// IMP=0x0000000100004ec0
- (void)finish;	// IMP=0x0000000100004d8c
- (void)cancel;	// IMP=0x0000000100004c58
- (void)setState:(unsigned long long)arg1;	// IMP=0x0000000100004b24
- (id)_activityName;	// IMP=0x0000000100004a94
- (id)initWithOperationID:(id)arg1 group:(id)arg2 bundleID:(id)arg3 requiresPastBuddy:(_Bool)arg4 options:(id)arg5 state:(unsigned long long)arg6 queue:(id)arg7 startHandler:(CDUnknownBlockType)arg8 suspendHandler:(CDUnknownBlockType)arg9;	// IMP=0x00000001000047e4

@end

