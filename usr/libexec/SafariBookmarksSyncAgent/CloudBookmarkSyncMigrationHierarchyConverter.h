//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CloudBookmarkSyncMigrationHierarchyConverter : NSObject
{
    const void *_databaseRef;	// 8 = 0x8
}

@property(readonly, nonatomic) const void *databaseRef; // @synthesize databaseRef=_databaseRef;
- (id)_cloudKitRecordNameForBookmarkDAVServerSyncId:(id)arg1;	// IMP=0x000000010005f5a8
- (void)_convertItem:(void *)arg1;	// IMP=0x000000010005f2d0
- (_Bool)convertRecordsForMigration;	// IMP=0x000000010005eff0
- (void)dealloc;	// IMP=0x000000010005efa4
- (id)initWithDatabase:(void *)arg1;	// IMP=0x000000010005ef3c

@end
