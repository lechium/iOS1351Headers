/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoControlsTimingProviding, SVAccessoryItem, SVVideoQueueProviding, SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackStateObserverFactory, SVVideoLoadingStateObserverFactory, SVAccessoryItemContentManager, SVVideoPlaybackProgressObserving, SVVideoPlaybackStateObserving, SVVideoLoadingStateObserving;
@class SVVideoAccessoryBarView, SVTimeline, SVTimeBasedAction, NSTimer, NSString;

@interface SVVideoAccessoryBarManager : NSObject <SVVideoTransitionObserver> {

	SVVideoAccessoryBarView* _accessoryBarView;
	SVTimeline* _timeline;
	id<SVVideoControlsTimingProviding> _timingProvider;
	id<SVAccessoryItem> _nowPlayingItem;
	id<SVAccessoryItem> _moreFromItem;
	id<SVAccessoryItem> _upNextItem;
	id<SVAccessoryItem> _discoverMoreItem;
	id<SVVideoQueueProviding> _queueProvider;
	id<SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
	id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SVAccessoryItemContentManager> _contentManager;
	id<SVVideoPlaybackProgressObserving> _playbackProgressObserver;
	id<SVVideoPlaybackStateObserving> _playbackStateObserver;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;
	SVTimeBasedAction* _upNextItemDisplayAction;
	NSTimer* _timer;

}

@property (nonatomic,readonly) SVVideoAccessoryBarView * accessoryBarView;                                              //@synthesize accessoryBarView=_accessoryBarView - In the implementation block
@property (nonatomic,readonly) SVTimeline * timeline;                                                                   //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoControlsTimingProviding> timingProvider;                                       //@synthesize timingProvider=_timingProvider - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> nowPlayingItem;                                                      //@synthesize nowPlayingItem=_nowPlayingItem - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> moreFromItem;                                                        //@synthesize moreFromItem=_moreFromItem - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> upNextItem;                                                          //@synthesize upNextItem=_upNextItem - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> discoverMoreItem;                                                    //@synthesize discoverMoreItem=_discoverMoreItem - In the implementation block
@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                                                 //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory;              //@synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;                    //@synthesize playbackStateObserverFactory=_playbackStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                      //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItemContentManager> contentManager;                                        //@synthesize contentManager=_contentManager - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackProgressObserving> playbackProgressObserver;                             //@synthesize playbackProgressObserver=_playbackProgressObserver - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackStateObserving> playbackStateObserver;                                   //@synthesize playbackStateObserver=_playbackStateObserver - In the implementation block
@property (nonatomic,retain) id<SVVideoLoadingStateObserving> loadingStateObserver;                                     //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (nonatomic,retain) SVTimeBasedAction * upNextItemDisplayAction;                                               //@synthesize upNextItemDisplayAction=_upNextItemDisplayAction - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                                           //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id<SVAccessoryItem>)nowPlayingItem;
-(id<SVVideoPlaybackProgressObserverFactory>)playbackProgressObserverFactory;
-(void)setPlaybackProgressObserver:(id<SVVideoPlaybackProgressObserving>)arg1 ;
-(id<SVVideoPlaybackProgressObserving>)playbackProgressObserver;
-(id<SVVideoQueueProviding>)queueProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(SVTimeline *)timeline;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id<SVVideoPlaybackStateObserverFactory>)playbackStateObserverFactory;
-(void)setPlaybackStateObserver:(id<SVVideoPlaybackStateObserving>)arg1 ;
-(void)setLoadingStateObserver:(id<SVVideoLoadingStateObserving>)arg1 ;
-(id<SVVideoControlsTimingProviding>)timingProvider;
-(id<SVVideoPlaybackStateObserving>)playbackStateObserver;
-(id)initWithAccessoryBarView:(id)arg1 timeline:(id)arg2 timingProvider:(id)arg3 nowPlayingAccessoryItem:(id)arg4 moreFromAccessoryItem:(id)arg5 upNextAccessoryItem:(id)arg6 discoverMoreAccessoryItem:(id)arg7 playbackProgressObserverFactory:(id)arg8 playbackStateObserverFactory:(id)arg9 queueProvider:(id)arg10 loadingStateObserverFactory:(id)arg11 contentManager:(id)arg12 ;
-(void)updateAccessoryBarToStateForVideo:(id)arg1 ;
-(void)cancelScheduledNowPlayingOrMoreFromTransition;
-(void)cancelDisplayOfUpNextItem;
-(SVVideoAccessoryBarView *)accessoryBarView;
-(id<SVAccessoryItem>)upNextItem;
-(id<SVAccessoryItemContentManager>)contentManager;
-(void)scheduleNowPlayingOrMoreFromTransitionIfNeeded;
-(void)scheduleDisplayOfUpNextItemWithInterval:(double)arg1 ;
-(SVTimeBasedAction *)upNextItemDisplayAction;
-(void)setUpNextItemDisplayAction:(SVTimeBasedAction *)arg1 ;
-(id<SVAccessoryItem>)discoverMoreItem;
-(void)scheduleMoreFromTransitionIfNeeded;
-(id<SVAccessoryItem>)moreFromItem;
-(void)scheduleNowPlayingTransitionIfNeeded;
-(void)scheduleTransitionToLeadingItem:(id)arg1 withTimeInterval:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

