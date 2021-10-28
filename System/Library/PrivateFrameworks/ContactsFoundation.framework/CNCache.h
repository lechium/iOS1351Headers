/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNScheduler;
@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CNCache : NSObject {

	NSArray* _boundingStrategies;
	id<CNScheduler> _resourceScheduler;
	NSMutableDictionary* _storage;
	NSMutableArray* _didEvictHandlers;
	NSArray* _evictedKeysAndValues;

}

@property (nonatomic,copy,readonly) NSArray * boundingStrategies;              //@synthesize boundingStrategies=_boundingStrategies - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceScheduler;              //@synthesize resourceScheduler=_resourceScheduler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * storage;                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSMutableArray * didEvictHandlers;              //@synthesize didEvictHandlers=_didEvictHandlers - In the implementation block
@property (nonatomic,copy) NSArray * evictedKeysAndValues;                     //@synthesize evictedKeysAndValues=_evictedKeysAndValues - In the implementation block
@property (copy,readonly) NSArray * allKeys; 
@property (copy,readonly) NSArray * allObjects; 
+(id)cache;
+(id)atomicCache;
+(id)atomicCacheScheduler;
+(id)nonatomicCacheScheduler;
+(id)boundingStrategyWithCapacity:(unsigned long long)arg1 ;
+(id)boundingStrategyWithTTL:(double)arg1 ;
+(id)boundingStrategyWithTTL:(double)arg1 timeProvider:(id)arg2 ;
-(id)init;
-(id)description;
-(NSArray *)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)storage;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allObjects;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 onCacheMiss:(/*^block*/id)arg2 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(id)initWithResourceScheduler:(id)arg1 ;
-(id)initWithBoundingStrategies:(id)arg1 resourceScheduler:(id)arg2 ;
-(id<CNScheduler>)resourceScheduler;
-(void)resourceLock_validateKey:(id)arg1 ;
-(void)resourceLock_willAccessKey:(id)arg1 ;
-(void)callDidEvictHandlersIfNecessary;
-(void)resourceLock_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)resourceLock_willSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)resourceLock_validateAllKeys;
-(NSArray *)boundingStrategies;
-(NSMutableArray *)didEvictHandlers;
-(void)resourceLock_evictObjectsForKeys:(id)arg1 ;
-(void)resourceLock_evictObjectForKey:(id)arg1 ;
-(void)setEvictedKeysAndValues:(NSArray *)arg1 ;
-(NSArray *)evictedKeysAndValues;
-(void)addDidEvictHandler:(/*^block*/id)arg1 ;
@end
