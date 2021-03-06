//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SQLiteEntity-Protocol.h"

@class NSString, SQLiteConnection;

@interface SQLiteEntity : NSObject <SQLiteEntity>
{
    SQLiteConnection *_connection;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;	// IMP=0x0000000100196414
+ (Class)memoryEntityClass;	// IMP=0x0000000100194d6c
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x0000000100194d64
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x0000000100194d5c
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x0000000100194d54
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x0000000100194d4c
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x0000000100194d44
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x0000000100194c74
+ (id)databaseTable;	// IMP=0x0000000100194c28
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;	// IMP=0x000000010025ad0c
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x000000010025abfc
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010025ab94
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x000000010025ab0c
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x000000010025aa84
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x000000010025a9fc
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010025a7b8
+ (id)memoryEntityForPersistentID:(long long)arg1 withProperties:(id)arg2 usingConnection:(id)arg3;	// IMP=0x000000010010a598
+ (id)memoryEntityForPersistentID:(long long)arg1 usingConnection:(id)arg2;	// IMP=0x000000010010a584
- (void).cxx_destruct;	// IMP=0x0000000100196ca4
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;	// IMP=0x0000000100196b94
- (id)_copyTableClusteredValuesWithValues:(id)arg1;	// IMP=0x0000000100196928
- (id)valueForProperty:(id)arg1;	// IMP=0x0000000100196324
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000100196318
- (_Bool)setValuesWithDictionary:(id)arg1;	// IMP=0x0000000100195a64
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000100195968
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000100195918
- (id)getValuesForProperties:(id)arg1;	// IMP=0x0000000100195204
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100194d78
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;	// IMP=0x0000000100194924
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;	// IMP=0x00000001001948a4
- (id)urlValueForProperty:(id)arg1;	// IMP=0x0000000100196f10
- (id)uuidValueForProperty:(id)arg1;	// IMP=0x0000000100196eac
- (id)stringValueForProperty:(id)arg1;	// IMP=0x0000000100196e48
- (id)numberValueForProperty:(id)arg1;	// IMP=0x0000000100196de4
- (long long)integerValueForProperty:(id)arg1;	// IMP=0x0000000100196d98
- (id)errorValueForProperty:(id)arg1;	// IMP=0x0000000100196cfc
- (_Bool)boolValueForProperty:(id)arg1;	// IMP=0x0000000100196cb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

