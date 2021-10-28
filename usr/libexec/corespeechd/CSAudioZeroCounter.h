//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSAudioZeroCounter : NSObject
{
    NSString *_methodToken;	// 8 = 0x8
    unsigned int _continuousZeroCounter;	// 16 = 0x10
    unsigned int _zeroCounterWinSz;	// 20 = 0x14
    unsigned int _numChannels;	// 24 = 0x18
    unsigned int _analyzeStep;	// 28 = 0x1c
    float _sampleRate;	// 32 = 0x20
    _Bool _shouldDeinterleaveAudio;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000001000d9bb8
- (void)stopReportZeroStatistics;	// IMP=0x00000001000d9b54
- (void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned int)arg2;	// IMP=0x00000001000d9998
- (void)resetWithSampleRate:(float)arg1;	// IMP=0x00000001000d993c
- (id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned int)arg3;	// IMP=0x00000001000d984c

@end
