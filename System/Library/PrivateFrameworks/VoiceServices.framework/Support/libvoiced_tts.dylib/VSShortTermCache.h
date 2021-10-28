/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:06 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCache;

@interface VSShortTermCache : NSObject {

	NSCache* _cache;
	NSCache* _cacheTimer;

}

@property (nonatomic,retain) NSCache * cache;                   //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSCache * cacheTimer;              //@synthesize cacheTimer=_cacheTimer - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(void)setObject:(id)arg1 forKey:(id)arg2 timeToLive:(double)arg3 ;
-(NSCache *)cacheTimer;
-(void)timeToLiveTimerFired:(id)arg1 ;
-(void)setCacheTimer:(NSCache *)arg1 ;
@end
