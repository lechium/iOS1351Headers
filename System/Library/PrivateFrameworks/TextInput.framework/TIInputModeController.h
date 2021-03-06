/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface TIInputModeController : NSObject {

	NSArray* _supportedInputModeIdentifiers;
	NSArray* _supportedInputModeLanguageAndRegions;
	NSString* currentLocale;
	NSArray* preferredLanguages;
	NSArray* enabledInputModes;
	NSArray* defaultInputModes;
	NSArray* inputModesForTesting;

}

@property (nonatomic,copy) NSString * currentLocale; 
@property (nonatomic,copy) NSArray * preferredLanguages; 
@property (nonatomic,copy) NSArray * enabledInputModes; 
@property (nonatomic,copy) NSArray * defaultInputModes; 
@property (nonatomic,copy) NSArray * inputModesForTesting; 
@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * supportedInputModeLanguageAndRegions; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
+(id)sharedInputModeController;
+(id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(/*^block*/id)arg3 ;
-(NSString *)currentLocale;
-(NSArray *)preferredLanguages;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(NSArray *)enabledInputModeIdentifiers;
-(id)defaultEnabledInputModesForCurrentLocale;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(id)suggestedDictationLanguageForDeviceLanguage;
-(id)defaultDictationLanguagesForKeyboardLanguage:(id)arg1 ;
-(NSArray *)enabledInputModes;
-(BOOL)identifierIsValidSystemInputMode:(id)arg1 ;
-(NSArray *)defaultInputModes;
-(NSArray *)supportedInputModeIdentifiers;
-(void)setCurrentLocale:(NSString *)arg1 ;
-(NSArray *)inputModesForTesting;
-(NSArray *)supportedInputModeLanguageAndRegions;
-(void)setInputModesForTesting:(NSArray *)arg1 ;
-(void)setInputModeIdentifiersForTesting:(id)arg1 ;
@end

