//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFClientConfiguration, AFExperimentContext, AFLanguageDetectionUserContext, NSString, NSUUID;

@interface ADAudioActivationInfo : NSObject
{
    long long _activationMode;	// 8 = 0x8
    AFClientConfiguration *_currentClientConfiguration;	// 16 = 0x10
    _Bool _suppressStartAlert;	// 24 = 0x18
    AFExperimentContext *_experimentContext;	// 32 = 0x20
    _Bool _isActivated;	// 40 = 0x28
    _Bool _useBorealisBuffer;	// 41 = 0x29
    _Bool _usePrelistening;	// 42 = 0x2a
    _Bool _canDelayAudioSessionActive;	// 43 = 0x2b
    _Bool _hasPlayedStartAlert;	// 44 = 0x2c
    long long _speechEvent;	// 48 = 0x30
    long long _audioAlertStyle;	// 56 = 0x38
    NSString *_deviceIdentifier;	// 64 = 0x40
    double _timestamp;	// 72 = 0x48
    unsigned long long _machAbsoluteTime;	// 80 = 0x50
    long long _speechCapturingMode;	// 88 = 0x58
    long long _speechEndpointerOperationMode;	// 96 = 0x60
    AFLanguageDetectionUserContext *_languageDetectionUserContext;	// 104 = 0x68
    long long _dictationInputOrigin;	// 112 = 0x70
    NSUUID *_turnIdentifier;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001000ddd2c
@property(readonly, copy, nonatomic) NSUUID *turnIdentifier; // @synthesize turnIdentifier=_turnIdentifier;
@property(readonly, nonatomic) long long dictationInputOrigin; // @synthesize dictationInputOrigin=_dictationInputOrigin;
@property(readonly, copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext; // @synthesize languageDetectionUserContext=_languageDetectionUserContext;
@property(readonly, nonatomic) long long speechEndpointerOperationMode; // @synthesize speechEndpointerOperationMode=_speechEndpointerOperationMode;
@property(readonly, nonatomic) _Bool hasPlayedStartAlert; // @synthesize hasPlayedStartAlert=_hasPlayedStartAlert;
@property(readonly, nonatomic) _Bool canDelayAudioSessionActive; // @synthesize canDelayAudioSessionActive=_canDelayAudioSessionActive;
@property(nonatomic) long long speechCapturingMode; // @synthesize speechCapturingMode=_speechCapturingMode;
@property(readonly, nonatomic) unsigned long long machAbsoluteTime; // @synthesize machAbsoluteTime=_machAbsoluteTime;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) long long audioAlertStyle; // @synthesize audioAlertStyle=_audioAlertStyle;
@property(readonly, nonatomic) _Bool usePrelistening; // @synthesize usePrelistening=_usePrelistening;
@property(readonly, nonatomic) _Bool useBorealisBuffer; // @synthesize useBorealisBuffer=_useBorealisBuffer;
@property(readonly, nonatomic) long long speechEvent; // @synthesize speechEvent=_speechEvent;
- (_Bool)_isVibrationDisabledInAccessiblity;	// IMP=0x00000001000ddbf0
- (_Bool)_isVoiceOverTouchEnabledInAccessibility;	// IMP=0x00000001000ddb38
- (_Bool)isVoiceOverTouchEnabled;	// IMP=0x00000001000ddb2c
- (long long)twoShotPromptTypeForRecordRoute:(id)arg1 playbackRoute:(id)arg2;	// IMP=0x00000001000dd9e0
- (_Bool)shouldSuppressRecordingStopAlert;	// IMP=0x00000001000dd9cc
- (_Bool)shouldPlayAlertIfNotPrelistening;	// IMP=0x00000001000dd984
- (_Bool)shouldExplicitlyPlayAlertOnStart;	// IMP=0x00000001000dd944
- (_Bool)shouldUseVoiceTriggerAnalyzerStyle;	// IMP=0x00000001000dd938
- (_Bool)canEnterTwoShot;	// IMP=0x00000001000dd8e4
- (_Bool)_eventIsVoiceTrigger;	// IMP=0x00000001000dd8bc
- (_Bool)_canUseZLL;	// IMP=0x00000001000dd82c
- (_Bool)canGetPCMStream;	// IMP=0x00000001000dd814
- (_Bool)requiresBorealisConsumerCheck;	// IMP=0x00000001000dd7e4
- (_Bool)shouldTreatTimeoutAsHardEndpoint;	// IMP=0x00000001000dd7d8
- (_Bool)canPrepareWithoutInterruption;	// IMP=0x00000001000dd7d0
- (_Bool)canPrewarm;	// IMP=0x00000001000dd79c
- (void)endUpdateToPostVoiceWithContext:(unsigned long long)arg1 success:(_Bool)arg2;	// IMP=0x00000001000dd790
- (unsigned long long)beginUpdateToPostVoice;	// IMP=0x00000001000dd778
- (_Bool)needsUpdateToPostVoiceMode;	// IMP=0x00000001000dd734
- (void)audioSessionActivated;	// IMP=0x00000001000dd728
- (long long)audioAlertStyleForRecordRoute:(id)arg1 playbackRoute:(id)arg2;	// IMP=0x00000001000dcee4
- (_Bool)shouldOverrideRecordingStartingAlertBehaviorForAlertStyle:(long long)arg1;	// IMP=0x00000001000dcebc
- (id)_alertBehaviorForRecordRoute:(id)arg1 playbackRoute:(id)arg2 attemptsToUsePastDataBufferFrames:(_Bool)arg3;	// IMP=0x00000001000dc8b0
- (id)startRecordingSettingsWithRecordRoute:(id)arg1 playbackRoute:(id)arg2;	// IMP=0x00000001000dbe40
- (id)recordContext;	// IMP=0x00000001000dbde0
- (id)avvcContext;	// IMP=0x00000001000dbd24
- (long long)_activationMode;	// IMP=0x00000001000dbce0
- (id)recordSettingsWithOptions:(unsigned long long)arg1;	// IMP=0x00000001000db824
- (long long)event;	// IMP=0x00000001000db81c
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00000001000db718
- (void)setSpeechRequestOptions:(id)arg1 currentActivationInfo:(id)arg2;	// IMP=0x00000001000db3d0
- (id)initWithSpeechCapturingMode:(long long)arg1 clientConfiguration:(id)arg2 experimentContext:(id)arg3;	// IMP=0x00000001000db2dc
- (id)description;	// IMP=0x00000001000db228

@end

