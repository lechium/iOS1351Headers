//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLCloudKitTaskController-Protocol.h"
#import "CPLDuetTicketProviderBudgetDelegate-Protocol.h"
#import "CPLEngineTransportImplementation-Protocol.h"

@class CKContainer, CKDatabase, CPLCloudKitOperationsTracker, CPLCloudKitSimpleCache, CPLCloudKitTaskGroupThrottler, CPLEngineLibrary, NSArray, NSDate, NSDictionary, NSIndexSet, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLCloudKitTransport : CPLPlatformObject <CPLDuetTicketProviderBudgetDelegate, CPLEngineTransportImplementation, CPLCloudKitTaskController>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    _Bool _opened;	// 16 = 0x10
    CPLCloudKitOperationsTracker *_operationTracker;	// 24 = 0x18
    _Bool _mightRejectVideoStreaming;	// 32 = 0x20
    NSIndexSet *_rejectedVideoStreamingIntents;	// 40 = 0x28
    _Bool _rejectVideoStreamingAtContentLevel;	// 48 = 0x30
    NSArray *_rejectedVideoStreamingIntentNames;	// 56 = 0x38
    NSDictionary *_operationGroupMapping;	// 64 = 0x40
    NSMutableSet *_invalidaOperationGroupMappingEntries;	// 72 = 0x48
    CPLCloudKitSimpleCache *_streamingURLCache;	// 80 = 0x50
    CPLCloudKitTaskGroupThrottler *_streamingThrottler;	// 88 = 0x58
    CKContainer *_container;	// 96 = 0x60
    CKDatabase *_database;	// 104 = 0x68
    CKDatabase *_sharedDatabase;	// 112 = 0x70
    NSDate *_significantWorkBeginDate;	// 120 = 0x78
}

+ (id)_errorsByTaskForTasksByRecordId:(id)arg1 fromUnderlyingError:(id)arg2;	// IMP=0x00000001000aa958
+ (id)_betterErrorForRecordId:(id)arg1 recordError:(id)arg2;	// IMP=0x00000001000aa6e0
+ (unsigned long long)networkBehaviorForForegroundOperation:(_Bool)arg1 upload:(_Bool)arg2 metadata:(_Bool)arg3;	// IMP=0x00000001000aa680
+ (_Bool)enableTurboMode;	// IMP=0x00000001000aa5e8
+ (_Bool)useSandboxEnvironment;	// IMP=0x00000001000aa550
+ (_Bool)allowsSyncOverCellular;	// IMP=0x00000001000aa484
+ (void)transportWontBeUsed;	// IMP=0x00000001000a5be4
+ (id)_container;	// IMP=0x00000001000a5b40
- (void).cxx_destruct;	// IMP=0x00000001000ada24
@property(retain, nonatomic) NSDate *significantWorkBeginDate; // @synthesize significantWorkBeginDate=_significantWorkBeginDate;
@property(retain, nonatomic) CKDatabase *sharedDatabase; // @synthesize sharedDatabase=_sharedDatabase;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CPLCloudKitOperationsTracker *operationTracker; // @synthesize operationTracker=_operationTracker;
- (void)processTaskErrorIfNeeded:(id)arg1;	// IMP=0x00000001000ad808
@property(readonly, nonatomic) _Bool canBoostBackgroundOperations;
@property(readonly, nonatomic) _Bool canBoostOperations;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isNetworkConnected) _Bool networkConnected;
- (void)provideCKAssetWithRecordID:(id)arg1 fieldName:(id)arg2 recordType:(id)arg3 signature:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000abca0
- (void)_withTempCKAssetForData:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000abb10
- (id)_tempDestinationURLForRecoveredDataWithError:(id *)arg1;	// IMP=0x00000001000ab9b0
- (void)_cleanTempRecoveredDataURL:(id)arg1;	// IMP=0x00000001000ab788
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ab504
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000aac58
- (id)componentName;	// IMP=0x00000001000aac4c
- (id)tempCKAssetURL;	// IMP=0x00000001000aabc4
- (void)findPersistedInitialSyncSession:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aa43c
- (id)createGroupForQueryUserIdentities;	// IMP=0x00000001000aa374
- (id)createGroupForAcceptingMomentShare;	// IMP=0x00000001000aa2ac
- (id)createGroupForFetchingMomentShare;	// IMP=0x00000001000aa1e4
- (id)createGroupForPublishingMomentShare;	// IMP=0x00000001000aa11c
- (id)createGroupForPruningCheck;	// IMP=0x00000001000aa068
- (id)createGroupForAnalysisDownload;	// IMP=0x00000001000a9fa0
- (id)createGroupForMovieStreamingWithIntent:(unsigned long long)arg1;	// IMP=0x00000001000a9ce4
- (id)createGroupForResourcesDownload;	// IMP=0x00000001000a9c1c
- (id)createGroupForThumbnailsDownload;	// IMP=0x00000001000a9b54
- (id)createGroupForChangeDownload;	// IMP=0x00000001000a9a8c
- (id)createGroupForChangeUpload;	// IMP=0x00000001000a99c4
- (id)createGroupForLibraryStateCheck;	// IMP=0x00000001000a98fc
- (id)createGroupForFetchScopeListChanges;	// IMP=0x00000001000a9834
- (id)createGroupForTransportScopeUpdate;	// IMP=0x00000001000a976c
- (id)createGroupForTransportScopeDelete;	// IMP=0x00000001000a96a4
- (id)createGroupForFeedback;	// IMP=0x00000001000a95f0
- (id)createGroupForSetup;	// IMP=0x00000001000a953c
- (id)createGroupForThumbnailPrefetch;	// IMP=0x00000001000a9474
- (id)createGroupForPrefetch;	// IMP=0x00000001000a93ac
- (id)createGroupForInitialDownload;	// IMP=0x00000001000a92e4
- (id)createGroupForResetSync;	// IMP=0x00000001000a921c
- (id)createGroupForInitialUpload;	// IMP=0x00000001000a9154
- (id)createGroupAllowsCellular:(_Bool)arg1 foreground:(_Bool)arg2 upload:(_Bool)arg3 metadata:(_Bool)arg4;	// IMP=0x00000001000a9020
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;	// IMP=0x00000001000a8f98
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;	// IMP=0x00000001000a8ef0
- (id)scopeNameForTransportScope:(id)arg1;	// IMP=0x00000001000a8e6c
- (id)descriptionForTransportScope:(id)arg1;	// IMP=0x00000001000a8d84
- (void)cancelBlockedTasksIncludingBackground:(_Bool)arg1;	// IMP=0x00000001000a8d6c
- (void)noteClientIsEndingSignificantWork;	// IMP=0x00000001000a8d5c
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x00000001000a8d4c
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x00000001000a8d38
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a8d24
- (void)setIsSignificantWorkPending:(_Bool)arg1;	// IMP=0x00000001000a8b08
- (id)simpleDescriptionForScopeListSyncAnchor:(id)arg1;	// IMP=0x00000001000a8af4
- (id)simpleDescriptionForSyncAnchor:(id)arg1;	// IMP=0x00000001000a88f0
- (id)bestErrorForUnderlyingError:(id)arg1;	// IMP=0x00000001000a88dc
- (_Bool)isResourceDynamic:(id)arg1;	// IMP=0x00000001000a88d4
- (void)getPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a8768
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a86b0
- (id)queryUserIdentitiesTaskForParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a85f8
- (id)acceptTaskForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a8540
- (id)fetchTaskForMomentShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a8488
- (id)publishTaskForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a8398
- (id)inMemoryDownloadTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a82bc
- (id)resourcesDownloadTaskWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a8258
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a81a4
- (id)resourceCheckTaskForResources:(id)arg1 transportScopes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a80b8
- (id)getStreamingURLTaskForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 transportScope:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000a7f88
- (id)fetchScopeListChangesForScopeListSyncAnchor:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a7ee4
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 currentLibraryInfo:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000a7da0
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 transportScope:(id)arg3 scopeIdentifier:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000a7c70
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a7b70
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a7a98
- (id)getLibraryInfoAndStateWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a79c0
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 libraryInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a7898
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a7798
- (id)uploadBatchTaskForBatch:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000a757c
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 transportScope:(id)arg3 scope:(id)arg4 additionalTransportScopes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000a7420
- (id)setupTaskUpdateDisabledFeatures:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a737c
@property(readonly, nonatomic) Class userIdentifierClass;
@property(readonly, nonatomic) Class transportGroupClass;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a70b8
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a62a4
- (void)duetTicketProviderBlockedStatusDidChange;	// IMP=0x00000001000a61b4
- (void)_updateBudgets;	// IMP=0x00000001000a5fe0
@property(readonly, retain, nonatomic) CPLEngineLibrary *engineLibrary;
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00000001000a5e4c
- (id)_operationGroupNameForName:(id)arg1;	// IMP=0x00000001000a5cc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

