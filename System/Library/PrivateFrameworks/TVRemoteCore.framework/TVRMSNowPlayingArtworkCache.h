/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _RMSNowPlayingArtworkCacheItem, NSCache;

@interface TVRMSNowPlayingArtworkCache : NSObject {

	_RMSNowPlayingArtworkCacheItem* _lastItem;
	NSCache* _cache;

}
+(id)sharedArtworkCache;
-(id)init;
-(id)artworkDataForIdentifier:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forIdentifier:(id)arg2 ;
-(id)artworkDataForNowPlayingInfo:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forNowPlayingInfo:(id)arg2 ;
@end

