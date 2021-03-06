/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PETReservoirSamplingLogStore;
#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class NSObject;

@interface PETReservoirSamplingLog : NSObject {

	opaque_pthread_mutex_t _lock;
	NSObject*<PETReservoirSamplingLogStore> _store;
	unsigned _limit;
	SCD_Struct_PE6 _rng;

}
-(id)init;
-(void)dealloc;
-(void)clear;
-(BOOL)_lock;
-(void)log:(id)arg1 ;
-(void)_unlock;
-(id)initWithStore:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)initInMemoryWithLimit:(unsigned long long)arg1 ;
-(BOOL)_readHeader;
-(void)_gc;
-(void)enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateItemsWithBlockLocked:(/*^block*/id)arg1 ;
-(void)_clearLocked;
-(void)enumerateAndClearItemsWithBlock:(/*^block*/id)arg1 ;
@end

