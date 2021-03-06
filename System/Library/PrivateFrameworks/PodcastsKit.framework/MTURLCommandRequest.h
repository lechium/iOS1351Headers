/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MTURLCommandRequest : NSObject <NSCopying> {

	NSString* _urlString;
	unsigned long long _commandType;
	unsigned long long _playQueueType;
	unsigned long long _playReason;
	long long _playbackOrder;
	long long _playContext;
	long long _playContextSortType;
	NSString* _podcastUuid;
	NSString* _podcastFeedUrl;
	NSString* _episodeUuid;
	NSString* _podcastAdamId;
	NSString* _episodeAdamId;
	NSString* _stationUuid;

}

@property (nonatomic,readonly) NSString * urlString;                          //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) unsigned long long commandType;                //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) unsigned long long playQueueType;              //@synthesize playQueueType=_playQueueType - In the implementation block
@property (nonatomic,readonly) unsigned long long playReason;                 //@synthesize playReason=_playReason - In the implementation block
@property (nonatomic,readonly) long long playbackOrder;                       //@synthesize playbackOrder=_playbackOrder - In the implementation block
@property (nonatomic,readonly) long long playContext;                         //@synthesize playContext=_playContext - In the implementation block
@property (nonatomic,readonly) long long playContextSortType;                 //@synthesize playContextSortType=_playContextSortType - In the implementation block
@property (nonatomic,readonly) NSString * podcastUuid;                        //@synthesize podcastUuid=_podcastUuid - In the implementation block
@property (nonatomic,readonly) NSString * podcastFeedUrl;                     //@synthesize podcastFeedUrl=_podcastFeedUrl - In the implementation block
@property (nonatomic,readonly) NSString * episodeUuid;                        //@synthesize episodeUuid=_episodeUuid - In the implementation block
@property (nonatomic,readonly) NSString * podcastAdamId;                      //@synthesize podcastAdamId=_podcastAdamId - In the implementation block
@property (nonatomic,readonly) NSString * episodeAdamId;                      //@synthesize episodeAdamId=_episodeAdamId - In the implementation block
@property (nonatomic,readonly) NSString * stationUuid;                        //@synthesize stationUuid=_stationUuid - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)urlString;
-(id)initWithURLString:(id)arg1 ;
-(unsigned long long)commandType;
-(NSString *)podcastUuid;
-(void)_loadQueryParameterValuesFromString:(id)arg1 ;
-(void)_lookupPodcastUuidIfNecessaryFromURLString:(id)arg1 ;
-(void)_lookupEpisodeUuidIfNecessaryFromURLString:(id)arg1 ;
-(NSString *)episodeUuid;
-(id)copyWithPlayReason:(unsigned long long)arg1 ;
-(unsigned long long)playQueueType;
-(unsigned long long)playReason;
-(long long)playbackOrder;
-(long long)playContext;
-(long long)playContextSortType;
-(NSString *)podcastFeedUrl;
-(NSString *)podcastAdamId;
-(NSString *)episodeAdamId;
-(NSString *)stationUuid;
@end

