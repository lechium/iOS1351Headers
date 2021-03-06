/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NMROriginObserverDelegate <NSObject>
@optional
-(void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdateTimestampForOrigin:(id)arg2;
-(void)originObserver:(id)arg1 didUpdatePlaybackQueueForOrigin:(id)arg2;

@end

