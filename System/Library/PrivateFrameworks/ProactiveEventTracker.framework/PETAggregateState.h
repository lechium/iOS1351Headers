/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class PETAggregateStateStorage;

@interface PETAggregateState : NSObject {

	PETAggregateStateStorage* _storage;
	SCD_Struct_PE6 _rng;

}
+(unsigned char)hashForString:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithPath:(id)arg1 ;
-(void)reset;
-(id)initWithStorage:(id)arg1 ;
-(id)initInMemory;
-(void)incrementCounterBy:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 ;
-(void)updateDistributionWithValue:(double)arg1 forKey:(const void*)arg2 keyLength:(unsigned short)arg3 maxSampleSize:(unsigned short)arg4 ;
-(void)incrementCounterBy:(double)arg1 forKey:(id)arg2 ;
-(void)updateDistributionWithValue:(double)arg1 forKey:(id)arg2 maxSampleSize:(unsigned short)arg3 ;
-(void)enumerateCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(void)enumerateAndResetCounters:(/*^block*/id)arg1 distributions:(/*^block*/id)arg2 ;
-(BOOL)checkIntegrity;
@end

