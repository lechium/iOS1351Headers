/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMCoreLite/FMPromise.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSError, NSString;

@interface FMFuture : NSObject <FMPromise> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _finished;
	NSMutableArray* _completionBlocks;
	id _resultValue;
	NSError* _resultError;
	NSString* _descriptor;

}

@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * descriptor;                    //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)futureWithError:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3 ;
+(id)futureWithNoResult;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 scheduler:(id)arg2 ;
+(id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3 ;
+(id)_chainFuturesWithFutureStack:(id)arg1 ;
+(id)combineAllFutures:(id)arg1 ;
+(id)chainFutures:(id)arg1 ;
+(id)futureWithCompletionHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSString *)description;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(NSString *)descriptor;
-(void)_flushCompletionBlocks;
-(void)didCancel;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)setDescriptor:(NSString *)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)flatMap:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)_queue_isCancelled;
-(BOOL)finishWithNoResult;
-(id)reschedule:(id)arg1 ;
-(id)recoverIgnoringError;
@end

