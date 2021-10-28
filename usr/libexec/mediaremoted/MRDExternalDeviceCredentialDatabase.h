//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MRDExternalDeviceCredentialDatabase : NSObject
{
    struct sqlite3 *_dbHandle;	// 8 = 0x8
    NSMutableArray *_tokenRecords;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100031f88
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (id)_loadTokenRecords;	// IMP=0x0000000100031c7c
- (void)_initializeDatabaseSchema;	// IMP=0x0000000100031bdc
- (void)_validateDatabase;	// IMP=0x000000010003198c
- (void)_openDatabase;	// IMP=0x00000001000317d4
- (_Bool)clearExpiredTokenRecords;	// IMP=0x00000001000315cc
- (_Bool)saveTokenRecord:(id)arg1;	// IMP=0x00000001000311b0
@property(readonly, nonatomic) NSArray *tokenRecords;
- (void)dealloc;	// IMP=0x00000001000310f4
- (id)init;	// IMP=0x00000001000310e4
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100031028

@end
