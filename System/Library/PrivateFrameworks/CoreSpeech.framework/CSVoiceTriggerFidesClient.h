/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:50 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSVoiceTriggerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSAudioCircularBuffer, NSString;

@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CSAudioCircularBuffer* _audioBuffer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) CSAudioCircularBuffer * audioBuffer;              //@synthesize audioBuffer=_audioBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(CSAudioCircularBuffer *)audioBuffer;
-(void)setAudioBuffer:(CSAudioCircularBuffer *)arg1 ;
-(id)_medicalIDName;
-(void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 ;
-(void)voiceTriggerDidDetectNearMiss:(id)arg1 ;
-(void)voiceTriggerDidDetectSpeakerReject:(id)arg1 ;
-(void)voiceTriggerGotSuperVector:(id)arg1 ;
-(id)_lastTriggerDataWithResult:(id)arg1 ;
-(void)_logDESRecordWithType:(long long)arg1 result:(id)arg2 ;
-(id)_medicalIDAge;
@end
