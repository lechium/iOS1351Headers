/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MTPlaybackQueueFactory : NSObject
+(id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(long long)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_uuidForEpisode:(id)arg1 ;
+(BOOL)_isContinuousPlaybackEnabledForLimit:(long long)arg1 ;
+(id)_latestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_oldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 ctx:(id)arg4 ;
+(id)_latestOrOldestEpisodeForPodcastUuid:(id)arg1 restrictToUserEpisodes:(BOOL)arg2 excludeExplicit:(long long)arg3 latest:(BOOL)arg4 ctx:(id)arg5 ;
+(id)episodeUuidsForPlayPodcastUuid:(id)arg1 order:(long long)arg2 limit:(long long)arg3 error:(long long*)arg4 ;
+(id)episodeUuidsForPlayStationUuid:(id)arg1 limit:(long long)arg2 ;
@end

