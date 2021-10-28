/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:14 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSPromise;

@interface AMSBinaryPromise : NSObject {

	AMSPromise* _backingPromise;

}

@property (nonatomic,retain) AMSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 ;
+(id)promiseWithAny:(id)arg1 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithFlattenedPromises:(id)arg1 ;
+(id)promiseWithPromise:(id)arg1 ;
+(id)promiseWithSuccess;
-(id)init;
-(void)waitUntilFinished;
-(BOOL)cancel;
-(BOOL)resultWithError:(id*)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithPromise:(id)arg1 ;
-(id)promiseAdapter;
-(BOOL)finishWithSuccess;
-(AMSPromise *)backingPromise;
-(void)_removeFromGlobalPromiseStorage;
-(BOOL)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
-(void)setBackingPromise:(AMSPromise *)arg1 ;
@end
