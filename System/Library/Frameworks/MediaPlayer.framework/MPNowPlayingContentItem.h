/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPContentItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPNowPlayingContentItemArtworkDataSource;
@class NSDictionary, NSString, NSArray, MPNowPlayingInfoLyricsItem, MPMediaItemArtwork, NSDate;

@interface MPNowPlayingContentItem : MPContentItem <NSCopying> {

	NSDictionary* _nowPlayingInfo;
	id<MPNowPlayingContentItemArtworkDataSource> _artworkDataSource;

}

@property (nonatomic,copy) NSString * info; 
@property (nonatomic,copy) NSArray * availableLanguageOptions; 
@property (nonatomic,copy) NSArray * currentLanguageOptions; 
@property (nonatomic,copy) NSArray * sections; 
@property (nonatomic,copy) MPNowPlayingInfoLyricsItem * lyrics; 
@property (nonatomic,retain) MPMediaItemArtwork * artwork; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double elapsedTime; 
@property (assign,nonatomic) float playbackRate; 
@property (assign,nonatomic) long long storeAlbumID; 
@property (assign,nonatomic) long long storeArtistID; 
@property (assign,nonatomic) long long storeID; 
@property (assign,nonatomic) long long storeSubscriptionID; 
@property (assign,nonatomic) long long legacyUniqueID; 
@property (assign,nonatomic) unsigned long long mediaType; 
@property (nonatomic,copy) NSDictionary * deviceSpecificUserInfo; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,getter=isSharableItem,nonatomic) BOOL sharableItem; 
@property (assign,getter=isSteerable,nonatomic) BOOL steerable; 
@property (assign,nonatomic) long long episodeType; 
@property (nonatomic,readonly) NSDictionary * auxiliaryNowPlayingInfo; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (nonatomic,retain) id<MPNowPlayingContentItemArtworkDataSource> artworkDataSource;              //@synthesize artworkDataSource=_artworkDataSource - In the implementation block
@property (nonatomic,copy) NSDictionary * collectionInfo; 
@property (assign,getter=isExplicitItem,nonatomic) BOOL explicitItem; 
@property (nonatomic,copy) NSString * albumName; 
@property (nonatomic,copy) NSString * trackArtistName; 
@property (nonatomic,copy) NSString * albumArtistName; 
@property (nonatomic,copy) NSString * directorName; 
@property (nonatomic,copy) NSString * composerName; 
@property (nonatomic,copy) NSString * genreName; 
@property (nonatomic,copy) NSString * seriesName; 
@property (assign,nonatomic) long long seasonNumber; 
@property (assign,nonatomic) long long episodeNumber; 
@property (assign,nonatomic) long long discNumber; 
@property (assign,nonatomic) long long totalDiscCount; 
@property (assign,nonatomic) long long trackNumber; 
@property (assign,nonatomic) long long totalTrackCount; 
@property (nonatomic,copy) NSString * albumYear; 
@property (nonatomic,copy) NSDate * releaseDate; 
@property (nonatomic,copy) NSString * localizedContentRating; 
@property (nonatomic,copy) NSString * collectionIdentifier; 
@property (nonatomic,copy) NSString * profileIdentifier; 
@property (assign,nonatomic) long long playlistType; 
@property (assign,nonatomic) long long radioStationType; 
@property (nonatomic,copy) NSString * radioStationName; 
@property (nonatomic,copy) NSString * radioStationStringIdentifier; 
@property (nonatomic,copy) NSString * externalContentIdentifier; 
@property (assign,nonatomic) long long numberOfChildren; 
@property (assign,nonatomic) long long playCount; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) float defaultPlaybackRate; 
@property (assign,getter=isAlwaysLiveItem,nonatomic) BOOL alwaysLiveItem; 
@property (nonatomic,copy) NSString * localizedDurationString; 
@property (nonatomic,readonly) double elapsedTimeTimestamp; 
@property (assign,nonatomic) long long editingStyleFlags; 
@property (assign,nonatomic) BOOL hasArtwork; 
@property (nonatomic,copy) NSString * artworkIdentifier; 
@property (nonatomic,copy) NSString * artworkURL; 
@property (nonatomic,copy) NSArray * artworkURLTemplates; 
@property (assign,nonatomic) BOOL hasDescription; 
@property (assign,nonatomic) BOOL hasLanguageOptions; 
@property (assign,nonatomic) BOOL hasLyrics; 
+(BOOL)shouldPushArtworkData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(double)duration;
-(NSString *)info;
-(unsigned long long)mediaType;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(double)elapsedTime;
-(void)setInfo:(NSString *)arg1 ;
-(BOOL)isLoading;
-(long long)storeID;
-(void)setArtwork:(MPMediaItemArtwork *)arg1 ;
-(BOOL)hasArtwork;
-(id<MPNowPlayingContentItemArtworkDataSource>)artworkDataSource;
-(void)setMediaType:(unsigned long long)arg1 ;
-(MPNowPlayingInfoLyricsItem *)lyrics;
-(void)setLoading:(BOOL)arg1 ;
-(long long)playCount;
-(void)setPlayCount:(long long)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(long long)numberOfChildren;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setNumberOfChildren:(long long)arg1 ;
-(float)defaultPlaybackRate;
-(void)setDefaultPlaybackRate:(float)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(NSString *)albumYear;
-(long long)discNumber;
-(NSString *)externalContentIdentifier;
-(NSString *)composerName;
-(BOOL)hasLyrics;
-(long long)playlistType;
-(long long)trackNumber;
-(long long)seasonNumber;
-(NSString *)albumArtistName;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(NSString *)artworkIdentifier;
-(BOOL)isExplicitItem;
-(void)setArtworkDataSource:(id<MPNowPlayingContentItemArtworkDataSource>)arg1 ;
-(id)copyWithNewIdentifier:(id)arg1 ;
-(NSDictionary *)deviceSpecificUserInfo;
-(void)setDeviceSpecificUserInfo:(NSDictionary *)arg1 ;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(void)setAlbumYear:(NSString *)arg1 ;
-(NSString *)collectionIdentifier;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)directorName;
-(void)setDirectorName:(NSString *)arg1 ;
-(NSString *)localizedContentRating;
-(void)setLocalizedContentRating:(NSString *)arg1 ;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(NSString *)radioStationName;
-(void)setRadioStationName:(NSString *)arg1 ;
-(NSString *)seriesName;
-(void)setSeriesName:(NSString *)arg1 ;
-(NSString *)trackArtistName;
-(void)setTrackArtistName:(NSString *)arg1 ;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(NSArray *)artworkURLTemplates;
-(void)setArtworkURLTemplates:(NSArray *)arg1 ;
-(NSString *)localizedDurationString;
-(void)setLocalizedDurationString:(NSString *)arg1 ;
-(void)setDiscNumber:(long long)arg1 ;
-(long long)episodeNumber;
-(void)setEpisodeNumber:(long long)arg1 ;
-(void)setSeasonNumber:(long long)arg1 ;
-(long long)totalDiscCount;
-(void)setTotalDiscCount:(long long)arg1 ;
-(long long)totalTrackCount;
-(void)setTotalTrackCount:(long long)arg1 ;
-(void)setTrackNumber:(long long)arg1 ;
-(void)setComposerName:(NSString *)arg1 ;
-(NSString *)genreName;
-(void)setGenreName:(NSString *)arg1 ;
-(NSString *)radioStationStringIdentifier;
-(void)setRadioStationStringIdentifier:(NSString *)arg1 ;
-(void)setExternalContentIdentifier:(NSString *)arg1 ;
-(BOOL)isAlwaysLiveItem;
-(void)setAlwaysLiveItem:(BOOL)arg1 ;
-(BOOL)isSharableItem;
-(void)setSharableItem:(BOOL)arg1 ;
-(BOOL)isSteerable;
-(void)setSteerable:(BOOL)arg1 ;
-(long long)storeAlbumID;
-(void)setStoreAlbumID:(long long)arg1 ;
-(long long)storeArtistID;
-(void)setStoreArtistID:(long long)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(long long)storeSubscriptionID;
-(void)setStoreSubscriptionID:(long long)arg1 ;
-(long long)legacyUniqueID;
-(void)setLegacyUniqueID:(long long)arg1 ;
-(void)setPlaylistType:(long long)arg1 ;
-(long long)radioStationType;
-(void)setRadioStationType:(long long)arg1 ;
-(long long)episodeType;
-(void)setEpisodeType:(long long)arg1 ;
-(long long)editingStyleFlags;
-(void)setEditingStyleFlags:(long long)arg1 ;
-(double)elapsedTimeTimestamp;
-(NSDictionary *)collectionInfo;
-(void)setCollectionInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)auxiliaryNowPlayingInfo;
-(void)setElapsedTime:(double)arg1 playbackRate:(float)arg2 ;
-(BOOL)hasLanguageOptions;
-(void)setHasLanguageOptions:(BOOL)arg1 ;
-(NSArray *)availableLanguageOptions;
-(void)setAvailableLanguageOptions:(NSArray *)arg1 ;
-(NSArray *)currentLanguageOptions;
-(void)setCurrentLanguageOptions:(NSArray *)arg1 ;
-(void)invalidateLanguageOptions;
-(BOOL)hasDescription;
-(void)setHasDescription:(BOOL)arg1 ;
-(void)invalidateDescription;
-(void)setHasLyrics:(BOOL)arg1 ;
-(void)setLyrics:(MPNowPlayingInfoLyricsItem *)arg1 ;
-(void)invalidateLyrics;
-(void)setHasArtwork:(BOOL)arg1 ;
-(void)invalidateArtwork;
-(void)_mergeContentItem:(id)arg1 ;
-(void)setExplicitItem:(BOOL)arg1 ;
@end

