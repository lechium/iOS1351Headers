//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AccountPhysicalCardStatusUpdate : SQLiteEntity
{
}

+ (id)_propertySettersForAccountPhysicalCardStatusUpdate;	// IMP=0x000000010017c778
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x000000010017c704
+ (id)databaseTable;	// IMP=0x000000010017c6f8
+ (void)deletePhysicalCardStatusUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010017c5bc
+ (id)insertPhysicalCardStatusUpdate:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010017c20c
+ (id)physicalCardStatusUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010017bfc4
- (_Bool)deleteFromDatabase;	// IMP=0x000000010017c65c
- (id)physicalCardStatusUpdate;	// IMP=0x000000010017c3c4

@end

