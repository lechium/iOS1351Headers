/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVConferencePreviewClientDelegate
@optional
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
-(void)didChangeLocalVideoAttributes:(id)arg1;
-(void)didChangeLocalScreenAttributes:(id)arg1;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
-(void)didReceiveCommError;
-(void)didGetSnapshot:(id)arg1;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1;
-(void)cameraZoomAvailabilityDidChange:(BOOL)arg1 currentZoomFactor:(double)arg2 maxZoomFactor:(double)arg3;

@end
