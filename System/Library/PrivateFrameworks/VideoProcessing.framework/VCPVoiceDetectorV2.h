/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:40 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPVoiceDetector.h>

@interface VCPVoiceDetectorV2 : VCPVoiceDetector {

	BOOL _voiceActivityNew;
	OpaqueAudioComponentInstanceRef _audioUnit;

}
-(id)init;
-(void)dealloc;
-(id)results;
-(int)loadModel;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
-(int)setupWithAudioStream:(const AudioStreamBasicDescription*)arg1 ;
@end

