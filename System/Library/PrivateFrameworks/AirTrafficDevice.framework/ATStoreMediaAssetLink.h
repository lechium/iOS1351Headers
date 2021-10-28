/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:01 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ATStoreDownloadObserver.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ATAssetLink.h>

@protocol ATAssetLinkDelegate, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableOrderedSet, ATStoreDownloadService, NSString;

@interface ATStoreMediaAssetLink : NSObject <ATStoreDownloadObserver, ICEnvironmentMonitorObserver, ATAssetLink> {

	BOOL _open;
	id<ATAssetLinkDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _resumeQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableSet* _enqueuedDownloadAssets;
	NSMutableSet* _enqueuedRestoreAssets;
	NSMutableSet* _cancelledAssets;
	NSMutableSet* _resumableAssets;
	NSMutableOrderedSet* _downloadsPendingEnqueue;
	ATStoreDownloadService* _downloadService;
	BOOL _resumeAssetDownloadsActivity;
	BOOL _isNetworkConstrained;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOpen,nonatomic,readonly) BOOL open;                            //@synthesize open=_open - In the implementation block
@property (assign,nonatomic,__weak) id<ATAssetLinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(BOOL)open;
-(void)close;
-(id<ATAssetLinkDelegate>)delegate;
-(void)setDelegate:(id<ATAssetLinkDelegate>)arg1 ;
-(unsigned long long)priority;
-(BOOL)isOpen;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(unsigned long long)maximumBatchSize;
-(id)enqueueAssets:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)canEnqueueAsset:(id)arg1 ;
-(void)cancelAssets:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(BOOL)linkIsReady;
-(void)ATStoreDownloadService:(id)arg1 didEnqueueAsset:(id)arg2 ;
-(void)ATStoreDownloadService:(id)arg1 didChangeStateForAsset:(id)arg2 oldState:(long long)arg3 newState:(long long)arg4 ;
-(void)ATStoreDownloadService:(id)arg1 didUpdateProgressForAsset:(id)arg2 progress:(float)arg3 ;
-(void)ATStoreDownloadService:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3 cancelPendingAssetsInBatch:(BOOL)arg4 ;
-(BOOL)_canEnqueueAssetUnderCurrentEnvironmentConditions:(id)arg1 didUpdatePauseReason:(BOOL*)arg2 ;
-(long long)_ATAssetStateForStoreDownloadState:(long long)arg1 ;
-(void)_finishAsset:(id)arg1 error:(id)arg2 cancelPendingAssetsInBatch:(BOOL)arg3 ;
-(void)_setupActivityToResumeDownloads;
-(void)ATStoreDownloadService:(id)arg1 didResumeAsset:(id)arg2 ;
@end
