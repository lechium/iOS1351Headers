//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADSpeechCapturing-Protocol.h"

@class NSString;
@protocol ADSpeechCapturingDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechPlaybackSimulator : NSObject <ADSpeechCapturing>
{
    id <ADSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_playbackSource;	// 24 = 0x18
}

+ (id)_speechLogDecodingError;	// IMP=0x0000000100165b9c
- (void).cxx_destruct;	// IMP=0x00000001001669c8
- (void)startPlaybackWithURL:(id)arg1 narrowBand:(_Bool)arg2 dictation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100165cf8
- (void)enforcePreviousEndpointHint;	// IMP=0x0000000100165cf4
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100165cd8
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x0000000100165cd4
- (void)playRecordingStartAlert;	// IMP=0x0000000100165cd0
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x0000000100165cb4
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x0000000100165cb0
- (void)setFingerprintWasRecognized;	// IMP=0x0000000100165cac
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x0000000100165ca8
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x0000000100165ca4
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x0000000100165ca0
- (void)stopFingerprinting;	// IMP=0x0000000100165c9c
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x0000000100165c8c
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x0000000100165c7c
- (void)setSpeechWasRecognized;	// IMP=0x0000000100165c78
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x0000000100165c74
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x0000000100165c70
- (void)releaseAudioSession;	// IMP=0x0000000100165c6c
- (id)delegate;	// IMP=0x0000000100165c54
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100165bc4
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100165b24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

