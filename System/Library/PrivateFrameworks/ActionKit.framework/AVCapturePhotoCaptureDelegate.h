/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVCapturePhotoCaptureDelegate <NSObject>
@optional
-(void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
-(void)captureOutput:(id)arg1 didFinishProcessingPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
-(void)captureOutput:(id)arg1 didFinishProcessingRawPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg2 previewPhotoSampleBuffer:(opaqueCMSampleBufferRef)arg3 resolvedSettings:(id)arg4 bracketSettings:(id)arg5 error:(id)arg6;
-(void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
-(void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
-(void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2;
-(void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3;
-(void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(SCD_Struct_WF2)arg3 photoDisplayTime:(SCD_Struct_WF2)arg4 resolvedSettings:(id)arg5 error:(id)arg6;
-(void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;

@end

