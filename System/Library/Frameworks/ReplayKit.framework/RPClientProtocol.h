/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RPClientProtocol <NSObject>
@required
-(oneway void)recordingTimerDidUpdate:(id)arg1;
-(oneway void)recordingLockInterrupted:(id)arg1;
-(oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;
-(oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
-(oneway void)recordingDidPause;
-(oneway void)recordingShouldResume;
-(oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
-(oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;
-(oneway void)updateBroadcastURL:(id)arg1;
-(oneway void)updateBroadcastServiceInfo:(id)arg1;

@end

