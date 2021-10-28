//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATInputSource.h"

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureSession, AVCaptureVideoPreviewLayer, CALayer, NSObject, NSString, UIView;
@protocol OS_dispatch_queue, SCATCameraInputSourceDelegate;

@interface SCATCameraInputSource : SCATInputSource <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _available;	// 8 = 0x8
    _Bool _leftHeadSwitchDown;	// 9 = 0x9
    _Bool _rightHeadSwitchDown;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_captureOutputQueue;	// 16 = 0x10
    AVCaptureSession *_captureSession;	// 24 = 0x18
    unsigned long long _availabilityDetail;	// 32 = 0x20
    CDStruct_761d4fd2 *_face;	// 40 = 0x28
    UIView *_captureOutputPreview;	// 48 = 0x30
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;	// 56 = 0x38
    CALayer *_faceLayer;	// 64 = 0x40
    CDStruct_c305b3b4 _state;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010006df20
@property(retain, nonatomic) CALayer *faceLayer; // @synthesize faceLayer=_faceLayer;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
@property(retain, nonatomic) UIView *captureOutputPreview; // @synthesize captureOutputPreview=_captureOutputPreview;
@property(nonatomic, getter=isRightHeadSwitchDown) _Bool rightHeadSwitchDown; // @synthesize rightHeadSwitchDown=_rightHeadSwitchDown;
@property(nonatomic, getter=isLeftHeadSwitchDown) _Bool leftHeadSwitchDown; // @synthesize leftHeadSwitchDown=_leftHeadSwitchDown;
@property(nonatomic) CDStruct_761d4fd2 *face; // @synthesize face=_face;
@property(nonatomic) unsigned long long availabilityDetail; // @synthesize availabilityDetail=_availabilityDetail;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureOutputQueue; // @synthesize captureOutputQueue=_captureOutputQueue;
@property(nonatomic) CDStruct_c305b3b4 state; // @synthesize state=_state;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
- (void)_didUpdateState:(CDStruct_c305b3b4)arg1;	// IMP=0x000000010006dc68
- (void)updateWithSwitches:(id)arg1 recipe:(id)arg2;	// IMP=0x000000010006d9f8
- (void)stopRunning;	// IMP=0x000000010006d9a0
- (void)startRunning;	// IMP=0x000000010006d8cc
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000010006d864
- (id)init;	// IMP=0x000000010006d80c
- (void)dealloc;	// IMP=0x000000010006d784
- (long long)_actionIdentifierForHeadSwitch:(long long)arg1;	// IMP=0x000000010006d668
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;	// IMP=0x000000010006d2b4
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;	// IMP=0x000000010006d0c8
- (void)_stopCaptureOutput;	// IMP=0x000000010006d048
- (void)_startCaptureOutput;	// IMP=0x000000010006cfc8
- (void)_setupCaptureOutput;	// IMP=0x000000010006c75c
- (id)_captureVideoDataOutputWithDelegate:(id)arg1 queue:(id)arg2 format:(id)arg3;	// IMP=0x000000010006c598
- (id)_captureSessionWithPreset:(id)arg1;	// IMP=0x000000010006c4d8
- (id)_captureMetadataOutputWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000010006c460
- (id)_captureDeviceInputWithPreset:(id)arg1;	// IMP=0x000000010006c1dc
- (void)_cleanupCaptureOutput;	// IMP=0x000000010006c0d8
- (void)_didUpdateAvailability:(_Bool)arg1 withDetail:(unsigned long long)arg2;	// IMP=0x000000010006bf6c
- (void)_didReceiveActionWithIdentifier:(long long)arg1 start:(_Bool)arg2;	// IMP=0x000000010006be5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SCATCameraInputSourceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
