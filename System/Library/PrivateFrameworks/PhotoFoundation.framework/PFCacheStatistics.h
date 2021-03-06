/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PFCacheStatistics : NSObject {

	unsigned long long _hits;
	unsigned long long _misses;
	unsigned long long _evictions;

}

@property (readonly) unsigned long long hits;                   //@synthesize hits=_hits - In the implementation block
@property (readonly) unsigned long long misses;                 //@synthesize misses=_misses - In the implementation block
@property (readonly) unsigned long long evictions;              //@synthesize evictions=_evictions - In the implementation block
-(id)description;
-(void)recordEvictions:(unsigned long long)arg1 ;
-(void)recordMiss;
-(void)recordHit;
-(void)accumulate:(id)arg1 ;
-(unsigned long long)hits;
-(unsigned long long)misses;
-(unsigned long long)evictions;
@end

