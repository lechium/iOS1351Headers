//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFDictationOptions, AFXPCWrapper, NSArray, NSDictionary, NSError, NSFileHandle, NSString, SASMultilingualSpeechRecognized, SASPronunciationRecognized, SASSpeechPartialResult, SASSpeechRecognized, SASVoiceSearchFinalResult, SASVoiceSearchPartialResult, SAStructuredDictationResult;
@protocol ADBluetoothDevice;

@protocol ADCommandCenterSpeechDelegate <NSObject>
@property(nonatomic) _Bool adSpeechSessionEnded;
- (_Bool)adWaitingForAudioFile;
- (void)adSpeechRecordingDidRecognizePhrases:(NSArray *)arg1 sessionUUID:(NSString *)arg2 refId:(NSString *)arg3;
- (void)adSpeechRecordingDidRecognizeTokens:(NSArray *)arg1 sessionUUID:(NSString *)arg2;
- (void)adSpeechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (void)adSpeechRecognitionDidFail:(NSError *)arg1 sessionUUID:(NSString *)arg2;
- (void)adSpeechRecognized:(SASSpeechRecognized *)arg1 usingSpeechModel:(NSString *)arg2 sessionUUID:(NSString *)arg3;
- (void)adSpeechRecordingDidFail:(NSError *)arg1 sessionUUID:(NSString *)arg2;
- (void)adSpeechRecordingDidCancelWithSessionUUID:(NSString *)arg1;
- (void)adSpeechRecordingDidEndWithSessionUUID:(NSString *)arg1;
- (void)adSpeechRecordingDidChangeAVRecordRoute:(NSString *)arg1 bluetoothDevice:(id <ADBluetoothDevice>)arg2 isDucking:(_Bool)arg3 isTwoShot:(_Bool)arg4 speechEndHostTime:(unsigned long long)arg5 sessionUUID:(NSString *)arg6;
- (void)adSpeechRecordingDidBeginOnAVRecordRoute:(NSString *)arg1 audioSessionID:(unsigned int)arg2 bluetoothDevice:(id <ADBluetoothDevice>)arg3 sessionUUID:(NSString *)arg4 dictationOptions:(AFDictationOptions *)arg5;
- (void)adSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(AFXPCWrapper *)arg1 sessionUUID:(NSString *)arg2;

@optional
- (void)adSpeechRecognitionWillBeginRecognitionUpdateForTask:(NSString *)arg1;
- (void)adSpeechRecordingPerformTwoShotPromptWithType:(long long)arg1 sessionUUID:(NSString *)arg2 completion:(void (^)(double, double, NSError *))arg3;
- (void)adSpeechMultilingualSpeechRecognized:(SASMultilingualSpeechRecognized *)arg1 sessionUUID:(NSString *)arg2;
- (void)adSpeechLanguageDetectorFailedWithError:(NSError *)arg1;
- (void)adSpeechRecordingDidDetectLanguage:(NSString *)arg1 confidenceScores:(NSDictionary *)arg2 isConfident:(_Bool)arg3;
- (void)adSpeechRecordingDidDetectStartPointWithSessionUUID:(NSString *)arg1;
- (void)adSpeechDidFindVoiceSearchFinalResult:(SASVoiceSearchFinalResult *)arg1;
- (void)adSpeechDidFindVoiceSearchPartialResult:(SASVoiceSearchPartialResult *)arg1;
- (void)adPronunciationRecognized:(SASPronunciationRecognized *)arg1 usingSpeechModel:(NSString *)arg2 sessionUUID:(NSString *)arg3;
- (void)adAudioFileFinishedWriting:(NSFileHandle *)arg1 error:(NSError *)arg2 sessionUUID:(NSString *)arg3;
- (void)adSpeechRecognizedStructuredResult:(SAStructuredDictationResult *)arg1 usingSpeechModel:(NSString *)arg2 sessionUUID:(NSString *)arg3;
- (void)adSpeechDidBeginLocalRecognitionWithModelInfo:(NSString *)arg1 sessionUUID:(NSString *)arg2;
@end
