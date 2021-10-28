/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFQueueingStrategy.h>

@class NSString;

@interface _EFBufferedQueueStrategy : NSObject <EFQueueingStrategy> {

	/*^block*/id _batchHandler;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) id batchHandler;                          //@synthesize batchHandler=_batchHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * descriptionType; 
-(unsigned long long)capacity;
-(id)initWithCapacity:(unsigned long long)arg1 batchHandler:(/*^block*/id)arg2 ;
-(NSString *)descriptionType;
-(void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3 ;
-(void)dequeueObject:(id)arg1 buffer:(id)arg2 ;
-(id)batchHandler;
@end
