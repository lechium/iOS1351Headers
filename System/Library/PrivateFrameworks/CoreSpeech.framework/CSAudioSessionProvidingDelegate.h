/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSAudioSessionProvidingDelegate <NSObject>
@optional
-(void)audioSessionProviderBeginInterruption:(id)arg1;
-(void)audioSessionProviderBeginInterruption:(id)arg1 withContext:(id)arg2;
-(void)audioSessionProviderEndInterruption:(id)arg1;
-(void)audioSessionProvider:(id)arg1 willSetAudioSessionActive:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 didSetAudioSessionActive:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 providerInvalidated:(BOOL)arg2;
-(void)audioSessionProvider:(id)arg1 didChangeContext:(BOOL)arg2;

@end
