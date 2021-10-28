/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBLockScreenBacklightControlling <NSObject>
@property (assign,nonatomic) double backlightLevel; 
@required
-(void)setBacklightLevel:(double)arg1;
-(double)backlightLevel;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 fromUnlockSource:(int)arg3;
-(BOOL)isInScreenOffMode;
-(void)setInScreenOffMode:(BOOL)arg1;
-(BOOL)shouldDisableALS;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1;

@end
