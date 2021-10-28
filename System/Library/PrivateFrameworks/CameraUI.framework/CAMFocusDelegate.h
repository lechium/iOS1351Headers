/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CAMFocusDelegate <NSObject>
@optional
-(double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1;

@required
-(BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2;
-(void)captureControllerWillResetFocusAndExposure:(id)arg1;
-(void)captureController:(id)arg1 didOutputFocusResult:(id)arg2;

@end
