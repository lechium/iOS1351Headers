//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileFriendCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x00000001000a7f30
- (double)playerRelationshipTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000a7f24
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000a7f18
- (int)lastPlayedGameRowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000a7f0c
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000a7f00
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000a7a30
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x00000001000a79cc
- (id)playerProfileSQLString;	// IMP=0x00000001000a7880

@end
