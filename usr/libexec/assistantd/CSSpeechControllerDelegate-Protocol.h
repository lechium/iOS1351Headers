//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSSpeechController, NSArray, NSData, NSDictionary, NSError;

@protocol CSSpeechControllerDelegate <NSObject>

@optional
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2;
- (void)speechController:(CSSpeechController *)arg1 didSetAudioSessionActive:(_Bool)arg2;
- (void)speechController:(CSSpeechController *)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)speechControllerEndRecordInterruption:(CSSpeechController *)arg1;
- (void)speechControllerBeginRecordInterruption:(CSSpeechController *)arg1 withContext:(NSDictionary *)arg2;
- (void)speechControllerBeginRecordInterruption:(CSSpeechController *)arg1;
- (void)speechControllerDidFinishAlertPlayback:(CSSpeechController *)arg1 ofType:(long long)arg2 error:(NSError *)arg3;
- (void)speechControllerDidUpdateSmartSiriVolume:(CSSpeechController *)arg1 forReason:(unsigned long long)arg2;
- (void)speechControllerRecordHardwareConfigurationDidChange:(CSSpeechController *)arg1 toConfiguration:(long long)arg2;
- (void)speechControllerDidDetectEndpoint:(CSSpeechController *)arg1 ofType:(long long)arg2 atTime:(double)arg3;
- (void)speechControllerDidDetectStartpoint:(CSSpeechController *)arg1;
- (void)speechControllerDidStopRecording:(CSSpeechController *)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;
- (void)speechControllerDidStopRecording:(CSSpeechController *)arg1 forReason:(long long)arg2;
- (void)speechControllerDidDeliverLastBuffer:(CSSpeechController *)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;
- (void)speechControllerDidStartRecording:(CSSpeechController *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(CSSpeechController *)arg1 atTime:(double)arg2;
- (void)speechControllerRecordBufferAvailable:(CSSpeechController *)arg1 buffers:(NSArray *)arg2 durationInSec:(float)arg3 recordedAt:(unsigned long long)arg4;
- (void)speechControllerRecordBufferAvailable:(CSSpeechController *)arg1 buffers:(NSArray *)arg2 recordedAt:(unsigned long long)arg3;
- (void)speechControllerLPCMRecordBufferAvailable:(CSSpeechController *)arg1 buffer:(NSData *)arg2 recordedAt:(unsigned long long)arg3;
- (void)speechControllerLPCMRecordBufferAvailable:(CSSpeechController *)arg1 buffer:(NSData *)arg2;
@end

