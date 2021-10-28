//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBCKModel.h"

@class MBCKDevice, MBCKEngine, NSArray, NSMutableDictionary, NSSet, NSString;

@interface MBCKJournal : MBCKModel
{
    NSArray *_snapshotActions;	// 8 = 0x8
    NSArray *_processedSnapshotActions;	// 16 = 0x10
    MBCKDevice *_device;	// 24 = 0x18
    MBCKEngine *_engine;	// 32 = 0x20
    NSSet *_cachedSnapshotIDs;	// 40 = 0x28
    NSString *_recordPrefix;	// 48 = 0x30
    NSMutableDictionary *_cachedSnapshotsByID;	// 56 = 0x38
    NSMutableDictionary *_snapshotsByID;	// 64 = 0x40
}

+ (id)journalForDevice:(id)arg1 cache:(id)arg2 engine:(id)arg3;	// IMP=0x000000010003655c
- (void).cxx_destruct;	// IMP=0x000000010003c584
@property(retain, nonatomic) NSMutableDictionary *snapshotsByID; // @synthesize snapshotsByID=_snapshotsByID;
@property(retain, nonatomic) NSMutableDictionary *cachedSnapshotsByID; // @synthesize cachedSnapshotsByID=_cachedSnapshotsByID;
@property(retain, nonatomic) NSString *recordPrefix; // @synthesize recordPrefix=_recordPrefix;
@property(retain, nonatomic) NSSet *cachedSnapshotIDs; // @synthesize cachedSnapshotIDs=_cachedSnapshotIDs;
@property(nonatomic) __weak MBCKEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) __weak MBCKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSArray *processedSnapshotActions; // @synthesize processedSnapshotActions=_processedSnapshotActions;
@property(readonly, nonatomic) NSArray *snapshotActions; // @synthesize snapshotActions=_snapshotActions;
- (_Bool)_handleSnapshotAction:(id)arg1 operationTracker:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003bdb4
- (_Bool)_handleRemoveDomain:(id)arg1 domainHmacs:(id)arg2 outputSnapshotID:(id)arg3 serverSnapshot:(id)arg4 operationTracker:(id)arg5 error:(id *)arg6;	// IMP=0x000000010003a4c0
- (_Bool)_handleMergeAction:(id)arg1 outputSnapshotID:(id)arg2 serverSnapshot:(id)arg3 shouldMergeDeletions:(_Bool)arg4 operationTracker:(id)arg5 error:(id *)arg6;	// IMP=0x0000000100037c5c
- (_Bool)replayWithOperationTracker:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000372d8
- (_Bool)replayJournalResetOrDisableWithOperationTracker:(id)arg1 disable:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000100036cb4
- (_Bool)fetchFromServerWithOperationTracker:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100036b34
- (_Bool)_clearSnapshotActionsWithOperationTracker:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100036a48
- (id)recordRepresentation;	// IMP=0x00000001000369ac
- (void)refreshWithRecord:(id)arg1;	// IMP=0x00000001000368e0
- (unsigned long long)recordZone;	// IMP=0x00000001000368d8
- (id)recordType;	// IMP=0x00000001000368cc
- (id)_getRecordIDString;	// IMP=0x00000001000366c0
- (id)initWithDevice:(id)arg1 cache:(id)arg2 engine:(id)arg3;	// IMP=0x00000001000365f0

@end
