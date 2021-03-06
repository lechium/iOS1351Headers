/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVVoiceControllerPlaybackDelegate <NSObject>
@optional
-(void)voiceControllerDidStartPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceControllerDidStopPlaying:(id)arg1 forReason:(long long)arg2;
-(void)voiceControllerDecoderErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)voiceControllerBeginPlaybackInterruption:(id)arg1;
-(void)voiceControllerEndPlaybackInterruption:(id)arg1;
-(void)voiceControllerPlaybackHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;

@required
-(void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2;

@end

