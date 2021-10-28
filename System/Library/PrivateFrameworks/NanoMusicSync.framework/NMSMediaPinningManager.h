/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NMSyncDefaults, NMSPodcastSizeCache, NMSMediaSyncInfo, NSObject, NSArray, NMSMediaQuotaManager, NMSMediaDownloadInfo, NSNumber, NSOrderedSet, NSString;

@interface NMSMediaPinningManager : NSObject <ICEnvironmentMonitorObserver> {

	NMSyncDefaults* _sharedDefaults;
	NMSPodcastSizeCache* _podcastSizeCache;
	NMSMediaSyncInfo* _podcastStationsSyncInfo;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSArray* _cachedPlaylistIdentifiers;
	NSArray* _cachedAlbumIdentifiers;
	NSArray* _cachedPodcastFeedURLs;
	NSArray* _cachedAudiobookIdentifiers;
	BOOL _pinnedPlaylistsValidated;
	BOOL _workoutPlaylistValidated;
	NMSMediaQuotaManager* _quotaManager;

}

@property (nonatomic,retain) NMSMediaQuotaManager * quotaManager;                            //@synthesize quotaManager=_quotaManager - In the implementation block
@property (nonatomic,readonly) NMSMediaDownloadInfo * downloadInfo; 
@property (nonatomic,readonly) NSArray * pinnedPlaylists; 
@property (nonatomic,readonly) NSArray * playlistIdentifiers; 
@property (nonatomic,readonly) NSArray * pinnedAlbums; 
@property (nonatomic,readonly) NSArray * albumIdentifiers; 
@property (nonatomic,retain) NSNumber * workoutPlaylistID; 
@property (assign,nonatomic) BOOL pinnedPodcastsAreUserSet; 
@property (nonatomic,readonly) NSArray * podcastFeedURLs; 
@property (nonatomic,readonly) NSArray * audiobookIdentifiers; 
@property (assign,getter=isWantToReadEnabled,nonatomic) BOOL wantToReadEnabled; 
@property (nonatomic,retain) NSOrderedSet * wantToReadAudiobooks; 
@property (assign,getter=isReadingNowEnabled,nonatomic) BOOL readingNowEnabled; 
@property (nonatomic,retain) NSOrderedSet * readingNowAudiobooks; 
@property (nonatomic,readonly) NSOrderedSet * pinnedAudiobooks; 
@property (assign,nonatomic) double audiobookDownloadLimit; 
@property (nonatomic,readonly) NSArray * addedMusicItems; 
@property (nonatomic,readonly) NSArray * addedPodcastsItems; 
@property (nonatomic,readonly) NSArray * overQuotaMusicItems; 
@property (nonatomic,readonly) NSArray * overQuotaPodcastsItems; 
@property (nonatomic,readonly) NSArray * offPowerEligibleSongsList; 
@property (nonatomic,readonly) NSArray * onlyOnPowerSongsList; 
@property (nonatomic,readonly) NSArray * addedPodcastEpisodesArray; 
@property (nonatomic,retain) NSNumber * podcastsAssetSyncLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(unsigned long long)_mediaStorageSizeForCurrentDevice;
+(id)_cachedAlbumIdentifiersFilePath;
+(id)_cachedPlaylistIdentifiersFilePath;
+(BOOL)playlistPIDValidForPinning:(id)arg1 ;
+(id)_cachedPodcastFeedURLsFilePath;
+(id)_cachedAudiobookIdentifiersFilePath;
+(id)_tokenForInstance:(id)arg1 ;
+(void)_persistNewClientToken;
+(id)_fetchMusicRecommendations;
+(id)_cachedIdentifiersDirectoryPath;
-(id)init;
-(void)dealloc;
-(NSArray *)playlistIdentifiers;
-(NMSMediaQuotaManager *)quotaManager;
-(NMSMediaDownloadInfo *)downloadInfo;
-(BOOL)isItemGroupWithinQuota:(id)arg1 ;
-(void)_handlePodcastStationsDidChange:(id)arg1 ;
-(void)_handleMusicPinningSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handleRecommendationLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_handleRecommendationsDidUpdateNotification:(id)arg1 ;
-(void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handlePodcastsSubscriptionMetadataDidChangeNotification:(id)arg1 ;
-(void)_handlePodcastSizeInfoDidChangeNotification:(id)arg1 ;
-(void)_handleAudiobooksPinningSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handleAudiobooksRecommendationsDidChangeNotification:(id)arg1 ;
-(void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1 ;
-(void)_handleICAgeVerificationStateDidChangeNotification:(id)arg1 ;
-(void)_handleRecommendationSelectionsDidChangeNotification:(id)arg1 ;
-(void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg1 ;
-(void)_handlePodcastSizeCacheDidUpdateNotification:(id)arg1 ;
-(void)_handleMediaPinningMusicContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMediaPinningPodcastsContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMediaPinningAudiobooksContentsInvalidatedNotification:(id)arg1 ;
-(void)_handleMediaPinningManagerMusicIdentifiersDidChangeNotification:(id)arg1 ;
-(void)_handleMediaPinningManagerPodcastsIdentifiersDidChangeNotification:(id)arg1 ;
-(void)_handleMediaPinningManagerAudiobooksIdentifiersDidChangeNotification:(id)arg1 ;
-(BOOL)_quotaManagerShouldFetchDownloadedItemsOnlyForBundleIdentifier:(id)arg1 ;
-(id)_newMusicGroupIteratorWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)_newPodcastsGroupIteratorWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)_newAudiobooksGroupIteratorWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)_groupIteratorIdentifierForBundleIdentifier:(id)arg1 ;
-(void)_invalidateMediaCacheForAppIdentifiers:(unsigned long long)arg1 ;
-(BOOL)_shouldCalculateCachedIdentifiers;
-(void)_refreshMusicIdentifiers;
-(void)_fetchMusicIdentifiers;
-(NSArray *)pinnedAlbums;
-(NSArray *)pinnedPlaylists;
-(BOOL)_isAlbumPinned:(id)arg1 ;
-(BOOL)_isPlaylistPinned:(id)arg1 ;
-(NSNumber *)workoutPlaylistID;
-(void)_setWorkoutPlaylistID:(id)arg1 ;
-(void)setWorkoutPlaylistID:(NSNumber *)arg1 ;
-(void)_updateWorkoutSettingsPlaylistPIDTo:(id)arg1 ;
-(BOOL)pinnedPodcastsAreUserSet;
-(void)setPinnedPodcastsAreUserSet:(BOOL)arg1 ;
-(void)_refreshPodcastFeedURLs;
-(void)_fetchPodcastFeedURLs;
-(void)setListenNowPodcastFeedURLs:(id)arg1 ;
-(void)_refreshAudiobookIdentifiers;
-(void)_fetchAudiobookIdentifiers;
-(void)setWantToReadEnabled:(BOOL)arg1 ;
-(NSOrderedSet *)wantToReadAudiobooks;
-(void)setWantToReadAudiobooks:(NSOrderedSet *)arg1 ;
-(void)setReadingNowEnabled:(BOOL)arg1 ;
-(NSOrderedSet *)readingNowAudiobooks;
-(void)setReadingNowAudiobooks:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)pinnedAudiobooks;
-(BOOL)_isAudiobookPinned:(id)arg1 ;
-(double)_audiobookDownloadLimit;
-(double)audiobookDownloadLimit;
-(void)setAudiobookDownloadLimit:(double)arg1 ;
-(void)_notePinningSettingsChangedLocally;
-(BOOL)_shouldSkipQuotaManagerEvaluation;
-(void)_invalidateAddedItemsCache;
-(id)_newQuotaManagerWithQuota:(unsigned long long)arg1 downloadedItemsOnly:(BOOL)arg2 ;
-(NSArray *)addedMusicItems;
-(NSArray *)addedPodcastsItems;
-(NSNumber *)podcastsAssetSyncLimit;
-(void)setPodcastsAssetSyncLimit:(NSNumber *)arg1 ;
-(id)downloadInfoWithinAvailableSpace:(unsigned long long)arg1 ;
-(id)downloadInfoForBundleIdentifier:(id)arg1 ;
-(void)invalidateMusicCache;
-(unsigned long long)addedSongsSize;
-(unsigned long long)nominatedSongsSize;
-(NSArray *)albumIdentifiers;
-(BOOL)isAlbumPinned:(id)arg1 ;
-(BOOL)isPlaylistPinned:(id)arg1 ;
-(void)pinAlbum:(id)arg1 ;
-(void)pinPlaylist:(id)arg1 ;
-(void)unpinAlbum:(id)arg1 ;
-(void)unpinPlaylist:(id)arg1 ;
-(void)invalidatePodcastsCache;
-(void)setGizmoDownloadOrder:(unsigned long long)arg1 forPodcastWithFeedURL:(id)arg2 ;
-(void)removePodcastWithFeedURL:(id)arg1 ;
-(unsigned long long)downloadOrderForPodcastWithFeedURL:(id)arg1 ;
-(void)setGizmoEpisodeLimit:(unsigned long long)arg1 forPodcastWithFeedURL:(id)arg2 ;
-(unsigned long long)episodeLimitForPodcastWithFeedURL:(id)arg1 ;
-(NSArray *)podcastFeedURLs;
-(void)pinPodcastWithFeedURL:(id)arg1 ;
-(void)unpinPodcastWithFeedURL:(id)arg1 ;
-(BOOL)isPodcastWithFeedURLPinned:(id)arg1 ;
-(void)pinPodcastStationWithUUID:(id)arg1 ;
-(void)unpinPodcastStationWithUUID:(id)arg1 ;
-(BOOL)isPodcastStationWithUUIDPinned:(id)arg1 ;
-(void)invalidateAudiobooksCache;
-(NSArray *)audiobookIdentifiers;
-(BOOL)isWantToReadEnabled;
-(BOOL)isReadingNowEnabled;
-(BOOL)isAudiobookPinned:(id)arg1 ;
-(void)pinAudiobook:(id)arg1 ;
-(void)unpinAudiobook:(id)arg1 ;
-(id)addedDownloadInfoItemsWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)addedMusicDownloadInfoItemsWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)addedPodcastsDownloadInfoItemsWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)addedAudiobooksDownloadInfoItemsWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)addedItemsForDownloadWithinAvailableSpace:(unsigned long long)arg1 ;
-(id)addedItemsWithMediaTypes:(unsigned)arg1 ;
-(NSArray *)overQuotaMusicItems;
-(NSArray *)overQuotaPodcastsItems;
-(id)addedItemsWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)addedMusicItemsWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)addedPodcastsItemsWithDownloadedItemsOnly:(BOOL)arg1 ;
-(id)addedAudiobooksItemsWithDownloadedItemsOnly:(BOOL)arg1 ;
-(NSArray *)offPowerEligibleSongsList;
-(NSArray *)onlyOnPowerSongsList;
-(void)setListenNowEpisodePIDs:(id)arg1 ;
-(NSArray *)addedPodcastEpisodesArray;
-(void)pinPodcastWithIdentifiers:(id)arg1 ;
-(void)unpinPodcastWithIdentifiers:(id)arg1 ;
-(BOOL)isPodcastWithIdentifiersPinned:(id)arg1 ;
-(void)setQuotaManager:(NMSMediaQuotaManager *)arg1 ;
-(BOOL)nms_modelObjectIsManuallyPinned:(id)arg1 ;
-(void)_pinModelObject:(id)arg1 ;
-(void)_unpinModelObject:(id)arg1 ;
-(void)nms_fetchPinningStatusForModelObject:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)nms_pinModelObject:(id)arg1 ;
-(void)nms_unpinModelObject:(id)arg1 ;
@end
