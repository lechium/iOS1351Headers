//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PaymentTransactionReward : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentTransactionRewardItem;	// IMP=0x00000001001cbbec
+ (id)_rewardsFromRewardsItems:(id)arg1;	// IMP=0x00000001001cbb84
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x00000001001cbb64
+ (id)_predicateForAccountRewardsPID:(long long)arg1;	// IMP=0x00000001001cbaf0
+ (id)_predicateForPaymentTransaction:(id)arg1;	// IMP=0x00000001001cbab4
+ (id)_predicateForPaymentTransactionIdentifier:(id)arg1;	// IMP=0x00000001001cba94
+ (id)_predicateForPaymentTransactionPIDs:(id)arg1;	// IMP=0x00000001001cba74
+ (id)_predicateForPaymentTransactionPID:(long long)arg1;	// IMP=0x00000001001cba00
+ (id)_predicateForRewardWithIdentifier:(id)arg1;	// IMP=0x00000001001cb9e0
+ (id)_paymentTransactionRewardsWithQuery:(id)arg1;	// IMP=0x00000001001cb720
+ (id)_paymentTransactionRewardsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00000001001cb690
+ (void)associateRewardsToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001cb138
+ (id)rewardsInDatabase:(id)arg1 forInstallmentPlanPID:(id)arg2;	// IMP=0x00000001001cb084
+ (id)paymentTransactionRewardsInDatabase:(id)arg1 forAccountRewardsPID:(long long)arg2;	// IMP=0x00000001001cafcc
+ (id)paymentTransactionRewardsInDatabase:(id)arg1 forPaymentTransactionIdentifier:(id)arg2;	// IMP=0x00000001001caf18
+ (id)paymentTransactionRewardsInDatabase:(id)arg1 forPaymentTransaction:(id)arg2;	// IMP=0x00000001001cae64
+ (void)deleteEntitiesForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001cadb0
+ (void)deleteEntitiesForAccountRewardsPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001cad10
+ (void)deleteEntitiesForPaymentTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001cac70
+ (void)deleteEntitiesForPaymentTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001cabbc
+ (void)updateRewards:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001caa18
+ (void)updatePaymentTransactionRewards:(id)arg1 forAccountRewardsPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001ca888
+ (void)updatePaymentTransactionRewards:(id)arg1 forPaymentTransaction:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001ca6e4
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001001ca460
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001ca3e8
+ (id)databaseTable;	// IMP=0x00000001001ca3dc
- (void)updateWithPaymentTransactionRewardItem:(id)arg1;	// IMP=0x00000001001ca4d0
- (id)initWithRewardsItem:(id)arg1 installmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001ca138
- (id)initWithPaymentTransactionRewardsItem:(id)arg1 paymentTransaction:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001c9e3c
- (id)initWithPaymentTransactionRewardsItem:(id)arg1 accountRewardsPID:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001c9b6c

@end
