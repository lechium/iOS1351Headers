/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSAudioConverterDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSMutableData;

@interface CSAudioConverter : NSObject {

	OpaqueAudioConverterRef _opusConverter;
	NSMutableData* _bufferedLPCM;
	unsigned _recordBasePacketsPerSecond;
	AudioStreamBasicDescription _opusOutASBD;
	unsigned _convertPacketCount;
	unsigned _convertAudioCapacity;
	unsigned long long _lastTimestamp;
	float _outPacketSizeInSec;
	id<CSAudioConverterDelegate> _delegate;

}

@property (__weak) id<CSAudioConverterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)narrowBandOpusConverter;
+(id)opusConverter;
-(void)dealloc;
-(id<CSAudioConverterDelegate>)delegate;
-(void)setDelegate:(id<CSAudioConverterDelegate>)arg1 ;
-(void)reset;
-(void)flush;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)_configureAudioConverter:(OpaqueAudioConverterRef)arg1 ;
-(void)_convertBufferedLPCM:(id)arg1 allowPartial:(BOOL)arg2 timestamp:(unsigned long long)arg3 ;
@end

