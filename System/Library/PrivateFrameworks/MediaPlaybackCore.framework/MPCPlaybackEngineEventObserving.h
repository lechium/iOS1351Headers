/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPCPlaybackEngineEventObserving <NSObject>
@optional
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
-(void)engine:(id)arg1 didChangeToItem:(id)arg2;
-(void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;
-(void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2;
-(void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;
-(void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;
-(void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
-(void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;
-(void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2;
-(void)engineWillBeginStateRestoration:(id)arg1;
-(void)engineDidEndStateRestoration:(id)arg1;

@end
