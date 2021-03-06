/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTransitionDriverDelegate <NSObject>
@required
-(BOOL)transitionDriver:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(BOOL)transitionDriver:(id)arg1 shouldDriveTransitionInteractionOfType:(long long)arg2;
-(void)transitionDriver:(id)arg1 didBeginTrackingTransitionInteraction:(long long)arg2 readyToProceedHandler:(/*^block*/id)arg3;
-(void)transitionDriverDidContinueInteraction:(id)arg1;
-(void)transitionDriverDidCancelInteraction:(id)arg1;
-(void)transitionDriverDidFinishInteraction:(id)arg1;

@end

