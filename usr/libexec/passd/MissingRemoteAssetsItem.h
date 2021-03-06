//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface MissingRemoteAssetsItem : SQLiteEntity
{
}

+ (id)_propertySettersForItem;	// IMP=0x000000010004396c
+ (id)_predicateForUniqueID:(id)arg1;	// IMP=0x000000010004394c
+ (id)_predicateForMaximumRetriesCount:(unsigned long long)arg1;	// IMP=0x00000001000438d8
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001000438a0
+ (id)databaseTable;	// IMP=0x0000000100043894
+ (void)removeMissingRemoteAssetsItemForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x00000001000436ec
+ (void)incrementDownloadRetriesCountForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x0000000100043604
+ (id)itemsInDataBase:(id)arg1 withMaximumDownloadRetriesCount:(unsigned long long)arg2;	// IMP=0x00000001000433dc
+ (unsigned long long)itemsCountInDataBase:(id)arg1 withMaximumDownloadRetriesCount:(unsigned long long)arg2;	// IMP=0x0000000100043344
+ (id)insertOrReplaceMissingRemoteAssetsItemForUniqueID:(id)arg1 inDataBase:(id)arg2;	// IMP=0x00000001000432c4
- (id)initMissingRemoteAssetsItemWithUniqueID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000437a0

@end

