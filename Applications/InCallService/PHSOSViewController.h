//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HKMedicalIDViewControllerDelegate-Protocol.h"
#import "PHSOSNumbersViewControllerDelegate-Protocol.h"
#import "PHSpringBoardBehavior-Protocol.h"

@class CoreTelephonyClient, HKHealthStore, NSArray, NSString, PHBottomBarButton, PHCountdownView, PHSOSNumbersViewController, PHSlidingView, UILabel, UINavigationController, UIView;

@interface PHSOSViewController : UIViewController <PHSOSNumbersViewControllerDelegate, HKMedicalIDViewControllerDelegate, PHSpringBoardBehavior>
{
    _Bool _shouldDropBioAuthTokenOnDismiss;	// 8 = 0x8
    long long _sosMode;	// 16 = 0x10
    NSArray *_sosHandles;	// 24 = 0x18
    PHBottomBarButton *_cancelButton;	// 32 = 0x20
    PHCountdownView *_countdownView;	// 40 = 0x28
    PHSlidingView *_slidingView;	// 48 = 0x30
    PHSOSNumbersViewController *_sosNumbersViewController;	// 56 = 0x38
    UINavigationController *_medicalIDNavigationController;	// 64 = 0x40
    UILabel *_infoLabel;	// 72 = 0x48
    UIView *_currentView;	// 80 = 0x50
    HKHealthStore *_healthStore;	// 88 = 0x58
    long long _currentInteractiveState;	// 96 = 0x60
    double _countdownStartedTime;	// 104 = 0x68
    double _countdownPausedTime;	// 112 = 0x70
    CoreTelephonyClient *_coreTelephonyClient;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000100067950
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(nonatomic) double countdownPausedTime; // @synthesize countdownPausedTime=_countdownPausedTime;
@property(nonatomic) double countdownStartedTime; // @synthesize countdownStartedTime=_countdownStartedTime;
@property(nonatomic) _Bool shouldDropBioAuthTokenOnDismiss; // @synthesize shouldDropBioAuthTokenOnDismiss=_shouldDropBioAuthTokenOnDismiss;
@property(nonatomic) long long currentInteractiveState; // @synthesize currentInteractiveState=_currentInteractiveState;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UINavigationController *medicalIDNavigationController; // @synthesize medicalIDNavigationController=_medicalIDNavigationController;
@property(retain, nonatomic) PHSOSNumbersViewController *sosNumbersViewController; // @synthesize sosNumbersViewController=_sosNumbersViewController;
@property(retain, nonatomic) PHSlidingView *slidingView; // @synthesize slidingView=_slidingView;
@property(retain, nonatomic) PHCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) PHBottomBarButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSArray *sosHandles; // @synthesize sosHandles=_sosHandles;
@property(nonatomic) long long sosMode; // @synthesize sosMode=_sosMode;
- (void)setUpInfoLabelConstraints;	// IMP=0x0000000100067424
- (void)setUpSOSNumbersListViewConstraints;	// IMP=0x0000000100066f58
- (void)setUpSlidingViewConstraints;	// IMP=0x0000000100066b2c
- (void)setUpCountdownViewConstraints;	// IMP=0x00000001000667a8
- (void)setUpCancelButtonConstraints;	// IMP=0x000000010006658c
- (unsigned long long)desiredButtonEvents;	// IMP=0x0000000100066584
- (_Bool)allowsOrientationChangeEvents;	// IMP=0x000000010006657c
- (_Bool)allowsBanners;	// IMP=0x0000000100066574
- (_Bool)allowsOtherAlertsToStackOnTop;	// IMP=0x000000010006656c
- (_Bool)allowsMenuButtonDismissal;	// IMP=0x0000000100066518
- (void)medicalIDViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000664a8
- (void)sosNumbersViewController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010006646c
- (void)emergencyCallbackModeChangedNotification:(id)arg1;	// IMP=0x00000001000662e0
- (void)deactivateSOSWithSOSDismissalType:(long long)arg1;	// IMP=0x00000001000661b8
- (void)deactivateSOS;	// IMP=0x00000001000661a8
- (void)showConfirmationAlert;	// IMP=0x0000000100065df4
- (void)buttonPressed:(id)arg1;	// IMP=0x0000000100065c9c
- (void)transitionToView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100065954
- (void)presentMedicalID;	// IMP=0x0000000100065620
- (void)hideMedicalIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000655a8
- (void)loadMedicalIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065004
- (void)startSOSNotificationCountdown;	// IMP=0x0000000100064ea4
- (void)showSOSNotificationCountdown;	// IMP=0x0000000100064d10
- (void)showSOSNotificationCanceled;	// IMP=0x0000000100064b10
- (void)showSOSNotified;	// IMP=0x0000000100064868
- (void)showSOSDialCanceled;	// IMP=0x00000001000646c0
- (void)showSOSDialSliding;	// IMP=0x00000001000641c8
- (void)showSOSDialCountdown;	// IMP=0x0000000100063f0c
- (void)showSOSNumbersList;	// IMP=0x0000000100063da4
- (void)willStartSendingLocationUpdate;	// IMP=0x0000000100063d5c
- (void)notifyEmergencyContacts;	// IMP=0x0000000100063bc8
- (void)dialSOSNumberAtIndex:(long long)arg1;	// IMP=0x0000000100063714
- (id)nameForSOSMode:(long long)arg1;	// IMP=0x0000000100063360
- (void)setNotifyCountdownOrMedicalIDMode;	// IMP=0x00000001000631dc
- (void)dismissSOSNotification:(id)arg1;	// IMP=0x0000000100063108
- (void)updateInteractiveState;	// IMP=0x0000000100062fb0
- (void)interactiveStateChangedNotification:(id)arg1;	// IMP=0x0000000100062fa4
- (void)addDismissalAssertionReleasedObserver;	// IMP=0x0000000100062f3c
- (void)removeDismissalAssertionReleasedObserver;	// IMP=0x0000000100062edc
- (void)dismissalAssertionReleasedNotification:(id)arg1;	// IMP=0x0000000100062e44
- (void)callStateChangedNotification:(id)arg1;	// IMP=0x0000000100062c34
- (void)handleNetworkUnavailableAlertDidFinishNotification:(id)arg1;	// IMP=0x0000000100062bb4
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000100062bac
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100062b2c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100062ac8
- (void)viewDidLoad;	// IMP=0x00000001000628dc
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000628a8
- (void)interactiveStop;	// IMP=0x00000001000627ec
- (void)interactiveStart;	// IMP=0x0000000100062708
- (_Bool)shouldAllowLockButtonPressesToDismissSOS;	// IMP=0x00000001000626a8
- (void)updateSOSHandles:(id)arg1;	// IMP=0x0000000100062638
- (void)addObservers;	// IMP=0x0000000100062524
- (_Bool)launchedWithVolumeLockHold;	// IMP=0x0000000100062478
- (id)initWithSOSHandles:(id)arg1;	// IMP=0x0000000100062204

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
