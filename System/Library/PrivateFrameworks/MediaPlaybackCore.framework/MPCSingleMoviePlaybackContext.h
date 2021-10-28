/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPPlaybackContext.h>

@class MPMovie;

@interface MPCSingleMoviePlaybackContext : MPPlaybackContext {

	MPMovie* _movie;

}

@property (nonatomic,readonly) MPMovie * movie;              //@synthesize movie=_movie - In the implementation block
+(Class)queueFeederClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPMovie *)movie;
-(id)initWithMovie:(id)arg1 ;
@end
