/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:57 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISObservable.h>

@protocol OS_dispatch_queue, ISWrappedAVPlayerDelegate;
@class NSObject, AVPlayer, ISWrappedAVAudioSession, AVPlayerItem, NSError, AVVideoComposition, NSArray, NSMutableDictionary;

@interface ISWrappedAVPlayer : ISObservable {

	NSObject*<OS_dispatch_queue> _avPlayerQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	AVPlayer* _playerQueue_avPlayer;
	ISWrappedAVAudioSession* _playerQueue_wrappedAudioSession;
	id _playerQueue_playerItemDidPlayToEndObserver;
	AVPlayerItem* _ivarQueue_currentItem;
	long long _ivarQueue_status;
	NSError* _ivarQueue_error;
	float _ivarQueue_rate;
	float _ivarQueue_volume;
	SCD_Struct_IS10 _ivarQueue_loopTimeRange;
	BOOL _ivarQueue_loopingEnabled;
	BOOL _ivarQueue_audioEnabled;
	BOOL _ivarQueue_preventsSleepDuringVideoPlayback;
	long long _ivarQueue_itemStatus;
	NSError* _ivarQueue_itemError;
	SCD_Struct_IS1 _ivarQueue_itemForwardPlaybackEndTime;
	SCD_Struct_IS1 _ivarQueue_itemDuration;
	BOOL _ivarQueue_itemPlaybackBufferFull;
	AVVideoComposition* _ivarQueue_itemVideoComposition;
	BOOL _ivarQueue_itemIsLikelyToKeepUp;
	BOOL _ivarQueue_itemPlaybackBufferEmpty;
	NSArray* _ivarQueue_currentItemLoadedTimeRanges;
	NSMutableDictionary* _observersByID;
	void* _ivarQueueIdentifier;
	BOOL _playerQueue_didBeginObservingPlayer;
	id<ISWrappedAVPlayerDelegate> _delegate;

}

@property (getter=isLoopingEnabled) BOOL loopingEnabled; 
@property (__weak) id<ISWrappedAVPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)observedAVPIKeysAndContexts;
+(id)observedAVPKeys;
-(id)init;
-(void)dealloc;
-(id<ISWrappedAVPlayerDelegate>)delegate;
-(void)setDelegate:(id<ISWrappedAVPlayerDelegate>)arg1 ;
-(id)error;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)status;
-(id)currentItem;
-(SCD_Struct_IS1)currentTime;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(void)removeTimeObserver:(id)arg1 ;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(void)setAllowsExternalPlayback:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_IS1)arg1 toleranceBefore:(SCD_Struct_IS1)arg2 toleranceAfter:(SCD_Struct_IS1)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)addPeriodicTimeObserverForInterval:(SCD_Struct_IS1)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)setRate:(float)arg1 time:(SCD_Struct_IS1)arg2 atHostTime:(SCD_Struct_IS1)arg3 ;
-(void)prerollAtRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelPendingPrerolls;
-(void)setDimensionsOfReservedVideoMemory:(CGSize)arg1 ;
-(SCD_Struct_IS10)loopTimeRange;
-(void)setLoopTimeRange:(SCD_Struct_IS10)arg1 ;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(BOOL)isLoopingEnabled;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1 ;
-(void)setWrappedAudioSession:(id)arg1 ;
-(id)mutableChangeObject;
-(id)currentItemError;
-(void)setLoopingEnabled:(BOOL)arg1 withTemplateItem:(id)arg2 ;
-(BOOL)_isOnIvarQueue;
-(void)_performIvarRead:(/*^block*/id)arg1 ;
-(void)_performIvarWrite:(/*^block*/id)arg1 ;
-(void)attachToPlayerLayerIfNeeded:(id)arg1 ;
-(BOOL)preventsSleepDuringVideoPlayback;
-(BOOL)currentItemPlaybackBufferEmpty;
-(BOOL)currentItemPlaybackBufferFull;
-(BOOL)currentItemIsLikelyToKeepUp;
-(long long)currentItemStatus;
-(SCD_Struct_IS1)currentItemDuration;
-(void)playToTime:(SCD_Struct_IS1)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(/*^block*/id)arg4 ;
-(SCD_Struct_IS1)itemForwardPlaybackEndTime;
-(id)_initWithAVPlayer:(id)arg1 ;
-(void)setItemForwardEndPlaybackTime:(SCD_Struct_IS1)arg1 ;
-(void)_assertOnIvarQueue;
-(id)_playerQueue_avPlayer;
-(void)_performPlayerTransaction:(/*^block*/id)arg1 ;
-(void)setItemBlendsVideoFrames:(BOOL)arg1 ;
-(id)_nextObserverUID;
-(void)_playerQueue_startObservingPlayerItem:(id)arg1 ;
-(void)_playerQueue_stopObservingPlayerItem:(id)arg1 ;
-(void)_playerItemDidPlayToEnd:(id)arg1 ;
-(id)_nilOrValue:(id)arg1 ;
-(id)currentItemLoadedTimeRanges;
-(id)currentItemVideoComposition;
-(void)_playerQueue_updatePlayerItemAudioTracksEnabled;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 thenCall:(/*^block*/id)arg2 ;
@end
