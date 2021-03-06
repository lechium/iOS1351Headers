/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, MPMediaItem, VUIMPMediaItemDownloadControllerState, NSHashTable;

@interface VUIMPMediaItemDownloadController : NSObject {

	NSObject*<OS_dispatch_queue> _observerDispatchQueue;
	MPMediaItem* _mediaItem;
	VUIMPMediaItemDownloadControllerState* _state;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSHashTable* _observers;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;                                                 //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy) VUIMPMediaItemDownloadControllerState * state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL supportsCancellation; 
@property (nonatomic,readonly) BOOL supportsPausing; 
@property (getter=isRestoreDownload,nonatomic,readonly) BOOL restoreDownload; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerDispatchQueue;                      //@synthesize observerDispatchQueue=_observerDispatchQueue - In the implementation block
-(id)init;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(VUIMPMediaItemDownloadControllerState *)state;
-(void)setState:(VUIMPMediaItemDownloadControllerState *)arg1 ;
-(void)_setState:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)cancelDownload;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(void)resumeDownload;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)pauseDownload;
-(BOOL)supportsCancellation;
-(BOOL)supportsPausing;
-(void)_enqueueAsyncProcessingQueueBlock:(/*^block*/id)arg1 ;
-(id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3 ;
-(void)_onProcessingQueue_invalidate;
-(BOOL)isRestoreDownload;
-(void)_onProcessingQueue_cancelDownload;
-(void)_onProcessingQueue_pauseDownload;
-(void)_onProcessingQueue_resumeDownload;
-(void)setObserverDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_enqueueAsyncStrongSelfProcessingQueueBlock:(/*^block*/id)arg1 ;
-(void)_onProcessingQueue_setState:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerDispatchQueue;
-(void)_notifyObservers:(id)arg1 stateDidChange:(id)arg2 ;
-(void)_enqueueObserverQueueBlock:(/*^block*/id)arg1 ;
@end

