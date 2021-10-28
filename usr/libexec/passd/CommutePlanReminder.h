//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CommutePlanReminder : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x000000010013a358
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x000000010013a150
+ (id)_predicateForCommutePlanReminder:(id)arg1 passPID:(long long)arg2;	// IMP=0x0000000100139fcc
+ (id)_predicateForCommutePlanReminder:(id)arg1 passIdentifier:(id)arg2;	// IMP=0x0000000100139e34
+ (id)databaseTable;	// IMP=0x0000000100139e28
+ (id)insertOrUpdateCommutePlanReminder:(id)arg1 forCommutePlanIdentifier:(id)arg2 pass:(id)arg3 database:(id)arg4;	// IMP=0x00000001001399a0
+ (void)deleteAnyInDatabase:(id)arg1 forPassIdentifier:(id)arg2;	// IMP=0x0000000100139904
+ (id)commutePlanReminderInDatabase:(id)arg1 forQuery:(id)arg2;	// IMP=0x0000000100139688
+ (id)commutePlanReminderInDatabase:(id)arg1 forCommutePlanIdentifier:(id)arg2 passIdentifier:(id)arg3;	// IMP=0x00000001001395b4
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001001394e0
- (void)updateWithCommutePlanReminder:(id)arg1;	// IMP=0x000000010013a2a8
- (id)commutePlanReminder;	// IMP=0x000000010013a170
- (id)initWithCommutePlanReminder:(id)arg1 forCommutePlanIdentifier:(id)arg2 pass:(id)arg3 database:(id)arg4;	// IMP=0x0000000100139c98

@end
