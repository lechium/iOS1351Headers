//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAcousticFingerprinterDelegate-Protocol.h"
#import "ADSpeechCapturing-Protocol.h"
#import "CSEndpointAnalyzerDelegate-Protocol.h"
#import "CSLanguageDetectorDelegate-Protocol.h"
#import "CSSpeakerIdentificationDelegate-Protocol.h"
#import "CSSpeechControllerDelegate-Protocol.h"

@class ADAcousticFingerprinter, ADAudioActivationInfo, ADAudioFileWriter, ADSpeechCapturingContext, AFBluetoothWirelessSplitterSessionStateObserver, AFClientConfiguration, AFExperimentContext, AFSpeechSynthesisRecord, AFWatchdogTimer, CSEndpointerMetrics, CSSpeechController, NSArray, NSFileHandle, NSMutableDictionary, NSString, NSUUID, NSXPCConnection;
@protocol ADSpeechCapturingDelegate, CSEndpointAnalyzer, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechRecorder : NSObject <ADAcousticFingerprinterDelegate, CSSpeechControllerDelegate, CSEndpointAnalyzerDelegate, CSLanguageDetectorDelegate, CSSpeakerIdentificationDelegate, ADSpeechCapturing>
{
    id <ADSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSSpeechController *_speechController;	// 24 = 0x18
    long long _packetCount;	// 32 = 0x20
    long long _speechCapturingMode;	// 40 = 0x28
    _Bool _usingDictationAlerts;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_extendedEndpointTimer;	// 56 = 0x38
    id <CSEndpointAnalyzer> _endpointAnalyzer;	// 64 = 0x40
    ADSpeechCapturingContext *_context;	// 72 = 0x48
    ADAudioActivationInfo *_currentActivationInfo;	// 80 = 0x50
    ADAudioActivationInfo *_pendingActivationInfo;	// 88 = 0x58
    _Bool _fingerprintingEnabled;	// 96 = 0x60
    ADAcousticFingerprinter *_fingerprinter;	// 104 = 0x68
    long long _audioFileType;	// 112 = 0x70
    _Bool _needsAVVCLPCMCallbacks;	// 120 = 0x78
    _Bool _hasReceivedEmptyLPCMRecordBuffer;	// 121 = 0x79
    NSFileHandle *_audioFileHandle;	// 128 = 0x80
    ADAudioFileWriter *_audioFileWriter;	// 136 = 0x88
    ADAudioFileWriter *_audioLogggingFileWriter;	// 144 = 0x90
    ADAudioFileWriter *_audioVoiceIdentificationTrainingWriter;	// 152 = 0x98
    ADAudioFileWriter *_audioSpeechExtractionWriter;	// 160 = 0xa0
    long long _startEvent;	// 168 = 0xa8
    long long _recordingState;	// 176 = 0xb0
    long long _endpointerOperationMode;	// 184 = 0xb8
    _Bool _didReceiveFirstBuffer;	// 192 = 0xc0
    _Bool _didReceiveLastBuffer;	// 193 = 0xc1
    _Bool _didDetectStartpoint;	// 194 = 0xc2
    _Bool _didDetectEndpoint;	// 195 = 0xc3
    _Bool _didEnterTwoShotMode;	// 196 = 0xc4
    _Bool _didFakeTwoShotWithAlert;	// 197 = 0xc5
    NSUUID *_fakeTwoShotTTSPromptUUID;	// 200 = 0xc8
    _Bool _serverDidRecognizeSpeech;	// 208 = 0xd0
    _Bool _fingerprintWasRecognized;	// 209 = 0xd1
    _Bool _serverDidEndpoint;	// 210 = 0xd2
    _Bool _didTimeout;	// 211 = 0xd3
    _Bool _wasCanceled;	// 212 = 0xd4
    _Bool _suppressRecordingStoppedAlert;	// 213 = 0xd5
    _Bool _isRecordingUsingBTRoute;	// 214 = 0xd6
    double _twoShotStartTime;	// 216 = 0xd8
    _Bool _forceSuccessAlertOnStop;	// 224 = 0xe0
    _Bool _isDriving;	// 225 = 0xe1
    double _startRecordingTimestamp;	// 232 = 0xe8
    double _firstBufferTimestamp;	// 240 = 0xf0
    unsigned long long _firstBufferHostTime;	// 248 = 0xf8
    unsigned long long _estimatedSpeechEndHostTime;	// 256 = 0x100
    double _lastPrepareTimestamp;	// 264 = 0x108
    double _accumulatedBufferDuration;	// 272 = 0x110
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;	// 280 = 0x118
    struct OpaqueAudioConverter *_decoder;	// 288 = 0x120
    double _expectedFirstBufferTimestamp;	// 296 = 0x128
    _Bool _isOpus;	// 304 = 0x130
    NSString *_recordDevice;	// 312 = 0x138
    _Bool _audioDuckingEnabled;	// 320 = 0x140
    unsigned int _duckedDeviceID;	// 324 = 0x144
    NSXPCConnection *_speechRecordingEventListenerConnection;	// 328 = 0x148
    AFWatchdogTimer *_fakeTwoShotTTSPromptWatchdogTimer;	// 336 = 0x150
    unsigned long long _lastAudioRecordBufferStartTime;	// 344 = 0x158
    unsigned long long _lastAudioRecordBufferReceiptTime;	// 352 = 0x160
    CSEndpointerMetrics *_lastEndpointerMetrics;	// 360 = 0x168
    double _lastEndpointHintDuration;	// 368 = 0x170
    NSArray *_lastEndpointHintFeatures;	// 376 = 0x178
    CDUnknownBlockType _lastEndpointHintCompletion;	// 384 = 0x180
    AFSpeechSynthesisRecord *_mostRecentSpeechSynthesisRecord;	// 392 = 0x188
    AFClientConfiguration *_currentClientConfiguration;	// 400 = 0x190
    NSObject<OS_dispatch_group> *_alertPlaybackGroup;	// 408 = 0x198
    NSMutableDictionary *_numberOfAVVCAlertPlaybacksByType;	// 416 = 0x1a0
    AFBluetoothWirelessSplitterSessionStateObserver *_bluetoothWirelessSplitterSessionStateObserver;	// 424 = 0x1a8
    AFExperimentContext *_experimentContext;	// 432 = 0x1b0
    _Bool _suppressInterruptionEndedNotifications;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x00000001000d6924
@property(nonatomic) _Bool suppressInterruptionEndedNotifications; // @synthesize suppressInterruptionEndedNotifications=_suppressInterruptionEndedNotifications;
- (void)_setAudioDuckingEnabled:(_Bool)arg1;	// IMP=0x00000001000d6910
- (void)_setDictationModeEnabled:(_Bool)arg1;	// IMP=0x00000001000d6904
- (unsigned int)_audioDeviceID;	// IMP=0x00000001000d68fc
- (void)speakerIdentificationDidDetectSpeakerWithScores:(id)arg1;	// IMP=0x00000001000d6604
- (_Bool)_startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d6218
- (void)acousticFingerprinter:(id)arg1 hasFingerprint:(id)arg2 duration:(double)arg3;	// IMP=0x00000001000d60c8
- (void)setEARLanguageDetectorSpeechRequestId:(id)arg1;	// IMP=0x00000001000d60b8
- (void)performBlockAfterAlerts:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x00000001000d5bc8
- (void)setEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x00000001000d5bb8
- (void)setEndpointerThreshold:(double)arg1;	// IMP=0x00000001000d5ba4
- (void)enforcePreviousEndpointHint;	// IMP=0x00000001000d5b90
- (void)_enforceEndpointHint;	// IMP=0x00000001000d5aa4
- (void)_clearEndpointHint;	// IMP=0x00000001000d5a5c
- (void)_checkIfLastEndpointHintShouldBeAccepted;	// IMP=0x00000001000d57a0
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d5648
- (void)_handleFakeTwoShotPromptCallbackWithUUID:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 error:(id)arg4;	// IMP=0x00000001000d5494
- (void)_handleFakeTwoShotPromptTimeoutWithUUID:(id)arg1;	// IMP=0x00000001000d53b4
- (void)_playPhaticWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d5064
- (void)_performTwoShotPromptForType:(long long)arg1 atTime:(double)arg2;	// IMP=0x00000001000d47a8
- (void)_hardEndpointWasDetectedWithMetrics:(id)arg1 atTime:(double)arg2;	// IMP=0x00000001000d45fc
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x00000001000d4140
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00000001000d3ecc
- (void)speechControllerDidUpdateSmartSiriVolume:(id)arg1 forReason:(unsigned long long)arg2;	// IMP=0x00000001000d3dac
- (void)_speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d3b7c
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d3a1c
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2;	// IMP=0x00000001000d38f0
- (void)suppressUtteranceGradingIfRequired;	// IMP=0x00000001000d36a8
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg1 atTime:(double)arg2;	// IMP=0x00000001000d3210
- (void)languageDetectorDidDetectLanguageWithConfidence:(id)arg1 confidence:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x00000001000d3064
- (void)_setLanguageDetectorDelegateIfRequired;	// IMP=0x00000001000d2ef8
- (void)speechControllerDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;	// IMP=0x00000001000d2b64
- (void)speechController:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00000001000d2a48
- (void)speechController:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00000001000d292c
- (void)speechControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;	// IMP=0x00000001000d2878
- (void)speechControllerEndRecordInterruption:(id)arg1;	// IMP=0x00000001000d2798
- (void)speechControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x00000001000d267c
- (void)_speechControllerDidReceiveLastAudioRecordBuffer:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3 isRecordingStopped:(_Bool)arg4;	// IMP=0x00000001000d2404
- (void)speechControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;	// IMP=0x00000001000d2168
- (id)getAudioRouteInstrumentation;	// IMP=0x00000001000d1d20
- (void)_speechControllerDidReceiveFirstAudioRecordBufferWithHostTime:(unsigned long long)arg1 atHostTime:(unsigned long long)arg2;	// IMP=0x00000001000d1ab8
- (void)speechControllerRecordBufferAvailable:(id)arg1 buffers:(id)arg2 durationInSec:(float)arg3 recordedAt:(unsigned long long)arg4;	// IMP=0x00000001000d17b8
- (void)_speechControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3 errorCodeOverride:(long long)arg4 underlyingError:(id)arg5;	// IMP=0x00000001000d073c
- (void)speechControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;	// IMP=0x00000001000d048c
- (void)speechControllerDidDeliverLastBuffer:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;	// IMP=0x00000001000d0310
- (void)_speechControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000cfb8c
- (void)speechControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000cf96c
- (id)_recordingInfoForEvent:(long long)arg1 audioAlertStyle:(long long)arg2 includeBTInfo:(_Bool)arg3 includeRecordDeviceInfo:(_Bool)arg4;	// IMP=0x00000001000cf5d0
- (id)_currentRecordingInfo;	// IMP=0x00000001000cf574
- (id)_currentPlaybackRoute;	// IMP=0x00000001000cf36c
- (id)_currentRecordDeviceInfo;	// IMP=0x00000001000cf140
- (id)_currentRecordRoute;	// IMP=0x00000001000cef38
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x00000001000ceecc
- (void)playRecordingStartAlert;	// IMP=0x00000001000ceca8
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cec08
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00000001000ceadc
- (id)_speechRecordingEventListener;	// IMP=0x00000001000cea6c
- (void)setSpeechRecordingEventListeningEndpoint:(id)arg1;	// IMP=0x00000001000ce9a8
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x00000001000ce9a0
- (void)setAudioFileHandle:(id)arg1;	// IMP=0x00000001000ce994
- (void)setAudioFileType:(long long)arg1;	// IMP=0x00000001000ce98c
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x00000001000ce8d4
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x00000001000ce858
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x00000001000ce774
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x00000001000ce60c
- (void)setFingerprintWasRecognized;	// IMP=0x00000001000ce554
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x00000001000ce444
- (void)releaseAudioSession;	// IMP=0x00000001000ce1e0
- (void)setDelegate:(id)arg1;	// IMP=0x00000001000ce1d4
- (_Bool)_updateAudioContextWithPendingInfoForReason:(id)arg1;	// IMP=0x00000001000ce008
- (_Bool)_updateAudioContextToPostVoiceForReason:(id)arg1;	// IMP=0x00000001000cdebc
- (_Bool)_setAudioContextWithInfo:(id)arg1 forReason:(id)arg2;	// IMP=0x00000001000cdbdc
- (void)_updateAudioContextWithInfo:(id)arg1 reason:(id)arg2;	// IMP=0x00000001000cda68
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x00000001000cd6bc
- (void)_logAudioMetrics:(id)arg1;	// IMP=0x00000001000cd350
- (void)_logVoiceTriggerInfo:(id)arg1;	// IMP=0x00000001000cd134
- (void)_logBluetoothState;	// IMP=0x00000001000ccf00
- (void)_logFanState;	// IMP=0x00000001000ccefc
- (id)fetchRecordingInfo;	// IMP=0x00000001000ccef0
- (unsigned int)_audioSessionID;	// IMP=0x00000001000ccd78
- (unsigned int)fetchAudioSessionID;	// IMP=0x00000001000ccd6c
- (void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x00000001000ccc0c
- (_Bool)startSpeechCaptureWithContext:(id)arg1 willStartHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000001000cbe80
- (void)prepareForMode:(long long)arg1;	// IMP=0x00000001000cbd1c
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x00000001000cbd08
- (id)recordingInfoForPreheatWithEvent:(long long)arg1;	// IMP=0x00000001000cbc1c
- (_Bool)prepareSpeechCaptureWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000001000cbc10
- (void)preheat;	// IMP=0x00000001000cb73c
- (void)eagerlyInitializeAudioRecording;	// IMP=0x00000001000cb680
- (void)_stopRecordingForEndpointReason:(CDUnion_e15ec660)arg1;	// IMP=0x00000001000cb590
- (void)_cancelExtendedEndpointTimer;	// IMP=0x00000001000cb554
- (void)_scheduleExtendedEndpointTimer;	// IMP=0x00000001000cb404
- (void)_setEndpointStyle:(long long)arg1;	// IMP=0x00000001000cb298
- (void)_setupAudioFileWritingForSpeechController:(id)arg1 info:(id)arg2 context:(id)arg3;	// IMP=0x00000001000ca6a8
- (_Bool)_checkAudioLoggingLimits:(id)arg1;	// IMP=0x00000001000ca4b0
- (void)_playAudioAlert:(long long)arg1;	// IMP=0x00000001000ca1f4
- (int)_mapInstrumentationEndpointTypeFromStopRecordingReason:(CDUnion_e15ec660)arg1;	// IMP=0x00000001000ca13c
- (_Bool)_shouldEmitInstrumentation;	// IMP=0x00000001000ca12c
- (void)_disableEndpointer;	// IMP=0x00000001000ca040
- (void)_stopRecordingWithReason:(CDUnion_e15ec660)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x00000001000c9a2c
- (_Bool)_prepareSpeechControllerWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000001000c9514
- (id)_fingerprinter;	// IMP=0x00000001000c9450
- (void)_resetSpeechController;	// IMP=0x00000001000c9388
- (id)_speechControllerWithError:(id *)arg1;	// IMP=0x00000001000c8e54
- (id)_speechController;	// IMP=0x00000001000c8e44
- (void)_updateRecordBufferDuration;	// IMP=0x00000001000c8d30
- (void)_setAlertsIfNeeded;	// IMP=0x00000001000c8830
- (void)_setEndpointerOperationMode:(long long)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x00000001000c85b8
- (void)_setSpeechCapturingMode:(long long)arg1;	// IMP=0x00000001000c84c0
- (void)dealloc;	// IMP=0x00000001000c8450
- (id)initWithQueue:(id)arg1;	// IMP=0x00000001000c829c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
