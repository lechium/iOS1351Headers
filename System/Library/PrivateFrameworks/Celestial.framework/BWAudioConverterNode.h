/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSDictionary;

@interface BWAudioConverterNode : BWNode {

	NSDictionary* _settings;
	OpaqueFigSampleBufferProcessorRef _audioCompressionSBP;

}

@property (nonatomic,readonly) NSDictionary * gaplessPlaybackInfo; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)settings;
-(void)setSettings:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)_teardownAudioCompressionSBP;
-(int)_setupAudioCompressionSBPForInputFormat:(id)arg1 ;
-(void)_handleUpdatedRecordingSettings:(id)arg1 ;
-(void)acquireHardware;
-(void)relinquishHardware;
-(NSDictionary *)gaplessPlaybackInfo;
@end

