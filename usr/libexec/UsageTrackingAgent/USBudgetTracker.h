//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDContextualChangeRegistration;

@interface USBudgetTracker : NSObject
{
    _CDContextualChangeRegistration *_applicationRegistration;	// 8 = 0x8
    _CDContextualChangeRegistration *_webDomainRegistration;	// 16 = 0x10
    _CDContextualChangeRegistration *_nowPlayingRegistration;	// 24 = 0x18
}

+ (id)_getRemainingTimeForBudgets:(id)arg1 referenceDate:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000f9c4
+ (void)_checkStatusOfBudgets:(id)arg1 withError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f1a8
+ (void)checkStatusOfBudgets:(id)arg1 clientIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000f054
+ (void)checkStatusOfAllBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ef40
+ (void)checkStatusOfBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000edd4
+ (void)startTracking;	// IMP=0x000000010000b16c
+ (id)sharedTracker;	// IMP=0x000000010000b100
- (void).cxx_destruct;	// IMP=0x0000000100010cf0
@property(copy) _CDContextualChangeRegistration *nowPlayingRegistration; // @synthesize nowPlayingRegistration=_nowPlayingRegistration;
@property(copy) _CDContextualChangeRegistration *webDomainRegistration; // @synthesize webDomainRegistration=_webDomainRegistration;
@property(copy) _CDContextualChangeRegistration *applicationRegistration; // @synthesize applicationRegistration=_applicationRegistration;
- (_Bool)_postNotificationsForBudgets:(id)arg1 nextNotificationEventName:(const char *)arg2 duetSyncForImpendingBudgets:(_Bool)arg3;	// IMP=0x000000010000ffb0
- (void)_checkBudgetStatusForNowPlayingCategories:(id)arg1;	// IMP=0x000000010000f858
- (void)_checkBudgetStatusForWebDomains:(id)arg1;	// IMP=0x000000010000f6ec
- (void)_checkBudgetStatusForApplications:(id)arg1;	// IMP=0x000000010000f580
- (void)_budgetsResetAlarmDidFire:(const char *)arg1;	// IMP=0x000000010000decc
- (void)_duetSyncCoordinatorDidIdle;	// IMP=0x000000010000dd60
- (void)_nowPlayingRegistrationDidFire;	// IMP=0x000000010000dbb8
- (void)_nowPlayingAlarmDidFire;	// IMP=0x000000010000da10
- (void)_webDomainRegistrationDidFire;	// IMP=0x000000010000d4c8
- (void)_webDomainAlarmDidFire;	// IMP=0x000000010000cf80
- (void)_applicationRegistrationDidFire;	// IMP=0x000000010000cc7c
- (void)_applicationAlarmDidFire;	// IMP=0x000000010000c978
- (void)_registerForNowPlayingUsage;	// IMP=0x000000010000c478
- (void)_registerForWebDomainUsage;	// IMP=0x000000010000bc94
- (void)_registerForApplicationUsage;	// IMP=0x000000010000b708
- (void)_budgetsDidChange:(id)arg1;	// IMP=0x000000010000b674
- (void)_startTracking;	// IMP=0x000000010000b1ac

@end
