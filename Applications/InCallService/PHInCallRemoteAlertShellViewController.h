//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class PHHIDEventMonitor, PHInCallRootViewController;
@protocol TUFilteredRequest;

@interface PHInCallRemoteAlertShellViewController : SBUIRemoteAlertServiceViewController
{
    _Bool _hasStartedInitialSuppressionOfInCallStatusBarForFullscreenUIReason;	// 8 = 0x8
    PHHIDEventMonitor *_hidEventMonitor;	// 16 = 0x10
    PHInCallRootViewController *_inCallRootViewController;	// 24 = 0x18
    CDUnknownBlockType _pipFinishedTransitionBlock;	// 32 = 0x20
    id <TUFilteredRequest> _pendingRestrictedScreenTimeRequest;	// 40 = 0x28
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0000000100006a8c
- (void).cxx_destruct;	// IMP=0x0000000100021e60
@property(nonatomic) _Bool hasStartedInitialSuppressionOfInCallStatusBarForFullscreenUIReason; // @synthesize hasStartedInitialSuppressionOfInCallStatusBarForFullscreenUIReason=_hasStartedInitialSuppressionOfInCallStatusBarForFullscreenUIReason;
@property(retain, nonatomic) id <TUFilteredRequest> pendingRestrictedScreenTimeRequest; // @synthesize pendingRestrictedScreenTimeRequest=_pendingRestrictedScreenTimeRequest;
@property(copy) CDUnknownBlockType pipFinishedTransitionBlock; // @synthesize pipFinishedTransitionBlock=_pipFinishedTransitionBlock;
@property(retain, nonatomic) PHInCallRootViewController *inCallRootViewController; // @synthesize inCallRootViewController=_inCallRootViewController;
@property(retain, nonatomic) PHHIDEventMonitor *hidEventMonitor; // @synthesize hidEventMonitor=_hidEventMonitor;
- (void)pipDidCancelNotification:(id)arg1;	// IMP=0x00000001000d3a5c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100006a94
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000001000d39c0
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000001000d3928
- (id)_childViewController;	// IMP=0x000000010001b508
- (void)handleButtonActions:(id)arg1;	// IMP=0x00000001000d31fc
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d2fdc
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d2e40
- (void)handleDoubleHeightStatusBarTap;	// IMP=0x00000001000d2da0
- (void)handleHeadsetButtonPressed:(_Bool)arg1;	// IMP=0x00000001000d2cf8
- (void)handleVolumeDownButtonPressed;	// IMP=0x00000001000d2c58
- (void)handleVolumeUpButtonPressed;	// IMP=0x00000001000d2bb8
- (void)handleLockButtonPressed;	// IMP=0x00000001000d2b18
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0000000100021788
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;	// IMP=0x00000001000d2660
- (id)requestFromAlertActivationContextUserInfo:(id)arg1;	// IMP=0x00000001000d2480
- (void)noteActivatedForCustomReason:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x00000001000d20f8
- (void)requestScreenTimeShieldIfNecessary;	// IMP=0x00000001000d1edc
- (void)_willAppearInRemoteViewController:(id)arg1;	// IMP=0x000000010001b2ec
- (void)_stealViewControllerFromPIP;	// IMP=0x00000001000d1970
- (void)_createRootViewController;	// IMP=0x00000001000076d8
- (void)updateSuppressionIfNecessary;	// IMP=0x000000010001dc40
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x00000001000d1968
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x00000001000d195c
- (id)_childViewControllerForWhitePointAdaptivityStyle;	// IMP=0x00000001000d1950
- (_Bool)_canShowWhileLocked;	// IMP=0x00000001000d1948
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100021790
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010001ce38
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000001000d1850
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001b7e0
- (void)loadView;	// IMP=0x0000000100006da8
- (void)dealloc;	// IMP=0x0000000100021a80
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000069c8

@end

