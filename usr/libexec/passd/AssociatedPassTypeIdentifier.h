//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AssociatedPassTypeIdentifier : SQLiteEntity
{
}

+ (id)_propertySettersForAssociatedPassTypeIdentifier;	// IMP=0x000000010016be78
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010016bdc4
+ (id)associatedPassTypeIdentifiersInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x000000010016bd34
+ (id)associatedPassTypeIdentifiersInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x000000010016bca8
+ (id)_predicateForPass:(id)arg1;	// IMP=0x000000010016bc6c
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x000000010016bbf8
+ (id)_associatedPassTypeIdentifiersInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x000000010016b9c8
+ (void)insertAssociatedPassTypeIdentifiers:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010016b850
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010016b650
+ (id)databaseTable;	// IMP=0x000000010016b644
- (id)initWithPassTypeIdentifier:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010016b688

@end
