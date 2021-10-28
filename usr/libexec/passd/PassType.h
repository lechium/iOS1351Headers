//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PassType : SQLiteEntity
{
}

+ (id)anyInDatabase:(id)arg1 withPassTypeIdentifierHash:(id)arg2;	// IMP=0x00000001001144d0
+ (id)anyInDatabase:(id)arg1 withPassTypeID:(id)arg2;	// IMP=0x0000000100114444
+ (id)_passTypeIdentifierHashPredicate:(id)arg1;	// IMP=0x0000000100114424
+ (id)_passTypeIDPredicate:(id)arg1;	// IMP=0x0000000100114404
+ (id)insertPassTypeWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100114374
+ (id)_insertionDictionaryWithPassTypeID:(id)arg1 teamID:(id)arg2;	// IMP=0x0000000100113ee8
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100113e30
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100113de0
+ (id)databaseTable;	// IMP=0x0000000100113dd4
- (void)updateIdentifierHash;	// IMP=0x00000001001142ac
- (void)updateFrequencyScore:(double)arg1;	// IMP=0x0000000100114250
- (void)updateLastUpdateDate:(id)arg1;	// IMP=0x000000010011423c
- (void)updateLastPushDate:(id)arg1;	// IMP=0x0000000100114228
- (id)identifierHash;	// IMP=0x0000000100114214
- (id)teamID;	// IMP=0x0000000100114200
- (id)passTypeID;	// IMP=0x00000001001141ec
- (double)frequencyScore;	// IMP=0x0000000100114190
- (id)lastUpdateDate;	// IMP=0x000000010011413c
- (id)lastPushDate;	// IMP=0x00000001001140e8
- (id)initWithPassTypeID:(id)arg1 teamID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100114020

@end
