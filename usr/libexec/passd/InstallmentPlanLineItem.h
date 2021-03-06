//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface InstallmentPlanLineItem : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x0000000100152098
+ (id)_propertyValuesForInstallmentPlanLineItem:(id)arg1;	// IMP=0x0000000100151ea4
+ (id)_lineItemsWithQuery:(id)arg1;	// IMP=0x0000000100151cc0
+ (id)_predicateForInstallmentPlanPaymentPID:(id)arg1;	// IMP=0x0000000100151ca0
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x0000000100151c80
+ (void)deleteLineItemsForInstallmentPlanPaymentPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100151bcc
+ (void)deleteLineItemsForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100151b18
+ (id)insertOrUpdateLineItems:(id)arg1 forInstallmentPlanPaymentPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001518a4
+ (id)insertOrUpdateLineItems:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001516a4
+ (id)lineItemsForInstallmentPlanPaymentPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100151468
+ (id)lineItemForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010015139c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100151174
+ (id)databaseTable;	// IMP=0x0000000100151168
- (void)updateWithLineItem:(id)arg1;	// IMP=0x0000000100151aa4
- (id)lineItem;	// IMP=0x0000000100151534
- (id)initWithInstallmentPlanLineItem:(id)arg1 forInstallmentPlanPaymentPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001512b4
- (id)initWithInstallmentPlanLineItem:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001511cc

@end

