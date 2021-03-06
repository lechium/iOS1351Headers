/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RCSSavedRecordingServiceProtocol <NSObject>
@required
-(oneway void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 importCompletionBlock:(/*^block*/id)arg4;
-(oneway void)updateSearchMetadataWithRecordingURIsToInsert:(id)arg1 recordingURIsToUpdate:(id)arg2 recordingURIsToDelete:(id)arg3 completionBlock:(/*^block*/id)arg4;
-(oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2;
-(oneway void)performDatabaseMigrationWithCompletionBlock:(/*^block*/id)arg1;
-(oneway void)enableCloudRecordingsWithCompletionBlock:(/*^block*/id)arg1;
-(oneway void)disableCloudRecordingsSaveLocalCopies:(BOOL)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(oneway void)importRecordingsFromCloud:(/*^block*/id)arg1;
-(oneway void)exportRecordingsToCloud:(/*^block*/id)arg1;
-(oneway void)expungeRecordingsFromCloud:(/*^block*/id)arg1;
-(oneway void)openAudioFile:(id)arg1 settings:(id)arg2 accessRequestHandler:(/*^block*/id)arg3;
-(oneway void)closeAudioFile:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(oneway void)writeAudioFile:(id)arg1 buffer:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2;
-(oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(BOOL)arg2 accessRequestHandler:(/*^block*/id)arg3;
-(oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2;
-(oneway void)removeAllUserDataWithCompletion:(/*^block*/id)arg1;
-(oneway void)endAccessSessionWithToken:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
-(oneway void)disableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1;
-(oneway void)enableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1;
-(oneway void)fetchCompositionAVURLsBeingExported:(/*^block*/id)arg1;
-(oneway void)fetchCompositionAVURLsBeingModified:(/*^block*/id)arg1;
-(oneway void)_fetchAllAccessTokens:(/*^block*/id)arg1;
-(oneway void)reloadExistingSearchMetadataWithCompletionBlock:(/*^block*/id)arg1;
-(oneway void)clearAndReloadSearchMetadataWithCompletionBlock:(/*^block*/id)arg1;

@end

