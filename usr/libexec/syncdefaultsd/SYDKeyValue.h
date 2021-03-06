//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, NSData, NSDate, NSString;

@interface SYDKeyValue : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSString *_storeIdentifier;	// 16 = 0x10
    id _value;	// 24 = 0x18
    NSDate *_valueModificationDate;	// 32 = 0x20
    NSData *_serverSystemFieldsRecordData;	// 40 = 0x28
    NSString *_recordName;	// 48 = 0x30
}

+ (_Bool)keyValueRecordHasAssetWithoutFile:(id)arg1;	// IMP=0x000000010000c448
+ (void)deleteFilesForAssetsInKeyValueRecord:(id)arg1;	// IMP=0x000000010000c0a4
+ (id)directoryURLForTemporaryAssetFiles;	// IMP=0x000000010000bfcc
+ (id)keyFromUnencryptedKeyValueRecordName:(id)arg1;	// IMP=0x000000010000bf48
+ (id)keyFromKeyValueRecord:(id)arg1;	// IMP=0x000000010000bda8
- (void).cxx_destruct;	// IMP=0x000000010000c56c
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(retain, nonatomic) NSData *serverSystemFieldsRecordData; // @synthesize serverSystemFieldsRecordData=_serverSystemFieldsRecordData;
@property(retain, nonatomic) NSDate *valueModificationDate; // @synthesize valueModificationDate=_valueModificationDate;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)recordRepresentationForStoreType:(long long)arg1;	// IMP=0x000000010000b600
- (void)mergeDataFromRecord:(id)arg1;	// IMP=0x000000010000ae68
- (void)setServerSystemFieldsRecordIfNewer:(id)arg1;	// IMP=0x000000010000ab90
@property(readonly, nonatomic) CKRecordID *recordID;
@property(copy, nonatomic) CKRecord *serverSystemFieldsRecord;
- (void)setValue:(id)arg1 withModificationDate:(id)arg2;	// IMP=0x000000010000a814
- (id)redactedDescription;	// IMP=0x000000010000a624
- (id)description;	// IMP=0x000000010000a4d8
- (id)initWithKey:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x000000010000a434

@end

