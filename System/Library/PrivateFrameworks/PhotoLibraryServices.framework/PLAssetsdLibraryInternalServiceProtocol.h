/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLAssetsdLibraryInternalServiceProtocol <NSObject>
@required
-(void)getAssetCountsWithReply:(/*^block*/id)arg1;
-(void)getLibrarySizesFromDB:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)getSizeOfResourcesToUploadByCPLWithReply:(/*^block*/id)arg1;
-(void)updateAssetLocationDataWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)previewRenderedContentURLCountWithReply:(/*^block*/id)arg1;
-(void)previewRenderedContentURLAtIndex:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)previewAssetLocalIdentifiersWithReply:(/*^block*/id)arg1;
-(void)repairMemoriesWithUUIDs:(id)arg1 reply:(/*^block*/id)arg2;
-(void)reloadMomentGenerationOptions;
-(void)removeAnalysisRecordsForDeletedAssetsWithUUIDs:(id)arg1 workerType:(unsigned long long)arg2;
-(void)markAnalysisStatesProcessedForWorkerType:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(void)resetPendingAnalysisStatesWithReply:(/*^block*/id)arg1;
-(void)markPersonAsNeedingKeyFaceWithPersonUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getSearchIndexProgressWithReply:(/*^block*/id)arg1;
-(void)waitForSearchIndexExistenceWithReply:(/*^block*/id)arg1;
-(void)applySearchIndexUpdates:(id)arg1 reply:(/*^block*/id)arg2;
-(void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 reply:(/*^block*/id)arg3;
-(void)setAssetKeywords:(id)arg1 forAssetUUID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)invalidateReverseLocationDataOnAllAssetsWithReply:(/*^block*/id)arg1;
-(void)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getBackgroundJobServiceStateWithReply:(/*^block*/id)arg1;
-(void)getBackgroundJobServiceBundlesInQueueDictionaryWithReply:(/*^block*/id)arg1;
-(void)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(/*^block*/id)arg1;
-(void)invalidateBehavioralScoreOnAllAssetsWithReply:(/*^block*/id)arg1;

@end
