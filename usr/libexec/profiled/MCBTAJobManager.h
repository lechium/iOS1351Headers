//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCProfileServiceServer;
@protocol OS_dispatch_queue;

@interface MCBTAJobManager : NSObject
{
    int _profileChangeNotificationToken;	// 8 = 0x8
    int _managedAppChangeNotificationToken;	// 12 = 0xc
    int _effectiveSettingsChangedNotificationToken;	// 16 = 0x10
    MCProfileServiceServer *_server;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100073ab8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) int effectiveSettingsChangedNotificationToken; // @synthesize effectiveSettingsChangedNotificationToken=_effectiveSettingsChangedNotificationToken;
@property(nonatomic) int managedAppChangeNotificationToken; // @synthesize managedAppChangeNotificationToken=_managedAppChangeNotificationToken;
@property(nonatomic) int profileChangeNotificationToken; // @synthesize profileChangeNotificationToken=_profileChangeNotificationToken;
@property(nonatomic) __weak MCProfileServiceServer *server; // @synthesize server=_server;
- (id)_xpcCriteriaWithDescription:(id)arg1 proposedStartDate:(id)arg2 proposedGracePeriod:(id)arg3 proposedPriority:(const char *)arg4;	// IMP=0x0000000100073748
- (void)_workQueueRescheduleAggregateLogJob:(id)arg1;	// IMP=0x00000001000736e8
- (void)rescheduleAggregateLogJob:(id)arg1;	// IMP=0x0000000100073650
- (void)_workQueueRescheduleUpdateMISTrustJob:(id)arg1;	// IMP=0x00000001000735f0
- (void)rescheduleUpdateMISTrustJob:(id)arg1;	// IMP=0x0000000100073558
- (void)_workQueueRescheduleManagedAppValidationJob:(id)arg1;	// IMP=0x0000000100073450
- (void)rescheduleManagedAppValidationJob:(id)arg1;	// IMP=0x00000001000733b8
- (void)rescheduleManagedAppValidationJob;	// IMP=0x0000000100073304
- (void)_workQueueRescheduleActivationLockCleanupJob;	// IMP=0x0000000100073050
- (void)rescheduleActivationLockCleanupJob;	// IMP=0x0000000100072fe8
- (void)_workQueueRescheduleProfileJanitorJob;	// IMP=0x0000000100072f3c
- (void)rescheduleProfileJanitorJob;	// IMP=0x0000000100072ed4
- (id)_jobWithDescription:(id)arg1 proposedStartDate:(id)arg2;	// IMP=0x0000000100072c40
- (id)_nextRegularDate;	// IMP=0x0000000100072a78
- (void)activationLockBypassCodeWasStored:(id)arg1;	// IMP=0x0000000100072a00
- (void)stop;	// IMP=0x000000010007298c
- (void)start;	// IMP=0x00000001000720dc

@end

