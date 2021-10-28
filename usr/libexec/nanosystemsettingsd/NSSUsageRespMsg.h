//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NSSUsageRespMsg : PBCodable <NSCopying>
{
    unsigned long long _audioCoursesUsage;	// 8 = 0x8
    unsigned long long _audioPodcastsUsage;	// 16 = 0x10
    unsigned long long _audiobooksUsage;	// 24 = 0x18
    unsigned long long _availableStorageInBytes;	// 32 = 0x20
    unsigned long long _cameralRollUsage;	// 40 = 0x28
    unsigned long long _homeVideosUsage;	// 48 = 0x30
    unsigned long long _movieRentalsUsage;	// 56 = 0x38
    unsigned long long _moviesUsage;	// 64 = 0x40
    unsigned long long _musicVideosUsage;	// 72 = 0x48
    unsigned long long _photoLibraryUsage;	// 80 = 0x50
    unsigned long long _photoStreamUsage;	// 88 = 0x58
    unsigned long long _songsUsage;	// 96 = 0x60
    unsigned long long _tvShowsUsage;	// 104 = 0x68
    unsigned long long _usedStorageInBytes;	// 112 = 0x70
    unsigned long long _videoCoursesUsage;	// 120 = 0x78
    unsigned long long _videoPodcastsUsage;	// 128 = 0x80
    NSMutableArray *_appUsages;	// 136 = 0x88
    NSMutableArray *_bundleUsages;	// 144 = 0x90
    NSString *_musicBundleIdentifier;	// 152 = 0x98
    NSString *_photosBundleIdentifier;	// 160 = 0xa0
    NSString *_podcastsBundleIdentifier;	// 168 = 0xa8
    float _standbyTimeInSeconds;	// 176 = 0xb0
    float _usageTimeInSeconds;	// 180 = 0xb4
    _Bool _partiallyCharged;	// 184 = 0xb8
    _Bool _trusted;	// 185 = 0xb9
    struct {
        unsigned int audioCoursesUsage:1;
        unsigned int audioPodcastsUsage:1;
        unsigned int audiobooksUsage:1;
        unsigned int cameralRollUsage:1;
        unsigned int homeVideosUsage:1;
        unsigned int movieRentalsUsage:1;
        unsigned int moviesUsage:1;
        unsigned int musicVideosUsage:1;
        unsigned int photoLibraryUsage:1;
        unsigned int photoStreamUsage:1;
        unsigned int songsUsage:1;
        unsigned int tvShowsUsage:1;
        unsigned int videoCoursesUsage:1;
        unsigned int videoPodcastsUsage:1;
    } _has;	// 188 = 0xbc
}

+ (Class)bundleUsageType;	// IMP=0x000000010000c060
+ (Class)appUsagesType;	// IMP=0x000000010000bae8
- (void).cxx_destruct;	// IMP=0x000000010000f8a0
@property(retain, nonatomic) NSString *podcastsBundleIdentifier; // @synthesize podcastsBundleIdentifier=_podcastsBundleIdentifier;
@property(retain, nonatomic) NSString *photosBundleIdentifier; // @synthesize photosBundleIdentifier=_photosBundleIdentifier;
@property(retain, nonatomic) NSString *musicBundleIdentifier; // @synthesize musicBundleIdentifier=_musicBundleIdentifier;
@property(retain, nonatomic) NSMutableArray *bundleUsages; // @synthesize bundleUsages=_bundleUsages;
@property(nonatomic) unsigned long long photoStreamUsage; // @synthesize photoStreamUsage=_photoStreamUsage;
@property(nonatomic) unsigned long long photoLibraryUsage; // @synthesize photoLibraryUsage=_photoLibraryUsage;
@property(nonatomic) unsigned long long cameralRollUsage; // @synthesize cameralRollUsage=_cameralRollUsage;
@property(nonatomic) unsigned long long homeVideosUsage; // @synthesize homeVideosUsage=_homeVideosUsage;
@property(nonatomic) unsigned long long audiobooksUsage; // @synthesize audiobooksUsage=_audiobooksUsage;
@property(nonatomic) unsigned long long songsUsage; // @synthesize songsUsage=_songsUsage;
@property(nonatomic) unsigned long long videoPodcastsUsage; // @synthesize videoPodcastsUsage=_videoPodcastsUsage;
@property(nonatomic) unsigned long long audioPodcastsUsage; // @synthesize audioPodcastsUsage=_audioPodcastsUsage;
@property(nonatomic) unsigned long long musicVideosUsage; // @synthesize musicVideosUsage=_musicVideosUsage;
@property(nonatomic) unsigned long long videoCoursesUsage; // @synthesize videoCoursesUsage=_videoCoursesUsage;
@property(nonatomic) unsigned long long audioCoursesUsage; // @synthesize audioCoursesUsage=_audioCoursesUsage;
@property(nonatomic) unsigned long long tvShowsUsage; // @synthesize tvShowsUsage=_tvShowsUsage;
@property(nonatomic) unsigned long long movieRentalsUsage; // @synthesize movieRentalsUsage=_movieRentalsUsage;
@property(nonatomic) unsigned long long moviesUsage; // @synthesize moviesUsage=_moviesUsage;
@property(retain, nonatomic) NSMutableArray *appUsages; // @synthesize appUsages=_appUsages;
@property(nonatomic) _Bool partiallyCharged; // @synthesize partiallyCharged=_partiallyCharged;
@property(nonatomic) _Bool trusted; // @synthesize trusted=_trusted;
@property(nonatomic) float standbyTimeInSeconds; // @synthesize standbyTimeInSeconds=_standbyTimeInSeconds;
@property(nonatomic) float usageTimeInSeconds; // @synthesize usageTimeInSeconds=_usageTimeInSeconds;
@property(nonatomic) unsigned long long availableStorageInBytes; // @synthesize availableStorageInBytes=_availableStorageInBytes;
@property(nonatomic) unsigned long long usedStorageInBytes; // @synthesize usedStorageInBytes=_usedStorageInBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000f168
- (unsigned long long)hash;	// IMP=0x000000010000ed54
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000e91c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000e3ac
- (void)copyTo:(id)arg1;	// IMP=0x000000010000df50
- (void)writeTo:(id)arg1;	// IMP=0x000000010000da9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000da94
- (id)dictionaryRepresentation;	// IMP=0x000000010000c168
- (id)description;	// IMP=0x000000010000c0b4
@property(readonly, nonatomic) _Bool hasPodcastsBundleIdentifier;
@property(readonly, nonatomic) _Bool hasPhotosBundleIdentifier;
@property(readonly, nonatomic) _Bool hasMusicBundleIdentifier;
- (id)bundleUsageAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000c048
- (unsigned long long)bundleUsagesCount;	// IMP=0x000000010000c030
- (void)addBundleUsage:(id)arg1;	// IMP=0x000000010000bfbc
- (void)clearBundleUsages;	// IMP=0x000000010000bfa4
@property(nonatomic) _Bool hasPhotoStreamUsage;
@property(nonatomic) _Bool hasPhotoLibraryUsage;
@property(nonatomic) _Bool hasCameralRollUsage;
@property(nonatomic) _Bool hasHomeVideosUsage;
@property(nonatomic) _Bool hasAudiobooksUsage;
@property(nonatomic) _Bool hasSongsUsage;
@property(nonatomic) _Bool hasVideoPodcastsUsage;
@property(nonatomic) _Bool hasAudioPodcastsUsage;
@property(nonatomic) _Bool hasMusicVideosUsage;
@property(nonatomic) _Bool hasVideoCoursesUsage;
@property(nonatomic) _Bool hasAudioCoursesUsage;
@property(nonatomic) _Bool hasTvShowsUsage;
@property(nonatomic) _Bool hasMovieRentalsUsage;
@property(nonatomic) _Bool hasMoviesUsage;
- (id)appUsagesAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000bad0
- (unsigned long long)appUsagesCount;	// IMP=0x000000010000bab8
- (void)addAppUsages:(id)arg1;	// IMP=0x000000010000ba44
- (void)clearAppUsages;	// IMP=0x000000010000ba2c

@end
