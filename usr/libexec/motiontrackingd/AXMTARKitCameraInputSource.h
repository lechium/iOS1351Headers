//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARSessionDelegate-Protocol.h"
#import "AXMTUtilitiesOrientationListener-Protocol.h"

@class ARFaceAnchor, ARSession, AVCaptureVideoPreviewLayer, AXMTRelativePointerMovementMapper, AXMTTrackingAreaPointMapper, AXMTVelocityBasedPointMapper, NSMutableArray, NSSet, NSString, UIView;
@protocol AXMTARKitCameraInputSourceDelegate;

@interface AXMTARKitCameraInputSource : NSObject <ARSessionDelegate, AXMTUtilitiesOrientationListener>
{
    _Bool _debugOverlayEnabled;	// 8 = 0x8
    _Bool __interrupted;	// 9 = 0x9
    id <AXMTARKitCameraInputSourceDelegate> _delegate;	// 16 = 0x10
    unsigned long long _motionTrackingMode;	// 24 = 0x18
    double _sensitivity;	// 32 = 0x20
    double _joystickModeMovementThreshold;	// 40 = 0x28
    ARSession *__session;	// 48 = 0x30
    ARFaceAnchor *__currentlyTrackedFaceAnchor;	// 56 = 0x38
    NSMutableArray *__screenLookAtPoints;	// 64 = 0x40
    NSSet *__previousExpressions;	// 72 = 0x48
    long long __lastReportedFailure;	// 80 = 0x50
    long long __avCaptureSessionInterruptionReason;	// 88 = 0x58
    AXMTVelocityBasedPointMapper *__velocityBasedPointMapper;	// 96 = 0x60
    AXMTTrackingAreaPointMapper *__trackingAreaPointMapper;	// 104 = 0x68
    AXMTRelativePointerMovementMapper *__pointerMovementMapper;	// 112 = 0x70
    UIView *__headTrackingRect;	// 120 = 0x78
    UIView *__rootView;	// 128 = 0x80
    AVCaptureVideoPreviewLayer *__previewLayer;	// 136 = 0x88
    struct CGRect __headTrackingBounds;	// 144 = 0x90
}

+ (_Bool)isAvailable;	// IMP=0x00000001000050f0
- (void).cxx_destruct;	// IMP=0x00000001000086d0
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *_previewLayer; // @synthesize _previewLayer=__previewLayer;
@property(retain, nonatomic) UIView *_rootView; // @synthesize _rootView=__rootView;
@property(retain, nonatomic) UIView *_headTrackingRect; // @synthesize _headTrackingRect=__headTrackingRect;
@property(nonatomic) struct CGRect _headTrackingBounds; // @synthesize _headTrackingBounds=__headTrackingBounds;
@property(retain, nonatomic) AXMTRelativePointerMovementMapper *_pointerMovementMapper; // @synthesize _pointerMovementMapper=__pointerMovementMapper;
@property(retain, nonatomic) AXMTTrackingAreaPointMapper *_trackingAreaPointMapper; // @synthesize _trackingAreaPointMapper=__trackingAreaPointMapper;
@property(retain, nonatomic) AXMTVelocityBasedPointMapper *_velocityBasedPointMapper; // @synthesize _velocityBasedPointMapper=__velocityBasedPointMapper;
@property(nonatomic) long long _avCaptureSessionInterruptionReason; // @synthesize _avCaptureSessionInterruptionReason=__avCaptureSessionInterruptionReason;
@property(nonatomic) long long _lastReportedFailure; // @synthesize _lastReportedFailure=__lastReportedFailure;
@property(nonatomic) _Bool _interrupted; // @synthesize _interrupted=__interrupted;
@property(retain, nonatomic) NSSet *_previousExpressions; // @synthesize _previousExpressions=__previousExpressions;
@property(retain, nonatomic) NSMutableArray *_screenLookAtPoints; // @synthesize _screenLookAtPoints=__screenLookAtPoints;
@property(retain, nonatomic) ARFaceAnchor *_currentlyTrackedFaceAnchor; // @synthesize _currentlyTrackedFaceAnchor=__currentlyTrackedFaceAnchor;
@property(retain, nonatomic) ARSession *_session; // @synthesize _session=__session;
@property(nonatomic) _Bool debugOverlayEnabled; // @synthesize debugOverlayEnabled=_debugOverlayEnabled;
@property(nonatomic) double joystickModeMovementThreshold; // @synthesize joystickModeMovementThreshold=_joystickModeMovementThreshold;
@property(nonatomic) double sensitivity; // @synthesize sensitivity=_sensitivity;
@property(nonatomic) unsigned long long motionTrackingMode; // @synthesize motionTrackingMode=_motionTrackingMode;
@property(nonatomic) __weak id <AXMTARKitCameraInputSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleFaceBlendShapes:(id)arg1;	// IMP=0x0000000100007fbc
- (struct CGPoint)_convertProjectedPointToScreenCoordinates:(struct CGPoint)arg1 useSensitivity:(_Bool)arg2;	// IMP=0x0000000100007e00
- (void)_updateMovementThresholdforPointerMovementMapper;	// IMP=0x0000000100007d5c
- (void)_updateAccelerationFactorForPointerMovementMapper;	// IMP=0x0000000100007c98
- (struct CGPoint)_computeJoystickModeForPoint:(struct CGPoint)arg1;	// IMP=0x0000000100007654
- (struct CGPoint)_computeAccelerationModeForPoint:(struct CGPoint)arg1;	// IMP=0x0000000100007500
- (struct CGPoint)_computeAbsoluteModeForPoint:(struct CGPoint)arg1;	// IMP=0x0000000100007298
- (void)handleEventWithProjectedPoint:(struct CGPoint)arg1;	// IMP=0x00000001000071c8
- (struct CGPoint)_project3DVertexOnto2DPlane: /* Error: Ran out of types for this method. */;	// IMP=0x000000010000704c
- (void)_logFPS;	// IMP=0x0000000100006ef8
- (void)_notifyClientOfLostFaceWithReason:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0000000100006db8
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;	// IMP=0x0000000100006a68
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;	// IMP=0x0000000100006974
- (void)sessionInterruptionEnded:(id)arg1;	// IMP=0x0000000100006894
- (void)sessionWasInterrupted:(id)arg1;	// IMP=0x00000001000067c8
- (void)session:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100006718
- (void)_captureSessionWasInterruptedNotification:(id)arg1;	// IMP=0x0000000100006618
- (void)_captureSessionRuntimeErrorNotification:(id)arg1;	// IMP=0x000000010000656c
- (void)_captureSessionDidStopRunningNotification:(id)arg1;	// IMP=0x0000000100006454
- (void)_captureSessionDidStartRunningNotification:(id)arg1;	// IMP=0x000000010000633c
- (void)axmtUtilities_interfaceOrientationChanged:(long long)arg1;	// IMP=0x0000000100006250
- (void)stopRunning;	// IMP=0x0000000100005e18
- (void)startRunning;	// IMP=0x0000000100005c28
@property(readonly, nonatomic) _Bool _isStarted;
- (void)_tearDownDebugOverlay;	// IMP=0x0000000100005b24
- (void)_setUpDebugOverlay;	// IMP=0x0000000100005698
- (void)_updateDebugOverlay;	// IMP=0x0000000100005650
- (void)_restartTracking;	// IMP=0x00000001000052ac
- (void)_setupARSessionInsideView:(id)arg1;	// IMP=0x0000000100005158
- (id)initInsideView:(id)arg1;	// IMP=0x000000010000507c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

