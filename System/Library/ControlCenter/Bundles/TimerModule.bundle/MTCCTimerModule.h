/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUIKit/CCUIAppLauncherModule.h>
#import <libobjc.A.dylib/MTCCTimerViewControllerDelegate.h>
#import <libobjc.A.dylib/MTCCTimerBackgroundViewControllerDelegate.h>

@class MTTimerManager, MTCCTimerViewController, MTCCTimerBackgroundViewController, NSString;

@interface MTCCTimerModule : CCUIAppLauncherModule <MTCCTimerViewControllerDelegate, MTCCTimerBackgroundViewControllerDelegate> {

	MTTimerManager* _timerManager;
	MTCCTimerViewController* _timerViewController;
	MTCCTimerBackgroundViewController* _timerBackgroundViewController;

}

@property (nonatomic,retain) MTTimerManager * timerManager;                                                  //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) MTCCTimerViewController * timerViewController;                                  //@synthesize timerViewController=_timerViewController - In the implementation block
@property (nonatomic,retain) MTCCTimerBackgroundViewController * timerBackgroundViewController;              //@synthesize timerBackgroundViewController=_timerBackgroundViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)contentViewController;
-(double)defaultDuration;
-(void)setDefaultDuration:(double)arg1 ;
-(MTTimerManager *)timerManager;
-(void)setTimerManager:(MTTimerManager *)arg1 ;
-(id)backgroundViewController;
-(MTCCTimerViewController *)timerViewController;
-(void)setTimerViewController:(MTCCTimerViewController *)arg1 ;
-(void)timerDidChange:(id)arg1 ;
-(void)reloadTimerStateAndUpdateDuration;
-(void)reloadTimerState;
-(void)reloadTimerStateUpdateDuration:(BOOL)arg1 ;
-(MTCCTimerBackgroundViewController *)timerBackgroundViewController;
-(id)processChangesForNewState:(id)arg1 ;
-(void)timerViewController:(id)arg1 timerDidChange:(id)arg2 ;
-(void)timerViewControllerButtonTapped:(id)arg1 withEvent:(id)arg2 ;
-(void)timerBackgroundViewController:(id)arg1 timerDidChange:(id)arg2 ;
-(void)setTimerBackgroundViewController:(MTCCTimerBackgroundViewController *)arg1 ;
@end
