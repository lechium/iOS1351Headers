/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSHashTable, NSArray;

@interface REObserverStore : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allObservers; 
-(id)init;
-(unsigned long long)count;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)allObservers;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(id)initWithFunctionsOptions:(unsigned long long)arg1 ;
@end

