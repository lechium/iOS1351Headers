//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountPaymentReminder : SQLiteEntity
{
}

+ (id)_propertySettersForAccountPaymentReminder;	// IMP=0x0000000100160f94
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x0000000100160f20
+ (id)databaseTable;	// IMP=0x0000000100160f14
+ (void)deletePaymentReminderWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100160e74
+ (id)insertPaymentReminder:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100160b58
+ (id)paymentRemindersWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100160910
- (id)paymentReminder;	// IMP=0x0000000100160d3c

@end
