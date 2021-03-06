//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FMFCloudKitCache : NSObject
{
    NSMutableDictionary *_records;	// 8 = 0x8
    NSMutableDictionary *_zoneServerChangeTokens;	// 16 = 0x10
    NSMutableDictionary *_serverChangeTokens;	// 24 = 0x18
}

+ (id)pathToDataForRecordWithID:(id)arg1 inDatabaseWithScope:(long long)arg2;	// IMP=0x000000010004a08c
+ (id)pathToServerChangeTokenDataForZoneWithID:(id)arg1 inDatabaseWithScope:(long long)arg2;	// IMP=0x0000000100049efc
+ (id)pathToServerChangeTokenDataForScope:(long long)arg1;	// IMP=0x0000000100049e24
+ (id)cacheDirectory;	// IMP=0x0000000100049d20
- (void).cxx_destruct;	// IMP=0x000000010004b938
@property(retain, nonatomic) NSMutableDictionary *serverChangeTokens; // @synthesize serverChangeTokens=_serverChangeTokens;
@property(retain, nonatomic) NSMutableDictionary *zoneServerChangeTokens; // @synthesize zoneServerChangeTokens=_zoneServerChangeTokens;
@property(retain, nonatomic) NSMutableDictionary *records; // @synthesize records=_records;
- (id)recordWithID:(id)arg1 inDatabaseWithScope:(long long)arg2;	// IMP=0x000000010004b52c
- (_Bool)removeRecordWithID:(id)arg1 inDatabaseWithScope:(long long)arg2 error:(id *)arg3;	// IMP=0x000000010004b308
- (_Bool)updateRecord:(id)arg1 inDatabaseWithScope:(long long)arg2 error:(id *)arg3;	// IMP=0x000000010004b028
- (id)serverChangeTokenForZoneWithID:(id)arg1 inDatabaseWithScope:(long long)arg2;	// IMP=0x000000010004acf8
- (_Bool)updateServerChangeToken:(id)arg1 forZoneWithID:(id)arg2 inDatabaseWithScope:(long long)arg3 error:(id *)arg4;	// IMP=0x000000010004aa24
- (_Bool)removeServerChangeTokenForZoneWithID:(id)arg1 inDatabaseWithScope:(long long)arg2 error:(id *)arg3;	// IMP=0x000000010004a800
- (_Bool)updateServerChangeToken:(id)arg1 forDatabaseWithScope:(long long)arg2 error:(id *)arg3;	// IMP=0x000000010004a578
- (id)serverChangeTokenForDatabaseWithScope:(long long)arg1;	// IMP=0x000000010004a2ac
- (id)init;	// IMP=0x0000000100049a78

@end

