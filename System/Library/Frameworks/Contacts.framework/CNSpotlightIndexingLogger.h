/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNSpotlightIndexingLogger <NSObject>
@required
-(void)indexingContacts:(/*^block*/id)arg1;
-(void)reindexingAllSearchableItems:(/*^block*/id)arg1;
-(void)willReindexItemsWithIdentifiers:(id)arg1;
-(void)reindexingSearchableItemsWithIdentifiers:(/*^block*/id)arg1;
-(void)deferringReindexAsFailedToPrepareForReindexing;
-(void)willStartIndexingWithClientState:(id)arg1;
-(void)noContactChangesToIndex;
-(void)willReindexAsFailedToRegisterForChangeHistory:(id)arg1 error:(id)arg2;
-(void)willReindexAsFailedToFetchChangeHistory:(id)arg1 error:(id)arg2;
-(void)willReindexAsChangeHistoryIsTruncated:(id)arg1;
-(void)willReindexAsFailedToFetchClientState;
-(void)willResumeReindexingAsNotFinished;
-(void)willReindexAsIndexVersionChangedFrom:(long long)arg1 to:(long long)arg2;
-(void)willReindexAsSnapshotAnchorChangedFrom:(id)arg1 to:(id)arg2;
-(void)willResumeIndexingAfterOffset:(long long)arg1;
-(void)failedToCreateSearchableItemForContactIdentifier:(id)arg1;
-(void)didNotFinishIndexingForFullSyncWithError:(id)arg1;
-(void)finishedIndexingForFullSyncWithCount:(unsigned long long)arg1;
-(void)failedToFetchContactForChange:(id)arg1;
-(void)didNotFinishIndexingForDeltaSyncWithError:(id)arg1;
-(void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
-(void)finishedBatchIndexWithUpdateIdentifiers:(id)arg1 deleteIdentifiers:(id)arg2;
-(void)willBatchIndexForFullSyncWithCount:(unsigned long long)arg1 lastOffset:(long long)arg2 doneFullSync:(BOOL)arg3;
-(void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
-(void)willClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2;
-(void)failedToClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2 error:(id)arg3;
-(void)failedToFetchSearchableForContactIdentifiers:(id)arg1 error:(id)arg2;
-(void)verifyingIndex:(/*^block*/id)arg1;
-(void)verifiedIndexWithSummmary:(id)arg1;
-(void)failedToFetchClientStateFromSpotlight:(id)arg1 willRetry:(BOOL)arg2;
-(void)failedToBeginIndexBatchWithSpotlight:(id)arg1;
-(void)failedToEndIndexBatchWithSpotlight:(id)arg1 willRetry:(BOOL)arg2;
-(void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(BOOL)arg3;
-(void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(BOOL)arg3;
-(void)failedToDeleteAllSearchableItemsWithSpotlight:(id)arg1 willRetry:(BOOL)arg2;
-(void)failedToUnarchiveClientStateData:(id)arg1;
-(void)failedToCreateUnarchiverForClientStateWithError:(id)arg1;

@end
