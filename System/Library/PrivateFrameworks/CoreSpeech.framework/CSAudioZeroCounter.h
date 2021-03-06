/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CSAudioZeroCounter : NSObject {

	NSString* _methodToken;
	unsigned _continuousZeroCounter;
	unsigned _zeroCounterWinSz;
	unsigned _numChannels;
	unsigned _analyzeStep;
	float _sampleRate;
	BOOL _shouldDeinterleaveAudio;

}
-(id)initWithToken:(id)arg1 sampleRate:(float)arg2 numChannels:(unsigned)arg3 ;
-(void)resetWithSampleRate:(float)arg1 ;
-(void)getZeroStatisticsFromBuffer:(id)arg1 entireSamples:(unsigned)arg2 ;
-(void)stopReportZeroStatistics;
@end

