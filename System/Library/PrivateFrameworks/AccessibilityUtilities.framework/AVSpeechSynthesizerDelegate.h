/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:49 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3;

@end
