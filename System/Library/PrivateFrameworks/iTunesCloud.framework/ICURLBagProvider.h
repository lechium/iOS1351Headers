/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ICURLBagProvider : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _persistenceQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _pendingOperationsForCacheKey;

}
+(id)sharedBagProvider;
-(id)init;
-(void)dealloc;
-(void)invalidateCache;
-(id)_cacheFilePath;
-(void)getBagForRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)getBagForRequestContext:(id)arg1 forceRefetch:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_loadCache;
-(void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_getCacheKeyForRequestContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_saveCache;
@end

