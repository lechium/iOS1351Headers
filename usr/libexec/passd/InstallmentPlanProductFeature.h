//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface InstallmentPlanProductFeature : SQLiteEntity
{
}

+ (id)_propertyValuesForFeature:(id)arg1;	// IMP=0x00000001001b10d8
+ (id)_predicateForProductPID:(id)arg1;	// IMP=0x00000001001b10b8
+ (id)featuresForProductPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001b0ebc
+ (id)insertOrUpdateFeatures:(id)arg1 forProductPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001b0cac
+ (void)deleteFeatureForProductPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001b0bf8
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001001b0ad8
+ (id)databaseTable;	// IMP=0x00000001001b0acc
- (id)feature;	// IMP=0x00000001001b10a4
- (void)updateWithFeature:(id)arg1;	// IMP=0x00000001001b0ea8
- (id)initWithFeature:(id)arg1 forProductPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001001b0b10

@end
