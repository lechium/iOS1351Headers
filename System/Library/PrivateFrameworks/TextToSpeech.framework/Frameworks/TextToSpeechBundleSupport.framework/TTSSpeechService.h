/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:49 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TTSSpeechService <NSObject>
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> serviceQueue; 
@optional
-(id)serviceIdentifier;
-(id)audioFileSettingsForVoice:(id)arg1;
-(oneway void)getVoicesForLanguage:(id)arg1 queryingMobileAssets:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(BOOL)employSpeechMarkupForType:(long long)arg1 language:(id)arg2;
-(id)lhPhonemesFromIPA:(id)arg1 language:(id)arg2;
-(id)phonemesFromIPA:(id)arg1 language:(id)arg2;
-(id)phonemesFromLHPhonemes:(id)arg1 language:(id)arg2;
-(id)enclosedStringWithPhonemes:(id)arg1;
-(id)nashvilleVoiceIdentifier:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4;
-(id)nashvilleVoiceName:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4;
-(id)embeddedRateMarkupForVoice:(id)arg1 string:(id)arg2 rate:(double)arg3;
-(id)embeddedPitchMarkupForVoice:(id)arg1 string:(id)arg2 pitch:(double)arg3;
-(id)embeddedVolumeMarkupForVoice:(id)arg1 string:(id)arg2 volume:(double)arg3;
-(BOOL)isSiriService;
-(BOOL)isNashvilleService;

@required
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(void)setServiceQueue:(id)arg1;
-(oneway void)startSpeechRequest:(id)arg1;
-(void)initializeSpeechServerInstance:(unsigned long long)arg1;
-(void)synthesizerInstanceDestroyed:(unsigned long long)arg1;
-(oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
-(oneway void)continueSpeechRequest:(id)arg1;
-(oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
-(oneway void)getVoicesForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(id)supportedIPAPhonemeLanguages;
-(id)speechMarkupStringForType:(long long)arg1 voice:(id)arg2 string:(id)arg3;
-(BOOL)isVoiceValid:(id)arg1;

@end

