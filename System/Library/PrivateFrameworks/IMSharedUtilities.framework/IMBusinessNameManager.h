/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock, NSMutableDictionary;

@interface IMBusinessNameManager : NSObject {

	NSLock* _cacheLock;
	NSMutableDictionary* _cache;
	NSMutableDictionary* _pendingRequests;

}

@property (retain) NSLock * cacheLock;                                 //@synthesize cacheLock=_cacheLock - In the implementation block
@property (retain) NSMutableDictionary * cache;                        //@synthesize cache=_cache - In the implementation block
@property (retain) NSMutableDictionary * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(NSLock *)cacheLock;
-(NSMutableDictionary *)pendingRequests;
-(id)businessNameForUID:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)setCacheLock:(NSLock *)arg1 ;
-(void)setPendingRequests:(NSMutableDictionary *)arg1 ;
@end

