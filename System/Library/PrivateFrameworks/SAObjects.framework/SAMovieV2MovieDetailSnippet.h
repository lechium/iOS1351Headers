/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, NSNumber, NSURL, SAMovieV2ReviewListSnippet, SAUIAppPunchOut, SAMovieV2ShowtimeSnippet, SAMovieV2TheaterShowtimeListSnippet, NSDate;

@interface SAMovieV2MovieDetailSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * actors; 
@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSArray * alternateProviderPunchouts; 
@property (nonatomic,copy) NSNumber * availableOnItunesForPurchase; 
@property (nonatomic,copy) NSNumber * availableOnItunesForRent; 
@property (assign,nonatomic) BOOL canBeFavorited; 
@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * genres; 
@property (nonatomic,copy) NSURL * hiresTrailerUri; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (assign,nonatomic) BOOL is3d; 
@property (assign,nonatomic) BOOL isContainerItem; 
@property (nonatomic,copy) NSURL * lowresTrailerUri; 
@property (nonatomic,copy) NSURL * movieIdentifier; 
@property (nonatomic,retain) SAMovieV2ReviewListSnippet * movieReviewListSnippet; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * playOnItunesPunchout; 
@property (nonatomic,copy) NSNumber * playTrailer; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (assign,nonatomic) long long runtimeInMinutes; 
@property (nonatomic,retain) SAMovieV2ShowtimeSnippet * showtimeSnippet; 
@property (nonatomic,copy) NSArray * studios; 
@property (nonatomic,copy) NSString * synopsis; 
@property (nonatomic,retain) SAMovieV2TheaterShowtimeListSnippet * theaterShowtimeListSnippet; 
@property (nonatomic,copy) NSString * theaterShowtimeSearchRegionDescription; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
@property (nonatomic,retain) SAUIAppPunchOut * videosPunchout; 
+(id)movieDetailSnippet;
+(id)movieDetailSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)rating;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(void)setRating:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(SAMovieV2TheaterShowtimeListSnippet *)theaterShowtimeListSnippet;
-(NSArray *)actors;
-(void)setActors:(NSArray *)arg1 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(BOOL)is3d;
-(void)setIs3d:(BOOL)arg1 ;
-(long long)runtimeInMinutes;
-(void)setRuntimeInMinutes:(long long)arg1 ;
-(NSArray *)studios;
-(void)setStudios:(NSArray *)arg1 ;
-(NSString *)synopsis;
-(void)setSynopsis:(NSString *)arg1 ;
-(NSString *)theaterShowtimeSearchRegionDescription;
-(void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg1 ;
-(NSNumber *)playTrailer;
-(void)setPlayTrailer:(NSNumber *)arg1 ;
-(SAMovieV2ShowtimeSnippet *)showtimeSnippet;
-(void)setShowtimeSnippet:(SAMovieV2ShowtimeSnippet *)arg1 ;
-(void)setTheaterShowtimeListSnippet:(SAMovieV2TheaterShowtimeListSnippet *)arg1 ;
-(NSArray *)alternateProviderPunchouts;
-(void)setAlternateProviderPunchouts:(NSArray *)arg1 ;
-(NSNumber *)availableOnItunesForPurchase;
-(void)setAvailableOnItunesForPurchase:(NSNumber *)arg1 ;
-(NSNumber *)availableOnItunesForRent;
-(void)setAvailableOnItunesForRent:(NSNumber *)arg1 ;
-(BOOL)canBeFavorited;
-(void)setCanBeFavorited:(BOOL)arg1 ;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(BOOL)isContainerItem;
-(void)setIsContainerItem:(BOOL)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)movieIdentifier;
-(void)setMovieIdentifier:(NSURL *)arg1 ;
-(SAMovieV2ReviewListSnippet *)movieReviewListSnippet;
-(void)setMovieReviewListSnippet:(SAMovieV2ReviewListSnippet *)arg1 ;
-(SAUIAppPunchOut *)playOnItunesPunchout;
-(void)setPlayOnItunesPunchout:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)videosPunchout;
-(void)setVideosPunchout:(SAUIAppPunchOut *)arg1 ;
@end

