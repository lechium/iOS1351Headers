/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue, CPLLibraryManagerDelegate, CPLResourceProgressDelegate, CPLLibraryManagerForceSyncDelegate, CPLLibraryManagerOwner;
@class CPLChangeSession, NSObject, CPLConfiguration, CPLStatus, _CPLWeakLibraryManager, CPLPlatformObject, NSURL, NSString, NSError;

@interface CPLLibraryManager : NSObject <CPLAbstractObject> {

	CPLChangeSession* _currentSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _sessionLock;
	BOOL _sizeOfResourcesToUploadIsSet;
	NSObject*<OS_dispatch_queue> _initLock;
	CPLConfiguration* _configuration;
	CPLStatus* _syncStatus;
	_CPLWeakLibraryManager* _weakSelf;
	BOOL _preventObserving;
	CPLPlatformObject* _platformObject;
	NSURL* _clientLibraryBaseURL;
	NSURL* _cloudLibraryStateStorageURL;
	NSURL* _cloudLibraryResourceStorageURL;
	NSString* _libraryIdentifier;
	unsigned long long _libraryOptions;
	NSString* _libraryVersion;
	unsigned long long _estimatedInitialSizeForLocalLibrary;
	unsigned long long _estimatedInitialAssetCountForLocalLibrary;
	unsigned long long _sizeOfResourcesToUpload;
	unsigned long long _sizeOfOriginalResourcesToUpload;
	unsigned long long _numberOfImagesToUpload;
	unsigned long long _numberOfVideosToUpload;
	unsigned long long _numberOfOtherItemsToUpload;
	id<CPLLibraryManagerDelegate> _delegate;
	id<CPLResourceProgressDelegate> _resourceProgressDelegate;
	id<CPLLibraryManagerForceSyncDelegate> _forceSyncDelegate;
	id<CPLLibraryManagerOwner> _owner;
	unsigned long long _status;
	NSError* _statusError;
	unsigned long long _state;
	NSString* _userOverride;
	NSString* _effectiveClientBundleIdentifier;

}

@property (assign,nonatomic) unsigned long long state;                                                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * userOverride;                                                        //@synthesize userOverride=_userOverride - In the implementation block
@property (nonatomic,copy) NSString * effectiveClientBundleIdentifier;                                     //@synthesize effectiveClientBundleIdentifier=_effectiveClientBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * clientLibraryBaseURL;                                          //@synthesize clientLibraryBaseURL=_clientLibraryBaseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cloudLibraryStateStorageURL;                                   //@synthesize cloudLibraryStateStorageURL=_cloudLibraryStateStorageURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cloudLibraryResourceStorageURL;                                //@synthesize cloudLibraryResourceStorageURL=_cloudLibraryResourceStorageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * libraryIdentifier;                                          //@synthesize libraryIdentifier=_libraryIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long libraryOptions;                                          //@synthesize libraryOptions=_libraryOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * libraryVersion;                                             //@synthesize libraryVersion=_libraryVersion - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;                       //@synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;                 //@synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeOfResourcesToUpload;                                 //@synthesize sizeOfResourcesToUpload=_sizeOfResourcesToUpload - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeOfOriginalResourcesToUpload;                         //@synthesize sizeOfOriginalResourcesToUpload=_sizeOfOriginalResourcesToUpload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImagesToUpload;                                  //@synthesize numberOfImagesToUpload=_numberOfImagesToUpload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVideosToUpload;                                  //@synthesize numberOfVideosToUpload=_numberOfVideosToUpload - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfOtherItemsToUpload;                              //@synthesize numberOfOtherItemsToUpload=_numberOfOtherItemsToUpload - In the implementation block
@property (assign,nonatomic,__weak) id<CPLLibraryManagerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CPLResourceProgressDelegate> resourceProgressDelegate;              //@synthesize resourceProgressDelegate=_resourceProgressDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CPLLibraryManagerForceSyncDelegate> forceSyncDelegate;              //@synthesize forceSyncDelegate=_forceSyncDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CPLLibraryManagerOwner> owner;                                      //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) CPLConfiguration * configuration; 
@property (nonatomic,readonly) CPLStatus * syncStatus; 
@property (assign,nonatomic) BOOL diagnosticsEnabled; 
@property (nonatomic,readonly) unsigned long long status;                                                  //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * statusError;                                                      //@synthesize statusError=_statusError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                                         //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(unsigned long long)arg1 ;
+(void)useCloudPhotoDaemonImplementation;
+(id)descriptionForProvideContentResult:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<CPLLibraryManagerDelegate>)delegate;
-(void)setDelegate:(id<CPLLibraryManagerDelegate>)arg1 ;
-(void)setOwner:(id<CPLLibraryManagerOwner>)arg1 ;
-(unsigned long long)state;
-(unsigned long long)status;
-(void)_configurationDidChange;
-(id<CPLLibraryManagerOwner>)owner;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(CPLConfiguration *)configuration;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)currentSession;
-(NSString *)libraryVersion;
-(CPLPlatformObject *)platformObject;
-(void)reportMiscInformation:(id)arg1 ;
-(void)deleteResources:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getSystemBudgetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchMomentShareFromShareURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryUserIdentitiesWithParticipants:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceSynchronizingScopeWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)publishMomentShare:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CPLStatus *)syncStatus;
-(unsigned long long)numberOfVideosToUpload;
-(unsigned long long)numberOfImagesToUpload;
-(unsigned long long)numberOfOtherItemsToUpload;
-(void)noteClientIsInBackground;
-(void)noteClientIsInForeground;
-(void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)sizeOfOriginalResourcesToUpload;
-(void)getChangedStatusesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)acknowledgeChangedStatuses:(id)arg1 ;
-(void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setShouldOverride:(BOOL)arg1 forSystemBudgets:(unsigned long long)arg2 ;
-(void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginInMemoryDownloadOfResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2 ;
-(void)deactivateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setResourceProgressDelegate:(id<CPLResourceProgressDelegate>)arg1 ;
-(void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)noteClientIsEndingSignificantWork;
-(unsigned long long)sizeOfResourcesToUpload;
-(void)noteClientIsBeginningSignificantWork;
-(void)setEstimatedInitialAssetCountForLocalLibrary:(unsigned long long)arg1 ;
-(void)setEstimatedInitialSizeForLocalLibrary:(unsigned long long)arg1 ;
-(id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5 ;
-(void)enableMainScopeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<CPLResourceProgressDelegate>)resourceProgressDelegate;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsEnabled;
-(void)barrier;
-(id)initForManagement;
-(NSString *)libraryIdentifier;
-(void)startSyncSession;
-(void)resetStatus;
-(void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(BOOL)arg2 ;
-(void)disableSynchronizationWithReason:(id)arg1 ;
-(void)enableSynchronizationWithReason:(id)arg1 ;
-(void)disableMingling;
-(void)enableMingling;
-(void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addInfoToLog:(id)arg1 ;
-(void)blockEngineElement:(id)arg1 ;
-(void)unblockEngineElement:(id)arg1 ;
-(void)unblockEngineElementOnce:(id)arg1 ;
-(void)provideLibraryInfoForScopeWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideCloudResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableMainScopeWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)clientLibraryBaseURL;
-(NSURL *)cloudLibraryStateStorageURL;
-(NSURL *)cloudLibraryResourceStorageURL;
-(unsigned long long)libraryOptions;
-(void)_setSizeOfResourcesToUpload:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5 ;
-(BOOL)_setStatus:(unsigned long long)arg1 andError:(id)arg2 ;
-(void)_setLibraryVersion:(id)arg1 ;
-(id<CPLLibraryManagerForceSyncDelegate>)forceSyncDelegate;
-(void)noteClientReceivedNotificationOfServerChanges;
-(void)_statusDidChange;
-(id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 ;
-(void)_closeDeactivating:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discardCurrentSession;
-(void)_setCurrentSession:(id)arg1 ;
-(void)beginPushChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginPullChangeSessionWithKnownLibraryVersion:(id)arg1 resetTracker:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginDownloadForResource:(id)arg1 highPriority:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)publishResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_mappedUnscopedIdentifiersFromScopedIdentifiers:(id)arg1 ;
-(void)getCloudScopedIdentifiersForLocalScopedIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getCloudIdentifiersForLocalIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLocalIdentifiersForCloudIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)addSubscriberUsingPublishingHandler:(/*^block*/id)arg1 ;
-(void)setShouldOverrideSystemBudgetsForSyncSession:(BOOL)arg1 ;
-(void)getStatusForRecordsWithIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStatusChangesForRecordsWithIdentifiers:(id)arg1 persist:(BOOL)arg2 ;
-(void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteResourcesIfSafe:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)estimatedInitialSizeForLocalLibrary;
-(unsigned long long)estimatedInitialAssetCountForLocalLibrary;
-(void)setForceSyncDelegate:(id<CPLLibraryManagerForceSyncDelegate>)arg1 ;
-(NSError *)statusError;
-(NSString *)userOverride;
-(void)setUserOverride:(NSString *)arg1 ;
-(NSString *)effectiveClientBundleIdentifier;
-(void)setEffectiveClientBundleIdentifier:(NSString *)arg1 ;
-(void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportSetting:(id)arg1 hasBeenEnabled:(BOOL)arg2 ;
@end

