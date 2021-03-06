//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, CloudBookmarkPosition, CloudBookmarkSyncData, NSMutableDictionary, NSString;

@interface CloudBookmark : NSObject
{
    CloudBookmarkSyncData *_syncData;	// 8 = 0x8
    NSMutableDictionary *_remotelyModifiedAttributes;	// 16 = 0x10
    const void *_item;	// 24 = 0x18
    NSString *_recordName;	// 32 = 0x20
    NSString *_parentRecordName;	// 40 = 0x28
}

+ (id)_decodedSyncDataInData:(id)arg1;	// IMP=0x000000010000e82c
+ (id)cloudBookmarkWithAddedRecord:(id)arg1 inDatabase:(void *)arg2;	// IMP=0x000000010000bf6c
+ (id)cloudBookmarkWithChange:(void *)arg1 updater:(id)arg2;	// IMP=0x000000010000be5c
+ (id)_cloudBookmarkWithItem:(void *)arg1;	// IMP=0x000000010000bdb4
+ (void)updateSyncDataGenerationsWithChange:(void *)arg1 deviceIdentifier:(id)arg2;	// IMP=0x000000010000b990
+ (id)cloudBookmarkToMigrateItemWithRecordName:(id)arg1 inDatabase:(void *)arg2 updater:(id)arg3;	// IMP=0x000000010000b7f8
+ (id)cloudBookmarkWithReparentedItem:(void *)arg1 updater:(id)arg2;	// IMP=0x000000010000b728
+ (id)cloudBookmarkWithRecordName:(id)arg1 inDatabase:(void *)arg2;	// IMP=0x000000010000b374
+ (id)positionForItemWithRecordName:(id)arg1 inDatabase:(void *)arg2;	// IMP=0x000000010000b284
+ (id)valueTransformerForAttributeKey:(id)arg1;	// IMP=0x000000010000afc0
- (void).cxx_destruct;	// IMP=0x0000000100011980
@property(readonly, copy, nonatomic) NSString *parentRecordName; // @synthesize parentRecordName=_parentRecordName;
@property(readonly, copy, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(readonly, nonatomic) const void *item; // @synthesize item=_item;
- (unsigned long long)_resultByMergingStateWithRecord:(id)arg1 shouldContinueMerge:(_Bool *)arg2;	// IMP=0x0000000100011294
- (unsigned long long)_resultByMergingMinimumAPIVersionWithRecord:(id)arg1;	// IMP=0x0000000100010f64
- (unsigned long long)_resultByMergingParentAndPositionWithRecord:(id)arg1 usingUpdater:(id)arg2;	// IMP=0x0000000100010b24
- (unsigned long long)resultFromMergingRecord:(id)arg1 usingUpdater:(id)arg2 isLocalUpdateOnly:(_Bool)arg3;	// IMP=0x000000010000ffb0
- (unsigned long long)resultFromMergingRecord:(id)arg1 usingUpdater:(id)arg2;	// IMP=0x000000010000ff50
- (_Bool)_updateRecordWithMissingAttributesWithUpdater:(id)arg1;	// IMP=0x000000010000f8fc
- (void)_updateRecordWithModifiedAttributes:(id)arg1 updater:(id)arg2;	// IMP=0x000000010000f49c
- (void)_updateRecordParentAndPositionWithUpdater:(id)arg1;	// IMP=0x000000010000f1ac
- (void)_updateGenerationsForAttributeKeys:(id)arg1 withDeviceIdentifier:(id)arg2;	// IMP=0x000000010000efd0
- (void)_updateGenerationsForChange:(void *)arg1 withDeviceIdentifier:(id)arg2;	// IMP=0x000000010000edb0
- (void)_loadAttributesForKnownKeysIntoEmptyItemUsingRemoteRecord:(id)arg1;	// IMP=0x000000010000e98c
- (void)updateLocalItem;	// IMP=0x000000010000e89c
- (id)generationKeyForKey:(id)arg1;	// IMP=0x000000010000e814
- (id)generateIdentityHashUsingUpdater:(id)arg1;	// IMP=0x000000010000e784
- (_Bool)canSaveIdentityHashAttributesInDictionary:(id)arg1;	// IMP=0x000000010000e728
- (_Bool)isIdentityHashKey:(id)arg1;	// IMP=0x000000010000e6b0
- (id)_modifiedOrLocalIdentityHashWithUpdater:(id)arg1;	// IMP=0x000000010000e544
- (id)_modifiedOrLocalParentReferenceWithUpdater:(id)arg1;	// IMP=0x000000010000e3d4
- (id)_transformedModifiedOrLocalValueForKey:(id)arg1 isEncrypted:(_Bool *)arg2;	// IMP=0x000000010000e1c0
- (id)modifiedOrLocalValueForKey:(id)arg1;	// IMP=0x000000010000df8c
- (id)identityHashKeys;	// IMP=0x000000010000df70
- (id)knownKeys;	// IMP=0x000000010000df5c
- (_Bool)isDuplicateOfBookmark:(id)arg1;	// IMP=0x000000010000de20
@property(readonly, nonatomic) unsigned long long duplicateHash;
@property(nonatomic) long long state;
@property(retain, nonatomic) CloudBookmarkPosition *position;
@property(readonly, nonatomic) CKRecord *record;
- (id)_createParentFolderReferenceWithRecordName:(id)arg1 updater:(id)arg2;	// IMP=0x000000010000dca4
- (id)_createRecordWithRecordName:(id)arg1 updater:(id)arg2;	// IMP=0x000000010000dbc8
- (id)_createRecordIDWithName:(id)arg1 updater:(id)arg2;	// IMP=0x000000010000db24
@property(readonly, nonatomic) NSString *recordType;
- (_Bool)_updateRecordWithChange:(void *)arg1 updater:(id)arg2;	// IMP=0x000000010000d8c4
- (void)dealloc;	// IMP=0x000000010000d878
- (id)_initWithItemToMigrate:(void *)arg1 updater:(id)arg2;	// IMP=0x000000010000d370
- (id)_initWithAddedRecord:(id)arg1 forItem:(void *)arg2;	// IMP=0x000000010000cd94
- (id)_initWithItem:(const void *)arg1 syncData:(id)arg2;	// IMP=0x000000010000cc28
- (id)_initWithDeleteChange:(void *)arg1 updater:(id)arg2;	// IMP=0x000000010000c928
- (id)_initWithChange:(void *)arg1 updater:(id)arg2;	// IMP=0x000000010000c600
- (id)_initWithReparentedItem:(void *)arg1 updater:(id)arg2;	// IMP=0x000000010000c3fc
- (id)_initWithItem:(void *)arg1;	// IMP=0x000000010000c370
- (id)init;	// IMP=0x000000010000c358

@end

