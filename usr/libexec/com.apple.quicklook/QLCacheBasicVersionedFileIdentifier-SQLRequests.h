//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheBasicVersionedFileIdentifier.h>

@interface QLCacheBasicVersionedFileIdentifier (SQLRequests)
- (id)initWithSteppedStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2;	// IMP=0x0000000100028054
- (struct sqlite3_stmt *)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100027ec8
- (struct sqlite3_stmt *)statementToInsertIntoDatabase:(id)arg1;	// IMP=0x0000000100027d7c
@end
