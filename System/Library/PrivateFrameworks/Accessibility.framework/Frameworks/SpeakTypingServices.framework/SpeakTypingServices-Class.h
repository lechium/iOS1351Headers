/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/SpeakTypingServices.framework/SpeakTypingServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class AXUIClient, NSString;

@interface SpeakTypingServices : NSObject <AXUIClientDelegate> {

	AXUIClient* _speakTypingClient;

}

@property (nonatomic,retain) AXUIClient * speakTypingClient;              //@synthesize speakTypingClient=_speakTypingClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_clientIdentifier;
-(void)setLetterFeedbackEnabled:(BOOL)arg1 ;
-(void)setPhoneticFeedbackEnabled:(BOOL)arg1 ;
-(void)setWordFeedbackEnabled:(BOOL)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(BOOL)notifySpeakServicesToStopSpeaking;
-(BOOL)notifySpeakServicesForSpeechOutput:(id)arg1 volume:(double)arg2 speakingRate:(double)arg3 ;
-(void)initializeServerConnection;
-(AXUIClient *)speakTypingClient;
-(void)setSpeakTypingClient:(AXUIClient *)arg1 ;
-(void)clearLastSpokenString;
-(void)setVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 ;
-(id)lastUsedVoiceIdentifier;
-(id)lastSpokenString;
-(BOOL)verifyTestingConnection;
-(BOOL)notifySpeakServicesForAttributedSpeechOutput:(id)arg1 ;
-(BOOL)notifySpeakServicesForSpeakAutoCorrections:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackCharacter:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackWord:(id)arg1 forCurrentInputMode:(id)arg2 ;
-(BOOL)notifySpeakServicesToFeedbackQuickTypePrediction:(id)arg1 forCurrentInputMode:(id)arg2 ;
@end
