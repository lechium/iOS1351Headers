/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OKPresentationViewControllerDelegate <NSObject>
@optional
-(void)presentationViewControllerDidPrepare:(id)arg1;
-(void)presentationViewControllerDidAppear:(id)arg1;
-(void)couchPotatoPlaybackFinished;
-(void)audioStartedPlayingForTrackID:(id)arg1 withAVAsset:(id)arg2 atVolume:(double)arg3;
-(void)audioFinishedPlayingForTrackID:(id)arg1;
-(void)beginDuckingForTrackID:(id)arg1 toDuckLevel:(double)arg2 fadeDuration:(double)arg3;
-(void)endDuckingForTrackID:(id)arg1;
-(void)beginFadingForTrackID:(id)arg1 fadeDuration:(double)arg2;
-(void)endFadingForTrackID:(id)arg1;
-(void)presentationViewController:(id)arg1 changedFrameOfMainNavigatorTo:(CGRect)arg2;
-(void)dismissPresentationViewController:(id)arg1;
-(void)presentationViewController:(id)arg1 renderingTimeLogMessage:(id)arg2 withTimestamp:(double)arg3;

@end
