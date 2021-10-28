//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface LocationSource : SQLiteEntity
{
}

+ (id)urlPredicate:(id)arg1;	// IMP=0x00000001001a932c
+ (id)locationSourcePIDPredicate:(id)arg1;	// IMP=0x00000001001a930c
+ (id)anyInDatabase:(id)arg1 withURL:(id)arg2;	// IMP=0x00000001001a9274
+ (id)anyInDatabase:(id)arg1 withLocationSourcePID:(id)arg2;	// IMP=0x00000001001a91e8
+ (id)insertLocationSourceWithURL:(id)arg1 forPass:(id)arg2 type:(int)arg3 inDatabase:(id)arg4;	// IMP=0x00000001001a9120
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00000001001a8fa0
+ (id)databaseTable;	// IMP=0x00000001001a8f94
- (_Bool)deleteFromDatabase;	// IMP=0x00000001001a939c
- (id)initWithLocationURL:(id)arg1 type:(int)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001a8fd8

@end
