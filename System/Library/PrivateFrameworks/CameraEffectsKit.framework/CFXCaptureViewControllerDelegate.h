/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:38 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CFXCaptureViewControllerDelegate <NSObject>
@optional
-(void)captureViewControllerDidStartVideoRecording:(id)arg1;
-(void)captureViewControllerDidStopVideoRecording:(id)arg1;

@required
-(void)captureViewController:(id)arg1 didCaptureMediaItem:(id)arg2;
-(void)captureViewController:(id)arg1 didChangeEffectComposition:(id)arg2;
-(void)captureViewController:(id)arg1 didRenderFrame:(id)arg2;
-(void)captureViewControllerDoneButtonWasTapped:(id)arg1;
-(void)captureViewControllerEffectsButtonWasTapped:(id)arg1;
-(void)captureViewControllerPresentationRectWasDoubleTapped:(id)arg1;
-(void)captureViewController:(id)arg1 presentationRectWasPinchedWithState:(long long)arg2 scale:(double)arg3 velocity:(double)arg4;
-(void)captureViewControllerStartCaptureSession:(id)arg1;
-(void)captureViewControllerStopCaptureSession:(id)arg1;
-(void)captureViewControllerCameraFlipButtonWasTapped:(id)arg1;
-(id)cameraControlsViewControllerForCaptureViewController:(id)arg1;

@end

