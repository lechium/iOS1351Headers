/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPNowPlayingInfoLyricsItemToken, NSString;

@interface MPNowPlayingInfoLyricsItem : NSObject {

	void* _mediaRemoteLyricsItem;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsItem;                          //@synthesize mediaRemoteLyricsItem=_mediaRemoteLyricsItem - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoLyricsItemToken * token; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) BOOL userProvided; 
-(void)dealloc;
-(MPNowPlayingInfoLyricsItemToken *)token;
-(NSString *)lyrics;
-(id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 ;
-(id)initWithLyrics:(id)arg1 userProvided:(BOOL)arg2 token:(id)arg3 ;
-(id)initWithMediaRemoteLyricsItem:(void*)arg1 ;
-(BOOL)userProvided;
-(void*)mediaRemoteLyricsItem;
@end

