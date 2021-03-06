/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@class NSArray, SGDHarvestQueueOnDisk, SGDHarvestQueueLegacy, SGDHarvestQueueInMemory;

@interface SGDHarvestQueueCombo : SGDHarvestQueue {

	NSArray* _backends;
	opaque_pthread_mutex_t _lock;
	SGDHarvestQueueOnDisk* _onDisk;
	SGDHarvestQueueLegacy* _legacyHighPriority;
	SGDHarvestQueueLegacy* _legacyLowPriority;
	SGDHarvestQueueInMemory* _inMemory;

}

@property (nonatomic,readonly) SGDHarvestQueueOnDisk * onDisk;                          //@synthesize onDisk=_onDisk - In the implementation block
@property (nonatomic,readonly) SGDHarvestQueueLegacy * legacyHighPriority;              //@synthesize legacyHighPriority=_legacyHighPriority - In the implementation block
@property (nonatomic,readonly) SGDHarvestQueueLegacy * legacyLowPriority;               //@synthesize legacyLowPriority=_legacyLowPriority - In the implementation block
@property (nonatomic,readonly) SGDHarvestQueueInMemory * inMemory;                      //@synthesize inMemory=_inMemory - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(void)close;
-(id)backends;
-(id)initWithOnDiskQueue:(id)arg1 legacyHighPriority:(id)arg2 legacyLowPriority:(id)arg3 inMemoryCache:(id)arg4 ;
-(void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 item:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)pop:(/*^block*/id)arg1 ;
-(void)popHighPriority:(/*^block*/id)arg1 ;
-(void)popByItemId:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2 ;
-(SGDHarvestQueueOnDisk *)onDisk;
-(SGDHarvestQueueLegacy *)legacyHighPriority;
-(SGDHarvestQueueLegacy *)legacyLowPriority;
-(SGDHarvestQueueInMemory *)inMemory;
@end

