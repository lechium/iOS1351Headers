/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/ML3DatabaseConnectionDelegate.h>
#import <libobjc.A.dylib/ML3DatabaseConnectionPoolDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ML3AccountInformationProviding.h>

@protocol OS_dispatch_queue, ML3MusicLibraryDelegate;
@class NSString, NSLock, ML3AccountCacheDatabase, NSMutableDictionary, ML3DatabaseConnectionPool, ML3MusicLibraryResourcesManager, ML3LibraryNotificationManager, NSObject, NSArray, NSNumber, NSDate, ML3Container, ML3DatabaseMetadata;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate, NSSecureCoding, ML3AccountInformationProviding> {

	NSString* _libraryUID;
	NSLock* _libraryUIDLock;
	NSString* _syncLibraryUID;
	ML3AccountCacheDatabase* _accountCacheDatabase;
	NSMutableDictionary* _optimizedLibraryEntityFilterPredicatesByEntityClass;
	NSMutableDictionary* _optimizedLibraryContainerFilterPredicatesByContainerClass;
	NSMutableDictionary* _optimizedLibraryPublicEntityFilterPredicatesByEntityClass;
	NSMutableDictionary* _optimizedLibraryPublicContainerFilterPredicatesByContainerClass;
	BOOL _isHomeSharingLibraryLoaded;
	BOOL _isHomeSharingLibrary;
	BOOL _usingSharedLibraryPath;
	BOOL _readOnly;
	ML3DatabaseConnectionPool* _connectionPool;
	NSString* _databasePath;
	iPhoneSortKeyBuilderRef _sortKeyBuilder;
	ML3MusicLibraryResourcesManager* _resourcesManager;
	ML3LibraryNotificationManager* _notificationManager;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _accountDSID;
	id<ML3MusicLibraryDelegate> _delegate;
	NSArray* _libraryEntityFilterPredicates;
	NSArray* _libraryContainerFilterPredicates;
	NSArray* _libraryPublicEntityFilterPredicates;
	NSArray* _libraryPublicContainerFilterPredicates;

}

@property (nonatomic,copy,readonly) NSString * artworkDirectory; 
@property (nonatomic,copy,readonly) NSString * originalArtworkDirectory; 
@property (nonatomic,copy,readonly) NSString * rootArtworkCacheDirectory; 
@property (nonatomic,readonly) BOOL supportsUbiquitousPlaybackPositions; 
@property (nonatomic,copy) NSNumber * sagaAccountID; 
@property (nonatomic,copy) NSNumber * sagaLastKnownActiveLockerAccountDSID; 
@property (nonatomic,copy) NSDate * sagaLastGeniusUpdateDate; 
@property (nonatomic,copy) NSDate * sagaLastItemPlayDataUploadDate; 
@property (nonatomic,copy) NSDate * sagaLastPlaylistPlayDataUploadDate; 
@property (nonatomic,copy) NSString * sagaCloudLibraryCUID; 
@property (nonatomic,copy) NSString * sagaCloudLibraryTroveID; 
@property (assign,nonatomic) long long sagaDatabaseUserVersion; 
@property (assign,nonatomic) long long sagaCloudAddToPlaylistBehavior; 
@property (assign,nonatomic) BOOL sagaNeedsFullUpdateAfterNextUpdate; 
@property (assign,nonatomic) BOOL sagaPrefersToMergeWithCloudLibrary; 
@property (nonatomic,copy) NSString * storefrontIdentifier; 
@property (nonatomic,copy) NSDate * sagaLastLibraryUpdateTime; 
@property (nonatomic,copy) NSDate * sagaLastSubscribedContainersUpdateTime; 
@property (assign,nonatomic) long long preferredVideoQuality; 
@property (assign,nonatomic) long long sagaOnDiskDatabaseRevision; 
@property (nonatomic,copy) NSNumber * jaliscoAccountID; 
@property (nonatomic,copy) NSDate * jaliscoLastGeniusUpdateDate; 
@property (nonatomic,copy) NSString * jaliscoLastSupportedMediaKinds; 
@property (nonatomic,readonly) NSArray * jaliscoLastExcludedMediaKinds; 
@property (assign,nonatomic) BOOL jaliscoHasCloudGeniusData; 
@property (assign,nonatomic) BOOL jaliscoIsMusicGeniusUserEnabled; 
@property (assign,nonatomic) BOOL jaliscoNeedsUpdateForTokens; 
@property (nonatomic,copy) NSDate * jaliscoLastLibraryUpdateTime; 
@property (assign,nonatomic) long long jaliscoOnDiskDatabaseRevision; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) ML3LibraryNotificationManager * notificationManager;                      //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) iPhoneSortKeyBuilderRef sortKeyBuilder;                                 //@synthesize sortKeyBuilder=_sortKeyBuilder - In the implementation block
@property (assign,getter=isUsingSharedLibraryPath,nonatomic) BOOL usingSharedLibraryPath;              //@synthesize usingSharedLibraryPath=_usingSharedLibraryPath - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                                          //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) ML3MusicLibraryResourcesManager * resourcesManager;                     //@synthesize resourcesManager=_resourcesManager - In the implementation block
@property (assign,nonatomic,__weak) id<ML3MusicLibraryDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnectionPool * connectionPool;                             //@synthesize connectionPool=_connectionPool - In the implementation block
@property (nonatomic,readonly) NSString * databasePath;                                                //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) NSString * libraryUID; 
@property (nonatomic,readonly) long long currentRevision; 
@property (nonatomic,readonly) long long currentContentRevision; 
@property (assign,nonatomic) long long syncGenerationID; 
@property (nonatomic,readonly) long long autoFilledTracksTotalSize; 
@property (assign,nonatomic) NSString * syncLibraryID; 
@property (getter=isLibraryEmpty,nonatomic,readonly) BOOL libraryEmpty; 
@property (nonatomic,readonly) ML3Container * currentDevicePurchasesPlaylist; 
@property (nonatomic,readonly) ML3Container * currentDevicePlaybackHistoryPlaylist; 
@property (nonatomic,readonly) ML3DatabaseMetadata * databaseInfo; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) NSArray * preferredAudioTracks; 
@property (nonatomic,readonly) NSArray * preferredSubtitleTracks; 
@property (assign,nonatomic) BOOL isHomeSharingLibrary; 
@property (nonatomic,readonly) BOOL mediaRestrictionEnabled; 
@property (assign,nonatomic) BOOL downloadOnAddToLibrary; 
@property (nonatomic,retain) NSArray * libraryEntityFilterPredicates;                                  //@synthesize libraryEntityFilterPredicates=_libraryEntityFilterPredicates - In the implementation block
@property (nonatomic,retain) NSArray * libraryContainerFilterPredicates;                               //@synthesize libraryContainerFilterPredicates=_libraryContainerFilterPredicates - In the implementation block
@property (nonatomic,retain) NSArray * libraryPublicEntityFilterPredicates;                            //@synthesize libraryPublicEntityFilterPredicates=_libraryPublicEntityFilterPredicates - In the implementation block
@property (nonatomic,retain) NSArray * libraryPublicContainerFilterPredicates;                         //@synthesize libraryPublicContainerFilterPredicates=_libraryPublicContainerFilterPredicates - In the implementation block
@property (nonatomic,readonly) BOOL hasUserPlaylists; 
@property (nonatomic,readonly) BOOL hasAddedToLibraryAppleMusicContent; 
@property (nonatomic,readonly) BOOL hasUserPlaylistsContainingAppleMusicContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * accountDSID;                                            //@synthesize accountDSID=_accountDSID - In the implementation block
+(void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 ;
+(void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)sectionIndexTitles;
+(BOOL)deviceSupportsASTC;
+(id)autoupdatingSharedLibrary;
+(id)pathForResourceFileOrFolder:(int)arg1 ;
+(id)globalSerialQueue;
+(id)musicLibraryForUserAccount:(id)arg1 ;
+(id)allLibraries;
+(long long)devicePreferredImageFormat;
+(id)sharedLibrary;
+(id)libraryContainerPathByAppendingPathComponent:(id)arg1 ;
+(BOOL)deviceSupportsMultipleLibraries;
+(BOOL)updateTrackIntegrityOnConnection:(id)arg1 ;
+(id)musicLibraryPerUserDSID;
+(id)allLibraryContainerPaths;
+(id)autoupdatingSharedLibraryPath;
+(void)setAutoupdatingSharedLibraryPath:(id)arg1 ;
+(id)distributedToLocalNotificationMapping;
+(id)widthLimitedSetValuesQueue;
+(id)indexSchemaSQL;
+(id)assistantSyncDataChangedNotificationName;
+(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4 ;
+(id)libraryContainerPath;
+(BOOL)userVersionMatchesSystemUsingConnection:(id)arg1 ;
+(id)allTables;
+(BOOL)orderingLanguageMatchesSystemUsingConnection:(id)arg1 ;
+(id)artworkRelativePathFromToken:(id)arg1 ;
+(id)artworkTokenForChapterWithItemPID:(long long)arg1 retrievalTime:(double)arg2 ;
+(id)mediaFolderPath;
+(id)registeredLibraries;
+(id)sharedLibraryDatabasePath;
+(void)setSharedLibraryDatabasePath:(id)arg1 ;
+(void)disableSharedLibrary;
+(void)disableAutomaticDatabaseValidation;
+(void)enableAutomaticDatabaseValidation;
+(id)localizedSectionHeaderForSectionHeader:(id)arg1 ;
+(id)localizedSectionIndexTitleForSectionHeader:(id)arg1 ;
+(id)sectionIndexTitleForSectionHeader:(id)arg1 ;
+(void)enumerateSortMapTablesUsingBlock:(/*^block*/id)arg1 ;
+(void)removeOrphanedTracks;
+(int)userVersionUsingConnection:(id)arg1 ;
+(id)allPragmaSQL;
+(id)allSchemaSQL;
+(id)allTriggersSQL;
+(id)sortMapNewSchemaSQL;
+(id)itemNewSchemaSQL;
+(id)itemIndexSchemaSQL;
+(BOOL)dropIndexesUsingConnection:(id)arg1 tableNames:(const char*)arg2 ;
+(id)mediaFolderPathByAppendingPathComponent:(id)arg1 ;
+(id)libraryContainerRelativePath:(id)arg1 ;
+(id)pathForBaseLocationPath:(long long)arg1 ;
+(id)artworkTokenForArtistHeroURL:(id)arg1 ;
+(long long)artworkSourceTypeForTrackSource:(int)arg1 ;
+(id)storeLinkSchemaSQL;
+(id)sortMapSchemaSQL;
+(id)itemSchemaSQL;
+(id)libraryPathForContainerPath:(id)arg1 ;
+(id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2 ;
+(id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3 ;
+(id)jaliscoGetSortedMediaKinds:(id)arg1 ;
-(void)fillContainerForHomeSharingLibrary:(id)arg1 containerID:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)checkForChangesInHomeSharingLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performImport:(id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)executeUpdateSQL:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ML3MusicLibraryDelegate>)delegate;
-(void)setDelegate:(id<ML3MusicLibraryDelegate>)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSString *)databasePath;
-(void)setReadOnly:(BOOL)arg1 ;
-(ML3LibraryNotificationManager *)notificationManager;
-(void)setNotificationManager:(ML3LibraryNotificationManager *)arg1 ;
-(BOOL)isReadOnly;
-(long long)currentRevision;
-(long long)currentContentRevision;
-(NSString *)accountDSID;
-(id)pathForResourceFileOrFolder:(int)arg1 ;
-(void)notifyDisplayValuesPropertyDidChange;
-(long long)syncGenerationID;
-(BOOL)isHomeSharingLibrary;
-(BOOL)hasUserPlaylists;
-(BOOL)hasAddedToLibraryAppleMusicContent;
-(BOOL)hasUserPlaylistsContainingAppleMusicContent;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(NSArray *)localizedSectionIndexTitles;
-(BOOL)isCurrentThreadInTransaction;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(BOOL)deleteDatabaseProperty:(id)arg1 ;
-(void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 ;
-(BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned)arg5 ;
-(BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1 ;
-(void)setLibraryPublicContainerFilterPredicates:(NSArray *)arg1 ;
-(void)setLibraryPublicEntityFilterPredicates:(NSArray *)arg1 ;
-(void)setLibraryContainerFilterPredicates:(NSArray *)arg1 ;
-(void)setLibraryEntityFilterPredicates:(NSArray *)arg1 ;
-(void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 forMediaTypes:(id)arg4 inUsersLibrary:(BOOL)arg5 usingBlock:(/*^block*/id)arg6 ;
-(NSString *)libraryUID;
-(NSArray *)preferredSubtitleTracks;
-(NSArray *)preferredAudioTracks;
-(ML3Container *)currentDevicePlaybackHistoryPlaylist;
-(void)performDatabaseTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)databaseConnectionAllowingWrites:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)recordPlayEventForContainerPersistentID:(long long)arg1 ;
-(unsigned long long)sectionIndexTitleIndexForSectionIndex:(unsigned long long)arg1 ;
-(ML3Container *)currentDevicePurchasesPlaylist;
-(void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)retrieveBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)isArtworkTokenAvailable:(id)arg1 ;
-(NSNumber *)sagaAccountID;
-(void)setSagaLastPlaylistPlayDataUploadDate:(NSDate *)arg1 ;
-(long long)sagaDatabaseUserVersion;
-(void)setSagaDatabaseUserVersion:(long long)arg1 ;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(long long)sagaOnDiskDatabaseRevision;
-(void)setSagaOnDiskDatabaseRevision:(long long)arg1 ;
-(NSDate *)sagaLastLibraryUpdateTime;
-(void)setSagaLastLibraryUpdateTime:(NSDate *)arg1 ;
-(NSDate *)sagaLastSubscribedContainersUpdateTime;
-(void)setSagaAccountID:(NSNumber *)arg1 ;
-(void)setSagaLastSubscribedContainersUpdateTime:(NSDate *)arg1 ;
-(void)clearSagaCloudAccountID;
-(void)clearSagaLastItemPlayDataUploadDate;
-(void)clearSagaLastPlaylistPlayDataUploadDate;
-(NSDate *)sagaLastItemPlayDataUploadDate;
-(void)setSagaLastItemPlayDataUploadDate:(NSDate *)arg1 ;
-(NSDate *)sagaLastPlaylistPlayDataUploadDate;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2 respectSongMattress:(BOOL)arg3 ;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(long long)preferredVideoQuality;
-(void)enumerateArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)libraryContainerPathByAppendingPathComponent:(id)arg1 ;
-(id)checkoutWriterConnection;
-(void)notifyEntitiesAddedOrRemoved;
-(void)notifyContentsDidChange;
-(void)checkInDatabaseConnection:(id)arg1 ;
-(void)performAsyncDatabaseWriteTransactionWithBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)notifyNonContentsPropertyDidChange;
-(void)notifyInvisiblePropertyDidChange;
-(id)initWithResourcesManager:(id)arg1 ;
-(id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 populateUnitTestTablesBlock:(/*^block*/id)arg3 ;
-(void)_setupNotificationManager;
-(void)_effectiveSettingsDidChangeNotification:(id)arg1 ;
-(void)_loggingSettingsDidChangeNotification:(id)arg1 ;
-(void)_libraryPathDidChangeNotification:(id)arg1 ;
-(BOOL)isUsingSharedLibraryPath;
-(ML3MusicLibraryResourcesManager *)resourcesManager;
-(void)_onQueue_updateDatabaseConnectionsProfilingLevel;
-(ML3DatabaseMetadata *)databaseInfo;
-(BOOL)validateDatabase;
-(BOOL)_canConfigureMediaLibraryDatabaseConnection:(id)arg1 ;
-(void)_configureMediaLibraryDatabaseConnection:(id)arg1 ;
-(void)_teardownMediaLibraryDatabaseConnection:(id)arg1 ;
-(ML3DatabaseConnectionPool *)connectionPool;
-(id)checkoutReaderConnection;
-(BOOL)_clearAllRowsFromTables:(id)arg1 ;
-(BOOL)cleanupArtworkWithOptions:(unsigned long long)arg1 ;
-(iPhoneSortKeyBuilderRef)sortKeyBuilder;
-(void)accessSortKeyBuilder:(/*^block*/id)arg1 ;
-(unsigned long long)unknownSectionIndex;
-(void)_postClientNotificationWithDistributedName:(id)arg1 localName:(id)arg2 ;
-(void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned)arg2 ;
-(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4 ;
-(void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned)arg2 ;
-(id)libraryContainerPath;
-(BOOL)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2 ;
-(void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(long long)purgeableStorageSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 ;
-(void)_autogenerateArtworkForRelativePath:(id)arg1 artworkType:(long long)arg2 mediaType:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSString *)originalArtworkDirectory;
-(BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4 ;
-(void)_convertOriginalArtworkToDevicePreferredFormatFromSourceURL:(id)arg1 toDestinationURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_updateBestArtworkTokensForArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 preserveExistingAvailableToken:(BOOL)arg4 usingConnection:(id)arg5 ;
-(void)_deleteAllArtworkVariantsAtRelativePaths:(id)arg1 ;
-(void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 usingConnection:(id)arg5 ;
-(BOOL)_insertArtworkRowWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 relativePath:(id)arg4 usingConnection:(id)arg5 ;
-(id)_allArtworkVariantDirectories;
-(void)importArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5 usingConnection:(id)arg6 ;
-(void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 usingConnection:(id)arg5 ;
-(void)updateBestArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(BOOL)arg5 usingConnection:(id)arg6 ;
-(BOOL)_determineAndUpdateBestArtworkTokensForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 retrievalTime:(double)arg4 preserveExistingAvailableToken:(BOOL)arg5 usingConnection:(id)arg6 ;
-(BOOL)cleanupArtworkWithOptions:(unsigned long long)arg1 usingConnection:(id)arg2 ;
-(BOOL)_removeOrphanedArtworkTokensUsingConnection:(id)arg1 ;
-(BOOL)_removeOrphanedArtworkMetadataUsingConnection:(id)arg1 ;
-(BOOL)_removeOrphanedArtworkAssetsUsingConnection:(id)arg1 ;
-(BOOL)_removeInvalidAvailableArtworkTokensUsingConnection:(id)arg1 ;
-(void)removeOrphanedTracksOnlyInCaches:(BOOL)arg1 ;
-(int)currentDatabaseVersion;
-(BOOL)hasPresignedValidity;
-(BOOL)verifyPresignedValidity;
-(void)updateTrackIntegrity;
-(void)deletePresignedValidity;
-(BOOL)isArtworkFetchableForPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 ;
-(NSString *)rootArtworkCacheDirectory;
-(id)artworkCacheDirectoryForSize:(CGSize)arg1 ;
-(BOOL)_shouldProcessAccountChanges;
-(BOOL)_prepareForAccountChange:(id*)arg1 ;
-(void)_completeAccountChangeWithPath:(id)arg1 ;
-(void)_closeAndLockCurrentDatabaseConnections;
-(void)_tearDownNotificationManager;
-(void)connectionWillOpenDatabase:(id)arg1 ;
-(void)connectionDidOpenDatabase:(id)arg1 ;
-(void)connectionWillCloseDatabase:(id)arg1 ;
-(void)connectionDidBeginDatabaseTransaction:(id)arg1 ;
-(void)connection:(id)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2 ;
-(void)connectionPool:(id)arg1 createdNewConnection:(id)arg2 ;
-(void)setIsHomeSharingLibrary:(BOOL)arg1 ;
-(BOOL)downloadOnAddToLibrary;
-(void)setDownloadOnAddToLibrary:(BOOL)arg1 ;
-(void)setSyncGenerationID:(long long)arg1 ;
-(void)setSyncLibraryID:(NSString *)arg1 ;
-(NSString *)syncLibraryID;
-(void)setLibraryUID:(NSString *)arg1 ;
-(BOOL)isLibraryEmpty;
-(BOOL)mediaRestrictionEnabled;
-(id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1 ;
-(id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1 ;
-(void)reconnectToDatabase;
-(void)performReadOnlyDatabaseTransactionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)automaticDatabaseValidationDisabled;
-(BOOL)createIndexes;
-(BOOL)emptyAllTables;
-(BOOL)clearAllGeniusData;
-(BOOL)clearAllCloudKVSData;
-(id)accountCacheDatabase;
-(id)groupingKeyForString:(id)arg1 ;
-(id)groupingKeysForStrings:(id)arg1 ;
-(void)notifySectionsDidChange;
-(void)notifyCloudLibraryAvailabilityDidChange;
-(void)notifyLibraryImportDidFinish;
-(void)notifyKeepLocalStateDidChange;
-(void)saveTrackMetadata;
-(void)savePlaylists;
-(BOOL)requiresSchemaOnlyUpdatesOnConnection:(id)arg1 ;
-(BOOL)requiresNonSchemaUpdatesOnConnection:(id)arg1 ;
-(BOOL)updateSortMap;
-(void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(long long)arg3 ;
-(unsigned long long)countOfChangedPersistentIdsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 ;
-(void)removeSource:(int)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeSource:(int)arg1 usingConnection:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingConnection:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(long long)autoFilledTracksTotalSize;
-(long long)autoFilledTracksTotalSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2 ;
-(void)autogenerateSupportedSizesForAllOriginalArtworkWithConnection:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)importExistingOriginalArtworkWithArtworkToken:(id)arg1 artworkType:(long long)arg2 sourceType:(long long)arg3 mediaType:(unsigned)arg4 ;
-(BOOL)importOriginalArtworkFromFileURL:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned)arg5 ;
-(BOOL)removeArtworkAssetWithToken:(id)arg1 ;
-(BOOL)deleteArtworkToken:(id)arg1 ;
-(void)migrateExistingArtworkToken:(id)arg1 newArtworkToken:(id)arg2 newSourceType:(long long)arg3 ;
-(void)removeArtworkTokenForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 ;
-(void)removeTombstonesForDeletedItems;
-(void)removeItemsWithFamilyAccountID:(unsigned long long)arg1 purchaserAccountID:(unsigned long long)arg2 downloaderAccountID:(unsigned long long)arg3 ;
-(void)migratePresignedValidity;
-(id)_newGeniusDBConnectionAtPath:(id)arg1 ;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;
-(NSArray *)libraryEntityFilterPredicates;
-(NSArray *)libraryContainerFilterPredicates;
-(NSArray *)libraryPublicEntityFilterPredicates;
-(NSArray *)libraryPublicContainerFilterPredicates;
-(void)setUsingSharedLibraryPath:(BOOL)arg1 ;
-(SCD_Struct_ML6)nameOrderForString:(id)arg1 ;
-(BOOL)supportsUbiquitousPlaybackPositions;
-(long long)syncIdFromMultiverseId:(id)arg1 ;
-(id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2 ;
-(id)artistForArtistName:(id)arg1 seriesName:(id)arg2 ;
-(BOOL)hasOriginalArtworkForRelativePath:(id)arg1 ;
-(id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(BOOL)arg5 ;
-(BOOL)repairAlbumArtistRelationshipsWithConnection:(id)arg1 ;
-(BOOL)_validateDatabaseUsingConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)coerceValidDatabaseWithError:(id*)arg1 ;
-(BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(BOOL)arg2 ;
-(BOOL)inTransactionUpdateSearchMapOnConnection:(id)arg1 ;
-(BOOL)inTransactionUpdateSortMapOnConnection:(id)arg1 forceRebuild:(BOOL)arg2 forceUpdateOriginals:(BOOL)arg3 ;
-(id)_systemUnicodeVersionData;
-(BOOL)coalesceMismatchedCollectionsUsingConnection:(id)arg1 ;
-(id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(BOOL*)arg2 ;
-(BOOL)_coalesceMismatchedCollectionClass:(Class)arg1 usingConnection:(id)arg2 ;
-(BOOL)updateSortMapOnConnection:(id)arg1 ;
-(BOOL)validateSortMapUnicodeVersionOnConnection:(id)arg1 ;
-(id)insertStringsIntoSortMap:(id)arg1 ;
-(long long)insertStringIntoSortMapNoTransaction:(id)arg1 ;
-(NSString *)artworkDirectory;
-(id)genreForGenre:(id)arg1 ;
-(BOOL)updateSystemPlaylistNamesForCurrentLanguage;
-(id)composerForComposerName:(id)arg1 ;
-(id)albumArtistForEffectiveAlbumArtistName:(id)arg1 ;
-(void)updateOrderingLanguagesForCurrentLanguage;
-(id)libraryContainerRelativePath:(id)arg1 ;
-(BOOL)autoFilledTracksArePurgeable;
-(long long)purgeableStorageSizeWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(BOOL)arg2 ;
-(long long)_databaseFileFreeSpace;
-(BOOL)shouldOptimizeStorage;
-(unsigned long long)_managedPurgeableTracksTotalSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)_purgeableTracksTotalSizeWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(BOOL)arg2 ;
-(long long)_purgeableArtworkTotalSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)_clearAllCloudAssets;
-(long long)clearPurgeableStorageAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeAutoFilledTracks:(BOOL)arg3 ;
-(long long)_clearOrphanedAssetsOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 ;
-(long long)_clearDatabaseFileFreeSpace;
-(unsigned long long)_managedClearPurgeableTracksOfAmount:(unsigned long long)arg1 urgency:(unsigned long long)arg2 ;
-(long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeAutoFilledTracks:(BOOL)arg3 ;
-(long long)_clearPurgeableArtworkOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 ;
-(long long)_clearPurgeableTracksOfAmount:(long long)arg1 withUrgency:(unsigned long long)arg2 includeCloudAssets:(BOOL)arg3 includeAutoFilledTracks:(BOOL)arg4 ;
-(id)pathForBaseLocationPath:(long long)arg1 ;
-(long long)_artworkTotalSize;
-(void)_enumeratePurgeableStreamedTracksForUrgency:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumeratePurgeableAlbumTracksForUrgency:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumeratePurgeablePodcastEpisodesForUrgency:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_nonPurgeableAlbumsQuerySQLWithUrgency:(unsigned long long)arg1 ;
-(id)_purgeableItemsPredicateSQLWithUrgency:(unsigned long long)arg1 ;
-(long long)minimumPurgeableStorage;
-(unsigned long long)_totalSizeForAllNonCacheTracks;
-(id)_purgeableAlbumsQuerySQLWithUrgency:(unsigned long long)arg1 ;
-(void)_enumeratePurgeableTracksForUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(BOOL)arg2 includeCloudAssets:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_purgeableTrackPredicateWithUrgency:(unsigned long long)arg1 includeAutoFilledTracks:(BOOL)arg2 includeCloudAssets:(BOOL)arg3 ;
-(BOOL)_shouldPurgeKeepLocalTracksForUrgency:(unsigned long long)arg1 ;
-(id)_allKeepLocalPlaylistTracks;
-(id)_notInKeepLocalCollectionPredicate;
-(long long)_cloudAssetsTotalSize;
-(long long)clearAllRemovedTracks;
-(void)setAutoFilledTracksArePurgeable:(BOOL)arg1 ;
-(void)setShouldOptimizeStorage:(BOOL)arg1 ;
-(void)setMinimumPurgeableStorage:(long long)arg1 ;
-(id)artworkCacheDirectoryForEffect:(id)arg1 ;
-(id)uppService;
-(void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1 ;
-(void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1 ;
-(NSNumber *)sagaLastKnownActiveLockerAccountDSID;
-(void)setSagaLastKnownActiveLockerAccountDSID:(NSNumber *)arg1 ;
-(NSDate *)sagaLastGeniusUpdateDate;
-(void)setSagaLastGeniusUpdateDate:(NSDate *)arg1 ;
-(NSString *)sagaCloudLibraryCUID;
-(void)setSagaCloudLibraryCUID:(NSString *)arg1 ;
-(NSString *)sagaCloudLibraryTroveID;
-(void)setSagaCloudLibraryTroveID:(NSString *)arg1 ;
-(long long)sagaCloudAddToPlaylistBehavior;
-(void)setSagaCloudAddToPlaylistBehavior:(long long)arg1 ;
-(BOOL)sagaNeedsFullUpdateAfterNextUpdate;
-(void)setSagaNeedsFullUpdateAfterNextUpdate:(BOOL)arg1 ;
-(BOOL)sagaPrefersToMergeWithCloudLibrary;
-(void)setSagaPrefersToMergeWithCloudLibrary:(BOOL)arg1 ;
-(void)clearSagaLastGeniusUpdateDate;
-(void)clearSagaCloudLibraryCUID;
-(void)clearSagaCloudLibraryTroveID;
-(void)clearSagaPrefersToMergeWithCloudLibrary;
-(void)clearSagaCloudAddToPlaylistBehavior;
-(BOOL)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(NSString *)jaliscoLastSupportedMediaKinds;
-(void)setJaliscoLastSupportedMediaKinds:(NSString *)arg1 ;
-(NSArray *)jaliscoLastExcludedMediaKinds;
-(void)clearJaliscoLastExcludedMediaKinds;
-(NSNumber *)jaliscoAccountID;
-(void)setJaliscoAccountID:(NSNumber *)arg1 ;
-(NSDate *)jaliscoLastGeniusUpdateDate;
-(void)setJaliscoLastGeniusUpdateDate:(NSDate *)arg1 ;
-(BOOL)jaliscoHasCloudGeniusData;
-(void)setJaliscoHasCloudGeniusData:(BOOL)arg1 ;
-(BOOL)jaliscoIsMusicGeniusUserEnabled;
-(void)setJaliscoIsMusicGeniusUserEnabled:(BOOL)arg1 ;
-(BOOL)jaliscoNeedsUpdateForTokens;
-(void)setJaliscoNeedsUpdateForTokens:(BOOL)arg1 ;
-(long long)jaliscoOnDiskDatabaseRevision;
-(void)setJaliscoOnDiskDatabaseRevision:(long long)arg1 ;
-(NSDate *)jaliscoLastLibraryUpdateTime;
-(void)setJaliscoLastLibraryUpdateTime:(NSDate *)arg1 ;
-(void)clearJaliscoAccountID;
-(void)clearJaliscoLastGeniusUpdateDate;
-(void)sortJaliscoLastSupportedMediaKinds;
-(void)updateJaliscoExcludedMediaKindsWith:(id)arg1 excludingMediaKindsInSet:(BOOL)arg2 ;
@end

