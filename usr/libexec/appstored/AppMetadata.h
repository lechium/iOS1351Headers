//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

#import "NSCopying-Protocol.h"

@interface AppMetadata : SQLiteMemoryEntity <NSCopying>
{
}

+ (Class)databaseEntityClass;	// IMP=0x000000010023876c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100238738
- (id)timestamp;	// IMP=0x000000010023869c
- (id)storefront;	// IMP=0x0000000100238684
- (id)shortVersion;	// IMP=0x000000010023866c
- (id)itemName;	// IMP=0x0000000100238654
- (id)itemID;	// IMP=0x000000010023863c
- (_Bool)isBeta;	// IMP=0x00000001002385e4
- (id)externalMapping;	// IMP=0x0000000100238500
- (id)evid;	// IMP=0x00000001002384e8
- (id)deviceVendorID;	// IMP=0x00000001002384d0
- (id)cohort;	// IMP=0x00000001002384b8
- (id)bundleVersion;	// IMP=0x00000001002384a0
- (id)bundleID;	// IMP=0x0000000100238488
- (id)initWithApplicationProxy:(id)arg1;	// IMP=0x0000000100238038
- (id)init;	// IMP=0x0000000100238004

@end

