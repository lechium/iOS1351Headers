//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PHCallViewController.h"

#import "AVCEffectsDelegate-Protocol.h"
#import "CFXCameraViewControllerDelegate-Protocol.h"
#import "CFXEffectBrowserContentPresenterDelegate-Protocol.h"
#import "CNKBuzzedTransitioningProtocol-Protocol.h"
#import "CNKFaceTimeCameraViewControllerDelegate-Protocol.h"
#import "CNKFaceTimeInCallControlsDragControllerDelegate-Protocol.h"
#import "CNKFaceTimeInCallControlsViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "PHAudioRoutingAlertDataSource-Protocol.h"
#import "PHAudioRoutingAlertDelegate-Protocol.h"
#import "PHCallParticipantsViewDelegate-Protocol.h"
#import "PHVideoCallVideoGroupViewDelegate-Protocol.h"
#import "PHVideoOverlayViewControllerDelegate-Protocol.h"
#import "TUMomentsControllerDelegate-Protocol.h"
#import "TURouteControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class AVCEffects, CFXEffectBrowserViewController, CNKEffectsLayoutController, CNKFaceTimeCameraViewController, CUShutterButton, ICSFlashView, ICSInsulatingView, ICSPIPButton, NSArray, NSDate, NSLayoutConstraint, NSString, NSTimer, PHAudioRoutingAlertController, PHCallParticipantsView, PHStatusBarGradientView, PHSublayerResizingView, PHVideoCallInterfaceOverlayView, PHVideoCallVideoGroupView, PHVideoOverlayViewController, TUCall, TUMomentsController, UIColor, UIControl, UILabel, UIPinchGestureRecognizer, UIView, _UIBackdropView;

@interface PHVideoCallViewController : PHCallViewController <PHAudioRoutingAlertDataSource, PHAudioRoutingAlertDelegate, UIPopoverPresentationControllerDelegate, CFXCameraViewControllerDelegate, CFXEffectBrowserContentPresenterDelegate, CNKFaceTimeCameraViewControllerDelegate, PHVideoCallVideoGroupViewDelegate, PHCallParticipantsViewDelegate, MFMessageComposeViewControllerDelegate, TUMomentsControllerDelegate, PHVideoOverlayViewControllerDelegate, TURouteControllerDelegate, AVCEffectsDelegate, CNKFaceTimeInCallControlsViewControllerDelegate, CNKBuzzedTransitioningProtocol, CNKFaceTimeInCallControlsDragControllerDelegate>
{
    UIControl *_videoGroupView;	// 8 = 0x8
    UIView *_pipVideoGroupView;	// 16 = 0x10
    PHVideoCallVideoGroupView *_pipVideoContainer;	// 24 = 0x18
    UIView *_pipVideoDimmingView;	// 32 = 0x20
    UIView *_pipVideoView;	// 40 = 0x28
    UIView *_pipVideoBackView;	// 48 = 0x30
    UIView *_pipVideoFrameView;	// 56 = 0x38
    UIView *_fullScreenVideoGroupView;	// 64 = 0x40
    UIControl *_fullScreenVideoContainer;	// 72 = 0x48
    PHSublayerResizingView *_fullScreenVideoView;	// 80 = 0x50
    PHSublayerResizingView *_fullScreenVideoBackView;	// 88 = 0x58
    UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 96 = 0x60
    UIView *_pipVideoOverlayView;	// 104 = 0x68
    _UIBackdropView *_fullScreenVideoBackdropView;	// 112 = 0x70
    UIView *_pipVideoMutedView;	// 120 = 0x78
    UILabel *_statsHUDTextLabel;	// 128 = 0x80
    NSTimer *_statsHUDTimer;	// 136 = 0x88
    long long _lastKnownOrientation;	// 144 = 0x90
    PHVideoCallInterfaceOverlayView *_callBarOverlayView;	// 152 = 0x98
    CNKFaceTimeCameraViewController *_effectsViewController;	// 160 = 0xa0
    NSTimer *_autodismissRouteListTimer;	// 168 = 0xa8
    _Bool _waitingForLocalVideoFirstFrame;	// 176 = 0xb0
    _Bool _useLargeTextAndIcons;	// 177 = 0xb1
    _Bool _isShowingTopBar;	// 178 = 0xb2
    _Bool _isShowingBottomBar;	// 179 = 0xb3
    _Bool _isShowingControlsBar;	// 180 = 0xb4
    _Bool _isShowingFullConferenceDisplay;	// 181 = 0xb5
    _Bool _isShowFullConferenceDisplayAnimationComplete;	// 182 = 0xb6
    _Bool _isShowingCallWaitingUI;	// 183 = 0xb7
    _Bool _isShowingLockScreenUI;	// 184 = 0xb8
    _Bool _isShowingExpandedLocalVideo;	// 185 = 0xb9
    _Bool _isShowingEffectsBrowser;	// 186 = 0xba
    _Bool _effectsEnabled;	// 187 = 0xbb
    _Bool _isShowingExpandedControls;	// 188 = 0xbc
    _Bool _shouldShowSensitiveUI;	// 189 = 0xbd
    _Bool _willTransitionToMultiwayViewController;	// 190 = 0xbe
    _Bool _willTransitionToStagingViewController;	// 191 = 0xbf
    _Bool _isRegisteredForPresentedNotifications;	// 192 = 0xc0
    _Bool _isPresented;	// 193 = 0xc1
    _Bool _cameraUnavailable;	// 194 = 0xc2
    _Bool _wantsVideo;	// 195 = 0xc3
    _Bool _shouldShowZoomControls;	// 196 = 0xc4
    float _currentZoomFactor;	// 200 = 0xc8
    float _initialZoomFactor;	// 204 = 0xcc
    unsigned long long _rotationType;	// 208 = 0xd0
    PHCallParticipantsView *_callParticipantsView;	// 216 = 0xd8
    PHVideoOverlayViewController *_overlayViewController;	// 224 = 0xe0
    ICSInsulatingView *_momentsIndicatorInsulatingView;	// 232 = 0xe8
    ICSPIPButton *_flipButton;	// 240 = 0xf0
    PHAudioRoutingAlertController *_routeListController;	// 248 = 0xf8
    long long _lockedLocalOrientationForPIP;	// 256 = 0x100
    long long _lastValidOrientationForRemoteCamera;	// 264 = 0x108
    CDUnknownBlockType _deviceOrientationBlock;	// 272 = 0x110
    NSTimer *_backupRotationTimer;	// 280 = 0x118
    PHStatusBarGradientView *_fullScreenVideoStatusBarGradientView;	// 288 = 0x120
    CFXEffectBrowserViewController *_effectsBrowserViewController;	// 296 = 0x128
    CNKEffectsLayoutController *_effectsLayoutController;	// 304 = 0x130
    NSString *_contactName;	// 312 = 0x138
    TUCall *_callForParticipantsView;	// 320 = 0x140
    PHSublayerResizingView *_fullScreenVideoScreenView;	// 328 = 0x148
    ICSFlashView *_flashView;	// 336 = 0x150
    ICSFlashView *_pipVideoFlashView;	// 344 = 0x158
    CUShutterButton *_shutterButton;	// 352 = 0x160
    long long _shutterButtonStyle;	// 360 = 0x168
    NSLayoutConstraint *_shutterButtonLeftConstraint;	// 368 = 0x170
    NSLayoutConstraint *_shutterButtonRightConstraint;	// 376 = 0x178
    AVCEffects *_avcEffects;	// 384 = 0x180
    CDUnknownBlockType _localCameraFlipCompletion;	// 392 = 0x188
    NSString *_displayLabelString;	// 400 = 0x190
    NSDate *_showRemoteAsChangingMirroredVideoUntilDate;	// 408 = 0x198
    UIColor *_startingWindowBackgroundColor;	// 416 = 0x1a0
    CDUnknownBlockType _pipStateDidChangeToNonTransitoryCompletionBlock;	// 424 = 0x1a8
    TUMomentsController *_momentsController;	// 432 = 0x1b0
    struct CGRect _unexpandedPipFrame;	// 440 = 0x1b8
}

+ (_Bool)isDockState:(long long)arg1;	// IMP=0x00000001000c2f5c
+ (_Bool)isVisibleState:(long long)arg1;	// IMP=0x00000001000c2f4c
+ (_Bool)isExpandedState:(long long)arg1;	// IMP=0x00000001000c2f3c
+ (long long)stateWithoutDockForState:(long long)arg1;	// IMP=0x00000001000c2ed8
+ (id)dismissalAssertionReason;	// IMP=0x00000001000b0160
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x0000000100079ed8
- (void).cxx_destruct;	// IMP=0x00000001000c5450
@property(retain, nonatomic) TUMomentsController *momentsController; // @synthesize momentsController=_momentsController;
@property(copy) CDUnknownBlockType pipStateDidChangeToNonTransitoryCompletionBlock; // @synthesize pipStateDidChangeToNonTransitoryCompletionBlock=_pipStateDidChangeToNonTransitoryCompletionBlock;
@property(retain, nonatomic) UIColor *startingWindowBackgroundColor; // @synthesize startingWindowBackgroundColor=_startingWindowBackgroundColor;
@property(retain, nonatomic) NSDate *showRemoteAsChangingMirroredVideoUntilDate; // @synthesize showRemoteAsChangingMirroredVideoUntilDate=_showRemoteAsChangingMirroredVideoUntilDate;
@property(nonatomic) _Bool shouldShowZoomControls; // @synthesize shouldShowZoomControls=_shouldShowZoomControls;
@property(nonatomic) _Bool wantsVideo; // @synthesize wantsVideo=_wantsVideo;
@property _Bool cameraUnavailable; // @synthesize cameraUnavailable=_cameraUnavailable;
@property _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(retain) NSString *displayLabelString; // @synthesize displayLabelString=_displayLabelString;
@property _Bool isRegisteredForPresentedNotifications; // @synthesize isRegisteredForPresentedNotifications=_isRegisteredForPresentedNotifications;
@property(retain, nonatomic) PHVideoCallInterfaceOverlayView *callBarOverlayView; // @synthesize callBarOverlayView=_callBarOverlayView;
@property(copy, nonatomic) CDUnknownBlockType localCameraFlipCompletion; // @synthesize localCameraFlipCompletion=_localCameraFlipCompletion;
@property(retain, nonatomic) AVCEffects *avcEffects; // @synthesize avcEffects=_avcEffects;
@property(retain, nonatomic) UIView *pipVideoMutedView; // @synthesize pipVideoMutedView=_pipVideoMutedView;
@property(retain, nonatomic) UIView *pipVideoOverlayView; // @synthesize pipVideoOverlayView=_pipVideoOverlayView;
@property(nonatomic) struct CGRect unexpandedPipFrame; // @synthesize unexpandedPipFrame=_unexpandedPipFrame;
@property(retain, nonatomic) NSLayoutConstraint *shutterButtonRightConstraint; // @synthesize shutterButtonRightConstraint=_shutterButtonRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *shutterButtonLeftConstraint; // @synthesize shutterButtonLeftConstraint=_shutterButtonLeftConstraint;
@property(nonatomic) long long shutterButtonStyle; // @synthesize shutterButtonStyle=_shutterButtonStyle;
@property(retain, nonatomic) CUShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property(nonatomic) float initialZoomFactor; // @synthesize initialZoomFactor=_initialZoomFactor;
@property(nonatomic) float currentZoomFactor; // @synthesize currentZoomFactor=_currentZoomFactor;
@property(retain, nonatomic) ICSFlashView *pipVideoFlashView; // @synthesize pipVideoFlashView=_pipVideoFlashView;
@property(retain, nonatomic) ICSFlashView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) PHSublayerResizingView *fullScreenVideoScreenView; // @synthesize fullScreenVideoScreenView=_fullScreenVideoScreenView;
@property(retain, nonatomic) PHSublayerResizingView *fullScreenVideoBackView; // @synthesize fullScreenVideoBackView=_fullScreenVideoBackView;
@property(retain, nonatomic) PHSublayerResizingView *fullScreenVideoView; // @synthesize fullScreenVideoView=_fullScreenVideoView;
@property(retain, nonatomic) UIControl *fullScreenVideoContainer; // @synthesize fullScreenVideoContainer=_fullScreenVideoContainer;
@property(retain, nonatomic) UIView *fullScreenVideoGroupView; // @synthesize fullScreenVideoGroupView=_fullScreenVideoGroupView;
@property(retain, nonatomic) UIView *pipVideoFrameView; // @synthesize pipVideoFrameView=_pipVideoFrameView;
@property(retain, nonatomic) UIView *pipVideoBackView; // @synthesize pipVideoBackView=_pipVideoBackView;
@property(retain, nonatomic) UIView *pipVideoView; // @synthesize pipVideoView=_pipVideoView;
@property(retain, nonatomic) UIView *pipVideoDimmingView; // @synthesize pipVideoDimmingView=_pipVideoDimmingView;
@property(retain, nonatomic) PHVideoCallVideoGroupView *pipVideoContainer; // @synthesize pipVideoContainer=_pipVideoContainer;
@property(retain, nonatomic) UIView *pipVideoGroupView; // @synthesize pipVideoGroupView=_pipVideoGroupView;
@property(retain, nonatomic) UIControl *videoGroupView; // @synthesize videoGroupView=_videoGroupView;
@property(retain, nonatomic) TUCall *callForParticipantsView; // @synthesize callForParticipantsView=_callForParticipantsView;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) CNKEffectsLayoutController *effectsLayoutController; // @synthesize effectsLayoutController=_effectsLayoutController;
@property(retain, nonatomic) CFXEffectBrowserViewController *effectsBrowserViewController; // @synthesize effectsBrowserViewController=_effectsBrowserViewController;
@property(retain, nonatomic) CNKFaceTimeCameraViewController *effectsViewController; // @synthesize effectsViewController=_effectsViewController;
@property(nonatomic) _Bool willTransitionToStagingViewController; // @synthesize willTransitionToStagingViewController=_willTransitionToStagingViewController;
@property(nonatomic) _Bool willTransitionToMultiwayViewController; // @synthesize willTransitionToMultiwayViewController=_willTransitionToMultiwayViewController;
@property(retain) PHStatusBarGradientView *fullScreenVideoStatusBarGradientView; // @synthesize fullScreenVideoStatusBarGradientView=_fullScreenVideoStatusBarGradientView;
@property(retain) NSTimer *backupRotationTimer; // @synthesize backupRotationTimer=_backupRotationTimer;
@property(copy) CDUnknownBlockType deviceOrientationBlock; // @synthesize deviceOrientationBlock=_deviceOrientationBlock;
@property long long lastValidOrientationForRemoteCamera; // @synthesize lastValidOrientationForRemoteCamera=_lastValidOrientationForRemoteCamera;
@property long long lockedLocalOrientationForPIP; // @synthesize lockedLocalOrientationForPIP=_lockedLocalOrientationForPIP;
@property(retain, nonatomic) PHAudioRoutingAlertController *routeListController; // @synthesize routeListController=_routeListController;
@property(readonly, nonatomic) _Bool shouldShowSensitiveUI; // @synthesize shouldShowSensitiveUI=_shouldShowSensitiveUI;
@property(retain, nonatomic) ICSPIPButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) ICSInsulatingView *momentsIndicatorInsulatingView; // @synthesize momentsIndicatorInsulatingView=_momentsIndicatorInsulatingView;
@property(retain, nonatomic) PHVideoOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(retain, nonatomic) PHCallParticipantsView *callParticipantsView; // @synthesize callParticipantsView=_callParticipantsView;
@property(readonly, nonatomic) _Bool isShowingExpandedControls; // @synthesize isShowingExpandedControls=_isShowingExpandedControls;
@property(nonatomic) _Bool effectsEnabled; // @synthesize effectsEnabled=_effectsEnabled;
@property(nonatomic) _Bool isShowingEffectsBrowser; // @synthesize isShowingEffectsBrowser=_isShowingEffectsBrowser;
@property(nonatomic) _Bool isShowingExpandedLocalVideo; // @synthesize isShowingExpandedLocalVideo=_isShowingExpandedLocalVideo;
@property(nonatomic) _Bool isShowingLockScreenUI; // @synthesize isShowingLockScreenUI=_isShowingLockScreenUI;
@property(nonatomic) _Bool isShowingCallWaitingUI; // @synthesize isShowingCallWaitingUI=_isShowingCallWaitingUI;
@property(nonatomic) _Bool isShowFullConferenceDisplayAnimationComplete; // @synthesize isShowFullConferenceDisplayAnimationComplete=_isShowFullConferenceDisplayAnimationComplete;
@property(nonatomic) _Bool isShowingFullConferenceDisplay; // @synthesize isShowingFullConferenceDisplay=_isShowingFullConferenceDisplay;
@property(nonatomic) _Bool isShowingControlsBar; // @synthesize isShowingControlsBar=_isShowingControlsBar;
@property(nonatomic) _Bool isShowingBottomBar; // @synthesize isShowingBottomBar=_isShowingBottomBar;
@property(nonatomic) _Bool isShowingTopBar; // @synthesize isShowingTopBar=_isShowingTopBar;
@property(nonatomic) _Bool useLargeTextAndIcons; // @synthesize useLargeTextAndIcons=_useLargeTextAndIcons;
@property(nonatomic) unsigned long long rotationType; // @synthesize rotationType=_rotationType;
@property(readonly, nonatomic) _Bool isCarPlayConnected;
- (id)incomingVideoOrMultiwayCallUsingCallContainer:(id)arg1;	// IMP=0x00000001000c4a18
- (id)incomingVideoOrMultiwayCall;	// IMP=0x00000001000c49b0
- (id)currentVideoOrMultiwayCall;	// IMP=0x00000001000c47d8
@property(readonly, nonatomic) UIView *localParticipantView;
@property(readonly, copy, nonatomic) NSArray *disappearingViews;
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x00000001000c4604
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x00000001000c45e4
- (void)routesChangedForRouteController:(id)arg1;	// IMP=0x00000001000c452c
- (void)momentsController:(id)arg1 willCaptureRemoteRequestFromIdentifier:(id)arg2;	// IMP=0x00000001000c44ac
- (void)momentsController:(id)arg1 didUpdateCapabilities:(id)arg2 forCall:(id)arg3;	// IMP=0x00000001000c43d8
- (void)videoGroupViewDidStartDrag:(id)arg1;	// IMP=0x00000001000c4310
- (void)videoGroupView:(id)arg1 didUpdateCorner:(long long)arg2;	// IMP=0x00000001000c4018
- (void)videoOverlayViewController:(id)arg1 isShowingOverlay:(_Bool)arg2;	// IMP=0x00000001000c400c
- (void)endCaptureForRequestWithTransactionID:(id)arg1;	// IMP=0x00000001000c3dd8
- (id)nameForPhotoIndicator;	// IMP=0x00000001000c3cd4
- (void)remoteDidTakePhoto;	// IMP=0x00000001000c3b60
- (void)didTakePhoto;	// IMP=0x00000001000c3a3c
- (void)capturePhotoForCall:(id)arg1;	// IMP=0x00000001000c3600
- (void)didPressCapturePhotoButton;	// IMP=0x00000001000c3490
- (void)updateFaceTimePhotosButton;	// IMP=0x00000001000c3240
- (void)setupFlashViewIfNecessary;	// IMP=0x00000001000c30f8
- (void)setupMomentsViewsIfNecessary;	// IMP=0x00000001000c2f80
- (void)updateShutterButtonForControlsState:(long long)arg1;	// IMP=0x00000001000c2dc0
- (long long)shortestValidInCallControlsState;	// IMP=0x00000001000c2d80
- (void)setControlsState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c2af4
- (void)openMessagesToAddress:(id)arg1;	// IMP=0x00000001000c2984
- (void)toggleEffects;	// IMP=0x00000001000c2728
- (void)resetEffectsState;	// IMP=0x00000001000c261c
- (void)didCreateTableViewForInCallControlsViewController:(id)arg1;	// IMP=0x00000001000c2618
- (void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2;	// IMP=0x00000001000c236c
- (void)inCallControlsDragController:(id)arg1 willStartDragFrom:(long long)arg2;	// IMP=0x00000001000c22e8
- (void)inCallControlsDragController:(id)arg1 didStartDragTo:(long long)arg2;	// IMP=0x00000001000c2250
- (void)inCallControlsDragController:(id)arg1 didEndDragAt:(long long)arg2;	// IMP=0x00000001000c2184
- (long long)inCallControlsDragControllerShortestState:(id)arg1;	// IMP=0x00000001000c2100
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;	// IMP=0x00000001000c1f78
- (struct CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1;	// IMP=0x00000001000c1ef0
- (void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000c1e3c
- (void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000c1d88
- (_Bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;	// IMP=0x00000001000c1d10
- (void)didSelectApp:(id)arg1;	// IMP=0x00000001000c1cc4
- (int)avcEffectsTypeFromEffectsState:(long long)arg1;	// IMP=0x00000001000c1cac
- (void)cameraViewController:(id)arg1 didChangeEffectsState:(long long)arg2;	// IMP=0x00000001000c1c4c
- (void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2;	// IMP=0x00000001000c1b68
- (void)cameraViewController:(id)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4;	// IMP=0x00000001000c1b58
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(id)arg1;	// IMP=0x00000001000c1b20
- (void)notifyRegisterDispatchForName:(const char *)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c1a84
- (void)automation_setEffectsModeEnabled:(_Bool)arg1;	// IMP=0x00000001000c19fc
- (void)clearEffectsState;	// IMP=0x00000001000c1964
- (void)serverDidTimeout:(id)arg1;	// IMP=0x00000001000c17dc
- (struct CGRect)contentsRectFromPixelBuffer:(struct __CVBuffer *)arg1 presentationRect:(struct CGRect)arg2 shouldSwapOrientation:(_Bool)arg3;	// IMP=0x00000001000c170c
- (void)didCaptureVideoFrame:(id)arg1;	// IMP=0x00000001000c12d8
- (void)removeAllEffectsObjects;	// IMP=0x00000001000c1100
- (void)hideEffectsBrowser;	// IMP=0x00000001000c10b8
- (void)_setupEffectsViewControllersIfNecessary;	// IMP=0x00000001000c0bc8
- (void)_setupAVCEffectsIfNecessary;	// IMP=0x00000001000c0b54
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x00000001000c0b4c
- (id)localizedSenderIdentityForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c0a44
- (id)overrideStringForParticipantsView:(id)arg1;	// IMP=0x00000001000c0a3c
- (_Bool)shouldShowSingleDurationLabelInParticipantsView:(id)arg1;	// IMP=0x00000001000c0a34
- (_Bool)shouldShowInfoButtonForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c0a2c
- (unsigned long long)numberOfParticipantsForParticipantsView:(id)arg1;	// IMP=0x00000001000c0a24
- (unsigned short)activityStateForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c0a1c
- (id)supplementalParticipantLabelFormatStringAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c0a14
- (id)labelForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c08f0
- (id)callForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c08e4
- (id)nameForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c08d8
- (id)contactForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000c08cc
- (struct CGRect)preferredPIPContentRect;	// IMP=0x00000001000c06c0
- (struct CGSize)preferredContentAspectRatio;	// IMP=0x00000001000c06b4
- (void)hardwareButtonEventNotification:(id)arg1;	// IMP=0x00000001000c02bc
- (unsigned long long)desiredButtonEventsForCallContainer:(id)arg1;	// IMP=0x00000001000c01e8
- (unsigned long long)desiredButtonEvents;	// IMP=0x00000001000c0188
- (_Bool)allowsOrientationChangeEvents;	// IMP=0x00000001000c0180
- (_Bool)allowsBanners;	// IMP=0x00000001000c0144
- (_Bool)allowsMenuButtonDismissal;	// IMP=0x00000001000c0108
- (void)_handleScreenConnectionDidUpdateNotification:(id)arg1;	// IMP=0x00000001000c00fc
- (void)updateCarPlayVideoState;	// IMP=0x00000001000bff50
- (void)_updateRemoteVideoPresentationState;	// IMP=0x00000001000bfd7c
- (void)_informOfRemoteVideoPresentationSizeChange;	// IMP=0x00000001000bfb80
- (void)_handlePIPDidFinishResizingNotification:(id)arg1;	// IMP=0x00000001000bfb04
- (void)_handlePIPControllerStateDidChangeNotification:(id)arg1;	// IMP=0x00000001000bf2d8
- (void)_handleVideoCallRemoteVideoStateDidChange:(id)arg1;	// IMP=0x00000001000bf1dc
- (void)_handleVideoCallRemoteScreenDidChange:(id)arg1;	// IMP=0x00000001000bf0a0
- (void)_handleRemoteVideoMirroredDidChange:(id)arg1;	// IMP=0x00000001000bedf4
- (void)_handleVideoCallRemoteVideoDidChange:(id)arg1;	// IMP=0x00000001000be934
- (void)_handleVideoCallRemoteVideoCameraTypeChanged:(id)arg1;	// IMP=0x00000001000be7e0
- (void)_handleVideoCallInvitationSent:(id)arg1;	// IMP=0x00000001000be774
- (void)registerCurrentCallForMomentsIfNecessary;	// IMP=0x00000001000be3ac
- (void)_handleCallConnected:(id)arg1;	// IMP=0x00000001000bde60
- (void)_handleVideoPreviewFirstFrameArrived:(id)arg1;	// IMP=0x00000001000bd89c
- (void)_handleCameraZoomUnavailableNotification:(id)arg1;	// IMP=0x00000001000bd7a4
- (void)_handleCameraZoomAvailableNotification:(id)arg1;	// IMP=0x00000001000bd694
- (void)_handleVideoPreviewDidStopNotification:(id)arg1;	// IMP=0x00000001000bd554
- (void)_handleVideoPreviewDidStartNotification:(id)arg1;	// IMP=0x00000001000bd51c
- (void)_handleLocalCameraAvailableNotification:(id)arg1;	// IMP=0x00000001000bd464
- (void)_handleLocalCameraErrorNotification:(id)arg1;	// IMP=0x00000001000bd37c
- (void)setLocalCameraPosition:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bd1b8
- (void)toggleLocalCameraType;	// IMP=0x00000001000bce14
- (void)updateRemoteOverlays;	// IMP=0x00000001000bca84
- (void)showLocalViewAsMuted:(_Bool)arg1;	// IMP=0x00000001000bc634
- (id)_viewWithImage:(id)arg1 title:(id)arg2 bounds:(struct CGRect)arg3 center:(struct CGPoint)arg4;	// IMP=0x00000001000bc1e8
- (void)_ensureFullScreenVideoBackdropViewExists;	// IMP=0x00000001000bc0a4
- (void)_ensurePIPVideoOverlayViewExists;	// IMP=0x00000001000bbee0
- (void)setMuteButtonSelected:(_Bool)arg1;	// IMP=0x00000001000bbe50
- (void)resumeFromCallWaitingAnimated:(_Bool)arg1;	// IMP=0x00000001000bbd14
- (void)prepareForCallWaitingAnimated:(_Bool)arg1;	// IMP=0x00000001000bbb10
- (void)returnToFullScreenPreviewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bb59c
- (void)synchronizedSecondTickNotification:(id)arg1;	// IMP=0x00000001000bb590
- (void)wantsHoldMusicChangedNotification:(id)arg1;	// IMP=0x00000001000bb350
- (void)pausePreview;	// IMP=0x00000001000bb244
- (void)stopPreview;	// IMP=0x00000001000bb138
- (void)stopOrPausePreview;	// IMP=0x00000001000bb0c4
- (void)startPreview;	// IMP=0x00000001000bac38
- (void)startPreviewIfNeeded;	// IMP=0x00000001000baad8
- (void)initalizePreviewIfNeeded;	// IMP=0x00000001000baa44
- (void)updateViewControllerForOrientation:(long long)arg1;	// IMP=0x00000001000ba9e0
- (void)updateAudioButton:(_Bool)arg1;	// IMP=0x00000001000ba900
- (void)uplinkMuteStatusChangedNotification:(id)arg1;	// IMP=0x00000001000ba858
- (void)_resetDisplayControllerForNewFaceTimeCall;	// IMP=0x00000001000ba768
- (void)handleThreeFingerPress:(id)arg1;	// IMP=0x00000001000ba6b8
- (void)resetStatsHUDTimer;	// IMP=0x00000001000ba67c
- (void)setupStatsHUDTimer;	// IMP=0x00000001000ba604
- (void)_updateStatsHUD;	// IMP=0x00000001000ba1b8
- (void)_createStatsHUD;	// IMP=0x00000001000ba060
- (void)_flipRemoteCameraViewToCameraType:(long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b9d88
- (void)_flipLocalCameraViewToCameraPosition:(long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b9a70
- (void)updateTopBarLabel;	// IMP=0x00000001000b9498
- (id)contact;	// IMP=0x00000001000b93a4
- (void)clearCachedContactInfo;	// IMP=0x00000001000b9368
- (void)updateContactInformation;	// IMP=0x00000001000b9054
- (void)_setupVideoLayers;	// IMP=0x00000001000b901c
- (id)createFullScreenVideoViewWithFrame:(struct CGRect)arg1 hidden:(_Bool)arg2 name:(id)arg3;	// IMP=0x00000001000b8ec0
- (void)_ensureVideoLayersExist;	// IMP=0x00000001000b803c
- (void)changeToFullConferenceDisplayAnimated:(_Bool)arg1;	// IMP=0x00000001000b729c
- (void)zoomToFactor:(float)arg1;	// IMP=0x00000001000b7204
- (void)handlePinchWithState:(long long)arg1 scale:(double)arg2;	// IMP=0x00000001000b7178
- (void)handlePinchWithGestureRecognizer:(id)arg1;	// IMP=0x00000001000b70f4
- (void)removeCameraZoomControls;	// IMP=0x00000001000b7034
- (void)setUpCameraZoomControls;	// IMP=0x00000001000b6f54
- (void)updatePIPToExpanded:(_Bool)arg1;	// IMP=0x00000001000b692c
- (void)showControlsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b67c0
- (_Bool)shouldBeInFullConferenceDisplay;	// IMP=0x00000001000b6728
- (void)showInCallStateEndedForCall:(id)arg1;	// IMP=0x00000001000b6074
- (id)_defaultStringForCall:(id)arg1;	// IMP=0x00000001000b5ee0
- (void)_delayedEndFaceTimeDisplayAnimation;	// IMP=0x00000001000b5e84
- (void)_endFaceTimeDisplayAnimation;	// IMP=0x00000001000b5dc8
- (void)_deselectEndVideoButton;	// IMP=0x00000001000b5d80
- (void)_selectEndVideoButton;	// IMP=0x00000001000b5d38
- (void)_removeOverlayViews;	// IMP=0x00000001000b5c84
- (void)autoFadeOutBottomBar;	// IMP=0x00000001000b5a24
- (void)resetScheduledAutoFadeOutBottomBar;	// IMP=0x00000001000b5944
- (void)cancelScheduledAutoFadeOutBottomBar;	// IMP=0x00000001000b58b0
- (void)toggleInCallControlsViewState:(_Bool)arg1;	// IMP=0x00000001000b5634
- (void)updateTopBar:(_Bool)arg1 bottomBar:(_Bool)arg2 controlsBar:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x00000001000b4dd8
- (void)updateTopBar:(_Bool)arg1 bottomControlsVisibility:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000b4db4
@property(readonly, nonatomic) _Bool isShowingControlsViewController;
- (long long)multiwayOrientationFor:(long long)arg1;	// IMP=0x00000001000b4cfc
- (void)updateControlsConstraintsControllerWithOrientation:(long long)arg1;	// IMP=0x00000001000b4c08
- (void)_setupCallBars;	// IMP=0x00000001000b3c68
- (void)_dissociateVideoLayers;	// IMP=0x00000001000b39c0
- (void)_dissociateRemoteVideoLayersForCall:(id)arg1;	// IMP=0x00000001000b38b0
- (void)associateRemoteVideoLayers;	// IMP=0x00000001000b35b4
- (void)associateLocalVideoLayers;	// IMP=0x00000001000b3464
- (_Bool)shouldDisableEdgeClip;	// IMP=0x00000001000b3454
- (void)resetLocalPreviewState;	// IMP=0x00000001000b333c
- (_Bool)supportsBackFacingCamera;	// IMP=0x00000001000b32d0
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000b3244
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x00000001000b31d4
- (void)_leaveMessage;	// IMP=0x00000001000b2ee0
- (void)bottomBarActionPerformed:(long long)arg1 withCompletionState:(long long)arg2 fromBar:(id)arg3;	// IMP=0x00000001000b2770
- (void)_endCall;	// IMP=0x00000001000b2474
- (void)_updateLocalVideoEnabled:(_Bool)arg1 shouldToggleWantsVideo:(_Bool)arg2;	// IMP=0x00000001000b2220
- (void)_toggleLocalVideo;	// IMP=0x00000001000b2190
- (void)_toggleMute;	// IMP=0x00000001000b2138
- (void)sliderActionFromBar:(id)arg1 slidToProportion:(float)arg2;	// IMP=0x00000001000b2134
- (_Bool)shouldShowActionTypeAudioRoute;	// IMP=0x00000001000b20b8
- (_Bool)shouldShowActionTypePunchOut;	// IMP=0x00000001000b201c
- (_Bool)shouldShowActionTypeCameraFlip;	// IMP=0x00000001000b2010
- (_Bool)shouldShowActionTypeEffects;	// IMP=0x00000001000b2008
- (_Bool)shouldShowActionTypePhotoCapture;	// IMP=0x00000001000b1f30
- (void)updateRemoteViewsWithCurrentCall;	// IMP=0x00000001000b1e58
- (void)updateControlsWithCurrentCall;	// IMP=0x00000001000b1d94
- (void)updateControlsVideoButtonEnabled;	// IMP=0x00000001000b1cbc
- (void)setCurrentState:(unsigned short)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000b10f8
- (void)setCurrentState:(unsigned short)arg1;	// IMP=0x00000001000b10e8
- (_Bool)_call:(id)arg1 isCrossInvitationWithCall:(id)arg2;	// IMP=0x00000001000b1018
- (void)updateCurrentState;	// IMP=0x00000001000b0834
- (void)_handleCallStartedConnecting:(id)arg1;	// IMP=0x00000001000b0760
- (void)videoCallStateChangedNotification:(id)arg1;	// IMP=0x00000001000b01bc
- (void)releaseDismissalAssertion;	// IMP=0x00000001000b016c
- (_Bool)needsDismissalAssertion;	// IMP=0x00000001000b010c
@property(readonly, retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000aff6c
- (void)deregisterForPresentedNotifications;	// IMP=0x00000001000afd6c
- (void)registerForPresentedNotificationsIfNecessary;	// IMP=0x00000001000afb10
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000af850
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000af660
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000001000af5c0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000af414
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000aeeec
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000aec80
- (void)_handlePIPDidCancelNotification:(id)arg1;	// IMP=0x00000001000aeae4
- (void)_sublayerResizingViewDidResizeNotification:(id)arg1;	// IMP=0x00000001000aea10
- (void)loadView;	// IMP=0x00000001000ae73c
- (void)dealloc;	// IMP=0x00000001000ae4d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000adae4
- (void)toggleLocalCameraType:(CDUnknownBlockType)arg1;	// IMP=0x0000000100052bf8
- (void)_testing_didTransitionToIncomingRingingCallState:(id)arg1;	// IMP=0x0000000100052aa8
- (void)_testing_didTransitionToIdleCallState;	// IMP=0x0000000100052960
- (void)_testing_didTransitionToEndedCallState;	// IMP=0x00000001000528fc
- (void)_testing_didTransitionToOutgoingRingingCallState:(id)arg1;	// IMP=0x00000001000525c8
- (void)_testing_didTransitionToActiveCallState:(id)arg1;	// IMP=0x0000000100052564
- (void)_testing_finishedAnimatingToActiveCallState:(id)arg1;	// IMP=0x00000001000524d0
- (void)_resetPIPToFullScreen;	// IMP=0x000000010006bb64
- (void)_adjustPIPBoundsForCurrentOrientationAnimated:(_Bool)arg1;	// IMP=0x000000010006b688
- (struct CGRect)_cornerLocationsRectForOrientation:(long long)arg1;	// IMP=0x000000010006b060
- (struct CGRect)_pipBorderBoundsForPIPSize:(struct CGSize)arg1;	// IMP=0x000000010006b048
- (struct CGSize)_pipSizeForAspectRatio:(struct CGSize)arg1;	// IMP=0x000000010006af14
- (double)_pipWidth;	// IMP=0x000000010006af00
- (void)_ensureLocalVideoWillBecomeVisible;	// IMP=0x000000010006ae74
- (void)_autoFadeInLocalVideo;	// IMP=0x000000010006adf4
- (void)_fadeInLocalVideo;	// IMP=0x000000010006ac50
- (double)_pipStatusBarPadding;	// IMP=0x000000010006ac1c
- (unsigned long long)_flipAnimationOptionsForOrientation:(long long)arg1;	// IMP=0x000000010007d07c
- (void)_updateLocalVideoOrientationAnimated:(_Bool)arg1;	// IMP=0x000000010007cdb8
- (void)_adjustFullScreenView:(id)arg1 forOrientation:(long long)arg2;	// IMP=0x000000010007ca98
- (void)_adjustForOrientationAnimated:(_Bool)arg1;	// IMP=0x000000010007ca88
- (void)_adjustRemoteVideoBounds;	// IMP=0x000000010007c774
- (void)_adjustForOrientationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007b778
- (void)_reorderPIPAboveBottomBar;	// IMP=0x000000010007b6f4
- (long long)_preferredLocalOrientationForDeviceOrientation;	// IMP=0x000000010007b43c
- (struct CGRect)_boundsForRemoteVideoInLocalOrientation:(long long)arg1;	// IMP=0x000000010007af40
- (struct CGSize)_remoteVideoAspectRatio;	// IMP=0x000000010007aea4
- (struct CGPoint)_centerForRemoteVideoViewInLocalOrientation:(long long)arg1;	// IMP=0x000000010007ae28
- (struct CGRect)_boundsForRemoteVideoViewInLocalOrientation:(long long)arg1;	// IMP=0x000000010007ad90
- (struct CGRect)_boundsForRemoteVideoOverlayViewInRemoteCameraOrientation:(long long)arg1;	// IMP=0x000000010007acfc
- (struct CGRect)_boundsForLocalMutedViewInLocalOrientation:(long long)arg1;	// IMP=0x000000010007ac64
- (_Bool)_fillRemoteVideoOnScreenWithLocalOrientation:(long long)arg1 remoteAspectRatio:(struct CGSize)arg2;	// IMP=0x000000010007ac44
- (struct CGSize)_normalizedScreenSizeForOrientation:(long long)arg1;	// IMP=0x000000010007aa48
- (void)_adjustCallBarsForOrientation:(long long)arg1;	// IMP=0x000000010007a9a4
- (void)_adjustFlipButtonForLocalRemoteVideoSwap;	// IMP=0x000000010007a950
- (void)_adjustFlipButtonForOrientation:(long long)arg1;	// IMP=0x000000010007a7c8
- (long long)_lastKnownValidDeviceOrientation;	// IMP=0x000000010007a748
- (_Bool)_isValidFaceTimeOrientation:(long long)arg1;	// IMP=0x000000010007a728
- (double)_angleForLocalOrientation:(long long)arg1 remoteOrientation:(long long)arg2;	// IMP=0x000000010007a4a0
- (long long)_deviceOrientationForCameraOrientation:(long long)arg1;	// IMP=0x000000010007a490
- (long long)_cameraOrientationForDeviceOrientation:(long long)arg1;	// IMP=0x000000010007a480
- (void)_applyAutoRotationCorrectionForOrientation:(long long)arg1;	// IMP=0x000000010007a384
- (void)_resetViewLayout:(id)arg1;	// IMP=0x000000010007a2dc
- (void)_correctAutoRotationTransformForView:(id)arg1;	// IMP=0x000000010007a240
- (void)_applyAutoRotationCorrectionForSize:(struct CGSize)arg1 withTransform:(struct CGAffineTransform)arg2;	// IMP=0x0000000100079fb4
- (struct CGAffineTransform)_transformForInterfaceOrientation:(long long)arg1;	// IMP=0x0000000100079f14
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100079ee0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100079b5c
- (void)didChangeToDeviceOrientation:(long long)arg1;	// IMP=0x00000001000799ec
- (void)invokeDeviceOrientationBlock;	// IMP=0x0000000100079890
- (void)_updateDeviceOrientation:(long long)arg1;	// IMP=0x00000001000796bc
- (void)didChangeDeviceOrientationNotification:(id)arg1;	// IMP=0x000000010007957c
- (void)_removeDeviceOrientationChangeObserver;	// IMP=0x00000001000794c4
- (void)_addDeviceOrientationChangeObserver;	// IMP=0x00000001000793ac
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x000000010007dcec
- (void)audioRoutingAlertControllerDidDismiss:(id)arg1;	// IMP=0x000000010007dcdc
- (void)audioRoutingAlertController:(id)arg1 didToggleMute:(_Bool)arg2;	// IMP=0x000000010007dca0
- (void)audioRoutingAlertController:(id)arg1 didSelectRoute:(id)arg2;	// IMP=0x000000010007dbf8
- (id)muteActionTitleForAudioRoutingAlertController:(id)arg1;	// IMP=0x000000010007db84
- (id)hideActionTitleForAudioRoutingAlertController:(id)arg1;	// IMP=0x000000010007db10
- (id)routesForAudioRoutingAlertController:(id)arg1;	// IMP=0x000000010007da8c
- (void)muteConference:(_Bool)arg1;	// IMP=0x000000010007da04
- (void)updateUIForMute:(_Bool)arg1;	// IMP=0x000000010007d954
- (void)dismissAudioRoutingDeviceListAnimated:(_Bool)arg1;	// IMP=0x000000010007d6d8
- (void)dismissAudioRoutingDeviceList;	// IMP=0x000000010007d6c8
- (void)reloadAudioRoutingDeviceList;	// IMP=0x000000010007d688
- (void)revealAudioRoutingDeviceListAnimated:(_Bool)arg1;	// IMP=0x000000010007d10c
- (void)cancelAutodismissTimer;	// IMP=0x000000010007d0e8
- (void)startAutodismissRoutingTimer;	// IMP=0x000000010007d0a4
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x000000010007eb94
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000010007ea60
- (void)handlePIPDoubleTap:(id)arg1;	// IMP=0x000000010007e978
- (void)handleSingleTapToShowHideUI:(id)arg1;	// IMP=0x000000010007e854
- (void)_addPIPDoubleTapGestureRecognizer;	// IMP=0x000000010007e7c8
- (void)_addFullScreenPIPContainerViewTapGestureRecognizer;	// IMP=0x000000010007e73c
- (void)_addStatusBarSingleTapGestureRecognizer;	// IMP=0x000000010007e6b0
- (void)_refreshStatusBarAndPIPAnimated:(_Bool)arg1;	// IMP=0x000000010007e33c
- (_Bool)canHideBottomBar;	// IMP=0x000000010007e224
- (_Bool)shouldHideStatusBar;	// IMP=0x000000010007e204
- (_Bool)shouldShowStatusBar;	// IMP=0x000000010007e13c
- (_Bool)_currentUIRequiresStatusBar;	// IMP=0x000000010007e010
- (_Bool)_currentOrientationSupportsStatusBar;	// IMP=0x000000010007dfc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

