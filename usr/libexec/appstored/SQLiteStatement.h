//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SQLiteBinding-Protocol.h"

@class NSDictionary, NSString, SQLiteConnection;

@interface SQLiteStatement : NSObject <SQLiteBinding>
{
    SQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    SQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a1a2c
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x00000001000a1a08
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a19a8
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a1948
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a18b0
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a1790
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a1678
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00000001000a1640
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a1608
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a15d0
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a1594
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a155c
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a14f0
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a14b0
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a13f8
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a1340
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000001000a12d4
- (int)step;	// IMP=0x00000001000a1288
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x00000001000a1204
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x00000001000a1174
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;	// IMP=0x00000001000a0fa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

