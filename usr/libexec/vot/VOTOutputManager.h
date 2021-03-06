//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VOSOutputEventDispatching-Protocol.h"
#import "VOSOutputEventHandler-Protocol.h"

@class AXAccessQueue, AXAccessQueueTimer, AXDialectMap, AXIndexMap, AXMOutputManager, NSArray, NSDate, NSHashTable, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCRCThreadKey, VOTOutputRequest, VOTOutputRequestRunner;

@interface VOTOutputManager : NSObject <VOSOutputEventHandler, VOSOutputEventDispatching>
{
    struct __CFArray *_queuedOutputRequests;	// 8 = 0x8
    NSMutableArray *_requestRunners;	// 16 = 0x10
    AXIndexMap *_components;	// 24 = 0x18
    VOTOutputRequest *_currentlyRunningUninterruptableRequest;	// 32 = 0x20
    NSLock *_queueLock;	// 40 = 0x28
    NSMutableArray *_currentlyRunningRequests;	// 48 = 0x30
    unsigned int _numberOfRequestSinceLastUninterruptable;	// 56 = 0x38
    double _cachedRate;	// 64 = 0x40
    _Bool _shutdown;	// 72 = 0x48
    VOTOutputRequestRunner *_onHoldRunner;	// 80 = 0x50
    AXDialectMap *_supportedLanguageMap;	// 88 = 0x58
    struct VOTExternalRoutingInfo _currentExternalRoutingInfo;	// 96 = 0x60
    _Bool _externalRoutesAvailable;	// 112 = 0x70
    _Bool _externalRoutesContainHDMIRoute;	// 113 = 0x71
    _Bool _selectedRouteIsHDMI;	// 114 = 0x72
    AXAccessQueueTimer *_inactivateAudioTimer;	// 120 = 0x78
    AXAccessQueue *_audioSessionQueue;	// 128 = 0x80
    NSMutableSet *_audioSessionUsers;	// 136 = 0x88
    SCRCThreadKey *_threadKey;	// 144 = 0x90
    NSHashTable *_outputManagerObservers;	// 152 = 0x98
    NSLock *_outputManagerObserversLock;	// 160 = 0xa0
    AXMOutputManager *_axmOutputManager;	// 168 = 0xa8
    NSMutableDictionary *_vosEventHandlers;	// 176 = 0xb0
    _Bool _audioSessionActive;	// 184 = 0xb8
    CDUnknownBlockType _airTunesRouteIsAirPlayingTestingBlock;	// 192 = 0xc0
    NSDate *_dateToResumeRequests;	// 200 = 0xc8
    NSDate *_dateToResumeSounds;	// 208 = 0xd0
    NSString *_currentRouteName;	// 216 = 0xd8
}

+ (void)logSoundPlayed:(id)arg1;	// IMP=0x000000010000effc
+ (void)clearPreviousSoundsPlayed;	// IMP=0x000000010000ecf4
+ (id)previousSoundsPlayed;	// IMP=0x000000010000ec9c
+ (id)outputManager;	// IMP=0x000000010000b344
+ (id)outputManagerIfExists;	// IMP=0x000000010000b338
+ (void)initialize;	// IMP=0x000000010000aab4
- (void).cxx_destruct;	// IMP=0x000000010000fa48
@property(readonly, nonatomic) _Bool audioSessionActive; // @synthesize audioSessionActive=_audioSessionActive;
@property(retain, nonatomic) NSString *currentRouteName; // @synthesize currentRouteName=_currentRouteName;
@property(retain, nonatomic) NSDate *dateToResumeSounds; // @synthesize dateToResumeSounds=_dateToResumeSounds;
@property(retain, nonatomic) NSDate *dateToResumeRequests; // @synthesize dateToResumeRequests=_dateToResumeRequests;
@property(copy, nonatomic) CDUnknownBlockType airTunesRouteIsAirPlayingTestingBlock; // @synthesize airTunesRouteIsAirPlayingTestingBlock=_airTunesRouteIsAirPlayingTestingBlock;
@property(readonly, nonatomic) AXAccessQueue *audioSessionQueue; // @synthesize audioSessionQueue=_audioSessionQueue;
- (void)_notifyObserversOutputManagerWillProcessNextRequest:(id)arg1;	// IMP=0x000000010000f86c
- (void)_notifyObserversOutputManagerDidFinishProcessingQueuedRequests;	// IMP=0x000000010000f708
- (void)removeAllOutputManagerObservers;	// IMP=0x000000010000f6c0
- (void)removeOutputManagerObserver:(id)arg1;	// IMP=0x000000010000f648
- (void)addOutputManagerObserver:(id)arg1;	// IMP=0x000000010000f5d0
- (void)dispatcher:(id)arg1 handleEvent:(id)arg2 soundPack:(id)arg3 hapticPack:(id)arg4;	// IMP=0x000000010000f298
- (void)removeVOSEventFinishedHandler:(id)arg1;	// IMP=0x000000010000f288
- (void)addVOSEventFinishedHandler:(CDUnknownBlockType)arg1 forIdentifier:(id)arg2;	// IMP=0x000000010000f1dc
- (void)sendEvent:(id)arg1;	// IMP=0x000000010000f118
- (_Bool)replacesCharacterAsPunctuation:(unsigned short)arg1;	// IMP=0x000000010000f0c4
- (void)playSoundFast:(id)arg1;	// IMP=0x000000010000f0b4
- (void)playSoundFast:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ed40
- (void)speakSimpleString:(id)arg1 braille:(_Bool)arg2 language:(id)arg3;	// IMP=0x000000010000ebe0
- (void)speakSimpleString:(id)arg1;	// IMP=0x000000010000ebcc
- (void)disableAudioSession:(id)arg1;	// IMP=0x000000010000e564
- (void)enableAudioSession:(id)arg1;	// IMP=0x000000010000e3e0
- (void)toggleAudioSessionActive:(_Bool)arg1;	// IMP=0x000000010000e25c
- (void)silenceOutputForTimeInterval:(double)arg1;	// IMP=0x000000010000e178
- (void)_silenceRequestsForTimeInterval:(id)arg1;	// IMP=0x000000010000e0bc
- (void)_resumeCurrentRequest;	// IMP=0x000000010000e060
- (void)resumeCurrentRequest;	// IMP=0x000000010000dfe8
- (void)_holdCurrentRequest;	// IMP=0x000000010000df30
- (void)holdCurrentRequest;	// IMP=0x000000010000df08
- (_Bool)isSpeaking;	// IMP=0x000000010000debc
- (_Bool)isPaused;	// IMP=0x000000010000de70
- (void)stopSpeakingAtBoundary:(int)arg1 allRequests:(_Bool)arg2;	// IMP=0x000000010000de18
- (void)stopSpeakingAtBoundary:(int)arg1;	// IMP=0x000000010000de08
- (void)continueSpeaking;	// IMP=0x000000010000ddc8
- (void)pauseSpeakingAtBoundary:(int)arg1;	// IMP=0x000000010000dd80
- (void)setRate:(float)arg1;	// IMP=0x000000010000dd30
- (float)speechRate;	// IMP=0x000000010000dd24
- (void)resetSpeechRate;	// IMP=0x000000010000dce4
- (float)defaultSpeechRate;	// IMP=0x000000010000dc1c
- (float)speechRateForLanguage:(id)arg1;	// IMP=0x000000010000daa0
- (void)setSpeechRate:(float)arg1 forLanguage:(id)arg2;	// IMP=0x000000010000d9bc
- (void)setVolume:(float)arg1;	// IMP=0x000000010000d990
- (void)_setVolume:(float)arg1;	// IMP=0x000000010000d6d8
- (void)updateAudioSessionProperties;	// IMP=0x000000010000d694
- (void)updateWithCurrentRoute;	// IMP=0x000000010000d60c
- (void)selectAudioRoute:(_Bool)arg1;	// IMP=0x000000010000d0d8
- (void)selectLocalAudioRoute;	// IMP=0x000000010000d0c8
- (void)selectExternalAudioRoute;	// IMP=0x000000010000d0b8
- (_Bool)externalAudioRouteSelected;	// IMP=0x000000010000cccc
- (_Bool)isRouteAirplayMirroring;	// IMP=0x000000010000cc98
- (_Bool)selectedRouteIsHDMI;	// IMP=0x000000010000cc90
- (_Bool)externalAudioRoutesContainHDMIRoute;	// IMP=0x000000010000cc88
- (_Bool)externalAudioRoutesAvailable;	// IMP=0x000000010000cc80
- (void)_updateExternalRoutesAvailable;	// IMP=0x000000010000c9e0
- (void)_activeRouteChanged:(id)arg1;	// IMP=0x000000010000c590
- (_Bool)isWirelessRoutePicked:(id)arg1;	// IMP=0x000000010000c4a8
- (_Bool)isRouteWireless:(id)arg1;	// IMP=0x000000010000c440
- (_Bool)isCurrentRouteConsideredExternal:(id)arg1;	// IMP=0x000000010000c2e0
- (_Bool)_isRouteExternalHDMIRoute:(id)arg1;	// IMP=0x000000010000c27c
- (_Bool)airTunesRouteIsAirPlaying;	// IMP=0x000000010000c198
- (id)speechComponent;	// IMP=0x000000010000c188
- (double)volume;	// IMP=0x000000010000c134
- (void)updateVolume;	// IMP=0x000000010000c130
- (_Bool)isSystemMuted;	// IMP=0x000000010000c0a8
- (void)toggleSystemMute;	// IMP=0x000000010000c00c
- (void)synchVolumeWithSystem;	// IMP=0x000000010000bfdc
- (void)_systemVolumeDidChange:(id)arg1;	// IMP=0x000000010000bf18
- (float)systemVolume;	// IMP=0x000000010000bea4
- (void)setSystemVolume:(float)arg1;	// IMP=0x000000010000be14
- (id)componentForType:(int)arg1;	// IMP=0x000000010000be00
- (void)finishedOutputRequest:(id)arg1;	// IMP=0x000000010000bd24
- (void)_dispatchNextQueuedRequest;	// IMP=0x000000010000bb7c
- (void)_handleProcessRequest:(id)arg1;	// IMP=0x000000010000b858
- (void)shutdown;	// IMP=0x000000010000b7e4
- (void)_handleRequestFinished:(id)arg1;	// IMP=0x000000010000b678
- (void)clearQueue;	// IMP=0x000000010000b5f4
- (id)currentLanguageMap;	// IMP=0x000000010000b5ec
- (void)_updateSupportedLanguageMap;	// IMP=0x000000010000b534
- (void)handleEvent:(id)arg1;	// IMP=0x000000010000b3f0
@property(readonly, nonatomic) NSArray *queuedRequests;
- (void)_voiceOverVolumeChanged:(id)arg1;	// IMP=0x000000010000b3bc
- (void)dealloc;	// IMP=0x000000010000b20c
- (id)init;	// IMP=0x000000010000ab38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

