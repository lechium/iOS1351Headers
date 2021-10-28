/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, OITSUReadWriteQueue, NSString;

@interface TSUConcurrentMutableDictionaryCache : NSObject {

	NSMutableDictionary* _cache;
	OITSUReadWriteQueue* _readWriteQueue;
	NSString* _name;
	unsigned long long _count;

}

@property (nonatomic,readonly) OITSUReadWriteQueue * readWriteQueue;              //@synthesize readWriteQueue=_readWriteQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                          //@synthesize count=_count - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(OITSUReadWriteQueue *)readWriteQueue;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 andWait:(BOOL)arg2 ;
-(void)p_didEnterBackground:(id)arg1 ;
-(void)performSyncWriteWithUnderlyingDictionary:(/*^block*/id)arg1 ;
@end
