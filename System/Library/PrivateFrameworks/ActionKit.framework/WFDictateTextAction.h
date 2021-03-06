/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:33 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol WFDictateTextActionRunningDelegate;
@class AFDictationConnection, NSString;

@interface WFDictateTextAction : WFAction <AFDictationDelegate> {

	id<WFDictateTextActionRunningDelegate> _delegate;
	AFDictationConnection* _dictationConnection;
	NSString* _latestTranscription;

}

@property (nonatomic,retain) AFDictationConnection * dictationConnection;                         //@synthesize dictationConnection=_dictationConnection - In the implementation block
@property (nonatomic,copy) NSString * latestTranscription;                                        //@synthesize latestTranscription=_latestTranscription - In the implementation block
@property (assign,nonatomic,__weak) id<WFDictateTextActionRunningDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFDictateTextActionRunningDelegate>)delegate;
-(void)setDelegate:(id<WFDictateTextActionRunningDelegate>)arg1 ;
-(void)cancel;
-(AFDictationConnection *)dictationConnection;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2 ;
-(void)stopListening;
-(id)recognitionError;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)runWithSiriUserInterface:(id)arg1 input:(id)arg2 ;
-(void)setDictationConnection:(AFDictationConnection *)arg1 ;
-(NSString *)latestTranscription;
-(void)setLatestTranscription:(NSString *)arg1 ;
@end

