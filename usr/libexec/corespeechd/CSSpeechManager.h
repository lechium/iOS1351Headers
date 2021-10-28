//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSActivationEventNotifierDelegate-Protocol.h"
#import "CSAudioProviderDelegate-Protocol.h"
#import "CSAudioRecorderDelegate-Protocol.h"
#import "CSAudioServerCrashMonitorDelegate-Protocol.h"
#import "CSOpportuneSpeakEventMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerAssetHandlerDelegate-Protocol.h"
#import "CSVoiceTriggerXPCServiceDelegate-Protocol.h"

@class CSAudioRecorder, CSBuiltInVoiceTrigger, CSFallbackAudioSessionReleaseProvider, CSKeywordDetector, CSMyriadPHash, CSMyriadSelfTriggerCoordinator, CSOpportuneSpeakListnerTestService, CSSelfTriggerDetector, CSSmartSiriVolume, CSSpIdImplicitTraining, CSVoiceProfileRetrainManager, CSVoiceTriggerEventNotifier, CSVoiceTriggerFidesClient, CSVoiceTriggerFileLogger, CSVoiceTriggerFirstPassHearst, CSVoiceTriggerFirstPassHearstAP, CSVoiceTriggerFirstPassJarvis, NSMutableDictionary, NSString;
@protocol CSSmartSiriVolumeDelegate, CSSpeechManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSSpeechManager : NSObject <CSAudioServerCrashMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSActivationEventNotifierDelegate, CSAudioRecorderDelegate, CSVoiceTriggerXPCServiceDelegate, CSAudioProviderDelegate, CSOpportuneSpeakEventMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSSmartSiriVolume *_smartSiriVolume;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_assetQueryQueue;	// 24 = 0x18
    CSAudioRecorder *_audioRecorder;	// 32 = 0x20
    NSMutableDictionary *_audioProviders;	// 40 = 0x28
    CSFallbackAudioSessionReleaseProvider *_fallbackAudioSessionReleaseProvider;	// 48 = 0x30
    id <CSSpeechManagerDelegate> _clientController;	// 56 = 0x38
    id <CSSmartSiriVolumeDelegate> _volumeClientController;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_voiceTriggerQueue;	// 72 = 0x48
    CSBuiltInVoiceTrigger *_voiceTrigger;	// 80 = 0x50
    CSVoiceTriggerEventNotifier *_voiceTriggerEventNotifier;	// 88 = 0x58
    CSVoiceTriggerFileLogger *_voiceTriggerFileLogger;	// 96 = 0x60
    CSSelfTriggerDetector *_selfTriggerDetector;	// 104 = 0x68
    CSKeywordDetector *_keywordDetector;	// 112 = 0x70
    CSMyriadPHash *_myriad;	// 120 = 0x78
    CSMyriadSelfTriggerCoordinator *_myriadSelfTriggerCoordinator;	// 128 = 0x80
    CSVoiceTriggerFidesClient *_voiceTriggerFidesClient;	// 136 = 0x88
    CSVoiceTriggerFirstPassJarvis *_voiceTriggerFirstPassJarvis;	// 144 = 0x90
    CSVoiceTriggerFirstPassHearst *_voiceTriggerFirstPassHearst;	// 152 = 0x98
    CSVoiceTriggerFirstPassHearstAP *_voiceTriggerFirstPassHearstAP;	// 160 = 0xa0
    CSVoiceProfileRetrainManager *_voiceTriggerRetrainer;	// 168 = 0xa8
    CSSpIdImplicitTraining *_voiceTriggerImplicitTraining;	// 176 = 0xb0
    NSObject<OS_dispatch_source> *_clearLoggingFileTimer;	// 184 = 0xb8
    long long _clearLoggingFileTimerCount;	// 192 = 0xc0
    CSOpportuneSpeakListnerTestService *_opportuneSpeakListnerTestService;	// 200 = 0xc8
}

+ (id)sharedManagerForCoreSpeechDaemon;	// IMP=0x00000001000d3b8c
+ (id)sharedManager;	// IMP=0x00000001000d3ab8
- (void).cxx_destruct;	// IMP=0x00000001000d8174
@property(retain, nonatomic) CSOpportuneSpeakListnerTestService *opportuneSpeakListnerTestService; // @synthesize opportuneSpeakListnerTestService=_opportuneSpeakListnerTestService;
@property(nonatomic) long long clearLoggingFileTimerCount; // @synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *clearLoggingFileTimer; // @synthesize clearLoggingFileTimer=_clearLoggingFileTimer;
@property(retain, nonatomic) CSSpIdImplicitTraining *voiceTriggerImplicitTraining; // @synthesize voiceTriggerImplicitTraining=_voiceTriggerImplicitTraining;
@property(retain, nonatomic) CSVoiceProfileRetrainManager *voiceTriggerRetrainer; // @synthesize voiceTriggerRetrainer=_voiceTriggerRetrainer;
@property(retain, nonatomic) CSVoiceTriggerFirstPassHearstAP *voiceTriggerFirstPassHearstAP; // @synthesize voiceTriggerFirstPassHearstAP=_voiceTriggerFirstPassHearstAP;
@property(retain, nonatomic) CSVoiceTriggerFirstPassHearst *voiceTriggerFirstPassHearst; // @synthesize voiceTriggerFirstPassHearst=_voiceTriggerFirstPassHearst;
@property(retain, nonatomic) CSVoiceTriggerFirstPassJarvis *voiceTriggerFirstPassJarvis; // @synthesize voiceTriggerFirstPassJarvis=_voiceTriggerFirstPassJarvis;
@property(retain, nonatomic) CSVoiceTriggerFidesClient *voiceTriggerFidesClient; // @synthesize voiceTriggerFidesClient=_voiceTriggerFidesClient;
@property(retain, nonatomic) CSMyriadSelfTriggerCoordinator *myriadSelfTriggerCoordinator; // @synthesize myriadSelfTriggerCoordinator=_myriadSelfTriggerCoordinator;
@property(retain, nonatomic) CSMyriadPHash *myriad; // @synthesize myriad=_myriad;
@property(retain, nonatomic) CSKeywordDetector *keywordDetector; // @synthesize keywordDetector=_keywordDetector;
@property(retain, nonatomic) CSSelfTriggerDetector *selfTriggerDetector; // @synthesize selfTriggerDetector=_selfTriggerDetector;
@property(retain, nonatomic) CSVoiceTriggerFileLogger *voiceTriggerFileLogger; // @synthesize voiceTriggerFileLogger=_voiceTriggerFileLogger;
@property(retain, nonatomic) CSVoiceTriggerEventNotifier *voiceTriggerEventNotifier; // @synthesize voiceTriggerEventNotifier=_voiceTriggerEventNotifier;
@property(retain, nonatomic) CSBuiltInVoiceTrigger *voiceTrigger; // @synthesize voiceTrigger=_voiceTrigger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *voiceTriggerQueue; // @synthesize voiceTriggerQueue=_voiceTriggerQueue;
@property(nonatomic) __weak id <CSSmartSiriVolumeDelegate> volumeClientController; // @synthesize volumeClientController=_volumeClientController;
@property(nonatomic) __weak id <CSSpeechManagerDelegate> clientController; // @synthesize clientController=_clientController;
@property(retain, nonatomic) CSFallbackAudioSessionReleaseProvider *fallbackAudioSessionReleaseProvider; // @synthesize fallbackAudioSessionReleaseProvider=_fallbackAudioSessionReleaseProvider;
@property(retain, nonatomic) NSMutableDictionary *audioProviders; // @synthesize audioProviders=_audioProviders;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property(readonly, nonatomic) CSSmartSiriVolume *smartSiriVolume; // @synthesize smartSiriVolume=_smartSiriVolume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)opportuneSpeakEventMonitor:(id)arg1 didStreamStateChanged:(_Bool)arg2;	// IMP=0x00000001000d7cb8
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00000001000d7ca4
- (void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(_Bool)arg2;	// IMP=0x00000001000d7bbc
- (void)_teardownForBluetoothDevice;	// IMP=0x00000001000d7a9c
- (void)_prepareForBluetoothDeviceWithDeviceType:(unsigned long long)arg1 asset:(id)arg2;	// IMP=0x00000001000d787c
- (void)_setupForBluetoothDeviceIfNeededWithDeviceType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d76e4
- (void)_setupForJarvisIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d7608
- (void)_setupForHearstIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d752c
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;	// IMP=0x00000001000d7264
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000d6f58
- (void)_startClearLoggingFilesTimer;	// IMP=0x00000001000d6e60
- (void)_createClearLoggingFileTimer;	// IMP=0x00000001000d6c88
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;	// IMP=0x00000001000d6c70
- (void)_reinitializeVoiceTriggerWithAsset:(id)arg1;	// IMP=0x00000001000d6b00
- (void)_reinitializeVoiceTriggerIfNeeded;	// IMP=0x00000001000d68b4
- (void)voiceTriggerAssetHandler:(id)arg1 didChangeCachedAsset:(id)arg2;	// IMP=0x00000001000d67fc
- (void)audioRecorderWillBeDestroyed:(id)arg1;	// IMP=0x00000001000d66d8
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x00000001000d66d4
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5;	// IMP=0x00000001000d66d0
- (void)audioProviderInvalidated:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x00000001000d63d0
- (id)_getAudioRecorderWithError:(id *)arg1;	// IMP=0x00000001000d6164
- (id)fetchFallbackAudioSessionReleaseProvider;	// IMP=0x00000001000d6048
- (id)audioProviderWithStreamID:(unsigned long long)arg1;	// IMP=0x00000001000d5d60
- (id)audioProviderWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000d5714
- (id)audioProviderWithUUID:(id)arg1;	// IMP=0x00000001000d5504
- (void)registerVolumeController:(id)arg1;	// IMP=0x00000001000d53f0
- (void)registerSiriClientProxy:(id)arg1;	// IMP=0x00000001000d52d4
- (void)registerSpeechController:(id)arg1;	// IMP=0x00000001000d5184
- (void)_startVoiceTrigger;	// IMP=0x00000001000d505c
- (void)_setupVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d447c
- (id)_myriadSelfTriggerCoordinatorIfNeeded:(_Bool)arg1;	// IMP=0x00000001000d4434
- (id)_voiceTriggerEventNotifierCreateIfNeeded:(_Bool)arg1;	// IMP=0x00000001000d4360
- (void)_getVoiceTriggerAssetIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x00000001000d42b8
- (void)startManager;	// IMP=0x00000001000d3e80
- (void)dealloc;	// IMP=0x00000001000d3e08
- (id)init;	// IMP=0x00000001000d3c60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
