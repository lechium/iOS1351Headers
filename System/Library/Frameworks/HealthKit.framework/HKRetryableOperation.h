/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface HKRetryableOperation : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	long long _retryCount;
	NSMutableArray* _pendingOperations;

}

@property (nonatomic,copy,readonly) NSMutableArray * pendingOperations; 
-(NSMutableArray *)pendingOperations;
-(id)initWithQueue:(id)arg1 retryCount:(int)arg2 ;
-(void)_queue_performRetryableOperation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_performPendingOperation:(id)arg1 ;
@end
