//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRCGestureFactoryCallback-Protocol.h"
#import "VOTBrailleGestureManagerDelegate-Protocol.h"
#import "VOTElementUpdateProtocol-Protocol.h"
#import "VOTGestureKeyboardDelegate-Protocol.h"
#import "VOTGesturedTextInputManagerDelegate-Protocol.h"

@class AXDispatchTimer, AXEventProcessor, AXEventRepresentation, NSArray, NSMutableArray, NSRecursiveLock, NSString, SCRCGestureFactory, SCRCTargetSelectorTimer, SCRCThreadKey, VOTBrailleGestureManager, VOTDirectInteractionKeyboardManager, VOTElement, VOTEvent, VOTGestureEvent, VOTHandwritingManager, VOTMapsExplorationGestureManager;
@protocol VOTDirectTouchManagementProtocol, VOTElementManagementProtocol, VOTEventFactoryCallbackProtocol, VOTRotorManagementProtocol;

@interface VOTEventFactory : NSObject <VOTBrailleGestureManagerDelegate, VOTGesturedTextInputManagerDelegate, VOTElementUpdateProtocol, VOTGestureKeyboardDelegate, SCRCGestureFactoryCallback>
{
    SCRCGestureFactory *_gestureFactory;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    unsigned long long _edgePanGestureState;	// 24 = 0x18
    struct CGPoint _edgePanGestureStartPoint;	// 32 = 0x20
    double _edgePanGestureStartTime;	// 48 = 0x30
    struct CGPoint _edgePanGesturePausePoint;	// 56 = 0x38
    SCRCTargetSelectorTimer *_edgePanGestureSpeakHintTimer;	// 72 = 0x48
    long long _direction;	// 80 = 0x50
    long long _rotorSoundZone;	// 88 = 0x58
    long long _continuityZone;	// 96 = 0x60
    double _startPinchDistance;	// 104 = 0x68
    long long _fingerCount;	// 112 = 0x70
    double _travelDistance;	// 120 = 0x78
    struct CGPoint _tapHoldOffset;	// 128 = 0x80
    struct CGPoint _sonificationScrubbingPreviousLocation;	// 144 = 0x90
    _Bool _canPlayBoundaryFeedback;	// 160 = 0xa0
    VOTGestureEvent *_lastDownEvent;	// 168 = 0xa8
    SCRCThreadKey *_threadKey;	// 176 = 0xb0
    NSRecursiveLock *_currentElementLock;	// 184 = 0xb8
    VOTElement *_currentElement;	// 192 = 0xc0
    double _lastEdgePressTime;	// 200 = 0xc8
    double _lastEchoTime;	// 208 = 0xd0
    double _rotateStartTime;	// 216 = 0xd8
    long long _rotateDirection;	// 224 = 0xe0
    SCRCTargetSelectorTimer *_tapHoldTimer;	// 232 = 0xe8
    SCRCTargetSelectorTimer *_elementSummaryTimer;	// 240 = 0xf0
    SCRCTargetSelectorTimer *_twoFingerHoldTimer;	// 248 = 0xf8
    SCRCTargetSelectorTimer *_threeFingerHoldTimer;	// 256 = 0x100
    SCRCTargetSelectorTimer *_memorizeSoundTimer;	// 264 = 0x108
    SCRCTargetSelectorTimer *_systemControlLocationTimer;	// 272 = 0x110
    double _currentTouchForce;	// 280 = 0x118
    double _previewFingerStartingForce;	// 288 = 0x120
    struct CGPoint _previewFingerLocation;	// 296 = 0x128
    NSMutableArray *_previewFingerContextId;	// 312 = 0x138
    _Bool _isInPreview;	// 320 = 0x140
    double _previewStartTime;	// 328 = 0x148
    double _previewPopDelayTime;	// 336 = 0x150
    _Bool _isPreviewPinned;	// 344 = 0x158
    long long _currentOrbGestureMode;	// 352 = 0x160
    struct CGPoint _nativeSlidingOffset;	// 360 = 0x168
    struct CGPoint _nativeSlidingCenter;	// 376 = 0x178
    double _lastTwoFingerSlideTime;	// 392 = 0x188
    double _oldVolumeChangeDistance;	// 400 = 0x190
    double _volumeChangeDistance;	// 408 = 0x198
    SCRCTargetSelectorTimer *_volumeChangeTimer;	// 416 = 0x1a0
    SCRCTargetSelectorTimer *_wakeTapTimer;	// 424 = 0x1a8
    unsigned long long _watchWakeTapCount;	// 432 = 0x1b0
    double _lastWatchWakeDownTime;	// 440 = 0x1b8
    double _lastWatchWakeUpTime;	// 448 = 0x1c0
    struct __AXObserver *_axEventObserver;	// 456 = 0x1c8
    VOTGestureEvent *_currentGestureEvent;	// 464 = 0x1d0
    NSArray *_directInteractionElements;	// 472 = 0x1d8
    NSString *_zoomListenerIdentifier;	// 480 = 0x1e0
    struct {
        long long direction;
        unsigned long long count;
        double continuityDistance;
        double distanceTraveled;
        struct CGPoint firstCountPoint;
    } _zigzag;	// 488 = 0x1e8
    double _lastNativeSlideCancel;	// 536 = 0x218
    NSMutableArray *_tapAndHoldContextIds;	// 544 = 0x220
    long long _tapAndHoldFingerType;	// 552 = 0x228
    struct CGPoint _systemControlStartPoint;	// 560 = 0x230
    int _systemControlPosition;	// 576 = 0x240
    _Bool _systemControlActivated;	// 580 = 0x244
    double _systemControlStartSwipeTime;	// 584 = 0x248
    double _systemControlFingerDownFollowupTime;	// 592 = 0x250
    double _lastScrollEventTime;	// 600 = 0x258
    long long _currentAccumulatedScroll;	// 608 = 0x260
    _Bool _scrollWheelIsActive;	// 616 = 0x268
    struct {
        _Bool tapAndHoldMode;
        _Bool tapAndHoldModeContextless;
        _Bool orbMode;
        _Bool firedElementSummaryTimer;
        _Bool rotating;
        _Bool memorizingData;
        _Bool twoFingerTapAndSlide;
        _Bool threeFingerTapAndSlide;
        _Bool splitSlide;
        _Bool handwritingOnly;
        _Bool didPlayStartLabelSound;
        _Bool sendingToDirectTouch;
        _Bool sendingToNativeSlide;
        _Bool gestureSawDownEvent;
        _Bool allowingSystemGesturePassthrough;
        _Bool hasSentFirstTrackingEventForGesture;
        _Bool sonificationScrubbingMode;
    } _flags;	// 617 = 0x269
    double _gestureKeyboardShiftLockStartTime;	// 640 = 0x280
    VOTBrailleGestureManager *_brailleGestureManager;	// 648 = 0x288
    VOTMapsExplorationGestureManager *_mapsExplorationGestureManager;	// 656 = 0x290
    struct {
        _Bool tapDown;
        _Bool tapMoved;
        _Bool tapUp;
        _Bool heldDown;
        _Bool heldUp;
    } _audioAccButtonStates[3];	// 664 = 0x298
    unsigned long long _audioAccTapCount;	// 680 = 0x2a8
    double _audioAccLastDownTime;	// 688 = 0x2b0
    double _audioAccLastTapTime;	// 696 = 0x2b8
    _Bool _audioAccHoldSent;	// 704 = 0x2c0
    unsigned long long _currentSoundButton;	// 712 = 0x2c8
    unsigned long long _pendingSoundButton;	// 720 = 0x2d0
    unsigned long long _audioAccTouchGeneration;	// 728 = 0x2d8
    unsigned long long _audioAccPendingGeneration;	// 736 = 0x2e0
    AXEventRepresentation *_audioAccTapDownEventForRepost;	// 744 = 0x2e8
    AXEventRepresentation *_audioAccHeldEventForRepost;	// 752 = 0x2f0
    AXEventRepresentation *_audioAccHeldUpEventForRepost;	// 760 = 0x2f8
    AXEventRepresentation *_audioAccTapUpEventForRepost;	// 768 = 0x300
    SCRCTargetSelectorTimer *_audioAccTapTimer;	// 776 = 0x308
    struct __IOHIDEventSystemClient *_audioAccIOSystemPostBackClient;	// 784 = 0x310
    _Bool _nowPlayingState;	// 792 = 0x318
    unsigned long long _splitSlideFingerCount;	// 800 = 0x320
    id <VOTElementManagementProtocol> _elementManager;	// 808 = 0x328
    id <VOTRotorManagementProtocol> _rotorManager;	// 816 = 0x330
    id <VOTDirectTouchManagementProtocol> _directTouchManager;	// 824 = 0x338
    id <VOTEventFactoryCallbackProtocol> _delegate;	// 832 = 0x340
    AXDispatchTimer *_handwritingCaptureTimer;	// 840 = 0x348
    VOTDirectInteractionKeyboardManager *_directInteractionKeyboardManager;	// 848 = 0x350
    AXEventProcessor *_eventProcessor;	// 856 = 0x358
    VOTElement *_lastTouchedDirectTouchElement;	// 864 = 0x360
    VOTEvent *_lastGestureEvent;	// 872 = 0x368
}

+ (void)_updateZoomFrame:(struct CGRect)arg1;	// IMP=0x00000001000c5c8c
+ (void)initialize;	// IMP=0x00000001000c438c
- (void).cxx_destruct;	// IMP=0x00000001000d26b8
@property(retain, nonatomic) VOTEvent *lastGestureEvent; // @synthesize lastGestureEvent=_lastGestureEvent;
@property(retain, nonatomic) VOTElement *lastTouchedDirectTouchElement; // @synthesize lastTouchedDirectTouchElement=_lastTouchedDirectTouchElement;
@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
@property(readonly, nonatomic) VOTDirectInteractionKeyboardManager *directInteractionKeyboardManager; // @synthesize directInteractionKeyboardManager=_directInteractionKeyboardManager;
@property(retain, nonatomic, setter=_setHandwritingCaptureTimer:) AXDispatchTimer *_handwritingCaptureTimer; // @synthesize _handwritingCaptureTimer;
@property(nonatomic) __weak id <VOTEventFactoryCallbackProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VOTDirectTouchManagementProtocol> directTouchManager; // @synthesize directTouchManager=_directTouchManager;
@property(nonatomic) __weak id <VOTRotorManagementProtocol> rotorManager; // @synthesize rotorManager=_rotorManager;
@property(nonatomic) __weak id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (void)brailleGestureManager:(id)arg1 unsetForcedOrientationAndAnnounce:(_Bool)arg2;	// IMP=0x00000001000d25a0
- (void)brailleGestureManager:(id)arg1 setForcedOrientation:(int)arg2 shouldAnnounce:(_Bool)arg3;	// IMP=0x00000001000d2554
- (void)gesturedTextInputManager:(id)arg1 accessCurrentGesturedTextInputElement:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d24e4
- (void)gesturedTextInputManager:(id)arg1 moveToElementMatchingRotorType:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00000001000d248c
- (id)votActionForEdgePanGestureState:(unsigned long long)arg1;	// IMP=0x00000001000d2448
- (double)_edgePanGestureStartThreshold;	// IMP=0x00000001000d23f4
- (void)_updateCurrentElementOrbGestureMode;	// IMP=0x00000001000d21e4
- (_Bool)_shouldDismissPreviewOnLift;	// IMP=0x00000001000d21a0
- (void)_liftPreviewFinger;	// IMP=0x00000001000d2030
- (void)_switchToTrackingMode;	// IMP=0x00000001000d1d54
- (void)_simulatePeekAndSwitchToTapHoldMode;	// IMP=0x00000001000d1800
- (void)_simulateEdgePress;	// IMP=0x00000001000d16d8
- (void)_simulatePop;	// IMP=0x00000001000d14b8
- (void)_reducePreviewFingerStartingForce:(double)arg1;	// IMP=0x00000001000d1300
- (void)_simulatePreviewActionGesture;	// IMP=0x00000001000d10f8
- (_Bool)_isPreviewElementSelected;	// IMP=0x00000001000d107c
- (void)directInteractionModeStatus:(_Bool)arg1;	// IMP=0x00000001000d0f80
@property(readonly, nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
@property(readonly, nonatomic) unsigned long long fingerCount; // @dynamic fingerCount;
- (void)_setFingerCount:(unsigned long long)arg1;	// IMP=0x00000001000d0f58
@property(readonly, nonatomic) struct CGPoint fingerPosition; // @dynamic fingerPosition;
- (void)_handleEventWithData:(id)arg1;	// IMP=0x00000001000d0d24
- (void)_convertZoomRecordToDeviceRecord:(id)arg1;	// IMP=0x00000001000d0b78
- (struct CGPoint)_convertZoomPointToDevicePoint:(struct CGPoint)arg1;	// IMP=0x00000001000d0ac4
- (struct CGRect)_convertFrame:(struct CGRect)arg1 toPortraitFromOrientation:(long long)arg2;	// IMP=0x00000001000d09b4
- (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;	// IMP=0x00000001000d0838
- (void)_handleKeyboardVisibilityChanged:(id)arg1;	// IMP=0x00000001000d079c
- (void)_handleElementPreviewNotification:(id)arg1;	// IMP=0x00000001000d06d4
- (void)_endSonificationScrubbingMode;	// IMP=0x00000001000d0638
- (void)_handleSonificationScrubbingPositionChanged;	// IMP=0x00000001000d03a0
- (void)_beginSonificationScrubbingMode;	// IMP=0x00000001000d0290
- (void)_liftFromTapAndHoldAndResetFingers:(_Bool)arg1;	// IMP=0x00000001000d0170
- (void)_processTapAndHoldMode:(id)arg1;	// IMP=0x00000001000cff14
- (void)_processIdle:(struct CGPoint)arg1;	// IMP=0x00000001000cfdb4
- (void)_touchLiftAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001000cfb7c
- (void)_touchDragAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00000001000cf8e0
- (void)_touchDownAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00000001000cf644
- (void)_contextlessTouchWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2 force:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;	// IMP=0x00000001000cf33c
- (void)_threeFingerHoldFired;	// IMP=0x00000001000cf2cc
- (void)_twoFingerHoldFired;	// IMP=0x00000001000cf154
- (void)_tapHoldFired:(id)arg1;	// IMP=0x00000001000ce864
- (void)_edgePanGestureSpeakHintTimerFired;	// IMP=0x00000001000ce7a8
- (void)_stopMemorizingSession;	// IMP=0x00000001000ce6b8
- (void)_startLabelElementSoundPlay;	// IMP=0x00000001000ce60c
- (void)currentElementDidUpdate:(id)arg1;	// IMP=0x00000001000ce59c
- (_Bool)directInteractionGestureInProgress;	// IMP=0x00000001000ce594
- (void)directInteractionElementsUpdated:(id)arg1;	// IMP=0x00000001000ce55c
- (void)_cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00000001000ce324
- (void)_cancelTapAndHoldWithValue:(id)arg1;	// IMP=0x00000001000ce2ec
- (void)cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00000001000ce278
- (void)_outputElementSummaryFired;	// IMP=0x00000001000ce20c
@property(nonatomic) long long orientation; // @dynamic orientation;
- (void)_beginNativeSliding:(id)arg1;	// IMP=0x00000001000ce078
- (void)startTapAndHoldMode:(_Bool)arg1;	// IMP=0x00000001000ce020
- (id)currentElement;	// IMP=0x00000001000ce008
- (void)_commitDeferredZoomInfoIfAppropriate;	// IMP=0x00000001000cdfe8
- (void)_commitDeferredZoomInfo;	// IMP=0x00000001000cdf88
- (void)_processGestureEvent:(id)arg1;	// IMP=0x00000001000cbbf4
- (void)_playFeedbackForGestureState:(unsigned long long)arg1 gestureComplete:(_Bool)arg2;	// IMP=0x00000001000cbaac
- (void)_transitionToGestureState:(unsigned long long)arg1 playHaptic:(_Bool)arg2;	// IMP=0x00000001000cb8f8
- (void)_transitionToGestureState:(unsigned long long)arg1;	// IMP=0x00000001000cb8e8
- (id)_updateEdgePanGestureForState:(long long)arg1;	// IMP=0x00000001000cb140
- (double)_edgeGestureScaleFactor:(_Bool)arg1;	// IMP=0x00000001000cb0dc
- (_Bool)_willStartEdgePanGestureForEvent:(id)arg1;	// IMP=0x00000001000cae80
- (_Bool)_handleOrbEvent:(id)arg1;	// IMP=0x00000001000cae78
- (id)_touchLocationsForGestureEvent:(id)arg1;	// IMP=0x00000001000cabcc
- (void)updateOrientation;	// IMP=0x00000001000cab8c
- (_Bool)_gestureEventIsInvalid:(id)arg1;	// IMP=0x00000001000caaf0
- (_Bool)directTouchElementsPresent;	// IMP=0x00000001000caac8
- (_Bool)_handleDirectInteractionEvent:(id)arg1;	// IMP=0x00000001000ca250
- (_Bool)_shouldUseGesturedTextInputManager;	// IMP=0x00000001000ca214
- (void)_feedEventToHandwritingRecognition:(id)arg1;	// IMP=0x00000001000c9eb8
- (struct CGPoint)adjustedPointForFactoryPoint:(struct CGPoint)arg1 forOrientation:(long long)arg2;	// IMP=0x00000001000c9e84
- (void)gestureTappingCallbackWithFactory:(id)arg1;	// IMP=0x00000001000c8be0
- (id)_handleGestureKeyboardTappingCallback:(unsigned long long)arg1 fingerCount:(unsigned long long)arg2 isDown:(_Bool)arg3 originalLocation:(struct CGPoint)arg4 convertedLocation:(struct CGPoint)arg5;	// IMP=0x00000001000c89e0
- (void)gestureFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x00000001000c8958
- (void)gestureSplitTappingCallbackWithFactory:(id)arg1;	// IMP=0x00000001000c87d4
- (_Bool)shouldBlockSplitTapGestureWithFactory:(id)arg1;	// IMP=0x00000001000c87cc
- (_Bool)_updateFingersInSystemControlLocation:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2 isLift:(_Bool)arg3;	// IMP=0x00000001000c83f0
- (struct CGPoint)_averagePointForLastDownEvent;	// IMP=0x00000001000c821c
- (void)_resetSystemControlStatus;	// IMP=0x00000001000c81cc
- (void)_sendSystemControlEvent:(id)arg1;	// IMP=0x00000001000c80ec
- (int)_systemControlPosition:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2;	// IMP=0x00000001000c7f14
- (void)_systemControlLocationTimer;	// IMP=0x00000001000c7e58
- (void)_volumeChangeTimer;	// IMP=0x00000001000c7d3c
- (void)_gestureTrackingCallbackWithFactory:(id)arg1 isHandlingSystemControlEvent:(_Bool)arg2;	// IMP=0x00000001000c7648
- (void)_updateFirstnessOfTrackingEvent:(id)arg1;	// IMP=0x00000001000c7558
- (_Bool)_isEdgePressSupportedAtPosition:(struct CGPoint)arg1;	// IMP=0x00000001000c74b0
- (_Bool)_shouldAttemptTracking;	// IMP=0x00000001000c744c
- (_Bool)_isTapAndHoldPending;	// IMP=0x00000001000c7408
- (void)gestureTrackingCallbackWithFactory:(id)arg1;	// IMP=0x00000001000c73f8
- (void)gestureGutterUpCallbackWithFactory:(id)arg1;	// IMP=0x00000001000c73f4
- (void)processEvent:(id)arg1;	// IMP=0x00000001000c71b8
- (_Bool)processEventAsGesturedTextInput:(id)arg1;	// IMP=0x00000001000c711c
- (id)_currentGesturedTextInputManager;	// IMP=0x00000001000c710c
- (id)_currentGesturedTextInputManagerAndCommandResolver:(id)arg1;	// IMP=0x00000001000c6ed4
- (id)_commandResolver;	// IMP=0x00000001000c6e50
- (void)_handleSOSMedicalIDShown;	// IMP=0x00000001000c6dcc
- (int)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x00000001000c6d04
- (_Bool)registerForEvents;	// IMP=0x00000001000c6630
- (void)unregisterForEvents;	// IMP=0x00000001000c65ac
- (void)resetEventFactory;	// IMP=0x00000001000c659c
- (void)_handleRotorChangedNotification:(id)arg1;	// IMP=0x00000001000c61b4
- (void)dealloc;	// IMP=0x00000001000c5f98
- (void)shutdown;	// IMP=0x00000001000c5f28
- (void)_registerForZoomListener;	// IMP=0x00000001000c5cb0
- (void)_registerForIOHIDUsage;	// IMP=0x00000001000c5a58
- (_Bool)_iosEventFilter:(id)arg1;	// IMP=0x00000001000c5750
- (id)_preprocessEventForSimulator:(id)arg1;	// IMP=0x00000001000c558c
- (void)_handleIOHIDEvent:(id)arg1;	// IMP=0x00000001000c4f64
- (void)_wakeTapFired;	// IMP=0x00000001000c4e7c
- (_Bool)shouldSnarfEventForTapWakeGesture:(id)arg1;	// IMP=0x00000001000c4dac
- (void)_updateTapSpeedFromPreferences;	// IMP=0x00000001000c4d14
- (id)init;	// IMP=0x00000001000c43f8
- (_Bool)mapsExplorationInputActive;	// IMP=0x00000001000c4374
- (id)_mapsExplorationGestureManager;	// IMP=0x00000001000c431c
@property(readonly, nonatomic) _Bool brailleInputActive;
- (id)_brailleGestureManager;	// IMP=0x00000001000c42a0
- (id)gestureFactory;	// IMP=0x00000001000c4298
- (void)setGestureFactory:(id)arg1;	// IMP=0x00000001000c428c
@property(readonly, nonatomic) _Bool handwritingInputActive;
@property(readonly, nonatomic) VOTHandwritingManager *handwritingManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

