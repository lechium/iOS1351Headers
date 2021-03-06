//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, RDDefaults, RDFileURLs;
@protocol OS_dispatch_queue, RDLaunchEventsDelegate;

@interface RDLaunchEvents : NSObject
{
    id <RDLaunchEventsDelegate> _delegate;	// 8 = 0x8
    RDFileURLs *_fileURLs;	// 16 = 0x10
    NSDictionary *_activities;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_q;	// 32 = 0x20
    RDDefaults *_defaults;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100006850
@property(retain, nonatomic) RDDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain, nonatomic) NSDictionary *activities; // @synthesize activities=_activities;
@property(nonatomic) __weak RDFileURLs *fileURLs; // @synthesize fileURLs=_fileURLs;
@property(nonatomic) __weak id <RDLaunchEventsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unregisterForLaunchEvents;	// IMP=0x0000000100006664
- (void)registerForLaunchEvents;	// IMP=0x0000000100005380
- (void)forgetXPCActivities;	// IMP=0x0000000100005350
- (long long)metricUrgency:(int)arg1;	// IMP=0x0000000100005330
- (id)activityFromName:(id)arg1;	// IMP=0x0000000100005098
- (void)dealloc;	// IMP=0x0000000100005020
- (id)initWithActivities:(id)arg1 queue:(id)arg2 defaults:(id)arg3;	// IMP=0x0000000100004f98

@end

