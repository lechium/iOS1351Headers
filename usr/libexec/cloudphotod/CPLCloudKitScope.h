//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CKRecordZone, CKRecordZoneID, CKReference, NSData;

@interface CPLCloudKitScope : NSObject <NSSecureCoding>
{
    CKReference *_rootRef;	// 8 = 0x8
    CKRecordZone *_zone;	// 16 = 0x10
    long long _options;	// 24 = 0x18
}

+ (id)_libraryStateFromCKRecordsForMomentShare:(id)arg1;	// IMP=0x0000000100095790
+ (id)_libraryStateFromCKRecordsForLibrary:(id)arg1;	// IMP=0x0000000100095584
+ (id)_updatedLibraryInfoFromLibraryInfoForMomentShare:(id)arg1 proposedScopeType:(long long *)arg2 fromCKRecords:(id)arg3 cloudKitScope:(id)arg4;	// IMP=0x0000000100095118
+ (id)_updatedLibraryInfoFromLibraryInfoForLibrary:(id)arg1 proposedScopeType:(long long *)arg2 fromCKRecords:(id)arg3 cloudKitScope:(id)arg4;	// IMP=0x0000000100094ed8
+ (id)_rootRecordNameForScopeType:(long long)arg1;	// IMP=0x0000000100094d40
+ (id)_libraryStateFromCKRecords:(id)arg1 scopeType:(long long)arg2;	// IMP=0x0000000100094ca0
+ (id)libraryInfoAndState:(id *)arg1 proposedScopeType:(long long *)arg2 fromCKRecords:(id)arg3 cloudKitScope:(id)arg4;	// IMP=0x0000000100094aa8
+ (id)allRecordNamesForLibraryInfoAndState;	// IMP=0x0000000100094974
+ (id)_recordNamesForScopeType:(long long)arg1;	// IMP=0x0000000100094130
+ (id)scopeFromTransportScope:(id)arg1;	// IMP=0x0000000100093bb4
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100093880
- (void).cxx_destruct;	// IMP=0x00000001000959cc
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
- (id)updatedLibraryInfoFromLibraryInfo:(id)arg1 ckRecord:(id)arg2 scope:(id)arg3;	// IMP=0x000000010009481c
- (id)libraryStateFromCKRecord:(id)arg1 scope:(id)arg2;	// IMP=0x00000001000946e8
- (id)libraryStateFromCKRecords:(id)arg1 scope:(id)arg2;	// IMP=0x0000000100094650
- (id)libraryInfoFromCKRecords:(id)arg1 scope:(id)arg2;	// IMP=0x00000001000945e8
- (id)_updatedLibraryInfoFromLibraryInfo:(id)arg1 fromCKRecords:(id)arg2 scope:(id)arg3;	// IMP=0x00000001000944f8
- (id)recordsToUpdateFromLibraryInfo:(id)arg1 inScope:(id)arg2;	// IMP=0x00000001000944cc
- (id)shareRecordNameToDeleteInScope:(id)arg1;	// IMP=0x000000010009449c
- (_Bool)supportsZoneDeleteInScope:(id)arg1;	// IMP=0x0000000100094470
- (id)recordNamesForLibraryInfoAndStateInScope:(id)arg1;	// IMP=0x0000000100094408
- (_Bool)supportsDeletionOfRecord:(id)arg1 inScope:(id)arg2;	// IMP=0x00000001000940f0
- (_Bool)supportsDirectDeletionOfRecord:(id)arg1 inScope:(id)arg2;	// IMP=0x00000001000940b0
- (id)rootRecordNameForScope:(id)arg1;	// IMP=0x0000000100094048
- (void)setupRootOnRecord:(id)arg1 scope:(id)arg2;	// IMP=0x0000000100093fd0
- (id)recordIDForIdentifier:(id)arg1;	// IMP=0x0000000100093f40
- (id)_rootRefForScope:(id)arg1;	// IMP=0x0000000100093de4
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
@property(readonly, nonatomic) long long databaseScope;
@property(readonly, nonatomic) NSData *transportScope;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100093b44
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100093a5c
- (id)initWithZoneID:(id)arg1 options:(long long)arg2;	// IMP=0x00000001000939d4
- (id)initWithZone:(id)arg1 options:(long long)arg2;	// IMP=0x0000000100093888

@end
