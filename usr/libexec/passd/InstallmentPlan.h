//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface InstallmentPlan : SQLiteEntity
{
}

+ (id)_propertySetters;	// IMP=0x000000010004a4ac
+ (id)_propertyValuesForInstallmentPlan:(id)arg1;	// IMP=0x000000010004a184
+ (id)_installmentPlansWithQuery:(id)arg1;	// IMP=0x0000000100049c3c
+ (id)_predicateForTransactionReferenceIdentifier:(id)arg1;	// IMP=0x0000000100049c1c
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0000000100049bfc
+ (id)_predicateForPID:(id)arg1;	// IMP=0x0000000100049bdc
+ (id)_predicateForCreditAccountDetailsPID:(id)arg1;	// IMP=0x0000000100049bbc
+ (void)deleteInstallmentPlansForCreditAccountDetailsPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000499b0
+ (id)insertOrUpdateInstallmentPlans:(id)arg1 forCreditAccountDetailsPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100048ef0
+ (id)installmentPlansWithTransactionReferenceIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000489c8
+ (id)installmentPlansForCreditAccountDetailsPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000488fc
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0000000100048478
+ (id)databaseTable;	// IMP=0x000000010004846c
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100049a64
- (void)updateWithInstallmentPlan:(id)arg1;	// IMP=0x00000001000492a4
- (id)installmentPlan;	// IMP=0x0000000100048a94
- (id)initWithInstallmentPlan:(id)arg1 forCreditAccountDetailsPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000484b0

@end
