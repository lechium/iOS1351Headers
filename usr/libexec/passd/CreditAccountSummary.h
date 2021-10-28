//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CreditAccountSummary : SQLiteEntity
{
}

+ (id)_propertySettersForCreditAccountSummary;	// IMP=0x000000010009d46c
+ (id)_predicateForCreditAccountDetailsPID:(long long)arg1;	// IMP=0x000000010009d3f8
+ (void)updateCreditAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010009cae0
+ (id)creditAccountSummaryForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010009ca2c
+ (void)deleteCreditAccountSummaryForCreditAccountDetailsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x000000010009c8d0
+ (id)insertAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010009c854
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010009bfa0
+ (id)databaseTable;	// IMP=0x000000010009bf94
- (id)creditAccountSummary;	// IMP=0x000000010009dedc
- (void)updateWithCreditAccountSummary:(id)arg1;	// IMP=0x000000010009cbdc
- (_Bool)deleteFromDatabase;	// IMP=0x000000010009c970
- (id)initWithCreditAccountSummary:(id)arg1 forCreditAccountDetailsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010009bfd8

@end
