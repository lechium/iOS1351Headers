/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>

@class CSAudioRecordContext;

@interface CSSpeechControllerMonitor : CSEventMonitor {

	unsigned long long _recordState;
	CSAudioRecordContext* _audioRecordContext;

}

@property (assign,nonatomic) unsigned long long recordState;                         //@synthesize recordState=_recordState - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * audioRecordContext;              //@synthesize audioRecordContext=_audioRecordContext - In the implementation block
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned long long)recordState;
-(void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 ;
-(void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 withContext:(id)arg3 ;
-(void)setRecordState:(unsigned long long)arg1 ;
-(CSAudioRecordContext *)audioRecordContext;
-(void)setAudioRecordContext:(CSAudioRecordContext *)arg1 ;
@end

