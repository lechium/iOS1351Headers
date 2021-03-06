//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MTAStateManagement-Protocol.h"
#import "TKTonePickerViewControllerDelegate-Protocol.h"
#import "TimerControlsTarget-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class MTATimerControlsView, MTTimer, MTTimerManager, NSString, NSTimer, NSUserActivity, TKTonePickerViewController;

@interface MTATimerViewController : UIViewController <MTAStateManagement, TimerControlsTarget, TKTonePickerViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    MTATimerControlsView *_timerControlsView;	// 8 = 0x8
    TKTonePickerViewController *_tonePickerViewController;	// 16 = 0x10
    NSTimer *_updateTimer;	// 24 = 0x18
    _Bool _layoutForTraitChange;	// 32 = 0x20
    unsigned long long _style;	// 40 = 0x28
    NSUserActivity *_userActivity;	// 48 = 0x30
    MTTimer *_timer;	// 56 = 0x38
    MTTimerManager *_timerManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000140c4
@property(retain, nonatomic) MTTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(retain, nonatomic) MTTimer *timer; // @synthesize timer=_timer;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000100014004
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;	// IMP=0x0000000100013fe0
- (void)dismissSoundPicker;	// IMP=0x0000000100013e94
- (void)confirmPickingSound;	// IMP=0x0000000100013b9c
- (void)showSoundPicker:(id)arg1;	// IMP=0x00000001000135f0
- (void)timersChanged:(id)arg1;	// IMP=0x00000001000134f4
- (void)pauseResumeTimer:(id)arg1;	// IMP=0x00000001000131f0
- (void)cancelTimer:(id)arg1;	// IMP=0x0000000100012f38
- (void)startTimer:(id)arg1;	// IMP=0x0000000100012c10
- (void)handleStopTimerShortcutAction;	// IMP=0x0000000100012ba4
- (void)handleStartTimerShortcutAction;	// IMP=0x0000000100012b38
- (id)defaultShortcutItem;	// IMP=0x0000000100012b2c
- (id)stopTimerShortcutItem;	// IMP=0x0000000100012a2c
- (id)startTimerShortcutItem;	// IMP=0x00000001000128e4
- (id)shortcutItemForCurrentState;	// IMP=0x00000001000127f0
- (void)updateShortcutItemForCurrentState;	// IMP=0x00000001000125d8
- (void)handleContentSizeChange:(id)arg1;	// IMP=0x0000000100012578
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000001000124d4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100012400
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100012384
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001232c
- (void)timerTick:(id)arg1;	// IMP=0x000000010001214c
- (void)prepareUIForState:(unsigned long long)arg1 forceRefresh:(_Bool)arg2;	// IMP=0x0000000100011f54
- (void)prepareUIForState:(unsigned long long)arg1;	// IMP=0x0000000100011f44
- (void)reloadTimerUiForceRefresh:(_Bool)arg1;	// IMP=0x0000000100011e04
- (void)reloadTimerUI;	// IMP=0x0000000100011df4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100011da4
- (void)loadView;	// IMP=0x0000000100011a88
- (void)viewDidLayoutSubviews;	// IMP=0x000000010001199c
- (void)setStyle:(unsigned long long)arg1;	// IMP=0x0000000100011968
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100011918
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000117f8
- (void)saveState;	// IMP=0x0000000100011448
- (void)reloadState;	// IMP=0x0000000100011438
- (void)reloadState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100010fd4
- (void)handleBecameActive;	// IMP=0x0000000100010fc4
- (void)handleEnterBackground;	// IMP=0x0000000100010fb8
- (void)dealloc;	// IMP=0x0000000100010f44
- (id)initWithTimerManager:(id)arg1;	// IMP=0x0000000100010d6c
- (void)stopUpdatingTimerUI;	// IMP=0x0000000100010cd4
- (void)startUpdatingTimerUI;	// IMP=0x0000000100010b60
- (void)updateSelectedSoundUI;	// IMP=0x000000010001095c
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100010954

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

