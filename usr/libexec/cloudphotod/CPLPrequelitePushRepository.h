//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEnginePushRepositoryImplementation-Protocol.h"

@class CPLExtractedBatch, CPLPrequeliteVariable, NSMutableDictionary, NSString;

@interface CPLPrequelitePushRepository : CPLPrequeliteStorage <CPLEnginePushRepositoryImplementation>
{
    NSMutableDictionary *_injectionPerChangeType;	// 8 = 0x8
    CPLPrequeliteVariable *_extractedBatchVar;	// 16 = 0x10
    _Bool _hasCachedExtractedBatch;	// 24 = 0x18
    CPLExtractedBatch *_cachedExtractedBatch;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100055f44
- (void)writeTransactionDidFail;	// IMP=0x0000000100055ee4
- (_Bool)isEmpty;	// IMP=0x0000000100055e60
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 discardedUploadIdentifiers:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000100055ab4
- (id)statusPerScopeIndex;	// IMP=0x0000000100055014
- (id)statusDictionary;	// IMP=0x0000000100054c14
- (id)status;	// IMP=0x0000000100054680
- (id)allChangesWithScopeIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100054414
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001000541e8
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100053fbc
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100053ed0
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000100053db4
- (id)_injectionForChangeType:(unsigned long long)arg1;	// IMP=0x0000000100053c8c
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000100053ba0
- (id)_allChangesWithBlock:(CDUnknownBlockType)arg1 scopeIdentifier:(id)arg2 scopeIndex:(long long)arg3 query:(id)arg4;	// IMP=0x000000010005392c
- (id)changeWithScopedIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100053860
- (id)storedExtractedBatch;	// IMP=0x00000001000536e4
- (_Bool)storeExtractedBatch:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100053504
- (_Bool)deleteAllChangesWithError:(id *)arg1;	// IMP=0x0000000100053424
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;	// IMP=0x0000000100053244
- (_Bool)deleteChangeWithScopedIdentifier:(id)arg1 discardedUploadIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000100053020
- (_Bool)deleteChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100052e24
- (_Bool)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 discardedUploadIdentifier:(id *)arg3 overwrittenRecord:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000100052b88
- (_Bool)storeChange:(id)arg1 uploadIdentifier:(id)arg2 discardedUploadIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000100052a00
- (_Bool)_mergeChange:(id)arg1 overChange:(id)arg2 discardedUploadIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x00000001000527e0
- (_Bool)_storeChange:(id)arg1 update:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000524ec
- (id)_pqlChangeWithScopedIdentifier:(id)arg1;	// IMP=0x0000000100052308
- (_Bool)hasChangesWithScopeFilter:(id)arg1;	// IMP=0x0000000100052148
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x000000010005205c
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x0000000100051f70
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0000000100051a38
- (_Bool)initializeStorage;	// IMP=0x0000000100051858
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x000000010005176c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
