/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CLKVideoPlayerViewDelegate <NSObject>
@optional
-(void)videoPlayerViewWillBeginPlaying:(id)arg1;
-(void)videoPlayerView:(id)arg1 didFinishPrerolling:(BOOL)arg2;

@required
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1;

@end

