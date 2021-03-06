//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ActivityManager : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (long long)_activityTypeForName:(id)arg1;	// IMP=0x000000010029f208
+ (id)_activityNameForType:(long long)arg1;	// IMP=0x000000010029f164
+ (id)activityShortNameForType:(long long)arg1;	// IMP=0x000000010029de14
+ (id)sharedInstance;	// IMP=0x000000010029dd78
- (void).cxx_destruct;	// IMP=0x00000001002a14b4
- (void)_setupActivities;	// IMP=0x00000001002a1174
- (void)_runXPCActivityIfNeeded:(id)arg1 withActivityName:(id)arg2;	// IMP=0x00000001002a10b4
- (void)_registerActivity:(long long)arg1 activityShortName:(id)arg2 criteria:(id)arg3 reason:(id)arg4;	// IMP=0x00000001002a0e64
- (void)_performMigration;	// IMP=0x00000001002a0dd0
- (id)_nextPostDateForActivity:(id)arg1 validatedRefreshInterval:(long long)arg2;	// IMP=0x00000001002a0c34
- (void)_handleWakeupForActivity:(id)arg1;	// IMP=0x00000001002a06d0
- (void)_addUpdateActivityWithReason:(id)arg1;	// IMP=0x00000001002a02f0
- (void)_addOcelotResetPayoutActivityWithReason:(id)arg1;	// IMP=0x000000010029fcb4
- (id)_addIntervalActivity:(long long)arg1 activityShortName:(id)arg2 scheduledDate:(id)arg3 refreshInverval:(long long)arg4 forceReset:(_Bool)arg5 reason:(id)arg6;	// IMP=0x000000010029f8f0
- (void)_addActivityType:(long long)arg1 reason:(id)arg2 forceReset:(_Bool)arg3;	// IMP=0x000000010029f37c
- (void)unregisterActivity:(long long)arg1;	// IMP=0x000000010029efc0
- (void)resetActivity:(long long)arg1 reason:(id)arg2 forceReset:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000010029ecdc
- (void)resetActivity:(long long)arg1 reason:(id)arg2;	// IMP=0x000000010029ecc8
- (void)registerActivity:(long long)arg1 activityShortName:(id)arg2 scheduledDate:(id)arg3 withReason:(id)arg4;	// IMP=0x000000010029ec38
- (void)registerActivity:(id)arg1 withReason:(id)arg2;	// IMP=0x000000010029e234
- (id)nextOcelotPayoutResetDate;	// IMP=0x000000010029e0a4
- (_Bool)isActivityEnabled:(long long)arg1;	// IMP=0x000000010029df4c
- (void)handleWakeWithName:(id)arg1;	// IMP=0x000000010029deb4
- (id)init;	// IMP=0x000000010029dc90

@end

