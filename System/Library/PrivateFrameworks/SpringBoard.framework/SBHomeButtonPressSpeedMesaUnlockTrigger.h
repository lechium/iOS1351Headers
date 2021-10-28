/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBMesaUnlockTrigger.h>

@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {

	BSTimer* _slowPressTimer;
	BOOL _bioUnlockOccurred;
	BOOL _buttonIsDown;
	BOOL _fingerIsOn;
	BOOL _timerFired;
	double _slowPressDuration;

}

@property (setter=_setSlowPressTimer:,getter=_slowPressTimer,nonatomic,retain) BSTimer * slowPressTimer;              //@synthesize slowPressTimer=_slowPressTimer - In the implementation block
@property (assign,nonatomic) double slowPressDuration;                                                                //@synthesize slowPressDuration=_slowPressDuration - In the implementation block
-(id)init;
-(id)description;
-(id)succinctDescriptionBuilder;
-(void)_startTimer;
-(void)_timerFired;
-(void)_cancelTimer;
-(void)screenOff;
-(void)setSlowPressDuration:(double)arg1 ;
-(double)slowPressDuration;
-(BOOL)bioUnlock;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)fingerOff;
-(BOOL)_isTimerRunning;
-(BOOL)_isPrimed;
-(void)_evaluateUnlock;
-(id)_slowPressTimer;
-(void)_setSlowPressTimer:(id)arg1 ;
@end
