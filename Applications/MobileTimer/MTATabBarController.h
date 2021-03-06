//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "UITabBarControllerDelegate-Protocol.h"

@class INKContentController, MTAlarmDataSource, MTAlarmManager, MTTimerManager, NSString, UINavigationController;

@interface MTATabBarController : UITabBarController <UITabBarControllerDelegate>
{
    UINavigationController *_stopwatchNavController;	// 8 = 0x8
    UINavigationController *_timerNavController;	// 16 = 0x10
    UINavigationController *_alarmNavControllerSmall;	// 24 = 0x18
    UINavigationController *_alarmNavController;	// 32 = 0x20
    UINavigationController *_bedtimeNavController;	// 40 = 0x28
    UINavigationController *_worldClockNavControllerSmall;	// 48 = 0x30
    UINavigationController *_worldClockNavController;	// 56 = 0x38
    INKContentController *_infoContentController;	// 64 = 0x40
    MTAlarmManager *_alarmManager;	// 72 = 0x48
    MTAlarmDataSource *_dataSource;	// 80 = 0x50
    MTTimerManager *_timerManager;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100010344
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;	// IMP=0x0000000100010268
- (void)performActionForIntent:(id)arg1;	// IMP=0x000000010000f6e4
- (void)performActionForShortcutItem:(id)arg1;	// IMP=0x000000010000eee4
- (void)populateShortcutItems;	// IMP=0x000000010000eb2c
- (id)timerViewController;	// IMP=0x000000010000eb1c
- (id)stopwatchViewController;	// IMP=0x000000010000eb0c
- (id)bedtimeViewController;	// IMP=0x000000010000eafc
- (id)alarmViewController;	// IMP=0x000000010000eaec
- (id)worldClockViewController;	// IMP=0x000000010000eadc
- (id)topViewControllerForTab:(int)arg1;	// IMP=0x000000010000ea00
- (id)navigationControllerForHorizontalSizeClass:(long long)arg1 verticalSizeClass:(long long)arg2 atIndex:(int)arg3;	// IMP=0x000000010000e28c
- (void)invalidateViewControllersWithTraitCollection:(id)arg1;	// IMP=0x000000010000e130
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010000e03c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010000e018
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000dfa0
- (id)initWithAlarmManager:(id)arg1 alarmDataSource:(id)arg2 timerManager:(id)arg3;	// IMP=0x000000010000dd60
- (_Bool)_canShowWhileLocked;	// IMP=0x000000010000dd58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

