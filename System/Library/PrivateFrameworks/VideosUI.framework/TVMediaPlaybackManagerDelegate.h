/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVMediaPlaybackManagerDelegate <NSObject>
@optional
-(BOOL)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
-(void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1;
-(BOOL)presentForegroundPlaybackControllerForMediaPlaybackManager:(id)arg1;

@required
-(void)mediaPlaybackManager:(id)arg1 shouldHideUI:(BOOL)arg2 animated:(BOOL)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5;

@end

