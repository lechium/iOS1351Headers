//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface WebService : SQLiteEntity
{
}

+ (id)_propertySettersForWebService;	// IMP=0x00000001000dee34
+ (id)anyInDatabase:(id)arg1 withPassType:(id)arg2 serviceURL:(id)arg3;	// IMP=0x00000001000ded8c
+ (id)_predicateForPassType:(id)arg1 serviceURL:(id)arg2;	// IMP=0x00000001000dec48
+ (id)_predicateForPassType:(id)arg1;	// IMP=0x00000001000debbc
+ (id)webServicesInDatabase:(id)arg1 withPassType:(id)arg2;	// IMP=0x00000001000de938
+ (id)webServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00000001000de728
+ (id)insertWebServiceWithPassType:(id)arg1 serviceURL:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000de5b8
+ (id)_updateDictionaryWithWebService:(id)arg1;	// IMP=0x00000001000de410
+ (id)_insertionDictionaryWithPassType:(id)arg1 serviceURL:(id)arg2;	// IMP=0x00000001000de328
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001000de2b4
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001000de25c
+ (id)databaseTable;	// IMP=0x00000001000de250
- (id)tagLastUpdateDate;	// IMP=0x00000001000deb68
- (id)lastUpdatedTag;	// IMP=0x00000001000deb54
- (id)lastDeletionDate;	// IMP=0x00000001000deb00
- (id)webService;	// IMP=0x00000001000de9c4
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x00000001000de6b0
- (void)updateWithLastDeletionDate:(id)arg1;	// IMP=0x00000001000de69c
- (void)updateWithWebService:(id)arg1;	// IMP=0x00000001000de648
- (id)initWithPassType:(id)arg1 serviceURL:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000de4f0

@end

