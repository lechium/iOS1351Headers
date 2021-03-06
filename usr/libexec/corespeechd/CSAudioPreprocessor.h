//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSBeepCancellerDelegate-Protocol.h"
#import "CSVoiceTriggerAwareZeroFilterDelegate-Protocol.h"

@class CSAudioSampleRateConverter, CSAudioZeroCounter, CSBeepCanceller, CSVoiceTriggerAwareZeroFilter, NSString;
@protocol CSAudioPreprocessorDelegate;

@interface CSAudioPreprocessor : NSObject <CSVoiceTriggerAwareZeroFilterDelegate, CSBeepCancellerDelegate>
{
    float _sampleRate;	// 8 = 0x8
    id <CSAudioPreprocessorDelegate> _delegate;	// 16 = 0x10
    CSAudioSampleRateConverter *_upsampler;	// 24 = 0x18
    CSVoiceTriggerAwareZeroFilter *_zeroFilter;	// 32 = 0x20
    CSBeepCanceller *_beepCanceller;	// 40 = 0x28
    CSAudioZeroCounter *_zeroCounter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010008c2cc
@property(retain, nonatomic) CSAudioZeroCounter *zeroCounter; // @synthesize zeroCounter=_zeroCounter;
@property(retain, nonatomic) CSBeepCanceller *beepCanceller; // @synthesize beepCanceller=_beepCanceller;
@property(retain, nonatomic) CSVoiceTriggerAwareZeroFilter *zeroFilter; // @synthesize zeroFilter=_zeroFilter;
@property(retain, nonatomic) CSAudioSampleRateConverter *upsampler; // @synthesize upsampler=_upsampler;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) __weak id <CSAudioPreprocessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;	// IMP=0x000000010008c1d0
- (void)zeroFilter:(id)arg1 zeroFilteredBufferAvailable:(id)arg2 atHostTime:(unsigned long long)arg3;	// IMP=0x000000010008c0fc
- (_Bool)_isNarrowBand:(float)arg1;	// IMP=0x000000010008c0c4
- (void)_reportMetrics;	// IMP=0x000000010008be84
- (void)willBeep;	// IMP=0x000000010008be44
- (void)flush;	// IMP=0x000000010008bd24
- (void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2;	// IMP=0x000000010008bb60
- (void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(_Bool)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x000000010008b8fc
- (id)initWithSampleRate:(float)arg1;	// IMP=0x000000010008b7fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

