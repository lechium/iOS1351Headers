/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSOperationQueue, NSProgress, NSObject, NSArray;

@interface BRTransfersStatusManager : NSObject {

	NSMutableArray* _transfers;
	NSOperationQueue* _operationQueue;
	NSProgress* _globalUploadProgress;
	NSProgress* _globalDownloadProgress;
	id _globalProgressSubscriber;
	unsigned long long _shouldHideGlobalDownloadProgressCount;
	NSObject*<OS_dispatch_source> _timerToDisplayGlobalProgress;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (copy,readonly) NSArray * transfers;              //@synthesize transfers=_transfers - In the implementation block
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(void)_progressSubscription;
-(id)startObservingItemDownloadProgressAtURL:(id)arg1 ;
-(void)stopObservingItemDownloadProgress:(id)arg1 ;
-(void)removeTransfer:(id)arg1 ;
-(void)addTransfer:(id)arg1 ;
-(void)_setupTimerToDisplayGlobalProgress;
-(void)insertTransfer:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)showGlobalProgressIfNeeded;
-(void)_setGlobalProgress:(id)arg1 forIvar:(id*)arg2 ;
-(NSArray *)transfers;
-(void)downloadAndObserveItemAtURL:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
