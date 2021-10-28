//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface Beacon : SQLiteEntity
{
}

+ (id)_propertySettersForBeacon;	// IMP=0x0000000100177d44
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100177c90
+ (id)beaconsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x0000000100177c00
+ (id)beaconsInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x0000000100177b74
+ (id)_predicateForPass:(id)arg1;	// IMP=0x0000000100177b38
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x0000000100177ac4
+ (id)_beaconsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00000001001778b0
+ (void)insertBeacons:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100177738
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001774a4
+ (id)databaseTable;	// IMP=0x0000000100177498
- (id)initWithBeacon:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001774dc

@end
