//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotificationTimeBasedTrigger.h"

@interface PDHandoutPastDueSummaryNotificationTrigger : PDUserNotificationTimeBasedTrigger
{
}

- (id)pastDueUserNotificationDataFromHandouts:(id)arg1;	// IMP=0x000000010005cc70
- (id)fetchActiveHandoutsPastDueFromDate:(id)arg1;	// IMP=0x000000010005ca18
- (void)checkForTriggerAtDate:(id)arg1;	// IMP=0x000000010005c59c
- (id)defaultRecurringTriggerDateComponents;	// IMP=0x000000010005c500
- (id)nextTriggerDateFromReferenceDate:(id)arg1;	// IMP=0x000000010005c450

@end
