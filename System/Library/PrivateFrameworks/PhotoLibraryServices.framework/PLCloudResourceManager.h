/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSDate;

@interface PLCloudResourceManager : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	PLCloudResourcePrefetchManager* _prefetchManager;
	PLCloudResourcePruneManager* _pruneManager;
	NSDate* _lastOperationDate;
	BOOL _enqueuedOperation;

}
-(id)init;
-(void)invalidate;
-(void)stop;
-(id)statusForDebug:(BOOL)arg1 ;
-(void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)arg1 ;
-(void)updateCacheDeletePurgeableAmount;
-(void)handleOptimizeModeChange;
-(id)initWithCPLManager:(id)arg1 library:(id)arg2 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
@end

