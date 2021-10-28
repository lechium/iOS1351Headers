//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentAutomaticSelectionCriterion : SQLiteEntity
{
}

+ (id)_propertySettersForCriterion;	// IMP=0x00000001001b3120
+ (id)_predicateForPaymentApplicationPID:(long long)arg1;	// IMP=0x00000001001b30ac
+ (id)_predicateForPaymentApplication:(id)arg1;	// IMP=0x00000001001b3044
+ (id)insertCriteria:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001b29fc
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00000001001b2960
+ (id)_criteriaInDatabase:(id)arg1 forPredicate:(id)arg2;	// IMP=0x00000001001b2690
+ (id)criteriaInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x00000001001b2600
+ (id)criteriaInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x00000001001b2574
+ (id)databaseTable;	// IMP=0x00000001001b2568
- (_Bool)deleteFromDatabase;	// IMP=0x00000001001b2fac
- (id)initWithCriterion:(id)arg1 forPaymentApplication:(id)arg2 database:(id)arg3;	// IMP=0x00000001001b2d70

@end
