/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:56 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
@class CACLanguageModel, NSString;

@interface CACSpeechRecognizer : NSObject {

	BOOL _waitingForResponse;
	BOOL _avoidMessagingRXDuringCancel;
	BOOL _isListening;
	BOOL _requestCloseMatchResults;
	BOOL _spellingMode;
	BOOL _numberMode;
	RXRecognizerRef _recognizer;
	RXLanguageObjectRef _rxLanguageModel;
	CACLanguageModel* _languageModel;
	id _delegate;
	unsigned long long _recognizerFlags;
	BOOL _preventRecognizedTextFeedback;
	NSString* _name;

}

@property (assign) unsigned long long recognizerFlags;                        //@synthesize recognizerFlags=_recognizerFlags - In the implementation block
@property (assign,nonatomic) BOOL preventRecognizedTextFeedback;              //@synthesize preventRecognizedTextFeedback=_preventRecognizedTextFeedback - In the implementation block
@property (readonly) RXLanguageObjectRef rxLanguageModel;                     //@synthesize rxLanguageModel=_rxLanguageModel - In the implementation block
@property (retain) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign) BOOL requestCloseMatchResults; 
@property (assign) BOOL spellingMode; 
@property (assign) BOOL numberMode; 
-(void)dealloc;
-(NSString *)name;
-(void)setDelegate:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)startListening;
-(void)stopListening;
-(BOOL)isListening;
-(id)languageModel;
-(void)setLanguageModel:(id)arg1 ;
-(void)closeSpeechRecognizer;
-(BOOL)isSpeechRecognizerOpen;
-(void)openSpeechRecognizer;
-(void)setCommandInfo:(id)arg1 ;
-(BOOL)requestCloseMatchResults;
-(void)setRequestCloseMatchResults:(BOOL)arg1 ;
-(BOOL)spellingMode;
-(void)setSpellingMode:(BOOL)arg1 ;
-(BOOL)numberMode;
-(void)setNumberMode:(BOOL)arg1 ;
-(void)registerSpeechCorrectionFromText:(id)arg1 toText:(id)arg2 forIdentifier:(id)arg3 ;
-(unsigned long long)recognizerFlags;
-(void)setRecognizerFlags:(unsigned long long)arg1 ;
-(RXLanguageObjectRef)rxLanguageModel;
-(BOOL)preventRecognizedTextFeedback;
-(void)setPreventRecognizedTextFeedback:(BOOL)arg1 ;
@end

