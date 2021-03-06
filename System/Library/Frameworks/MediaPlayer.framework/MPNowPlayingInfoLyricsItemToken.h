/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface MPNowPlayingInfoLyricsItemToken : NSObject {

	void* _mediaRemoteLyricsItemToken;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsItemToken;              //@synthesize mediaRemoteLyricsItemToken=_mediaRemoteLyricsItemToken - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
-(void)dealloc;
-(NSDictionary *)userInfo;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithMediaRemoteLyricsItemToken:(void*)arg1 ;
-(void*)mediaRemoteLyricsItemToken;
@end

