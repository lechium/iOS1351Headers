//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface TransitAppletStateBalance : SQLiteEntity
{
}

+ (id)_postProcessValue:(id)arg1;	// IMP=0x000000010017f24c
+ (id)_propertySettersForBalanceItem;	// IMP=0x000000010017f008
+ (id)_predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x000000010017efe8
+ (id)_predicateForTransitAppletStatePID:(long long)arg1;	// IMP=0x000000010017ef74
+ (id)_predicateForPaymentPassPID:(long long)arg1;	// IMP=0x000000010017ef00
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x000000010017eee0
+ (id)transitAppletBalancesInDatabase:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3;	// IMP=0x000000010017e934
+ (id)transitAppletStateBalancesInDatabase:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3;	// IMP=0x000000010017e67c
+ (in id)anyInDatabase:(id)arg1 withIdentifier:(id)arg2 forPassWithUniqueIdentifier:(id)arg3 andTransitAppletStatePID:(long long)arg4;	// IMP=0x000000010017e4c0
+ (void)deleteEntitiesForPaymentPassPID:(long long)arg1 andTransitAppletStatePID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x000000010017e350
+ (void)updateWithTransitAppletBalances:(id)arg1 forPaymentPassPID:(long long)arg2 andTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x000000010017e298
+ (id)insertTransitAppletBalances:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x000000010017e0e0
+ (id)insertTransitAppletBalance:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x000000010017e054
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x000000010017dfa4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010017df4c
+ (id)databaseTable;	// IMP=0x000000010017df40
- (id)_valuesDictionaryForTransitAppletBalance:(id)arg1 paymentPassPID:(long long)arg2 transitAppletStatePID:(long long)arg3;	// IMP=0x000000010017ec1c
- (id)balance;	// IMP=0x000000010017eac8
- (id)initWithTransitAppletBalance:(id)arg1 withPaymentPassPID:(long long)arg2 withTransitAppletStatePID:(long long)arg3 inDatabase:(id)arg4;	// IMP=0x000000010017de8c

@end

