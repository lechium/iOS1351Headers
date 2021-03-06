/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ENGroupContextCacheMiddleware.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface ENGroupContextInMemoryCache : NSObject <ENGroupContextCacheMiddleware> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _groupIDtoGroup;
	NSMutableDictionary* _latestStableGroupIDToGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * groupIDtoGroup;                          //@synthesize groupIDtoGroup=_groupIDtoGroup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * latestStableGroupIDToGroup;              //@synthesize latestStableGroupIDToGroup=_latestStableGroupIDToGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(long long)middlewareCacheCostForContext:(id)arg1 ;
-(void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)groupContext:(id)arg1 fetchAllKnownGroups:(/*^block*/id)arg2 ;
-(void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)latestStableGroupIDToGroup;
-(NSMutableDictionary *)groupIDtoGroup;
-(void)setGroupIDtoGroup:(NSMutableDictionary *)arg1 ;
-(void)setLatestStableGroupIDToGroup:(NSMutableDictionary *)arg1 ;
@end

