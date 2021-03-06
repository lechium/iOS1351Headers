//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseReader-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKSubmitScoresCacheReader : NSObject <GKDatabaseReader>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
}

+ (id)readerWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000001000b545c
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)readResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b5b78
- (id)eligibleChallengeIDsForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000b59b4
- (id)scoreForExecutedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000b5834
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2 daysAgo:(unsigned long long)arg3;	// IMP=0x00000001000b57a4
- (id)getAllScoreRequestIDsStatement;	// IMP=0x00000001000b5740
- (id)getSubmitScoreDescriptorsStatementForDaysAgo:(unsigned long long)arg1;	// IMP=0x00000001000b5584
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x00000001000b551c
- (id)initWithDatabaseConnection:(id)arg1 bundleID:(id)arg2;	// IMP=0x00000001000b549c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

