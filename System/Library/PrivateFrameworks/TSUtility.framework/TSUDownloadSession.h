/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TSUDownloadSessionDelegate, OS_dispatch_group, OS_dispatch_queue;
@class TSUDownloadManager, NSObject, NSMutableSet, NSMutableDictionary, TSUBasicProgress, NSError, NSString, TSUProgress;

@interface TSUDownloadSession : NSObject {

	BOOL _isCancelled;
	TSUDownloadManager* _manager;
	id<TSUDownloadSessionDelegate> _delegate;
	BOOL _didFinishInitialization;
	NSObject*<OS_dispatch_group> _initializationGroup;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _remainingTasks;
	NSMutableDictionary* _taskProgress;
	double _lastProgressValue;
	NSObject*<OS_dispatch_group> _completionGroup;
	TSUBasicProgress* _progress;
	NSError* _error;
	NSString* _sessionDescription;
	long long _totalBytesDownloaded;
	long long _totalBytesExpectedToBeDownloaded;

}

@property (nonatomic,readonly) BOOL isCancelled;                                        //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) NSString * sessionDescription;                           //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (nonatomic,readonly) TSUProgress * progress;                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) long long totalBytesDownloaded;                          //@synthesize totalBytesDownloaded=_totalBytesDownloaded - In the implementation block
@property (nonatomic,readonly) long long totalBytesExpectedToBeDownloaded;              //@synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(void)cancel;
-(BOOL)isCancelled;
-(TSUProgress *)progress;
-(NSString *)sessionDescription;
-(void)didFinishInitialization;
-(void)cancelRemainingTasksNotifyingDelegate:(BOOL)arg1 ;
-(long long)totalBytesExpectedToBeDownloaded;
-(void)headRequestForDownloadItem:(id)arg1 taskProgress:(id)arg2 ;
-(void)updateTaskProgress:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)updateProgressAndNotifyDelegate;
-(long long)totalBytesDownloaded;
-(void)notifyCompletionWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)waitUntilTimeout:(unsigned long long)arg1 ;
-(id)initWithManager:(id)arg1 downloadItems:(id)arg2 description:(id)arg3 willRequestDownload:(BOOL)arg4 delegate:(id)arg5 ;
-(BOOL)hasActiveTaskWithDescription:(id)arg1 ;
-(void)taskWithDescription:(id)arg1 didCompleteWithError:(id)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)taskWithDescription:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
@end

