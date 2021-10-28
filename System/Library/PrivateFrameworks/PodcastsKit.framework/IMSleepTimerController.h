/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:48 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMSleepTimerDelegate;
@class IMAVPlayer;

@interface IMSleepTimerController : NSObject {

	id<IMSleepTimerDelegate> _delegate;
	IMAVPlayer* _player;

}

@property (nonatomic,retain) IMAVPlayer * player;                                   //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<IMSleepTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IMSleepTimerDelegate>)delegate;
-(void)setDelegate:(id<IMSleepTimerDelegate>)arg1 ;
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)addActionForTime:(double)arg1 alertController:(id)arg2 ;
-(void)addActionWithTitle:(id)arg1 autoStop:(unsigned long long)arg2 timerTime:(double)arg3 alertController:(id)arg4 ;
-(id)alertControllerForSleepTimer;
@end
