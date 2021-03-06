/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:46 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIViewController;


@protocol SBLockScreenEnvironment <NSObject>
@property (nonatomic,readonly) UIViewController * rootViewController; 
@property (nonatomic,readonly) id<SBAutoUnlockRule> autoUnlockRule; 
@property (nonatomic,readonly) id<SBBiometricUnlockBehavior> biometricUnlockBehavior; 
@property (nonatomic,readonly) id<SBButtonEventsHandler> buttonEventsHandler; 
@property (nonatomic,readonly) id<SBApplicationHosting> applicationHoster; 
@property (nonatomic,readonly) id<SBIdleTimerProviding> idleTimerProvider; 
@property (nonatomic,readonly) id<SBFScreenWakeAnimationTarget> screenWakeAnimationTarget; 
@property (nonatomic,readonly) id<SBLockScreenApplicationLaunching> applicationLauncher; 
@property (nonatomic,readonly) id<SBLockScreenBacklightControlling> backlightController; 
@property (nonatomic,readonly) id<SBLockScreenBehaviorSuppressing> behaviorSuppressor; 
@property (nonatomic,readonly) id<SBLockScreenBlockedStateObserving> blockedStateObserver; 
@property (nonatomic,readonly) id<SBLockScreenButtonObserving> buttonObserver; 
@property (nonatomic,readonly) id<SBLockScreenCallHandling> callController; 
@property (nonatomic,readonly) id<SBLockScreenContentStateProviding> contentStateProvider; 
@property (nonatomic,readonly) id<SBLockScreenCustomActionStoring> customActionStore; 
@property (nonatomic,readonly) id<SBLockScreenIdleTimerControlling> idleTimerController; 
@property (nonatomic,readonly) id<SBLockScreenLockingAndUnlocking> lockController; 
@property (nonatomic,readonly) id<SBLockScreenMediaControlsPresenting> mediaControlsPresenter; 
@property (nonatomic,readonly) id<SBLockScreenPasscodeViewPresenting> passcodeViewPresenter; 
@property (nonatomic,readonly) id<SBLockScreenPluginPresenting> pluginPresenter; 
@property (nonatomic,readonly) id<SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider; 
@property (nonatomic,readonly) id<SBLockScreenStatusBarTransitioning> statusBarTransitionController; 
@required
-(UIViewController *)rootViewController;
-(id<SBLockScreenIdleTimerControlling>)idleTimerController;
-(id<SBLockScreenApplicationLaunching>)applicationLauncher;
-(id<SBFScreenWakeAnimationTarget>)screenWakeAnimationTarget;
-(id<SBLockScreenBacklightControlling>)backlightController;
-(id<SBButtonEventsHandler>)buttonEventsHandler;
-(id<SBLockScreenBehaviorSuppressing>)behaviorSuppressor;
-(id<SBLockScreenCallHandling>)callController;
-(id<SBLockScreenPasscodeViewPresenting>)passcodeViewPresenter;
-(id<SBLockScreenMediaControlsPresenting>)mediaControlsPresenter;
-(id<SBApplicationHosting>)applicationHoster;
-(id<SBLockScreenPluginPresenting>)pluginPresenter;
-(id<SBLockScreenStatusBarTransitioning>)statusBarTransitionController;
-(id<SBLockScreenProximityBehaviorProviding>)proximityBehaviorProvider;
-(id<SBLockScreenCustomActionStoring>)customActionStore;
-(id<SBAutoUnlockRule>)autoUnlockRule;
-(id<SBBiometricUnlockBehavior>)biometricUnlockBehavior;
-(id<SBIdleTimerProviding>)idleTimerProvider;
-(id<SBLockScreenBlockedStateObserving>)blockedStateObserver;
-(id<SBLockScreenButtonObserving>)buttonObserver;
-(id<SBLockScreenContentStateProviding>)contentStateProvider;
-(id<SBLockScreenLockingAndUnlocking>)lockController;

@end

