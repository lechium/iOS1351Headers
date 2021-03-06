/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerTimerButton : CAMControlDrawerMenuButton {

	long long _timerDuration;

}

@property (assign,nonatomic) long long timerDuration;              //@synthesize timerDuration=_timerDuration - In the implementation block
-(long long)controlType;
-(long long)timerDuration;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setTimerDuration:(long long)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
@end

