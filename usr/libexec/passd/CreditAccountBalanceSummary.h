//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface CreditAccountBalanceSummary : SQLiteEntity
{
}

+ (id)_propertySettersForCreditAccountBalanceSummary;	// IMP=0x00000001001aa334
+ (id)_predicateForCreditAccountSummaryPID:(long long)arg1;	// IMP=0x00000001001aa2c0
+ (void)updateCreditAccountBalanceSummary:(id)arg1 forCreditAccountSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001a9c6c
+ (id)creditAccountBalanceSummaryForCreditAccountSummaryPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001a9bb8
+ (void)deleteCreditAccountBalanceSummaryForCreditAccountSummaryPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001a9b18
+ (id)insertAccountBalanceSummary:(id)arg1 forCreditAccountSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001a9a9c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001a9498
+ (id)databaseTable;	// IMP=0x00000001001a948c
- (id)creditAccountBalanceSummary;	// IMP=0x00000001001aaa98
- (void)updateWithCreditAccountBalanceSummary:(id)arg1;	// IMP=0x00000001001a9d68
- (id)initWithCreditAccountBalanceSummary:(id)arg1 forCreditAccountSummaryPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001a94d0

@end
