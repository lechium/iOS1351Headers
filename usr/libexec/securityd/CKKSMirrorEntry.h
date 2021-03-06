//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSSQLDatabaseObject.h"

@class CKKSItem, NSString;

__attribute__((visibility("hidden")))
@interface CKKSMirrorEntry : CKKSSQLDatabaseObject
{
    CKKSItem *_item;	// 8 = 0x8
    unsigned long long _wasCurrent;	// 16 = 0x10
}

+ (id)counts:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008c458
+ (id)countsByParentKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008c1f8
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x000000010008c0b0
+ (id)sqlColumns;	// IMP=0x000000010008bfd4
+ (id)sqlTable;	// IMP=0x000000010008bfc8
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008be18
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x000000010008bc68
- (void).cxx_destruct;	// IMP=0x000000010008bc54
@property unsigned long long wasCurrent; // @synthesize wasCurrent=_wasCurrent;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (id)sqlValues;	// IMP=0x000000010008bb24
- (id)whereClauseToFindSelf;	// IMP=0x000000010008bad0
@property(retain) NSString *uuid;
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x000000010008b858
- (void)setFromCKRecord:(id)arg1;	// IMP=0x000000010008b7a4
- (id)description;	// IMP=0x000000010008b66c
- (id)initWithCKRecord:(id)arg1;	// IMP=0x000000010008b58c
- (id)initWithCKKSItem:(id)arg1;	// IMP=0x000000010008b500

@end

