//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSCKRecordHolder.h"

@class NSString;
@protocol SecCKKSKeyClass;

__attribute__((visibility("hidden")))
@interface CKKSCurrentKeyPointer : CKKSCKRecordHolder
{
    NSString<SecCKKSKeyClass> *_keyclass;	// 8 = 0x8
    NSString *_currentKeyUUID;	// 16 = 0x10
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100084b94
+ (id)sqlColumns;	// IMP=0x0000000100084b00
+ (id)sqlTable;	// IMP=0x0000000100084af4
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000849bc
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000848d0
+ (id)forKeyClass:(id)arg1 withKeyUUID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x000000010008478c
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008466c
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008454c
- (void).cxx_destruct;	// IMP=0x000000010008450c
@property(retain) NSString *currentKeyUUID; // @synthesize currentKeyUUID=_currentKeyUUID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
- (id)sqlValues;	// IMP=0x0000000100084294
- (id)whereClauseToFindSelf;	// IMP=0x000000010008418c
- (void)setFromCKRecord:(id)arg1;	// IMP=0x0000000100083ecc
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x0000000100083d0c
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00000001000839b4
- (id)CKRecordName;	// IMP=0x00000001000839a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000836c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000835c8
- (id)description;	// IMP=0x00000001000834d4
- (id)initForClass:(id)arg1 currentKeyUUID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4;	// IMP=0x0000000100083374

@end

