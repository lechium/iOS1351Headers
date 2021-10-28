//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TPSDWelcomeDelegate;

@interface TPSDWelcome : NSObject
{
    _Bool _welcomeXPCActivityScheduleInProgress;	// 8 = 0x8
    id <TPSDWelcomeDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000da98
@property(nonatomic) _Bool welcomeXPCActivityScheduleInProgress; // @synthesize welcomeXPCActivityScheduleInProgress=_welcomeXPCActivityScheduleInProgress;
@property(nonatomic) __weak id <TPSDWelcomeDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)stopWelcomeNotification;	// IMP=0x000000010000d7dc
- (void)showWelcomeNotification;	// IMP=0x000000010000d244
- (void)unregisterDarwinNotification:(id)arg1;	// IMP=0x000000010000d1f0
- (void)registerDarwinNotification:(id)arg1;	// IMP=0x000000010000d170
- (void)registerForEmptyLockScreenPresentedNotification;	// IMP=0x000000010000cf30
- (_Bool)setupCompleted;	// IMP=0x000000010000cf10
- (void)createWelcomeXPCActivity;	// IMP=0x000000010000cb84
- (void)scheduleWelcomeNotificationActivity;	// IMP=0x000000010000c9f0
- (id)getCurrentWelcomeActivityCritiera;	// IMP=0x000000010000c75c
- (_Bool)shouldShowWelcomeNotification;	// IMP=0x000000010000c474
- (void)reconnectWelcomeIfNeeded:(_Bool)arg1;	// IMP=0x000000010000bfe0
@property(readonly, nonatomic) unsigned long long reminderState;
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010000bd6c

@end
