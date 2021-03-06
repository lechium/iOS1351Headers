/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFPreferences : NSObject {

	BOOL _registeredForInternalPrefs;
	BOOL _registeredForLanguageCode;
	BOOL _registeredForOutputVoice;
	BOOL _registeredForNanoPrefs;
	NSObject*<OS_dispatch_queue> _navTokenQueue;
	BOOL _navTokenIsValid;
	int _navToken;
	long long _tlsSessionTicketFlushRequestPending;

}
+(id)sharedPreferences;
-(id)init;
-(void)dealloc;
-(void)synchronize;
-(id)languageCode;
-(BOOL)cloudSyncEnabled;
-(void)setDictationSLSLanguagesEnabled:(id)arg1 ;
-(id)dictationSLSLanguagesEnabled;
-(BOOL)dictationIsEnabled;
-(void)setLanguageCode:(id)arg1 ;
-(long long)siriDataSharingOptInStatus;
-(BOOL)shouldSuppressSiriDataSharingOptInAlert;
-(BOOL)suppressDictationOptIn;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(id)outputVoice;
-(BOOL)assistantIsEnabled;
-(void)setAssistantIsEnabled:(BOOL)arg1 ;
-(void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOutputVoice:(id)arg1 ;
-(BOOL)isCurrentLocaleNativelySupported;
-(BOOL)isLocaleIdentifierNativelySupported:(id)arg1 ;
-(id)bestSupportedLanguageCodeForLanguageCode:(id)arg1 ;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)getSpokenNotificationTemporarilyDisabledEndDateWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpokenNotificationTemporarilyDisabledUntil:(id)arg1 ;
-(void)clearSpokenNotificationTemporarilyDisabledStatus;
-(void)getSpokenNotificationTemporarilyDisabledEndDateForApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSpokenNotificationTemporarilyDisabledForApp:(id)arg1 until:(id)arg2 ;
-(void)getSpokenNotificationShouldAlwaysSpeakNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpokenNotificationShouldAlwaysSpeakNotifications:(BOOL)arg1 ;
-(void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(/*^block*/id)arg1 ;
-(void)setSpokenNotificationShouldSkipTriggerlessReplies:(BOOL)arg1 ;
-(void)setSiriDataSharingOptInAlertPresented:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForInteralPrefs;
-(void)_registerForLanguageCodeChangeNotifications;
-(id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(BOOL*)arg2 ;
-(id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(BOOL*)arg2 ;
-(id)_languagePreferencesForCurrentSystemConfiguration;
-(BOOL)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2 ;
-(void)_registerForOutputVoice;
-(unsigned long long)currentNavigationState;
-(void)setCurrentNavigationState:(unsigned long long)arg1 ;
-(void)_registerForNavStatusIfNeeded;
-(void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)fileLoggingIsEnabled;
-(id)configOverrides;
-(void)setConfigOverrides:(id)arg1 ;
-(void)_registerForNanoPrefsChangeNotifications;
-(id)_nanoPreferencesValueForKey:(id)arg1 ;
-(void)_setNanoPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(long long)handsFreeMode;
-(void)setHandsFreeMode:(long long)arg1 ;
-(BOOL)respectsSystemMute;
-(void)setRespectsSystemMute:(BOOL)arg1 ;
-(void)_preferencesDidChangeExternally;
-(void)_internalPreferencesDidChangeExternally;
-(void)_languageCodeDidChangeExternally;
-(void)_ouputVoiceDidChangeExternally;
-(void)_nanoPrefsDidChangeExternally;
-(void)synchronizeLogPreferencesDomain;
-(void)synchronizeAVVCPreferencesDomain;
-(BOOL)offlineDictationOverride;
-(void)setOfflineDictationOverride:(BOOL)arg1 ;
-(id)offlineDictationProfileOverridePath;
-(void)setOfflineDictationProfileOverridePath:(id)arg1 ;
-(BOOL)legacyLoggingEnabled;
-(void)_setAssistantIsEnabledLocal:(BOOL)arg1 ;
-(void)_setDictationIsEnabledLocal:(BOOL)arg1 ;
-(void)setDictationIsEnabled:(BOOL)arg1 ;
-(BOOL)forceOfflineRecognitionEnabled;
-(void)setForceOfflineRecognitionEnabled:(BOOL)arg1 ;
-(void)resetSessionLanguage;
-(BOOL)showServerOnUI;
-(void)setShowServerOnUI:(BOOL)arg1 ;
-(BOOL)debugButtonIsEnabled;
-(void)setDebugButtonIsEnabled:(BOOL)arg1 ;
-(BOOL)showsHoldToTalkIndicator;
-(void)setShowsHoldToTalkIndicator:(BOOL)arg1 ;
-(BOOL)suppressAssistantOptIn;
-(void)setSuppressAssistantOptIn:(BOOL)arg1 ;
-(void)setSuppressDictationOptIn:(BOOL)arg1 ;
-(void)_setSuppressDictationOptInLocal:(BOOL)arg1 ;
-(BOOL)alwaysAllowVoiceActivation;
-(void)setAlwaysAllowVoiceActivation:(BOOL)arg1 ;
-(BOOL)crownActivationEnabled;
-(void)setCrownActivationEnabled:(BOOL)arg1 ;
-(BOOL)listenAfterSpeakingDisabled;
-(void)setListenAfterSpeakingDisabled:(BOOL)arg1 ;
-(void)setCloudSyncEnabled:(BOOL)arg1 ;
-(id)cloudSyncEnabledModificationDate;
-(void)setInternalUserClassification:(unsigned long long)arg1 ;
-(unsigned long long)internalUserClassification;
-(void)getSpokenNotificationTemporarilyDisabledStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)getSpokenNotificationTemporarilyDisabledForApp:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSpokenNotificationsProxCardSeen;
-(void)setSpokenNotificationSkipTriggerlessReplyConfirmation:(BOOL)arg1 ;
-(BOOL)spokenNotificationSkipTriggerlessReplyConfirmation;
-(void)setSpokenNotificationsEnabledForNano:(BOOL)arg1 ;
-(BOOL)spokenNotificationsEnabledForNano;
-(BOOL)designModeIsEnabled;
-(void)setDesignModeEnabled:(BOOL)arg1 ;
-(id)supplementalLanguageDictionaryForProduct:(id)arg1 ;
-(id)supplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 ;
-(id)supplementalLanguages;
-(id)supplementalLanguagesModificationDate;
-(id)horsemanSupplementalLanguageDictionary;
-(id)activitySummaryReportDate;
-(void)setActivitySummaryReportDateToNow;
-(void)setIgnoreServerManualEndpointingThreshold:(BOOL)arg1 ;
-(void)setManualEndpointingThreshold:(id)arg1 ;
-(BOOL)streamingDictationEnabled;
-(void)setStreamingDictationEnabled:(BOOL)arg1 ;
-(BOOL)companionConnectionsOverBLEEnabled;
-(void)setCompanionConnectionsOverBLEEnabled:(BOOL)arg1 ;
-(BOOL)myriadCoordinationEnabled;
-(void)setMyriadCoordinationEnabled:(BOOL)arg1 ;
-(BOOL)myriadDuckingEnabled;
-(void)setMyriadDuckingEnabled:(BOOL)arg1 ;
-(id)myriadDeviceGroup;
-(void)setMyriadDeviceGroup:(id)arg1 ;
-(BOOL)myriadServerHasProvisioned;
-(void)setMyriadServerHasProvisioned:(BOOL)arg1 ;
-(BOOL)myriadServerProvisioning;
-(void)setMyriadServerProvisioning:(BOOL)arg1 ;
-(unsigned char)myriadDeviceClass;
-(void)setMyriadDeviceClass:(unsigned char)arg1 ;
-(int)myriadConstantGoodness;
-(void)setMyriadConstantGoodness:(int)arg1 ;
-(float)myriadDeviceAdjust;
-(void)setMyriadDeviceAdjust:(float)arg1 ;
-(double)myriadDeviceDelay;
-(void)setMyriadDeviceDelay:(double)arg1 ;
-(double)myriadDeviceSlowdown;
-(void)setMyriadDeviceSlowdown:(double)arg1 ;
-(double)myriadDeviceTrumpDelay;
-(void)setMyriadDeviceTrumpDelay:(double)arg1 ;
-(id)myriadLastWin;
-(void)setMyriadLastWin;
-(double)opportuneSpeakingPauseInterval;
-(void)setOpportuneSpeakingPauseInterval:(double)arg1 ;
-(double)opportuneSpeakingTimeoutInterval;
-(void)setOpportuneSpeakingTimeoutInterval:(double)arg1 ;
-(BOOL)limitedAudioLoggingEnabled;
-(void)setLimitedAudioLoggingEnabled:(BOOL)arg1 ;
-(void)setDatabaseSyncEnabled:(BOOL)arg1 ;
-(BOOL)databaseSyncEnabled;
-(double)autoDismissalIdleTimeout;
-(void)setAutoDismissalIdleTimeout:(double)arg1 ;
-(double)autoDismissalExtendedIdleTimeout;
-(void)setAutoDismissalExtendedIdleTimeout:(double)arg1 ;
-(double)autoDismissalMaxAttentionSamplingTime;
-(void)setAutoDismissalMaxAttentionSamplingTime:(double)arg1 ;
-(BOOL)siriDebugUIEnabled;
-(void)setSiriDebugUIEnabled:(BOOL)arg1 ;
-(BOOL)siriSpeakerGradingDebugUIEnabled;
-(void)setSiriSpeakerGradingDebugUIEnabled:(BOOL)arg1 ;
-(BOOL)enableDragAndDrop;
-(void)setEnableDragAndDrop:(BOOL)arg1 ;
-(BOOL)enableNonFullScreenAppearance;
-(void)setEnableNonFullScreenAppearance:(BOOL)arg1 ;
-(BOOL)useSASAutoSelectionFeature;
-(void)setUseSASAutoSelectionFeature:(BOOL)arg1 ;
-(BOOL)applySASToFirstPartyDomains;
-(void)setApplySASToFirstPartyDomains:(BOOL)arg1 ;
-(BOOL)disableAssistantWhilePasscodeLocked;
-(void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1 ;
-(BOOL)assistantLanguageForceRTL;
-(void)setAssistantLanguageForceRTL:(BOOL)arg1 ;
-(id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(BOOL*)arg2 ;
-(void)synchronizeVoiceServicesLanguageCode;
-(id)inProgressOutputVoice;
-(void)setInProgressOutputVoice:(id)arg1 ;
-(void)setLanguageCode:(id)arg1 outputVoice:(id)arg2 ;
-(long long)useDeviceSpeakerForTTS;
-(void)setUseDeviceSpeakerForTTS:(long long)arg1 ;
-(void)setLanguageDetectorEnabled:(BOOL)arg1 ;
-(BOOL)isLanguageDetectorEnabled;
-(BOOL)isLanguageDetectorEnabledByServer;
-(id)dictationRequestSamplingRateMap;
-(id)valueForSessionContextPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forSessionContextKey:(id)arg2 ;
-(void)setTLSSessionTicketsFlushPending:(BOOL)arg1 ;
-(BOOL)tlsSessionTicketsFlushPending;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)shouldLogForQA;
-(void)setCardLoggingEnabled:(BOOL)arg1 ;
-(BOOL)cardLoggingEnabled;
-(void)setCommandLoggingEnabled:(BOOL)arg1 ;
-(BOOL)commandLoggingEnabled;
-(void)setNetworkLoggingEnabled:(BOOL)arg1 ;
-(BOOL)networkLoggingEnabled;
-(void)setAVVCLoggingEnabled:(BOOL)arg1 ;
-(BOOL)avvcLoggingEnabled;
-(BOOL)autoDismissal2018Enabled;
-(void)setAutoDismissal2018Enabled:(BOOL)arg1 ;
-(BOOL)dismissWhenFaceAttentionIsLostEnabled;
-(void)setDismissWhenFaceAttentionIsLostEnabled:(BOOL)arg1 ;
-(BOOL)dismissWhenDeviceIsLoweredEnabled;
-(void)setDismissWhenDeviceIsLoweredEnabled:(BOOL)arg1 ;
-(double)handsOnIdleTimeInterval;
-(void)setHandsOnIdleTimeInterval:(double)arg1 ;
-(double)handsOffIdleTimeInterval;
-(void)setHandsOffIdleTimeInterval:(double)arg1 ;
-(void)setConfigOverrideWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeConfigOverrideForKey:(id)arg1 ;
-(BOOL)nanoAssistantEnabled;
-(void)setNanoAssistantEnabled:(BOOL)arg1 ;
-(BOOL)nanoDictationEnabled;
-(void)setNanoDictationEnabled:(BOOL)arg1 ;
-(BOOL)nanoPhraseSpotterEnabled;
-(void)setNanoPhraseSpotterEnabled:(BOOL)arg1 ;
-(BOOL)nanoRaiseToSpeakEnabled;
-(void)setNanoRaiseToSpeakEnabled:(BOOL)arg1 ;
-(long long)nanoUseDeviceSpeakerForTTS;
-(void)setNanoUseDeviceSpeakerForTTS:(long long)arg1 ;
-(float)nanoTTSSpeakerVolume;
-(void)setNanoTTSSpeakerVolume:(float)arg1 ;
-(id)nanoLanguageCode;
-(void)setNanoLanguageCode:(id)arg1 ;
-(id)nanoOutputVoice;
-(void)setNanoOutputVoice:(id)arg1 ;
-(BOOL)nanoCrownActivationEnabled;
-(void)setNanoCrownActivationEnabled:(BOOL)arg1 ;
-(long long)nanoSiriDataSharingOptInStatus;
-(void)setNanoSiriDataSharingOptInStatus:(long long)arg1 ;
@end

